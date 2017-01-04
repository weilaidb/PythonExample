#if HAVE_6REGS && HAVE_INLINE_ASM && HAVE_MMX_EXTERNAL
void ff_vc1_put_ver_16b_shift2_mmx(int16_t *dst,
const uint8_t *src, x86_reg stride,
int rnd, int64_t shift);
void ff_vc1_put_hor_16b_shift2_mmx(uint8_t *dst, x86_reg stride,
const int16_t *src, int rnd);
void ff_vc1_avg_hor_16b_shift2_mmxext(uint8_t *dst, x86_reg stride,
const int16_t *src, int rnd);
#define OP_PUT(S,D)
#define OP_AVG(S,D) "pavgb " #S ", " #D " \n\t"
#define NORMALIZE_MMX(SHIFT)                                    \
"paddw     %%mm7, %%mm3           \n\t"      \
"paddw     %%mm7, %%mm4           \n\t"      \
"psraw     "SHIFT", %%mm3         \n\t"                    \
"psraw     "SHIFT", %%mm4         \n\t"
#define TRANSFER_DO_PACK(OP)                    \
"packuswb  %%mm4, %%mm3           \n\t"    \
OP((%2), %%mm3)                            \
"movq      %%mm3, (%2)            \n\t"
#define TRANSFER_DONT_PACK(OP)                  \
OP(0(%2), %%mm3)                           \
OP(8(%2), %%mm4)                           \
"movq      %%mm3, 0(%2)           \n\t"    \
"movq      %%mm4, 8(%2)           \n\t"
#define DO_UNPACK(reg)  "punpcklbw %%mm0, " reg "\n\t"
#define DONT_UNPACK(reg)
#define LOAD_ROUNDER_MMX(ROUND)                 \
"movd      "ROUND", %%mm7         \n\t"    \
"punpcklwd %%mm7, %%mm7           \n\t"    \
"punpckldq %%mm7, %%mm7           \n\t"
#define VC1_SHIFT2(OP, OPNAME)\
static void OPNAME ## vc1_shift2_mmx(uint8_t *dst, const uint8_t *src,\
x86_reg stride, int rnd, x86_reg offset)\
VC1_SHIFT2(OP_PUT, put_)
VC1_SHIFT2(OP_AVG, avg_)
#define MSPEL_FILTER13_CORE(UNPACK, MOVQ, A1, A2, A3, A4)       \
MOVQ "*0+"A1", %%mm1       \n\t"                           \
MOVQ "*4+"A1", %%mm2       \n\t"                           \
UNPACK("%%mm1")                                            \
UNPACK("%%mm2")                                            \
"pmullw    "MANGLE(ff_pw_3)", %%mm1\n\t"                   \
"pmullw    "MANGLE(ff_pw_3)", %%mm2\n\t"                   \
MOVQ "*0+"A2", %%mm3       \n\t"                           \
MOVQ "*4+"A2", %%mm4       \n\t"                           \
UNPACK("%%mm3")                                            \
UNPACK("%%mm4")                                            \
"pmullw    %%mm6, %%mm3    \n\t"                 \
"pmullw    %%mm6, %%mm4    \n\t"                 \
"psubw     %%mm1, %%mm3    \n\t"               \
"psubw     %%mm2, %%mm4    \n\t"               \
MOVQ "*0+"A4", %%mm1       \n\t"                           \
MOVQ "*4+"A4", %%mm2       \n\t"                           \
UNPACK("%%mm1")                                            \
UNPACK("%%mm2")                                            \
"psllw     $2, %%mm1       \n\t"                  \
"psllw     $2, %%mm2       \n\t"                  \
"psubw     %%mm1, %%mm3    \n\t"            \
"psubw     %%mm2, %%mm4    \n\t"            \
MOVQ "*0+"A3", %%mm1       \n\t"                           \
MOVQ "*4+"A3", %%mm2       \n\t"                           \
UNPACK("%%mm1")                                            \
UNPACK("%%mm2")                                            \
"pmullw    %%mm5, %%mm1    \n\t"                 \
"pmullw    %%mm5, %%mm2    \n\t"                 \
"paddw     %%mm1, %%mm3    \n\t"          \
"paddw     %%mm2, %%mm4    \n\t"
#define MSPEL_FILTER13_VER_16B(NAME, A1, A2, A3, A4)                    \
static void                                                             \
vc1_put_ver_16b_ ## NAME ## _mmx(int16_t *dst, const uint8_t *src,      \
x86_reg src_stride,                   \
int rnd, int64_t shift)                \
#define MSPEL_FILTER13_HOR_16B(NAME, A1, A2, A3, A4, OP, OPNAME)        \
static void                                                             \
OPNAME ## vc1_hor_16b_ ## NAME ## _mmx(uint8_t *dst, x86_reg stride,    \
const int16_t *src, int rnd)           \
#define MSPEL_FILTER13_8B(NAME, A1, A2, A3, A4, OP, OPNAME)             \
static void                                                             \
OPNAME ## vc1_## NAME ## _mmx(uint8_t *dst, const uint8_t *src,         \
x86_reg stride, int rnd, x86_reg offset)      \
MSPEL_FILTER13_8B     (shift1, "0(%1,%4  )", "0(%1,%3,2)", "0(%1,%3  )", "0(%1     )", OP_PUT, put_)
MSPEL_FILTER13_8B     (shift1, "0(%1,%4  )", "0(%1,%3,2)", "0(%1,%3  )", "0(%1     )", OP_AVG, avg_)
MSPEL_FILTER13_VER_16B(shift1, "0(%1,%4  )", "0(%1,%3,2)", "0(%1,%3  )", "0(%1     )")
MSPEL_FILTER13_HOR_16B(shift1, "2*3(%1)", "2*2(%1)", "2*1(%1)", "2*0(%1)", OP_PUT, put_)
MSPEL_FILTER13_HOR_16B(shift1, "2*3(%1)", "2*2(%1)", "2*1(%1)", "2*0(%1)", OP_AVG, avg_)
MSPEL_FILTER13_8B     (shift3, "0(%1     )", "0(%1,%3  )", "0(%1,%3,2)", "0(%1,%4  )", OP_PUT, put_)
MSPEL_FILTER13_8B     (shift3, "0(%1     )", "0(%1,%3  )", "0(%1,%3,2)", "0(%1,%4  )", OP_AVG, avg_)
MSPEL_FILTER13_VER_16B(shift3, "0(%1     )", "0(%1,%3  )", "0(%1,%3,2)", "0(%1,%4  )")
MSPEL_FILTER13_HOR_16B(shift3, "2*0(%1)", "2*1(%1)", "2*2(%1)", "2*3(%1)", OP_PUT, put_)
MSPEL_FILTER13_HOR_16B(shift3, "2*0(%1)", "2*1(%1)", "2*2(%1)", "2*3(%1)", OP_AVG, avg_)
typedef void (*vc1_mspel_mc_filter_ver_16bits)(int16_t *dst, const uint8_t *src, x86_reg src_stride, int rnd, int64_t shift);
typedef void (*vc1_mspel_mc_filter_hor_16bits)(uint8_t *dst, x86_reg dst_stride, const int16_t *src, int rnd);
typedef void (*vc1_mspel_mc_filter_8bits)(uint8_t *dst, const uint8_t *src, x86_reg stride, int rnd, x86_reg offset);
#define VC1_MSPEL_MC(OP, INSTR)\
static void OP ## vc1_mspel_mc(uint8_t *dst, const uint8_t *src, int stride,\
int hmode, int vmode, int rnd)\
\
static void OP ## vc1_mspel_mc_16(uint8_t *dst, const uint8_t *src, \
int stride, int hmode, int vmode, int rnd)\
VC1_MSPEL_MC(put_, mmx)
VC1_MSPEL_MC(avg_, mmxext)
#define DECLARE_FUNCTION(a, b)                                          \
static void put_vc1_mspel_mc ## a ## b ## _mmx(uint8_t *dst,            \
const uint8_t *src,      \
ptrdiff_t stride,        \
int rnd)                 \
\
static void avg_vc1_mspel_mc ## a ## b ## _mmxext(uint8_t *dst,         \
const uint8_t *src,   \
ptrdiff_t stride,     \
int rnd)              \
\
static void put_vc1_mspel_mc ## a ## b ## _16_mmx(uint8_t *dst,         \
const uint8_t *src,   \
ptrdiff_t stride,     \
int rnd)              \
\
static void avg_vc1_mspel_mc ## a ## b ## _16_mmxext(uint8_t *dst,      \
const uint8_t *src,\
ptrdiff_t stride,  \
int rnd)           \
DECLARE_FUNCTION(0, 1)
DECLARE_FUNCTION(0, 2)
DECLARE_FUNCTION(0, 3)
DECLARE_FUNCTION(1, 0)
DECLARE_FUNCTION(1, 1)
DECLARE_FUNCTION(1, 2)
DECLARE_FUNCTION(1, 3)
DECLARE_FUNCTION(2, 0)
DECLARE_FUNCTION(2, 1)
DECLARE_FUNCTION(2, 2)
DECLARE_FUNCTION(2, 3)
DECLARE_FUNCTION(3, 0)
DECLARE_FUNCTION(3, 1)
DECLARE_FUNCTION(3, 2)
DECLARE_FUNCTION(3, 3)
#define FN_ASSIGN(OP, X, Y, INSN) \
dsp->OP##vc1_mspel_pixels_tab[1][X+4*Y] = OP##vc1_mspel_mc##X##Y##INSN; \
dsp->OP##vc1_mspel_pixels_tab[0][X+4*Y] = OP##vc1_mspel_mc##X##Y##_16##INSN
av_cold void ff_vc1dsp_init_mmx(VC1DSPContext *dsp)
av_cold void ff_vc1dsp_init_mmxext(VC1DSPContext *dsp)
