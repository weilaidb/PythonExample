typedef struct JvContext  JvContext;
static av_cold int decode_init(AVCodecContext *avctx)
static inline void decode2x2(GetBitContext *gb, uint8_t *dst, int linesize)
static inline void decode4x4(GetBitContext *gb, uint8_t *dst, int linesize)
static inline void decode8x8(GetBitContext *gb, uint8_t *dst, int linesize,
BlockDSPContext *bdsp)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_close(AVCodecContext *avctx)
AVCodec ff_jv_decoder = ;
