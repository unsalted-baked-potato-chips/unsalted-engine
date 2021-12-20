#ifndef ENGINE_TYPES_H
#define ENGINE_TYPES_H

#include <stdint.h>

typedef u8    uint8_t
typedef u16   uint16_t
typedef u32   uint32_t
typedef u64   uint64_t

typedef i8    int8_t
typedef i16   int16_t
typedef i32   int32_t
typedef i64   int64_t

typedef f32   float
typedef f64   double

#ifdef __STD_NO_THREADS__

#include <stdatomic.h>

typedef u8_f  atomic_uint_fast8_t
typedef u16_f atomic_uint_fast16_t
typedef u32_f atomic_uint_fast32_t
typedef u64_f atomic_uint_fast64_t

typedef i8_f  atomic_int_fast8_t
typedef i16_f atomic_int_fast16_t
typedef i32_f atomic_int_fast32_t
typedef i64_f atomic_int_fast64_t

#else

typedef u8_f  u8
typedef u16_f u16
typedef u32_f u32
typedef u64_f u64

typedef i8_f  i8
typedef i16_f i16
typedef i32_f i32
typedef i64_f i64

#endif //__STD_NO_THREADS__

tyepdef b8 u8_f

#endif //ENGINE_TYPES_H
