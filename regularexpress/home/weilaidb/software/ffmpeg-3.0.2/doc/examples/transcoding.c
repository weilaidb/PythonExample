static AVFormatContext *ifmt_ctx;
static AVFormatContext *ofmt_ctx;
typedef struct FilteringContext  FilteringContext;
static FilteringContext *filter_ctx;
static int open_input_file(const char *filename)
static int open_output_file(const char *filename)
static int init_filter(FilteringContext* fctx, AVCodecContext *dec_ctx,
AVCodecContext *enc_ctx, const char *filter_spec)
static int init_filters(void)
static int encode_write_frame(AVFrame *filt_frame, unsigned int stream_index, int *got_frame)
static int filter_encode_write_frame(AVFrame *frame, unsigned int stream_index)
static int flush_encoder(unsigned int stream_index)
int main(int argc, char **argv)
