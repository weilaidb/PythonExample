#define AVCODEC_AACENCTAB_H
#define CB_TOT 12
#define CB_TOT_ALL 15
#define AAC_MAX_CHANNELS 8
extern const uint8_t *ff_aac_swb_size_1024[];
extern const int      ff_aac_swb_size_1024_len;
extern const uint8_t *ff_aac_swb_size_128[];
extern const int      ff_aac_swb_size_128_len;
static const uint8_t aac_chan_configs[AAC_MAX_CHANNELS][6] = ;
static const uint8_t aac_chan_maps[AAC_MAX_CHANNELS][AAC_MAX_CHANNELS] = ;
static const int mpeg4audio_sample_rates[16] = ;
static const uint8_t run_value_bits_long[64] = ;
static const uint8_t run_value_bits_short[16] = ;
static const uint8_t tns_min_sfb_short[16] = ;
static const uint8_t tns_min_sfb_long[16] = ;
static const uint8_t * const tns_min_sfb[2] = ;
static const uint8_t * const run_value_bits[2] = ;
static const uint8_t aac_cb_out_map[CB_TOT_ALL]  = ;
static const uint8_t aac_cb_in_map[CB_TOT_ALL+1] = ;
static const uint8_t aac_cb_range [12] = ;
static const uint8_t aac_cb_maxval[12] = ;
static const unsigned char aac_maxval_cb[] = ;
static const int aacenc_profiles[] = ;
