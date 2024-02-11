#define BaseType Taylor
#include "vspode.h"
#include "<* ToUpperCase@#model[[1,2]] *>.h"

// KEEP THE FOLLOWING ROUTINE INTACT FOR YOUR APPLICATION
void VSPODE::odefunc(TTaylor *yp, const TTaylor *y, const STaylor *theta)
{
  func(yp, y, theta, rpar) ;
}

