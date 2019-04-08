/* config.h.  Generated from config.h.in by configure.  */
#define HAVE_TGAMMA 1
/* #undef HAVE_LGAMMA */
#define HAVE_COMPLEX 1
/* #undef HAVE__COMPLEX__ */
/* #undef NOCOMPLEX */
/* #undef HAVE_GRIDNODES_H */
#if !defined(_MSC_VER)
#if defined(HAVE_COMPLEX)
 #include <complex.h>
 #define zdouble _Complex double
#elif defined(HAVE__COMPLEX__)
 #include <complex.h>
 #define zdouble __complex__ double
#elif defined(NOCOMPLEX)
 #include "c99-min/complex.h"
 #define zdouble _Complex double
#endif
#else
#include <complex>
#define zdouble std::complex<double>
#define creal(z) std::real<double>(z)
#define cimag(z) std::imag<double>(z)
#define carg(z)  std::arg(z)
#define I        std::complex<double>(0.0, 1.0)
#define cabs(z)  std::abs(z)
#define clog(z)  std::log(z)
#define cexp(z)  std::exp(z)
#endif