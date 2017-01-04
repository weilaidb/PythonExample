typedef struct AvsContext  AvsContext;
typedef enum  AvsBlockType;
typedef enum  AvsVideoSubType;
static int
avs_decode_frame(AVCodecContext * avctx,
void *data, int *got_frame, AVPacket *avpkt)
static av_cold int avs_decode_init(AVCodecContext * avctx)
static av_cold int avs_decode_end(AVCodecContext *avctx)
AVCodec ff_avs_decoder = ;
