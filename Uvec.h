#ifndef UNSALTED_VEC_H
#define UNSALTED_VEC_H

#include "Utypes.h"
#include "Udefine.h"
#include "Umath.h"

typedef struct _i8_vec2 {
  i8 i;
  i8 j;
} i8_vec2;

typedef struct _i8_vec3 {
  union {
    i8_vec2 vec2;
    struct {
      i8 i;
      i8 j;
    };
  };
  i8 k;
} i8_vec3;

typedef struct _i8_vec4 {
  union {
    i8_vec3 vec3;
    struct {
      i8 i;
      i8 j;
      i8 k;
    };
  };
  i8 l;
} i8_vec4;

typedef struct _i16_vec2 {
  i16 i;
  i16 j;
} i16_vec2;

typedef struct _i16_vec3 {
  union {
    i16_vec2 vec2;
    struct {
      i16 i;
      i16 j;
    };
  };
  i16 k;
} i16_vec3;

typedef struct _i16_vec4 {
  union {
    i16_vec3 vec3;
    struct {
      i16 i;
      i16 j;
      i16 k;
    };
  };
  i16 l;
} i16_vec4;


typedef struct _i32_vec2 {
  i32 i;
  i32 j;
} i32_vec2;

typedef struct _i32_vec3 {
  union {
    i32_vec2 vec2;
    struct {
      i32 i;
      i32 j;
    };
  };
  i32 k;
} i32_vec3;

typedef struct _i32_vec4 {
  union {
    i32_vec3 vec3;
    struct {
      i32 i;
      i32 j;
      i32 k;
    };
  };
  i32 l;
} i32_vec4;


typedef struct _i64_vec2 {
  i64 i;
  i64 j;
} i64_vec2;

typedef struct _i64_vec3 {
  union {
    i64_vec2 vec2;
    struct {
      i64 i;
      i64 j;
    };
  };
  i64 k;
} i64_vec3;

typedef struct _i64_vec4 {
  union {
    i64_vec3 vec3;
    struct {
      i64 i;
      i64 j;
      i64 k;
    };
  };
  i64 l;
} i64_vec4;

typedef struct _u8_vec2 {
  u8 i;
  u8 j;
} u8_vec2;

typedef struct _u8_vec3 {
  union {
    u8_vec2 vec2;
    struct {
      u8 i;
      u8 j;
    };
  };
  u8 k;
} u8_vec3;

typedef struct _u8_vec4 {
  union {
    u8_vec3 vec3;
    struct {
      u8 i;
      u8 j;
      u8 k;
    };
  };
  u8 l;
} u8_vec4;

typedef struct _u16_vec2 {
  u16 i;
  u16 j;
} u16_vec2;

typedef struct _u16_vec3 {
  union {
    u16_vec2 vec2;
    struct {
      u16 i;
      u16 j;
    };
  };
  u16 k;
} u16_vec3;

typedef struct _u16_vec4 {
  union {
    u16_vec3 vec3;
    struct {
      u16 i;
      u16 j;
      u16 k;
    };
  };
  u16 l;
} u16_vec4;


typedef struct _u32_vec2 {
  u32 i;
  u32 j;
} u32_vec2;

typedef struct _u32_vec3 {
  union {
    u32_vec2 vec2;
    struct {
      u32 i;
      u32 j;
    };
  };
  u32 k;
} u32_vec3;

typedef struct _u32_vec4 {
  union {
    u32_vec3 vec3;
    struct {
      u32 i;
      u32 j;
      u32 k;
    };
  };
  u32 l;
} u32_vec4;

typedef struct _u64_vec2 {
  u64 i;
  u64 j;
} u64_vec2;

typedef struct _u64_vec3 {
  union {
    u64_vec2 vec2;
    struct {
      u64 i;
      u64 j;
    };
  };
  u64 k;
} u64_vec3;

typedef struct _u64_vec4 {
  union {
    u64_vec3 vec3;
    struct {
      u64 i;
      u64 j;
      u64 k;
    };
  };
  u64 l;
} u64_vec4;

typedef struct _f32_vec2 {
  f32 i;
  f32 j;
} f32_vec2;

typedef struct _f32_vec3 {
  union {
    f32_vec2 vec2;
    struct {
      f32 i;
      f32 j;
    };
  };
  f32 k;
} f32_vec3;

typedef struct _f32_vec4 {
  union {
    f32_vec3 vec3;
    struct {
      f32 i;
      f32 j;
      f32 k;
    };
  };
  f32 l;
} f32_vec4;

typedef struct _f64_vec2 {
  f64 i;
  f64 j;
} f64_vec2;

typedef struct _f64_vec3 {
  union {
    f64_vec2 vec2;
    struct {
      f64 i;
      f64 j;
    };
  };
  f64 k;
} f64_vec3;

typedef struct _f64_vec4 {
  union {
    f64_vec3 vec3;
    struct {
      f64 i;
      f64 j;
      f64 k;
    };
  };
  f64 l;
} f64_vec4;

