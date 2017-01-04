#define AVCODEC_QDM2_TABLEGEN_H
#define SOFTCLIP_THRESHOLD 27600
#define HARDCLIP_THRESHOLD 35716
#if CONFIG_HARDCODED_TABLES
#define softclip_table_init()
#define rnd_table_init()
#define init_noise_samples()
#define qdm2_init_vlc()
static uint16_t softclip_table[HARDCLIP_THRESHOLD - SOFTCLIP_THRESHOLD + 1];
static float noise_table[4096 + 20];
static uint8_t random_dequant_index[256][5];
static uint8_t random_dequant_type24[128][3];
static float noise_samples[128];
static av_cold void softclip_table_init(void)
static av_cold void rnd_table_init(void)
static av_cold void init_noise_samples(void)
static VLC vlc_tab_level;
static VLC vlc_tab_diff;
static VLC vlc_tab_run;
static VLC fft_level_exp_alt_vlc;
static VLC fft_level_exp_vlc;
static VLC fft_stereo_exp_vlc;
static VLC fft_stereo_phase_vlc;
static VLC vlc_tab_tone_level_idx_hi1;
static VLC vlc_tab_tone_level_idx_mid;
static VLC vlc_tab_tone_level_idx_hi2;
static VLC vlc_tab_type30;
static VLC vlc_tab_type34;
static VLC vlc_tab_fft_tone_offset[5];
static const uint16_t qdm2_vlc_offs[] = ;
static VLC_TYPE qdm2_table[3838][2];
static av_cold void qdm2_init_vlc(void)
