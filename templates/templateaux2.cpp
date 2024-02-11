#define BaseType interval
#include "vspode.h"
#include "<* ToUpperCase@#model[[1,2]] *>.h"

void  VSPODE::odefunc(interval *yp, const interval *y, const interval *theta) 
{
  func(yp, y, theta, rpar) ;
}

void  VSPODE::odefunc(TFinterval *yp, const TFinterval *y, 
		     const interval *theta) 
{
  func(yp, y, theta, rpar) ;
}

void  VSPODE::odefunc(Tinterval *yp, const Tinterval *y, 
		     const interval *theta)  
{
  func(yp, y, theta, rpar) ;
}
