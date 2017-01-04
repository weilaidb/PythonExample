typedef struct FFIIRFilterCoeffsFFIIRFilterCoeffs;
typedef struct FFIIRFilterStateFFIIRFilterState;
#define MAXORDER 30
static av_cold int butterworth_init_coeffs(void *avc,
struct FFIIRFilterCoeffs *c,
enum IIRFilterMode filt_mode,
int order, float cutoff_ratio,
float stopband)
static av_cold int biquad_init_coeffs(void *avc, struct FFIIRFilterCoeffs *c,
enum IIRFilterMode filt_mode, int order,
float cutoff_ratio, float stopband)
av_cold struct FFIIRFilterCoeffs* ff_iir_filter_init_coeffs(void *avc,
enum IIRFilterType filt_type,
enum IIRFilterMode filt_mode,
int order, float cutoff_ratio,
float stopband, float ripple)
av_cold struct FFIIRFilterState* ff_iir_filter_init_state(int order)
#define CONV_S16(dest, source) dest = av_clip_int16(lrintf(source));
#define CONV_FLT(dest, source) dest = source;
#define FILTER_BW_O4_1(i0, i1, i2, i3, fmt)         \
in = *src0 * c->gain                            \
+ c->cy[0]*s->x[i0] + c->cy[1]*s->x[i1]    \
+ c->cy[2]*s->x[i2] + c->cy[3]*s->x[i3];   \
res =  (s->x[i0] + in      )*1                  \
+ (s->x[i1] + s->x[i3])*4                  \
+  s->x[i2]            *6;                 \
CONV_##fmt(*dst0, res)                          \
s->x[i0] = in;                                  \
src0 += sstep;                                  \
dst0 += dstep;
#define FILTER_BW_O4(type, fmt)
#define FILTER_DIRECT_FORM_II(type, fmt)
#define FILTER_O2(type, fmt)
void ff_iir_filter(const struct FFIIRFilterCoeffs *c,
struct FFIIRFilterState *s, int size,
const int16_t *src, int sstep, int16_t *dst, int dstep)
void ff_iir_filter_flt(const struct FFIIRFilterCoeffs *c,
struct FFIIRFilterState *s, int size,
const float *src, int sstep, float *dst, int dstep)
av_cold void ff_iir_filter_free_statep(struct FFIIRFilterState **state)
av_cold void ff_iir_filter_free_coeffsp(struct FFIIRFilterCoeffs **coeffsp)
void ff_iir_filter_init(FFIIRFilterContext *f)
#define FILT_ORDER 4
#define SIZE 1024
int main(void)
