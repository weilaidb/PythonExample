static VLC_TYPE tables_data[154276][2];
static VLC wl_vlc_tabs[4];
static VLC sf_vlc_tabs[8];
static VLC ct_vlc_tabs[4];
static VLC spec_vlc_tabs[112];
static VLC gain_vlc_tabs[11];
static VLC tone_vlc_tabs[7];
build_canonical_huff
ff_atrac3p_init_vlcs
num_coded_units
add_wordlen_weights
subtract_sf_weights
unpack_vq_shape
UNPACK_SF_VQ_SHAPE                            \
start_val = get_bits((gb), 6);                                       \
unpack_vq_shape(start_val, &atrac3p_sf_shapes[get_bits((gb), 6)][0], \
(dst), (num_vals))
decode_channel_wordlen
decode_channel_sf_idx
decode_quant_wordlen
decode_scale_factors
get_num_ct_values
DEC_CT_IDX_COMMON                                           \
num_vals = get_num_ct_values(gb, ctx, avctx);                       \
if (num_vals < 0)                                                   \
return num_vals;                                                \
\
for (i = 0; i < num_vals; i++)
get_bits
get_vlc2
#define CODING_VLC_DELTA                                                \
(!i) ? CODING_VLC                                                   \
: (pred + get_vlc2(gb, delta_vlc->table,                       \
delta_vlc->bits, 1)) & mask;                \
pred = chan->qu_tab_idx[i]
#define CODING_VLC_DIFF                                                 \
(ref_chan->qu_tab_idx[i] +                                          \
get_vlc2(gb, vlc_tab->table, vlc_tab->bits, 1)) & mask
decode_channel_code_tab
decode_code_table_indexes
decode_qu_spectra
decode_spectrum
get_subband_flags
decode_window_shape
decode_gainc_npoints
gainc_level_mode3s
gainc_level_mode1m
decode_gainc_levels
gainc_loc_mode0
gainc_loc_mode1
decode_gainc_loc_codes
decode_gainc_data
decode_tones_envelope
decode_band_numwavs
decode_tones_frequency
decode_tones_amplitude
decode_tones_phase
decode_tones_info
ff_atrac3p_decode_channel_unit
