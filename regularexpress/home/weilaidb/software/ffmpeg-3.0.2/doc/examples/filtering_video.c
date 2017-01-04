#define _XOPEN_SOURCE 600
const char *filter_descr = "scale=78:24,transpose=cclock";
static AVFormatContext *fmt_ctx;
static AVCodecContext *dec_ctx;
AVFilterContext *buffersink_ctx;
AVFilterContext *buffersrc_ctx;
AVFilterGraph *filter_graph;
static int video_stream_index = -1;
static int64_t last_pts = AV_NOPTS_VALUE;
static int open_input_file(const char *filename)
static int init_filters(const char *filters_descr)
static void display_frame(const AVFrame *frame, AVRational time_base)
int main(int argc, char **argv)
