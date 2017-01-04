static uint8_t  uni_DCtab_lum_len[512];
static uint8_t  uni_DCtab_chrom_len[512];
static uint16_t uni_DCtab_lum_bits[512];
static uint16_t uni_DCtab_chrom_bits[512];
static uint32_t uni_mpeg4_intra_rl_bits[64 * 64 * 2 * 2];
static uint8_t  uni_mpeg4_intra_rl_len[64 * 64 * 2 * 2];
static uint32_t uni_mpeg4_inter_rl_bits[64 * 64 * 2 * 2];
static uint8_t  uni_mpeg4_inter_rl_len[64 * 64 * 2 * 2];
#define UNI_MPEG4_ENC_INDEX(last, run, level) ((last) * 128 * 64 + (run) * 128 + (level))
static inline int get_block_rate(MpegEncContext *s, int16_t block[64],
int block_last_index, uint8_t scantable[64])
static inline void restore_ac_coeffs(MpegEncContext *s, int16_t block[6][64],
const int dir[6], uint8_t *st[6],
const int zigzag_last_index[6])
static inline int decide_ac_pred(MpegEncContext *s, int16_t block[6][64],
const int dir[6], uint8_t *st[6],
int zigzag_last_index[6])
void ff_clean_mpeg4_qscales(MpegEncContext *s)
static inline void mpeg4_encode_dc(PutBitContext *s, int level, int n)
static inline int mpeg4_get_dc_length(int level, int n)
static inline void mpeg4_encode_block(MpegEncContext *s,
int16_t *block, int n, int intra_dc,
uint8_t *scan_table, PutBitContext *dc_pb,
PutBitContext *ac_pb)
static int mpeg4_get_block_length(MpegEncContext *s,
int16_t *block, int n,
int intra_dc, uint8_t *scan_table)
static inline void mpeg4_encode_blocks(MpegEncContext *s, int16_t block[6][64],
int intra_dc[6], uint8_t **scan_table,
PutBitContext *dc_pb,
PutBitContext *ac_pb)
static inline int get_b_cbp(MpegEncContext *s, int16_t block[6][64],
int motion_x, int motion_y, int mb_type)
static const int dquant_code[5] = ;
void ff_mpeg4_encode_mb(MpegEncContext *s, int16_t block[6][64],
int motion_x, int motion_y)
void ff_mpeg4_stuffing(PutBitContext *pbc)
void ff_set_mpeg4_time(MpegEncContext *s)
static void mpeg4_encode_gop_header(MpegEncContext *s)
static void mpeg4_encode_visual_object_header(MpegEncContext *s)
static void mpeg4_encode_vol_header(MpegEncContext *s,
int vo_number,
int vol_number)
int ff_mpeg4_encode_picture_header(MpegEncContext *s, int picture_number)
static av_cold void init_uni_dc_tab(void)
static av_cold void init_uni_mpeg4_rl_tab(RLTable *rl, uint32_t *bits_tab,
uint8_t *len_tab)
static av_cold int encode_init(AVCodecContext *avctx)
void ff_mpeg4_init_partitions(MpegEncContext *s)
void ff_mpeg4_merge_partitions(MpegEncContext *s)
void ff_mpeg4_encode_video_packet_header(MpegEncContext *s)
#define OFFSET(x) offsetof(MpegEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass mpeg4enc_class = ;
AVCodec ff_mpeg4_encoder = ;
