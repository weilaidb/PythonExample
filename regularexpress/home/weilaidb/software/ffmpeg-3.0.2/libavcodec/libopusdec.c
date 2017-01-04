struct libopus_context ;
#define OPUS_HEAD_SIZE 19
static av_cold int libopus_decode_init(AVCodecContext *avc)
static av_cold int libopus_decode_close(AVCodecContext *avc)
#define MAX_FRAME_SIZE (960 * 6)
static int libopus_decode(AVCodecContext *avc, void *data,
int *got_frame_ptr, AVPacket *pkt)
static void libopus_flush(AVCodecContext *avc)
AVCodec ff_libopus_decoder = ;
