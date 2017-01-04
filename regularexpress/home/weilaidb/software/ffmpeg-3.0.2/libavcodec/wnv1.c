typedef struct WNV1Context  WNV1Context;
static const uint16_t code_tab[16][2] = ;
#define CODE_VLC_BITS 9
static VLC code_vlc;
static inline int wnv1_get_code(WNV1Context *w, int base_value)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
AVCodec ff_wnv1_decoder = ;