#define MAGN_VEC2(vec_a) \
  (u_sqrt((double) ((vec_a).i * (vec_a).i + (vec_a).j * (vec_a).j)))
#define MAGN_VEC3(vec_a) \
  (u_sqrt((double) ((vec_a).i * (vec_a).i + (vec_a).j * (vec_a).j + (vec_a).k * (vec_a).k))))
#define MAGN_VEC4(vec_a) \
  (u_sqrt((double) ((vec_a).i * (vec_a).i + (vec_a).j * (vec_a).j + (vec_a).k * (vec_a).k + (vec_a).l * (vec_a).l))))

#define DOT_VEC2(vec_a, vec_b) \
  ((vec_a).i * (vec_b).i + (vec_a).j * (vec_b).j)

#define DOT_VEC3(vec_a, vec_b) \
  (DOT_VEC2((vec_a).vec2, (vec_b).vec2) + (vec_a).k * (vec_b).k)

#define DOT_VEC4(vec_a, vec_b) \
  (DOT_VEC3((vec_a).vec3, (vec_b).vec3) + (vec_a).l * (vec_b).l)

#define ADD_VEC2(vec_a, vec_b, vec_t) \
  ((vec_t) { ((vec_a).i + (vec_b).i), ((vec_a).j + (vec_b).j) })

#define ADD_VEC3(vec_a, vec_b, vec_t) \
  ((vec_t) { ((vec_a).i + (vec_b).i), ((vec_a).j + (vec_b).j), ((vec_a).k + (vec_b).k)  })

#define ADD_VEC4(vec_a, vec_b, vec_t) \
  ((vec_t) { ((vec_a).i + (vec_b).i), ((vec_a).j + (vec_b).j), ((vec_a).k + (vec_b).k), ((vec_a).l + (vec_b).l)  })

#define SUB_VEC2(vec_a, vec_b, vec_t) \
  ((vec_t) { ((vec_a).i - (vec_b).i), ((vec_a).j - (vec_b).j) })

#define SUB_VEC3(vec_a, vec_b, vec_t) \
  ((vec_t) { ((vec_a).i - (vec_b).i), ((vec_a).j - (vec_b).j), ((vec_a).k - (vec_b).k)  })

#define SUB_VEC4(vec_a, vec_b, vec_t) \
  ((vec_t) { ((vec_a).i - (vec_b).i), ((vec_a).j - (vec_b).j), ((vec_a).k - (vec_b).k), ((vec_a).l - (vec_b).l)  })

UINLINE i8_vec3 cross_i8_vec3(i8_vec3 vec_a, i8_vec3 vec_b){
   return   (i8_vec3) {
    ((vec_a).j * (vec_b).k - (vec_a).k * (vec_b).j), 
    ((vec_a).k * (vec_b).i - (vec_a).i * (vec_b).k), 
    ((vec_a).i * (vec_b).j - (vec_a).j * (vec_b).i) 
  } 
}

UINLINE i16_vec3 cross_i16_vec3(i16_vec3 vec_a, i16_vec3 vec_b){
   return   (i16_vec3) {
    ((vec_a).j * (vec_b).k - (vec_a).k * (vec_b).j), 
    ((vec_a).k * (vec_b).i - (vec_a).i * (vec_b).k), 
    ((vec_a).i * (vec_b).j - (vec_a).j * (vec_b).i) 
  } 
}

UINLINE i32_vec3 cross_i32_vec3(i32_vec3 vec_a, i32_vec3 vec_b){
   return   (i32_vec3) {
    ((vec_a).j * (vec_b).k - (vec_a).k * (vec_b).j), 
    ((vec_a).k * (vec_b).i - (vec_a).i * (vec_b).k), 
    ((vec_a).i * (vec_b).j - (vec_a).j * (vec_b).i) 
  } 
}

UINLINE i64_vec3 cross_i64_vec3(i64_vec3 vec_a, i64_vec3 vec_b){
   return   (i64_vec3) {
    ((vec_a).j * (vec_b).k - (vec_a).k * (vec_b).j), 
    ((vec_a).k * (vec_b).i - (vec_a).i * (vec_b).k), 
    ((vec_a).i * (vec_b).j - (vec_a).j * (vec_b).i) 
  } 
}

UINLINE f32_vec3 cross_f32_vec3(f32_vec3 vec_a, f32_vec3 vec_b){
   return   (f32_vec3) {
    ((vec_a).j * (vec_b).k - (vec_a).k * (vec_b).j), 
    ((vec_a).k * (vec_b).i - (vec_a).i * (vec_b).k), 
    ((vec_a).i * (vec_b).j - (vec_a).j * (vec_b).i) 
  } 
}

UINLINE f64_vec3 cross_f64_vec3(f64_vec3 vec_a, f64_vec3 vec_b){
   return   (f64_vec3) {
    ((vec_a).j * (vec_b).k - (vec_a).k * (vec_b).j), 
    ((vec_a).k * (vec_b).i - (vec_a).i * (vec_b).k), 
    ((vec_a).i * (vec_b).j - (vec_a).j * (vec_b).i) 
  } 
}
#endif //UNSALTED_VEC_H


