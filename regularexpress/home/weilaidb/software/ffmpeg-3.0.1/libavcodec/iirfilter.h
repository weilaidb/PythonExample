#define AVCODEC_IIRFILTER_H
struct FFIIRFilterCoeffs;
struct FFIIRFilterState;
enum IIRFilterType;
enum IIRFilterMode;
typedef struct FFIIRFilterContext  FFIIRFilterContext;
void ff_iir_filter_init(FFIIRFilterContext *f);
void ff_iir_filter_init_mips(FFIIRFilterContext *f);
struct FFIIRFilterCoeffs* ff_iir_filter_init_coeffs(void *avc,
enum IIRFilterType filt_type,
enum IIRFilterMode filt_mode,
int order, float cutoff_ratio,
float stopband, float ripple);
struct FFIIRFilterState* ff_iir_filter_init_state(int order);
void ff_iir_filter_free_coeffsp(struct FFIIRFilterCoeffs **coeffs);
void ff_iir_filter_free_statep(struct FFIIRFilterState **state);
void ff_iir_filter(const struct FFIIRFilterCoeffs *coeffs, struct FFIIRFilterState *state,
int size, const int16_t *src, int sstep, int16_t *dst, int dstep);
void ff_iir_filter_flt(const struct FFIIRFilterCoeffs *coeffs,
struct FFIIRFilterState *state, int size,
const float *src, int sstep, float *dst, int dstep);
