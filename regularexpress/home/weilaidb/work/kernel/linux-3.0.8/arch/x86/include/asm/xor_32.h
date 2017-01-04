#define _ASM_X86_XOR_32_H
#define LD(x, y)	"       movq   8*("#x")(%1), %%mm"#y"   ;\n"
#define ST(x, y)	"       movq %%mm"#y",   8*("#x")(%1)   ;\n"
#define XO1(x, y)	"       pxor   8*("#x")(%2), %%mm"#y"   ;\n"
#define XO2(x, y)	"       pxor   8*("#x")(%3), %%mm"#y"   ;\n"
#define XO3(x, y)	"       pxor   8*("#x")(%4), %%mm"#y"   ;\n"
#define XO4(x, y)	"       pxor   8*("#x")(%5), %%mm"#y"   ;\n"
static void
xor_pII_mmx_2(unsigned long bytes, unsigned long *p1, unsigned long *p2)
static void
xor_pII_mmx_3(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3)
static void
xor_pII_mmx_4(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3, unsigned long *p4)
static void
xor_pII_mmx_5(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3, unsigned long *p4, unsigned long *p5)
#undef LD
#undef XO1
#undef XO2
#undef XO3
#undef XO4
#undef ST
#undef BLOCK
static void
xor_p5_mmx_2(unsigned long bytes, unsigned long *p1, unsigned long *p2)
static void
xor_p5_mmx_3(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3)
static void
xor_p5_mmx_4(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3, unsigned long *p4)
static void
xor_p5_mmx_5(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3, unsigned long *p4, unsigned long *p5)
static struct xor_block_template xor_block_pII_mmx = ;
static struct xor_block_template xor_block_p5_mmx = ;
#define XMMS_SAVE				\
do  while (0)
#define XMMS_RESTORE				\
do  while (0)
#define ALIGN16 __attribute__((aligned(16)))
#define OFFS(x)		"16*("#x")"
#define PF_OFFS(x)	"256+16*("#x")"
#define	PF0(x)		"	prefetchnta "PF_OFFS(x)"(%1)		;\n"
#define LD(x, y)	"       movaps   "OFFS(x)"(%1), %%xmm"#y"	;\n"
#define ST(x, y)	"       movaps %%xmm"#y",   "OFFS(x)"(%1)	;\n"
#define PF1(x)		"	prefetchnta "PF_OFFS(x)"(%2)		;\n"
#define PF2(x)		"	prefetchnta "PF_OFFS(x)"(%3)		;\n"
#define PF3(x)		"	prefetchnta "PF_OFFS(x)"(%4)		;\n"
#define PF4(x)		"	prefetchnta "PF_OFFS(x)"(%5)		;\n"
#define PF5(x)		"	prefetchnta "PF_OFFS(x)"(%6)		;\n"
#define XO1(x, y)	"       xorps   "OFFS(x)"(%2), %%xmm"#y"	;\n"
#define XO2(x, y)	"       xorps   "OFFS(x)"(%3), %%xmm"#y"	;\n"
#define XO3(x, y)	"       xorps   "OFFS(x)"(%4), %%xmm"#y"	;\n"
#define XO4(x, y)	"       xorps   "OFFS(x)"(%5), %%xmm"#y"	;\n"
#define XO5(x, y)	"       xorps   "OFFS(x)"(%6), %%xmm"#y"	;\n"
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
static struct xor_block_template xor_block_pIII_sse = ;
#undef XOR_TRY_TEMPLATES
#define XOR_TRY_TEMPLATES				\
do  while (0)
#define XOR_SELECT_TEMPLATE(FASTEST)			\
(cpu_has_xmm ? &xor_block_pIII_sse : FASTEST)
