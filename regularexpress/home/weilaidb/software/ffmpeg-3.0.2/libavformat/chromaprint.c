#define CPR_VERSION_INT AV_VERSION_INT(CHROMAPRINT_VERSION_MAJOR, \
CHROMAPRINT_VERSION_MINOR, \
CHROMAPRINT_VERSION_PATCH)
typedef enum FingerprintFormat  FingerprintFormat;
typedef struct ChromaprintMuxContext  ChromaprintMuxContext;
static void cleanup(ChromaprintMuxContext *cpr)
static int write_header(AVFormatContext *s)
static int write_packet(AVFormatContext *s, AVPacket *pkt)
static int write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(ChromaprintMuxContext, x)
#define FLAGS AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass chromaprint_class = ;
AVOutputFormat ff_chromaprint_muxer = ;
