#define AVUTIL_MACROS_H
AV_STRINGIFY         AV_TOSTRING(s)
AV_TOSTRING #s
AV_GLUE a ## b
AV_JOIN AV_GLUE(a, b)
AV_PRAGMA _Pragma(#s)
FFALIGN (((x)+(a)-1)&~((a)-1))
