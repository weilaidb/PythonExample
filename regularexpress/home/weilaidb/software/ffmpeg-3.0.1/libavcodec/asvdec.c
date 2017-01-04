#define VLC_BITS             6
#define ASV2_LEVEL_VLC_BITS 10
static VLC ccp_vlc;
static VLC level_vlc;
static VLC dc_ccp_vlc;
static VLC ac_ccp_vlc;
static VLC asv2_level_vlc;
static av_cold void init_vlcs(ASV1Context *a)
static inline int asv2_get_bits(GetBitContext *gb, int n)
static inline int asv1_get_level(GetBitContext *gb)
static inline int asv2_get_level(GetBitContext *gb)
static inline int asv1_decode_block(ASV1Context *a, int16_t block[64])
static inline int asv2_decode_block(ASV1Context *a, int16_t block[64])
static inline int decode_mb(ASV1Context *a, int16_t block[6][64])
static inline void idct_put(ASV1Context *a, AVFrame *frame, int mb_x, int mb_y)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
#if CONFIG_ASV1_DECODER
AVCodec ff_asv1_decoder = ;
#if CONFIG_ASV2_DECODER
AVCodec ff_asv2_decoder = ;
