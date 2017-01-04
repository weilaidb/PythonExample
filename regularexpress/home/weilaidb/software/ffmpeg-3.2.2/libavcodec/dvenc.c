static av_cold int dvvideo_encode_init(AVCodecContext *avctx)
static const int vs_total_ac_bits = (100 * 4 + 68 * 2) * 5;
static const int mb_area_start[5] = ;
#if CONFIG_SMALL
static av_always_inline int dv_rl2vlc(int run, int level, int sign,
uint32_t *vlc)
static av_always_inline int dv_rl2vlc_size(int run, int level)
static av_always_inline int dv_rl2vlc(int run, int l, int sign, uint32_t *vlc)
static av_always_inline int dv_rl2vlc_size(int run, int l)
typedef struct EncBlockInfo  EncBlockInfo;
static av_always_inline PutBitContext *dv_encode_ac(EncBlockInfo *bi,
PutBitContext *pb_pool,
PutBitContext *pb_end)
static av_always_inline int dv_guess_dct_mode(DVVideoContext *s, uint8_t *data,
int linesize)
static const int dv_weight_bits = 18;
static const int dv_weight_88[64] = ;
static const int dv_weight_248[64] = ;
static av_always_inline int dv_init_enc_block(EncBlockInfo *bi, uint8_t *data,
int linesize, DVVideoContext *s,
int bias)
static inline void dv_guess_qnos(EncBlockInfo *blks, int *qnos)
static int dv_encode_video_segment(AVCodecContext *avctx, void *arg)
static inline int dv_write_pack(enum dv_pack_type pack_id, DVVideoContext *c,
uint8_t *buf)
static inline int dv_write_dif_id(enum dv_section_type t, uint8_t chan_num,
uint8_t seq_num, uint8_t dif_num,
uint8_t *buf)
static inline int dv_write_ssyb_id(uint8_t syb_num, uint8_t fr, uint8_t *buf)
static void dv_format_frame(DVVideoContext *c, uint8_t *buf)
static int dvvideo_encode_frame(AVCodecContext *c, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
AVCodec ff_dvvideo_encoder = ;
