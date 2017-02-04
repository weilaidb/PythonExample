DECLARE_RESAMPLE_COMMON_TEMPLATE                         \
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
DECLARE_RESAMPLE_COMMON_TEMPLATE
#undef OUT
OUT (v) = ((v) + (1<<(14)))>>15; (d) = av_clip_int16(v)
DECLARE_RESAMPLE_COMMON_TEMPLATE(s16, int16_t, int16_t, int32_t, OUT)
#undef OUT
swri_resample_dsp_arm_init
