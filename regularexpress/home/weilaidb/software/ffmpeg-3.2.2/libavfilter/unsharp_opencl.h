#define AVFILTER_UNSHARP_OPENCL_H
int ff_opencl_unsharp_init(AVFilterContext *ctx);
void ff_opencl_unsharp_uninit(AVFilterContext *ctx);
int ff_opencl_unsharp_process_inout_buf(AVFilterContext *ctx, AVFrame *in, AVFrame *out);
int ff_opencl_apply_unsharp(AVFilterContext *ctx, AVFrame *in, AVFrame *out);
