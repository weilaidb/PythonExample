typedef struct DitherState  DitherState;
struct DitherContext ;
#define MUTE_THRESHOLD_SEC 0.000333
#define S16_SCALE 32753.0f
#define LFG_SCALE (1.0f / (2.0f * INT32_MAX))
static const float ns_48_coef_b[4] = ;
static const float ns_48_coef_a[4] = ;
static const float ns_44_coef_b[4] = ;
static const float ns_44_coef_a[4] = ;
dither_int_to_float_rectangular_c
dither_int_to_float_triangular_c
quantize_c
#define SQRT_1_6 0.40824829046386301723f
dither_highpass_filter
generate_dither_noise
quantize_triangular_ns
convert_samples
ff_convert_dither
ff_dither_free
dither_init
*ff_dither_alloc
