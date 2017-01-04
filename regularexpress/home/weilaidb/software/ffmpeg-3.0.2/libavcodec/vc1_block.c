#define MB_INTRA_VLC_BITS 9
#define DC_VLC_BITS 9
static const uint8_t offset_table[2][9] = ;
static inline void init_block_index(VC1Context *v)
static void vc1_put_signed_blocks_clamped(VC1Context *v)
#define GET_MQUANT()                                           \
if (v->dquantfrm)
#define GET_MVDATA(_dmv_x, _dmv_y)                                      \
index = 1 + get_vlc2(gb, ff_vc1_mv_diff_vlc[s->mv_table_index].table, \
VC1_MV_DIFF_VLC_BITS, 2);                      \
if (index > 36)  else                                                              \
mb_has_coeffs = 0;                                              \
s->mb_intra = 0;                                                    \
if (!index)  else if (index == 35)  else if (index == 36)  else
static av_always_inline void get_mvdata_interlaced(VC1Context *v, int *dmv_x,
int *dmv_y, int *pred_flag)
static inline void vc1_b_mc(VC1Context *v, int dmv_x[2], int dmv_y[2],
int direct, int mode)
static inline int vc1_i_pred_dc(MpegEncContext *s, int overlap, int pq, int n,
int16_t **dc_val_ptr, int *dir_ptr)
static inline int ff_vc1_pred_dc(MpegEncContext *s, int overlap, int pq, int n,
int a_avail, int c_avail,
int16_t **dc_val_ptr, int *dir_ptr)
static inline int vc1_coded_block_pred(MpegEncContext * s, int n,
uint8_t **coded_block_ptr)
static void vc1_decode_ac_coeff(VC1Context *v, int *last, int *skip,
int *value, int codingset)
static int vc1_decode_i_block(VC1Context *v, int16_t block[64], int n,
int coded, int codingset)
static int vc1_decode_i_block_adv(VC1Context *v, int16_t block[64], int n,
int coded, int codingset, int mquant)
static int vc1_decode_intra_block(VC1Context *v, int16_t block[64], int n,
int coded, int mquant, int codingset)
static int vc1_decode_p_block(VC1Context *v, int16_t block[64], int n,
int mquant, int ttmb, int first_block,
uint8_t *dst, int linesize, int skip_block,
int *ttmb_out)
static const uint8_t size_table[6] = ;
static int vc1_decode_p_mb(VC1Context *v)
static int vc1_decode_p_mb_intfr(VC1Context *v)
static int vc1_decode_p_mb_intfi(VC1Context *v)
static void vc1_decode_b_mb(VC1Context *v)
static void vc1_decode_b_mb_intfi(VC1Context *v)
static int vc1_decode_b_mb_intfr(VC1Context *v)
static void vc1_decode_i_blocks(VC1Context *v)
static void vc1_decode_i_blocks_adv(VC1Context *v)
static void vc1_decode_p_blocks(VC1Context *v)
static void vc1_decode_b_blocks(VC1Context *v)
static void vc1_decode_skip_blocks(VC1Context *v)
void ff_vc1_decode_blocks(VC1Context *v)
