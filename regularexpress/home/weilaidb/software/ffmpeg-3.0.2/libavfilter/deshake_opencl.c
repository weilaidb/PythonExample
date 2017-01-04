#define PLANE_NUM 3
#define ROUND_TO_16(a) (((((a) - 1)/16)+1)*16)
int ff_opencl_transform(AVFilterContext *ctx,
int width, int height, int cw, int ch,
const float *matrix_y, const float *matrix_uv,
enum InterpolateMethod interpolate,
enum FillMethod fill, AVFrame *in, AVFrame *out)
int ff_opencl_deshake_init(AVFilterContext *ctx)
void ff_opencl_deshake_uninit(AVFilterContext *ctx)
int ff_opencl_deshake_process_inout_buf(AVFilterContext *ctx, AVFrame *in, AVFrame *out)
