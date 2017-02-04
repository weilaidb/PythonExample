static VLC vlc_scalefactors;
static VLC vlc_spectral[11];
output_configure;
#define overread_err
count_channels[3], int tags)
che_configure
frame_configure_elements
struct elem_to_channel ;
assign_pair[3], int offset, uint64_t left,
uint64_t right, int pos)
count_paired_channels[3], int tags, int pos,
int *current)
sniff_channel_order[3], int tags)
push_output_configuration
pop_output_configuration
output_configure
flush
set_default_channel_config[3],
int *tags,
int channel_config)
*get_che
decode_channel_map
decode_pce[3],
GetBitContext *gb)
decode_ga_specific_config
decode_eld_specific_config
decode_audio_specific_config
lcg_random
reset_all_predictors
static int sample_rate_idx (int rate)
reset_predictor_group
AAC_INIT_VLC_STATIC                                     \
INIT_VLC_STATIC(&vlc_spectral[num], 8, ff_aac_spectral_sizes[num],     \
ff_aac_spectral_bits[num], sizeof(ff_aac_spectral_bits[num][0]),  \
sizeof(ff_aac_spectral_bits[num][0]),  \
ff_aac_spectral_codes[num], sizeof(ff_aac_spectral_codes[num][0]), \
sizeof(ff_aac_spectral_codes[num][0]), \
size);
aacdec_init;
aac_static_table_init
static AVOnce aac_table_init = AV_ONCE_INIT;
aac_decode_init
skip_data_stream_element
decode_prediction
decode_ltp
decode_ics_info
decode_band_types
decode_scalefactors
decode_pulses
decode_tns
decode_mid_side_stereo
decode_spectrum_and_dequant
apply_prediction
decode_ics
apply_mid_side_stereo
{
const IndividualChannelStream *ics = &cpe->ch[0].ics;
INTFLOAT *ch0 = cpe->ch[0].coeffs;
INTFLOAT *ch1 = cpe->ch[1].coeffs;
int g, i, group, idx = 0;
const uint16_t *offsets = ics->swb_offset;
for (g = 0; g < ics->num_window_groups; g++)
apply_intensity_stereo
decode_cpe
static const float cce_scale[] = ;
decode_cce
decode_drc_channel_exclusions
decode_dynamic_range
decode_fill
decode_extension_payload
apply_tns
windowing_and_mdct_ltp
apply_ltp
update_ltp
imdct_and_windowing
imdct_and_windowing_ld
imdct_and_windowing_eld
apply_channel_coupling(AACContext *ac, SingleChannelElement *target, ChannelElement *cce, int index))
spectral_to_sample
parse_adts_frame_header
aac_decode_er_frame
aac_decode_frame_int
aac_decode_frame
aac_decode_close
aacdec_init
#define AACDEC_FLAGS AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM
static const AVOption options[] = ;
static const AVClass aac_decoder_class = ;
