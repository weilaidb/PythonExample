#define AVCODEC_ALPHA_ASM_H
AV_GCC_VERSION_AT_LEAST
likely      __builtin_expect((x) != 0, 1)
unlikely    __builtin_expect((x) != 0, 0)
likely      (x)
unlikely    (x)
#define AMASK_BWX (1 << 0)
#define AMASK_FIX (1 << 1)
#define AMASK_CIX (1 << 2)
#define AMASK_MVI (1 << 8)
BYTE_VEC
WORD_VEC
sextw ((int16_t) (x))
ldq                                                  \
(((const union  *) (p))->__l)
ldl                                                  \
(((const union  *) (p))->__l)
stq                                                       \
do  while (0)
stl                                                       \
do  while (0)
__attribute__);
ldq_u        (*(const uint64_t *) (((uint64_t) (p)) & ~7ul))
uldq         (((const struct unaligned_long *) (a))->l)
AV_GCC_VERSION_AT_LEAST
prefetch     __builtin_prefetch((p), 0, 1)
prefetch_en  __builtin_prefetch((p), 0, 0)
prefetch_m   __builtin_prefetch((p), 1, 1)
prefetch_men __builtin_prefetch((p), 1, 0)
#define cmpbge          __builtin_alpha_cmpbge
extql     __builtin_alpha_extql(a, (uint64_t) (b))
extwl     __builtin_alpha_extwl(a, (uint64_t) (b))
extqh     __builtin_alpha_extqh(a, (uint64_t) (b))
#define zap             __builtin_alpha_zap
#define zapnot          __builtin_alpha_zapnot
#define amask           __builtin_alpha_amask
#define implver         __builtin_alpha_implver
#define rpcc            __builtin_alpha_rpcc
volatile
volatile
volatile
volatile
cmpbge ()
extql  ()
extwl  ()
extqh  ()
zap    ()
zapnot ()
amask     ()
implver    ()
rpcc       ()
volatile
defined
#define minub8  __builtin_alpha_minub8
#define minsb8  __builtin_alpha_minsb8
#define minuw4  __builtin_alpha_minuw4
#define minsw4  __builtin_alpha_minsw4
#define maxub8  __builtin_alpha_maxub8
#define maxsb8  __builtin_alpha_maxsb8
#define maxuw4  __builtin_alpha_maxuw4
#define maxsw4  __builtin_alpha_maxsw4
#define perr    __builtin_alpha_perr
#define pklb    __builtin_alpha_pklb
#define pkwb    __builtin_alpha_pkwb
#define unpkbl  __builtin_alpha_unpkbl
#define unpkbw  __builtin_alpha_unpkbw
minub8 ()
minsb8 ()
minuw4 ()
minsw4 ()
maxub8 ()
maxsb8 ()
maxuw4 ()
maxsw4 ()
perr   ()
pklb      ()
pkwb      ()
unpkbl    ()
unpkbw    ()
defined
ldq (*(const uint64_t *) (p))
ldl (*(const int32_t *)  (p))
stq do  while (0)
stl do  while (0)
ldq_u     asm (, a)
uldq      (*(const __unaligned uint64_t *) (a))
cmpbge asm (, a, b)
extql  asm (, a, b)
extwl  asm (, a, b)
extqh  asm (, a, b)
zap    asm (, a, b)
zapnot asm (, a, b)
amask     asm (, a)
implver    asm ()
rpcc       asm ()
minub8 asm (, a, b)
minsb8 asm (, a, b)
minuw4 asm (, a, b)
minsw4 asm (, a, b)
maxub8 asm (, a, b)
maxsb8 asm (, a, b)
maxuw4 asm (, a, b)
maxsw4 asm (, a, b)
perr   asm (, a, b)
pklb      asm (, a)
pkwb      asm (, a)
unpkbl    asm (, a)
unpkbw    asm (, a)
wh64      asm (, a)
#error
