#ifndef UNSALTED_ENGINE_TYPES_H
#define UNSALTED_ENGINE_TYPES_H

#include <stdint.h>

typedef uint8_t u8_t;
typedef uint16_t u16_t;
typedef uint32_t u32_t;
typedef uint64_t u64_t;

typedef int8_t i8_t ;
typedef int16_t i16_t;   
typedef int32_t i32_t ;  
typedef int64_t i64_t  ; 

typedef float f32   ;
typedef double f64   ;

#ifndef __STD_NO_THREADS__

#include <stdatomic.h>

typedef atomic_uint_fast8_t u8  ;
typedef atomic_uint_fast16_t u16 ;
typedef atomic_uint_fast32_t u32 ;
typedef atomic_uint_fast64_t u64    ;

typedef atomic_int_fast8_t i8  ;
typedef atomic_int_fast16_t i16 ;
typedef atomic_int_fast32_t i32 ;
typedef atomic_int_fast64_t i64 ;

#else

typedef u8_t u8 ;
typedef u16_t u16 ;
typedef u32_t u32 ;
typedef u64_t u64 ;

typedef i8_t i8  ;
typedef i16_t i16 ;
typedef i32_t i32  ;
typedef i64_t i64 ;

#endif //__STD_NO_THREADS__

typedef u8 b8 ;

#endif //UNSALTED_ENGINE_TYPES_H
