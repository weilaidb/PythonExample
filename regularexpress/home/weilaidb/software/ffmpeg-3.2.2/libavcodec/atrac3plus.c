static VLC_TYPE tables_data[154276][2];
static VLC wl_vlc_tabs[4];
static VLC sf_vlc_tabs[8];
static VLC ct_vlc_tabs[4];
static VLC spec_vlc_tabs[112];
static VLC gain_vlc_tabs[11];
static VLC tone_vlc_tabs[7];
static av_cold void build_canonical_huff(const uint8_t *cb, const uint8_t *xlat,
int *tab_offset, VLC *out_vlc)
av_cold void ff_atrac3p_init_vlcs(void)
static int num_coded_units(GetBitContext *gb, Atrac3pChanParams *chan,
Atrac3pChanUnitCtx *ctx, AVCodecContext *avctx)
static int add_wordlen_weights(Atrac3pChanUnitCtx *ctx,
Atrac3pChanParams *chan, int wtab_idx,
AVCodecContext *avctx)
static int subtract_sf_weights(Atrac3pChanUnitCtx *ctx,
Atrac3pChanParams *chan, int wtab_idx,
AVCodecContext *avctx)
static inline void unpack_vq_shape(int start_val, const int8_t *shape_vec,
int *dst, int num_values)
#define UNPACK_SF_VQ_SHAPE(gb, dst, num_vals)                            \
start_val = get_bits((gb), 6);                                       \
unpack_vq_shape(start_val, &atrac3p_sf_shapes[get_bits((gb), 6)][0], \
(dst), (num_vals))
static int decode_channel_wordlen(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, AVCodecContext *avctx)
static int decode_channel_sf_idx(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, AVCodecContext *avctx)
static int decode_quant_wordlen(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int num_channels, AVCodecContext *avctx)
static int decode_scale_factors(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int num_channels, AVCodecContext *avctx)
static int get_num_ct_values(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
AVCodecContext *avctx)
#define DEC_CT_IDX_COMMON(OP)                                           \
num_vals = get_num_ct_values(gb, ctx, avctx);                       \
if (num_vals < 0)                                                   \
return num_vals;                                                \
\
for (i = 0; i < num_vals; i++)
#define CODING_DIRECT get_bits(gb, num_bits)
#define CODING_VLC get_vlc2(gb, vlc_tab->table, vlc_tab->bits, 1)
#define CODING_VLC_DELTA                                                \
(!i) ? CODING_VLC                                                   \
: (pred + get_vlc2(gb, delta_vlc->table,                       \
delta_vlc->bits, 1)) & mask;                \
pred = chan->qu_tab_idx[i]
#define CODING_VLC_DIFF                                                 \
(ref_chan->qu_tab_idx[i] +                                          \
get_vlc2(gb, vlc_tab->table, vlc_tab->bits, 1)) & mask
static int decode_channel_code_tab(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, AVCodecContext *avctx)
static int decode_code_table_indexes(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int num_channels, AVCodecContext *avctx)
static void decode_qu_spectra(GetBitContext *gb, const Atrac3pSpecCodeTab *tab,
VLC *vlc_tab, int16_t *out, const int num_specs)
static void decode_spectrum(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int num_channels, AVCodecContext *avctx)
static int get_subband_flags(GetBitContext *gb, uint8_t *out, int num_flags)
static void decode_window_shape(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int num_channels)
static int decode_gainc_npoints(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, int coded_subbands)
static inline void gainc_level_mode3s(AtracGainInfo *dst, AtracGainInfo *ref)
static inline void gainc_level_mode1m(GetBitContext *gb,
Atrac3pChanUnitCtx *ctx,
AtracGainInfo *dst)
static int decode_gainc_levels(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, int coded_subbands)
static inline void gainc_loc_mode0(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
AtracGainInfo *dst, int pos)
static inline void gainc_loc_mode1(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
AtracGainInfo *dst)
static int decode_gainc_loc_codes(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, int coded_subbands,
AVCodecContext *avctx)
static int decode_gainc_data(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int num_channels, AVCodecContext *avctx)
static void decode_tones_envelope(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, int band_has_tones[])
static int decode_band_numwavs(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, int band_has_tones[],
AVCodecContext *avctx)
static void decode_tones_frequency(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, int band_has_tones[])
static void decode_tones_amplitude(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, int band_has_tones[])
static void decode_tones_phase(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int ch_num, int band_has_tones[])
static int decode_tones_info(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int num_channels, AVCodecContext *avctx)
int ff_atrac3p_decode_channel_unit(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int num_channels, AVCodecContext *avctx)
