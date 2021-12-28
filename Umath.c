#include "Umath.h"

#if defined(__i386__) || defined(__x86_64__) 
#include <immintrin.h>
#endif
#include <math.h>

f64 inv_sqrt64(f64 a){
  return 1.0/sqrt(a);
}

f32 inv_sqrt32(f32 a){
#if defined(__i386__) || defined(__x86_64__)
    __m128 temp = _mm_set_ss(f);
    temp = _mm_rsqrt_ss(temp);
    return _mm_cvtss_f32(temp);
#else
  return 1.0/sqrtf(a);
#endif
}
