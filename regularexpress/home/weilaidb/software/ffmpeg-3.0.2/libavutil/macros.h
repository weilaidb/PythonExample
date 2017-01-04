#define AVUTIL_MACROS_H
#define AV_STRINGIFY(s)         AV_TOSTRING(s)
#define AV_TOSTRING(s) #s
#define AV_GLUE(a, b) a ## b
#define AV_JOIN(a, b) AV_GLUE(a, b)
#define AV_PRAGMA(s) _Pragma(#s)
#define FFALIGN(x, a) (((x)+(a)-1)&~((a)-1))
