DEFINE_FN \
static void op##_rv40_qpel##size##_mc33_##insn(uint8_t *dst, const uint8_t *src, \
ptrdiff_t stride) \
#if HAVE_YASM
void ff_put_rv40_chroma_mc8_mmx  (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
ff_avg_rv40_chroma_mc8_mmxext;
ff_avg_rv40_chroma_mc8_3dnow;
void ff_put_rv40_chroma_mc4_mmx  (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
ff_avg_rv40_chroma_mc4_mmxext;
ff_avg_rv40_chroma_mc4_3dnow;
DECLARE_WEIGHT \
void ff_rv40_weight_func_rnd_16_##opt(uint8_t *dst, uint8_t *src1, uint8_t *src2, \
int w1, int w2, ptrdiff_t stride); \
void ff_rv40_weight_func_rnd_8_##opt (uint8_t *dst, uint8_t *src1, uint8_t *src2, \
int w1, int w2, ptrdiff_t stride); \
void ff_rv40_weight_func_nornd_16_##opt(uint8_t *dst, uint8_t *src1, uint8_t *src2, \
int w1, int w2, ptrdiff_t stride); \
void ff_rv40_weight_func_nornd_8_##opt (uint8_t *dst, uint8_t *src1, uint8_t *src2, \
int w1, int w2, ptrdiff_t stride);
DECLARE_WEIGHT(mmxext)
DECLARE_WEIGHT(sse2)
DECLARE_WEIGHT(ssse3)
QPEL_FUNC_DECL                           \
static void OP ## rv40_qpel ##SIZE ##_mc ##PH ##PV ##OPT(uint8_t *dst,  \
const uint8_t *src, \
ptrdiff_t stride)  \
QPEL_FUNCS_DECL \
QPEL_FUNC_DECL(OP,  8, PH, PV, OPT)  \
QPEL_FUNC_DECL(OP, 16, PH, PV, OPT)
QPEL_MC_DECL                                           \
void ff_ ##OP ##rv40_qpel_h ##OPT(uint8_t *dst, ptrdiff_t dstStride,    \
const uint8_t *src,                   \
ptrdiff_t srcStride,                  \
int len, int m);                      \
void ff_ ##OP ##rv40_qpel_v ##OPT(uint8_t *dst, ptrdiff_t dstStride,    \
const uint8_t *src,                   \
ptrdiff_t srcStride,                  \
int len, int m);                      \
QPEL_FUNCS_DECL(OP, 0, 1, OPT)                                          \
QPEL_FUNCS_DECL(OP, 0, 3, OPT)                                          \
QPEL_FUNCS_DECL(OP, 1, 0, OPT)                                          \
QPEL_FUNCS_DECL(OP, 1, 1, OPT)                                          \
QPEL_FUNCS_DECL(OP, 1, 2, OPT)                                          \
QPEL_FUNCS_DECL(OP, 1, 3, OPT)                                          \
QPEL_FUNCS_DECL(OP, 2, 1, OPT)                                          \
QPEL_FUNCS_DECL(OP, 2, 2, OPT)                                          \
QPEL_FUNCS_DECL(OP, 2, 3, OPT)                                          \
QPEL_FUNCS_DECL(OP, 3, 0, OPT)                                          \
QPEL_FUNCS_DECL(OP, 3, 1, OPT)                                          \
QPEL_FUNCS_DECL(OP, 3, 2, OPT)
#define LOOPSIZE  8
HCOFF  (32 * ((x) - 1))
VCOFF  (32 * ((x) - 1))
QPEL_MC_DECL(put_, _ssse3)
QPEL_MC_DECL(avg_, _ssse3)
#undef LOOPSIZE
#undef HCOFF
#undef VCOFF
#define LOOPSIZE  8
HCOFF  (64 * ((x) - 1))
VCOFF  (64 * ((x) - 1))
QPEL_MC_DECL(put_, _sse2)
QPEL_MC_DECL(avg_, _sse2)
#if ARCH_X86_32
#undef LOOPSIZE
#undef HCOFF
#undef VCOFF
#define LOOPSIZE  4
HCOFF  (64 * ((x) - 1))
VCOFF  (64 * ((x) - 1))
QPEL_MC_DECL(put_, _mmx)
#define ff_put_rv40_qpel_h_mmxext  ff_put_rv40_qpel_h_mmx
QPEL_MC_DECL
#define ff_put_rv40_qpel_h_3dnow  ff_put_rv40_qpel_h_mmx
QPEL_MC_DECL
QPEL_FUNC_SET                            \
c-> OP ## pixels_tab[2 - SIZE / 8][4 * PV + PH] = OP ## rv40_qpel ##SIZE ## _mc ##PH ##PV ##OPT;
QPEL_FUNCS_SET         \
QPEL_FUNC_SET(OP,  8, PH, PV, OPT)          \
QPEL_FUNC_SET(OP, 16, PH, PV, OPT)
QPEL_MC_SET   \
QPEL_FUNCS_SET (OP, 0, 1, OPT) \
QPEL_FUNCS_SET (OP, 0, 3, OPT) \
QPEL_FUNCS_SET (OP, 1, 0, OPT) \
QPEL_FUNCS_SET (OP, 1, 1, OPT) \
QPEL_FUNCS_SET (OP, 1, 2, OPT) \
QPEL_FUNCS_SET (OP, 1, 3, OPT) \
QPEL_FUNCS_SET (OP, 2, 1, OPT) \
QPEL_FUNCS_SET (OP, 2, 2, OPT) \
QPEL_FUNCS_SET (OP, 2, 3, OPT) \
QPEL_FUNCS_SET (OP, 3, 0, OPT) \
QPEL_FUNCS_SET (OP, 3, 1, OPT) \
QPEL_FUNCS_SET (OP, 3, 2, OPT)
DEFINE_FN(put, 8, ssse3)
DEFINE_FN(put, 16, sse2)
DEFINE_FN(put, 16, ssse3)
DEFINE_FN(avg, 8, mmxext)
DEFINE_FN(avg, 8, ssse3)
DEFINE_FN(avg, 16, sse2)
DEFINE_FN(avg, 16, ssse3)
DEFINE_FN
DEFINE_FN(avg, 8, mmx)
DEFINE_FN(put, 16, mmx)
DEFINE_FN(avg, 16, mmx)
ff_rv40dsp_init_x86
