static uint8_t uni_h261_rl_len [64*64*2*2];
#define UNI_ENC_INDEX(last,run,level) ((last)*128*64 + (run)*128 + (level))
int ff_h261_get_picture_format(int width, int height)
void ff_h261_encode_picture_header(MpegEncContext *s, int picture_number)
static void h261_encode_gob_header(MpegEncContext *s, int mb_line)
void ff_h261_reorder_mb_index(MpegEncContext *s)
static void h261_encode_motion(H261Context *h, int val)
static inline int get_cbp(MpegEncContext *s, int16_t block[6][64])
static void h261_encode_block(H261Context *h, int16_t *block, int n)
void ff_h261_encode_mb(MpegEncContext *s, int16_t block[6][64],
int motion_x, int motion_y)
static av_cold void init_uni_h261_rl_tab(RLTable *rl, uint32_t *bits_tab,
uint8_t *len_tab)
av_cold void ff_h261_encode_init(MpegEncContext *s)
static const AVClass h261_class = ;
AVCodec ff_h261_encoder = ;
