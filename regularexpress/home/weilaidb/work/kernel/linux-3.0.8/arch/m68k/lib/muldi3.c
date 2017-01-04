#if defined(CONFIG_M68000) || defined(CONFIG_COLDFIRE)
#define SI_TYPE_SIZE 32
#define __BITS4 (SI_TYPE_SIZE / 4)
#define __ll_B (1L << (SI_TYPE_SIZE / 2))
#define __ll_lowpart(t) ((USItype) (t) % __ll_B)
#define __ll_highpart(t) ((USItype) (t) / __ll_B)
#define umul_ppmm(w1, w0, u, v)						\
do  while (0)
#define umul_ppmm(w1, w0, u, v) \
__asm__ ("mulu%.l %3,%1:%0"						\
: "=d" ((USItype)(w0)),					\
"=d" ((USItype)(w1))					\
: "%0" ((USItype)(u)),					\
"dmi" ((USItype)(v)))
#define __umulsidi3(u, v) \
()
typedef 	 int SItype	__attribute__ ((mode (SI)));
typedef unsigned int USItype	__attribute__ ((mode (SI)));
typedef		 int DItype	__attribute__ ((mode (DI)));
typedef int word_type __attribute__ ((mode (__word__)));
struct DIstruct ;
typedef union
DIunion;
DItype
__muldi3 (DItype u, DItype v)
