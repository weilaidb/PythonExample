#define __GCC_OPTIMIZATIONS_H_INCLUDED
#define likely(x)       __builtin_expect((x),1)
#define unlikely(x)     __builtin_expect((x),0)
#define likely(x)       (x)
#define unlikely(x)     (x)
