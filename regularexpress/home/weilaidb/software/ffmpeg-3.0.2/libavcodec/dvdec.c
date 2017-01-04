typedef struct BlockInfo  BlockInfo;
static const int dv_iweight_bits = 14;
static const uint16_t dv_iweight_88[64] = ;
static const uint16_t dv_iweight_248[64] = ;
static const uint16_t dv_iweight_1080_y[64] = ;
static const uint16_t dv_iweight_1080_c[64] = ;
static const uint16_t dv_iweight_720_y[64] = ;
static const uint16_t dv_iweight_720_c[64] = ;
static void dv_init_weight_tables(DVVideoContext *ctx, const AVDVProfile *d)
static av_cold int dvvideo_decode_init(AVCodecContext *avctx)
static void dv_decode_ac(GetBitContext *gb, BlockInfo *mb, int16_t *block)
static inline void bit_copy(PutBitContext *pb, GetBitContext *gb)
static int dv_decode_video_segment(AVCodecContext *avctx, void *arg)
static int dvvideo_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_dvvideo_decoder = ;
