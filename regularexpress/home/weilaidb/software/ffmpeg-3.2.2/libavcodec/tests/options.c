static int dummy_init(AVCodecContext *ctx)
static int dummy_close(AVCodecContext *ctx)
static int dummy_encode(AVCodecContext *ctx, AVPacket *pkt, const AVFrame *frame, int *got_packet)
typedef struct Dummy12Context  Dummy12Context;
typedef struct Dummy3Context  Dummy3Context;
#define OFFSET(x) offsetof(Dummy12Context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption dummy_options[] = ;
static const AVClass dummy_v1_class = ;
static const AVClass dummy_v2_class = ;
static AVCodec dummy_v1_encoder = ;
static AVCodec dummy_v2_encoder = ;
static AVCodec dummy_v3_encoder = ;
static AVCodec dummy_v4_encoder = ;
static void test_copy_print_codec(const AVCodecContext *ctx)
static void test_copy(const AVCodec *c1, const AVCodec *c2)
int main(void)
