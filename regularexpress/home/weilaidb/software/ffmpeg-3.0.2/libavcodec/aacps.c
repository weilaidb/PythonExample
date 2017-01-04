#if USE_FIXED
#define PS_BASELINE 0
#define numQMFSlots 32
static const int8_t num_env_tab[2][4] = ;
static const int8_t nr_iidicc_par_tab[] = ;
static const int8_t nr_iidopd_par_tab[] = ;
enum ;
static const int huff_iid[] = ;
static VLC vlc_ps[10];
#define READ_PAR_DATA(PAR, OFFSET, MASK, ERR_CONDITION) \ \
static int read_ ## PAR ## _data(AVCodecContext *avctx, GetBitContext *gb, PSContext *ps, \
int8_t (*PAR)[PS_MAX_NR_IIDICC], int table_idx, int e, int dt) \
READ_PAR_DATA(iid,    huff_offset[table_idx],    0, FFABS(ps->iid_par[e][b]) > 7 + 8 * ps->iid_quant)
READ_PAR_DATA(icc,    huff_offset[table_idx],    0, ps->icc_par[e][b] > 7U)
READ_PAR_DATA(ipdopd,                      0, 0x07, 0)
static int ps_read_extension_data(GetBitContext *gb, PSContext *ps, int ps_extension_id)
static void ipdopd_reset(int8_t *ipd_hist, int8_t *opd_hist)
int AAC_RENAME(ff_ps_read_data)(AVCodecContext *avctx, GetBitContext *gb_host, PSContext *ps, int bits_left)
static void hybrid2_re(INTFLOAT (*in)[2], INTFLOAT (*out)[32][2], const INTFLOAT filter[8], int len, int reverse)
static void hybrid6_cx(PSDSPContext *dsp, INTFLOAT (*in)[2], INTFLOAT (*out)[32][2],
TABLE_CONST INTFLOAT (*filter)[8][2], int len)
static void hybrid4_8_12_cx(PSDSPContext *dsp,
INTFLOAT (*in)[2], INTFLOAT (*out)[32][2],
TABLE_CONST INTFLOAT (*filter)[8][2], int N, int len)
static void hybrid_analysis(PSDSPContext *dsp, INTFLOAT out[91][32][2],
INTFLOAT in[5][44][2], INTFLOAT L[2][38][64],
int is34, int len)
static void hybrid_synthesis(PSDSPContext *dsp, INTFLOAT out[2][38][64],
INTFLOAT in[91][32][2], int is34, int len)
#define DECAY_SLOPE      Q30(0.05f)
static const int   NR_PAR_BANDS[]      = ;
static const int   NR_IPDOPD_BANDS[]   = ;
static const int   NR_BANDS[]          = ;
static const int   DECAY_CUTOFF[]      = ;
static const int   NR_ALLPASS_BANDS[]  = ;
static const int   SHORT_DELAY_BAND[]  = ;
static void map_idx_10_to_20(int8_t *par_mapped, const int8_t *par, int full)
static void map_idx_34_to_20(int8_t *par_mapped, const int8_t *par, int full)
static void map_val_34_to_20(INTFLOAT par[PS_MAX_NR_IIDICC])
static void map_idx_10_to_34(int8_t *par_mapped, const int8_t *par, int full)
static void map_idx_20_to_34(int8_t *par_mapped, const int8_t *par, int full)
static void map_val_20_to_34(INTFLOAT par[PS_MAX_NR_IIDICC])
static void decorrelation(PSContext *ps, INTFLOAT (*out)[32][2], const INTFLOAT (*s)[32][2], int is34)
static void remap34(int8_t (**p_par_mapped)[PS_MAX_NR_IIDICC],
int8_t           (*par)[PS_MAX_NR_IIDICC],
int num_par, int num_env, int full)
static void remap20(int8_t (**p_par_mapped)[PS_MAX_NR_IIDICC],
int8_t           (*par)[PS_MAX_NR_IIDICC],
int num_par, int num_env, int full)
static void stereo_processing(PSContext *ps, INTFLOAT (*l)[32][2], INTFLOAT (*r)[32][2], int is34)
int AAC_RENAME(ff_ps_apply)(AVCodecContext *avctx, PSContext *ps, INTFLOAT L[2][38][64], INTFLOAT R[2][38][64], int top)
#define PS_INIT_VLC_STATIC(num, size) \
INIT_VLC_STATIC(&vlc_ps[num], 9, ps_tmp[num].table_size / ps_tmp[num].elem_size,    \
ps_tmp[num].ps_bits, 1, 1,                                          \
ps_tmp[num].ps_codes, ps_tmp[num].elem_size, ps_tmp[num].elem_size, \
size);
#define PS_VLC_ROW(name) \
av_cold void AAC_RENAME(ff_ps_init)(void)
av_cold void AAC_RENAME(ff_ps_ctx_init)(PSContext *ps)
