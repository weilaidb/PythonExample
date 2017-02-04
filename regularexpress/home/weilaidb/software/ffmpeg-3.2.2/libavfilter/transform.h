#define AVFILTER_TRANSFORM_H
enum InterpolateMethod ;
#define INTERPOLATE_DEFAULT INTERPOLATE_BILINEAR
#define INTERPOLATE_FAST    INTERPOLATE_NEAREST
#define INTERPOLATE_BEST    INTERPOLATE_BIQUADRATIC
enum FillMethod ;
#define FILL_DEFAULT FILL_ORIGINAL
avfilter_get_matrix;
avfilter_add_matrix;
avfilter_sub_matrix;
avfilter_mul_matrix;
avfilter_transform;
