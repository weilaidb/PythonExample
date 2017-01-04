static AVFormatContext *fmt_ctx = NULL;
static AVCodecContext *video_dec_ctx = NULL;
static AVStream *video_stream = NULL;
static const char *src_filename = NULL;
static int video_stream_idx = -1;
static AVFrame *frame = NULL;
static AVPacket pkt;
static int video_frame_count = 0;
static int decode_packet(int *got_frame, int cached)
static int open_codec_context(int *stream_idx,
AVFormatContext *fmt_ctx, enum AVMediaType type)
int main(int argc, char **argv)
