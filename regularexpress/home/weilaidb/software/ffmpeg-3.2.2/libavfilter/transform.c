INTERPOLATE_METHOD \
name
PIXEL \
((x) < 0 || (y) < 0) ? (def) : \
(((x) >= (w) || (y) >= (h)) ? (def) : \
img[(x) + (y) * (stride)])
INTERPOLATE_METHOD(interpolate_nearest)
INTERPOLATE_METHOD(interpolate_bilinear)
INTERPOLATE_METHOD(interpolate_biquadratic)
avfilter_get_matrix
avfilter_add_matrix
avfilter_sub_matrix
avfilter_mul_matrix
avfilter_transform
