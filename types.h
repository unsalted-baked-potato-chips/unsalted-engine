#ifndef UNSALTED_ENGINE_TYPES_H
#define UNSALTED_ENGINE_TYPES_H

#include <stdint.h>

typedef u8_t    uint8_t
typedef u16_t   uint16_t
typedef u32_t   uint32_t
typedef u64_t   uint64_t

typedef i8_t    int8_t
typedef i16_t   int16_t
typedef i32_t   int32_t
typedef i64_t   int64_t

typedef f32   float
typedef f64   double

#ifndef __STD_NO_THREADS__

#include <stdatomic.h>

typedef u8  atomic_uint_fast8_t
typedef u16 atomic_uint_fast16_t
typedef u32 atomic_uint_fast32_t
typedef u64 atomic_uint_fast64_t

typedef i8  atomic_int_fast8_t
typedef i16 atomic_int_fast16_t
typedef i32 atomic_int_fast32_t
typedef i64 atomic_int_fast64_t

#else

typedef u8 u8_t
typedef u16 u16_t
typedef u32 u32_t
typedef u64 u64_t

typedef i8  i8_t
typedef i16 i16_t
typedef i32 i32_t
typedef i64 i64_t

#endif //__STD_NO_THREADS__

typedef b8 u8

#endif //UNSALTED_ENGINE_TYPES_H
