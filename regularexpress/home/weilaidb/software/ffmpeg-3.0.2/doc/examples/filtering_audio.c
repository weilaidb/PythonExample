static const char *filter_descr = "aresample=8000,aformat=sample_fmts=s16:channel_layouts=mono";
static const char *player       = "ffplay -f s16le -ar 8000 -ac 1 -";
static AVFormatContext *fmt_ctx;
static AVCodecContext *dec_ctx;
AVFilterContext *buffersink_ctx;
AVFilterContext *buffersrc_ctx;
AVFilterGraph *filter_graph;
static int audio_stream_index = -1;
static int open_input_file(const char *filename)
static int init_filters(const char *filters_descr)
static void print_frame(const AVFrame *frame)
int main(int argc, char **argv)
