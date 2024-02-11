#include "Taylor.h"
#include "vspode.h"   
using namespace std; 
int main(int argc, char *argv[])
{
int n = `n` ; 
int m = <* Length[#Z] *> ; 
int p = `p` ; 
int r = `r` ; 
int order = `order` ; 
const static double PI = 3.14159265358979323846 ;

interval::interval_init() ;
Taylor::TaylorPr.LoadParameter(m, r) ; 

VSPODE *vspode = new VSPODE(m, n, p, order, 1e-12, 1e-12) ;
vspode->ConstStep(`constantStep`, `h`) ;
vspode->Verbose(`Verbose`) ; 
// vspode->Method(`Method`) ; 

interval *Z = new interval [m] ;

<* Column@Table[
"Z["~~ToString[i]~~"] = interval("~~ToString[#Z[[i + 1,1]], CForm]~~","~~ToString[#Z[[i + 1,2]], CForm]~~");"
, {i, 0, Length[#Z] - 1}]
*>

<* Column@Table[
"vspode->rpar["~~ToString[i]~~"] = "~~ToString[#rpar[[i + 1]],CForm]~~";"
, {i, 0, Length[#rpar] - 1}]
*>
 
interval *Y0 = new interval [n] ;

<* Column@Table[
  "Y0["~~ToString[i]~~"] = Z["~~ToString[i]~~"];"
, {i, 0, #m - #p - 1}]
*>

<* J=1;Column@Table[
    "Y0["~~ToString[i]~~"] = "~~ToString[#Y0[[J++]], CForm]~~";"
, {i, #m - #p, #n-1}]
*>
interval *Y  = new interval [n] ;

 
double t0 = `t0`, tend = `tend` ;
int N = `N`;

double tstep = (tend - t0)/N;
double t;
int info;

cout << "{" ;
for (int i=1; i<=N; i++){
  t = t0 + tstep * i;
  if (i == 1){
    info = vspode->Integrate(t0,t,Y0,Z,Y);}
  else{ 
    info = vspode->IntegrateTo(t,Z,Y);}
  if (info > 0){
    if ( i > 1) cout <<",";
    for(int J=0; J<n;J++) {
      if (J > 0) cout << "," ;
      cout << "{" << t <<" , "<< inf(Y[J]) <<"," << sup(Y[J]) << "}";
    }
  }
}
cout << "}";

delete []Y ;
delete []Y0 ;
delete []Z ;
delete vspode ;
}
