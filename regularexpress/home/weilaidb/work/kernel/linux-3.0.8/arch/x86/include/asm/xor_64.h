#define _ASM_X86_XOR_64_H
typedef struct  __attribute__((aligned(16))) xmm_store_t;
#define XMMS_SAVE				\
do  while (0)
#define XMMS_RESTORE				\
do  while (0)
#define OFFS(x)		"16*("#x")"
#define PF_OFFS(x)	"256+16*("#x")"
#define	PF0(x)		"	prefetchnta "PF_OFFS(x)"(%[p1])		;\n"
#define LD(x, y)	"       movaps   "OFFS(x)"(%[p1]), %%xmm"#y"	;\n"
#define ST(x, y)	"       movaps %%xmm"#y",   "OFFS(x)"(%[p1])	;\n"
#define PF1(x)		"	prefetchnta "PF_OFFS(x)"(%[p2])		;\n"
#define PF2(x)		"	prefetchnta "PF_OFFS(x)"(%[p3])		;\n"
#define PF3(x)		"	prefetchnta "PF_OFFS(x)"(%[p4])		;\n"
#define PF4(x)		"	prefetchnta "PF_OFFS(x)"(%[p5])		;\n"
#define PF5(x)		"	prefetchnta "PF_OFFS(x)"(%[p6])		;\n"
#define XO1(x, y)	"       xorps   "OFFS(x)"(%[p2]), %%xmm"#y"	;\n"
#define XO2(x, y)	"       xorps   "OFFS(x)"(%[p3]), %%xmm"#y"	;\n"
#define XO3(x, y)	"       xorps   "OFFS(x)"(%[p4]), %%xmm"#y"	;\n"
#define XO4(x, y)	"       xorps   "OFFS(x)"(%[p5]), %%xmm"#y"	;\n"
#define XO5(x, y)	"       xorps   "OFFS(x)"(%[p6]), %%xmm"#y"	;\n"
static void
xor_sse_2(unsigned long bytes, unsigned long *p1, unsigned long *p2)
static void
xor_sse_3(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3)
static void
xor_sse_4(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3, unsigned long *p4)
static void
xor_sse_5(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3, unsigned long *p4, unsigned long *p5)
static struct xor_block_template xor_block_sse = ;
#undef XOR_TRY_TEMPLATES
#define XOR_TRY_TEMPLATES			\
do  while (0)
#define XOR_SELECT_TEMPLATE(FASTEST) (&xor_block_sse)
