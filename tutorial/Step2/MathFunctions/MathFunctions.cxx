#include "MathFunctions.h"

// TODO 11: include cmath
// #include <cmath>

// TODO 10: Wrap the mysqrt include in a precompiled ifdef based on USE_MYMATH
#if(USE_MYMATH)
  #include "mysqrt.h"
#else
  #include <cmath>
#endif

namespace mathfunctions {
double sqrt(double x)
{
  // TODO 9: If USE_MYMATH is defined, use detail::mysqrt.
  #if(USE_MYMATH)
    return detail::mysqrt(x);
  // Otherwise, use std::sqrt.
  #else
    return std::sqrt(x);
  #endif
  // return detail::mysqrt(x);
}
}
