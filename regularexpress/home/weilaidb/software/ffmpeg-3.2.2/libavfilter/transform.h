#define AVFILTER_TRANSFORM_H
enum InterpolateMethod ;
#define INTERPOLATE_DEFAULT INTERPOLATE_BILINEAR
#define INTERPOLATE_FAST    INTERPOLATE_NEAREST
#define INTERPOLATE_BEST    INTERPOLATE_BIQUADRATIC
enum FillMethod ;
#define FILL_DEFAULT FILL_ORIGINAL
void avfilter_get_matrix(float x_shift, float y_shift, float angle, float zoom, float *matrix);
void avfilter_add_matrix(const float *m1, const float *m2, float *result);
void avfilter_sub_matrix(const float *m1, const float *m2, float *result);
void avfilter_mul_matrix(const float *m1, float scalar, float *result);
int avfilter_transform(const uint8_t *src, uint8_t *dst,
int src_stride, int dst_stride,
int width, int height, const float *matrix,
enum InterpolateMethod interpolate,
enum FillMethod fill);
