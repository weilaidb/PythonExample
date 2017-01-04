#define TILE_SIZE 8
typedef struct Tile  Tile;
typedef struct RsccContext  RsccContext;
static av_cold int rscc_init(AVCodecContext *avctx)
static av_cold int rscc_close(AVCodecContext *avctx)
static int rscc_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_rscc_decoder = ;
