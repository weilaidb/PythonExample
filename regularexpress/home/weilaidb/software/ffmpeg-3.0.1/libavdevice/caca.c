typedef struct CACAContext  CACAContext;
static int caca_write_trailer(AVFormatContext *s)
static void list_drivers(CACAContext *c)
#define DEFINE_LIST_DITHER(thing, thing_str)                                 \
static void list_dither_## thing(CACAContext *c)                             \
DEFINE_LIST_DITHER(color, "colors");
DEFINE_LIST_DITHER(charset, "charsets");
DEFINE_LIST_DITHER(algorithm, "algorithms");
DEFINE_LIST_DITHER(antialias, "antialias");
static int caca_write_header(AVFormatContext *s)
static int caca_write_packet(AVFormatContext *s, AVPacket *pkt)
#define OFFSET(x) offsetof(CACAContext,x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass caca_class = ;
AVOutputFormat ff_caca_muxer = ;
