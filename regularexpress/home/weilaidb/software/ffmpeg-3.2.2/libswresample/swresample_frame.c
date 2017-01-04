int swr_config_frame(SwrContext *s, const AVFrame *out, const AVFrame *in)
static int config_changed(SwrContext *s,
const AVFrame *out, const AVFrame *in)
static inline int convert_frame(SwrContext *s,
AVFrame *out, const AVFrame *in)
static inline int available_samples(AVFrame *out)
int swr_convert_frame(SwrContext *s,
AVFrame *out, const AVFrame *in)
