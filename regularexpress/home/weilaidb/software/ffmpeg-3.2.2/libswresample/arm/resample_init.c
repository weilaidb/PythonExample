#define DECLARE_RESAMPLE_COMMON_TEMPLATE(TYPE, DELEM, FELEM, FELEM2, OUT)                         \
\
void ff_resample_common_apply_filter_x4_##TYPE##_neon(FELEM2 *acc, const DELEM *src,              \
const FELEM *filter, int length);           \
\
void ff_resample_common_apply_filter_x8_##TYPE##_neon(FELEM2 *acc, const DELEM *src,              \
const FELEM *filter, int length);           \
\
static int ff_resample_common_##TYPE##_neon(ResampleContext *c, void *dest, const void *source,   \
int n, int update_ctx)                                \
\
#define OUT(d, v) d = v
DECLARE_RESAMPLE_COMMON_TEMPLATE(float, float, float, float, OUT)
#undef OUT
#define OUT(d, v) (v) = ((v) + (1<<(14)))>>15; (d) = av_clip_int16(v)
DECLARE_RESAMPLE_COMMON_TEMPLATE(s16, int16_t, int16_t, int32_t, OUT)
#undef OUT
av_cold void swri_resample_dsp_arm_init(ResampleContext *c)
