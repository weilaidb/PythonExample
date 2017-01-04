typedef uint8_t cvid_codebook[12];
#define MAX_STRIPS      32
typedef struct cvid_strip  cvid_strip;
typedef struct CinepakContext  CinepakContext;
static void cinepak_decode_codebook (cvid_codebook *codebook,
int chunk_id, int size, const uint8_t *data)
static int cinepak_decode_vectors (CinepakContext *s, cvid_strip *strip,
int chunk_id, int size, const uint8_t *data)
static int cinepak_decode_strip (CinepakContext *s,
cvid_strip *strip, const uint8_t *data, int size)
static int cinepak_decode (CinepakContext *s)
static av_cold int cinepak_decode_init(AVCodecContext *avctx)
static int cinepak_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int cinepak_decode_end(AVCodecContext *avctx)
AVCodec ff_cinepak_decoder = ;
