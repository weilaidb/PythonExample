static uint8_t mv_penalty[MAX_FCODE+1][MAX_DMV*2+1];
static uint8_t fcode_tab[MAX_MV*2+1];
static uint8_t umv_fcode_tab[MAX_MV*2+1];
static uint8_t  uni_h263_intra_aic_rl_len [64*64*2*2];
static uint8_t  uni_h263_inter_rl_len [64*64*2*2];
#define UNI_MPEG4_ENC_INDEX(last,run,level) ((last)*128*64 + (run)*128 + (level))
static const uint8_t wrong_run[102] = ;
av_const int ff_h263_aspect_to_info(AVRational aspect)
void ff_h263_encode_picture_header(MpegEncContext * s, int picture_number)
void ff_h263_encode_gob_header(MpegEncContext * s, int mb_line)
void ff_clean_h263_qscales(MpegEncContext *s)
static const int dquant_code[5]= ;
static void h263_encode_block(MpegEncContext * s, int16_t * block, int n)
static void h263p_encode_umotion(PutBitContext *pb, int val)
void ff_h263_encode_mb(MpegEncContext * s,
int16_t block[6][64],
int motion_x, int motion_y)
void ff_h263_encode_motion(PutBitContext *pb, int val, int f_code)
static av_cold void init_mv_penalty_and_fcode(MpegEncContext *s)
static av_cold void init_uni_h263_rl_tab(RLTable *rl, uint32_t *bits_tab,
uint8_t *len_tab)
av_cold void ff_h263_encode_init(MpegEncContext *s)
void ff_h263_encode_mba(MpegEncContext *s)
