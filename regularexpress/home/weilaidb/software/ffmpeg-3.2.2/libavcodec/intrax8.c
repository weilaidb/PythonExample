#define MAX_TABLE_DEPTH(table_bits, max_bits) \
((max_bits + table_bits - 1) / table_bits)
#define DC_VLC_BITS 9
#define AC_VLC_BITS 9
#define OR_VLC_BITS 7
#define DC_VLC_MTD MAX_TABLE_DEPTH(DC_VLC_BITS, MAX_DC_VLC_BITS)
#define AC_VLC_MTD MAX_TABLE_DEPTH(AC_VLC_BITS, MAX_AC_VLC_BITS)
#define OR_VLC_MTD MAX_TABLE_DEPTH(OR_VLC_BITS, MAX_OR_VLC_BITS)
static VLC j_ac_vlc[2][2][8];
static VLC j_dc_vlc[2][8];
static VLC j_orient_vlc[2][4];
static av_cold int x8_vlc_init(void)
static void x8_reset_vlc_tables(IntraX8Context *w)
static inline void x8_select_ac_table(IntraX8Context *const w, int mode)
static inline int x8_get_orient_vlc(IntraX8Context *w)
#define extra_bits(eb)  (eb)
#define extra_run       (0xFF << 8)
#define extra_level     (0x00 << 8)
#define run_offset(r)   ((r) << 16)
#define level_offset(l) ((l) << 24)
static const uint32_t ac_decode_table[] = ;
#undef extra_bits
#undef extra_run
#undef extra_level
#undef run_offset
#undef level_offset
static void x8_get_ac_rlf(IntraX8Context *const w, const int mode,
int *const run, int *const level, int *const final)
static const uint8_t dc_index_offset[] = ;
static int x8_get_dc_rlf(IntraX8Context *const w, const int mode,
int *const level, int *const final)
static int x8_setup_spatial_predictor(IntraX8Context *const w, const int chroma)
static void x8_update_predictions(IntraX8Context *const w, const int orient,
const int est_run)
static void x8_get_prediction_chroma(IntraX8Context *const w)
static void x8_get_prediction(IntraX8Context *const w)
static void x8_ac_compensation(IntraX8Context *const w, const int direction,
const int dc_level)
static void dsp_x8_put_solidcolor(const uint8_t pix, uint8_t *dst,
const int linesize)
static const int16_t quant_table[64] = ;
static int x8_decode_intra_mb(IntraX8Context *const w, const int chroma)
static void x8_init_block_index(IntraX8Context *w, AVFrame *frame)
av_cold int ff_intrax8_common_init(AVCodecContext *avctx,
IntraX8Context *w, IDCTDSPContext *idsp,
int16_t (*block)[64],
int block_last_index[12],
int mb_width, int mb_height)
av_cold void ff_intrax8_common_end(IntraX8Context *w)
int ff_intrax8_decode_picture(IntraX8Context *const w, Picture *pict,
GetBitContext *gb, int *mb_x, int *mb_y,
int dquant, int quant_offset,
int loopfilter, int lowdelay)
