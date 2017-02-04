#if USE_FIXED
#define PS_BASELINE 0
#define numQMFSlots 32
static const int8_t num_env_tab[2][4] = ;
static const int8_t nr_iidicc_par_tab[] = ;
static const int8_t nr_iidopd_par_tab[] = ;
enum ;
static const int huff_iid[] = ;
static VLC vlc_ps[10];
READ_PAR_DATA \ \
static int read_ ## PAR ## _data(AVCodecContext *avctx, GetBitContext *gb, PSContext *ps, \
int8_t (*PAR)[PS_MAX_NR_IIDICC], int table_idx, int e, int dt) \
READ_PAR_DATA(iid,    huff_offset[table_idx],    0, FFABS(ps->iid_par[e][b]) > 7 + 8 * ps->iid_quant)
READ_PAR_DATA(icc,    huff_offset[table_idx],    0, ps->icc_par[e][b] > 7U)
READ_PAR_DATA(ipdopd,                      0, 0x07, 0)
ps_read_extension_data
ipdopd_reset
AAC_RENAME(AVCodecContext *avctx, GetBitContext *gb_host, PSContext *ps, int bits_left)
hybrid2_re[2], INTFLOAT (*out)[32][2], const INTFLOAT filter[8], int len, int reverse)
hybrid6_cx[2], INTFLOAT (*out)[32][2],
TABLE_CONST INTFLOAT (*filter)[8][2], int len)
hybrid4_8_12_cx[2], INTFLOAT (*out)[32][2],
TABLE_CONST INTFLOAT (*filter)[8][2], int N, int len)
hybrid_analysis
hybrid_synthesis
Q30
static const int   NR_PAR_BANDS[]      = ;
static const int   NR_IPDOPD_BANDS[]   = ;
static const int   NR_BANDS[]          = ;
static const int   DECAY_CUTOFF[]      = ;
static const int   NR_ALLPASS_BANDS[]  = ;
static const int   SHORT_DELAY_BAND[]  = ;
map_idx_10_to_20
map_idx_34_to_20
map_val_34_to_20
map_idx_10_to_34
map_idx_20_to_34
map_val_20_to_34
decorrelation[32][2], const INTFLOAT (*s)[32][2], int is34)
remap34[PS_MAX_NR_IIDICC],
int8_t           (*par)[PS_MAX_NR_IIDICC],
int num_par, int num_env, int full)
remap20[PS_MAX_NR_IIDICC],
int8_t           (*par)[PS_MAX_NR_IIDICC],
int num_par, int num_env, int full)
stereo_processing[32][2], INTFLOAT (*r)[32][2], int is34)
AAC_RENAME(AVCodecContext *avctx, PSContext *ps, INTFLOAT L[2][38][64], INTFLOAT R[2][38][64], int top)
PS_INIT_VLC_STATIC \
INIT_VLC_STATIC(&vlc_ps[num], 9, ps_tmp[num].table_size / ps_tmp[num].elem_size,    \
ps_tmp[num].ps_bits, 1, 1,                                          \
ps_tmp[num].ps_codes, ps_tmp[num].elem_size, ps_tmp[num].elem_size, \
size);
PS_VLC_ROW \
AAC_RENAME(void)
AAC_RENAME(PSContext *ps)
