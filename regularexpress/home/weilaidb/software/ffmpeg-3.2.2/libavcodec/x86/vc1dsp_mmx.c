#if HAVE_6REGS && HAVE_INLINE_ASM && HAVE_MMX_EXTERNAL
ff_vc1_put_ver_16b_shift2_mmx;
ff_vc1_put_hor_16b_shift2_mmx;
ff_vc1_avg_hor_16b_shift2_mmxext;
OP_PUT
OP_AVG
NORMALIZE_MMX                                    \
\
\
\
TRANSFER_DO_PACK                    \
\
OP((%2), %%mm3)                            \
TRANSFER_DONT_PACK                  \
OP(0(%2), %%mm3)                           \
OP(8(%2), %%mm4)                           \
\
DO_UNPACK
DONT_UNPACK
LOAD_ROUNDER_MMX                 \
\
\
VC1_SHIFT2\
static void OPNAME ## vc1_shift2_mmx(uint8_t *dst, const uint8_t *src,\
x86_reg stride, int rnd, x86_reg offset)\
VC1_SHIFT2(OP_PUT, put_)
VC1_SHIFT2(OP_AVG, avg_)
MSPEL_FILTER13_CORE       \
MOVQ                            \
MOVQ                            \
UNPACK()                                            \
UNPACK()                                            \
\
\
MOVQ                            \
MOVQ                            \
UNPACK()                                            \
UNPACK()                                            \
\
\
\
\
MOVQ                            \
MOVQ                            \
UNPACK()                                            \
UNPACK()                                            \
\
\
\
\
MOVQ                            \
MOVQ                            \
UNPACK()                                            \
UNPACK()                                            \
\
\
\
MSPEL_FILTER13_VER_16B                    \
static void                                                             \
vc1_put_ver_16b_ ## NAME ## _mmx(int16_t *dst, const uint8_t *src,      \
x86_reg src_stride,                   \
int rnd, int64_t shift)                \
MSPEL_FILTER13_HOR_16B        \
static void                                                             \
OPNAME ## vc1_hor_16b_ ## NAME ## _mmx(uint8_t *dst, x86_reg stride,    \
const int16_t *src, int rnd)           \
MSPEL_FILTER13_8B             \
static void                                                             \
OPNAME ## vc1_## NAME ## _mmx(uint8_t *dst, const uint8_t *src,         \
x86_reg stride, int rnd, x86_reg offset)      \
MSPEL_FILTER13_8B     (shift1, , OP_PUT, put_)
MSPEL_FILTER13_8B     (shift1, , OP_AVG, avg_)
MSPEL_FILTER13_VER_16B(shift1, )
MSPEL_FILTER13_HOR_16B(shift1, , OP_PUT, put_)
MSPEL_FILTER13_HOR_16B(shift1, , OP_AVG, avg_)
MSPEL_FILTER13_8B     (shift3, , OP_PUT, put_)
MSPEL_FILTER13_8B     (shift3, , OP_AVG, avg_)
MSPEL_FILTER13_VER_16B(shift3, )
MSPEL_FILTER13_HOR_16B(shift3, , OP_PUT, put_)
MSPEL_FILTER13_HOR_16B(shift3, , OP_AVG, avg_)
typedef void (*vc1_mspel_mc_filter_ver_16bits)(int16_t *dst, const uint8_t *src, x86_reg src_stride, int rnd, int64_t shift);
typedef void (*vc1_mspel_mc_filter_hor_16bits)(uint8_t *dst, x86_reg dst_stride, const int16_t *src, int rnd);
typedef void (*vc1_mspel_mc_filter_8bits)(uint8_t *dst, const uint8_t *src, x86_reg stride, int rnd, x86_reg offset);
VC1_MSPEL_MC\
static void OP ## vc1_mspel_mc(uint8_t *dst, const uint8_t *src, int stride,\
int hmode, int vmode, int rnd)\
\
static void OP ## vc1_mspel_mc_16(uint8_t *dst, const uint8_t *src, \
int stride, int hmode, int vmode, int rnd)\
VC1_MSPEL_MC(put_, mmx)
VC1_MSPEL_MC(avg_, mmxext)
DECLARE_FUNCTION                                          \
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
FN_ASSIGN \
dsp->OP##vc1_mspel_pixels_tab[1][X+4*Y] = OP##vc1_mspel_mc##X##Y##INSN; \
dsp->OP##vc1_mspel_pixels_tab[0][X+4*Y] = OP##vc1_mspel_mc##X##Y##_16##INSN
ff_vc1dsp_init_mmx
ff_vc1dsp_init_mmxext
