#if HAVE_INLINE_ASM
typedef struct FFIIRFilterCoeffs  FFIIRFilterCoeffs;
typedef struct FFIIRFilterState  FFIIRFilterState;
static void ff_iir_filter_flt_mips(const struct FFIIRFilterCoeffs *c,
struct FFIIRFilterState *s, int size,
const float *src, int sstep, float *dst, int dstep)
void ff_iir_filter_init_mips(FFIIRFilterContext *f)
