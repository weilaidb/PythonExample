#define INTERPOLATE_METHOD(name) \
static uint8_t name(float x, float y, const uint8_t *src, \
int width, int height, int stride, uint8_t def)
#define PIXEL(img, x, y, w, h, stride, def) \
((x) < 0 || (y) < 0) ? (def) : \
(((x) >= (w) || (y) >= (h)) ? (def) : \
img[(x) + (y) * (stride)])
INTERPOLATE_METHOD(interpolate_nearest)
INTERPOLATE_METHOD(interpolate_bilinear)
INTERPOLATE_METHOD(interpolate_biquadratic)
void avfilter_get_matrix(float x_shift, float y_shift, float angle, float zoom, float *matrix)
void avfilter_add_matrix(const float *m1, const float *m2, float *result)
void avfilter_sub_matrix(const float *m1, const float *m2, float *result)
void avfilter_mul_matrix(const float *m1, float scalar, float *result)
int avfilter_transform(const uint8_t *src, uint8_t *dst,
int src_stride, int dst_stride,
int width, int height, const float *matrix,
enum InterpolateMethod interpolate,
enum FillMethod fill)
