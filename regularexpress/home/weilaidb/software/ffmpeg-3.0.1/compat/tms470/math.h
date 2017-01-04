#define COMPAT_TMS470_MATH_H
#undef INFINITY
#undef NAN
#define INFINITY (*(const float*)((const unsigned [])))
#define NAN      (*(const float*)((const unsigned [])))
