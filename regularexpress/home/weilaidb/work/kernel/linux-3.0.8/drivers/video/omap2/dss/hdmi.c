#define DSS_SUBSYS_NAME "HDMI"
#if defined(CONFIG_SND_OMAP_SOC_OMAP4_HDMI) || \
defined(CONFIG_SND_OMAP_SOC_OMAP4_HDMI_MODULE)
static struct  hdmi;
static const struct hdmi_timings cea_vesa_timings[OMAP_HDMI_TIMINGS_NB] = ;
static const int code_index[OMAP_HDMI_TIMINGS_NB] = ;
static const int code_cea[39] = ;
static const int code_vesa[85] = ;
static const u8 edid_header[8] = ;
static inline void hdmi_write_reg(const struct hdmi_reg idx, u32 val)
static inline u32 hdmi_read_reg(const struct hdmi_reg idx)
static inline int hdmi_wait_for_bit_change(const struct hdmi_reg idx,
int b2, int b1, u32 val)
int hdmi_init_display(struct omap_dss_device *dssdev)
static int hdmi_pll_init(enum hdmi_clk_refsel refsel, int dcofreq,
struct hdmi_pll_info *fmt, u16 sd)
static int hdmi_set_phy_pwr(enum hdmi_phy_pwr val)
static int hdmi_set_pll_pwr(enum hdmi_pll_pwr val)
static int hdmi_pll_reset(void)
static int hdmi_phy_init(void)
static int hdmi_wait_softreset(void)
static int hdmi_pll_program(struct hdmi_pll_info *fmt)
static void hdmi_phy_off(void)
static int hdmi_core_ddc_edid(u8 *pedid, int ext)
static int read_edid(u8 *pedid, u16 max_length)
static int get_timings_index(void)
static struct hdmi_cm hdmi_get_code(struct omap_video_timings *timing)
static void get_horz_vert_timing_info(int current_descriptor_addrs, u8 *edid ,
struct omap_video_timings *timings)
static void get_edid_timing_data(u8 *edid)
static void hdmi_read_edid(struct omap_video_timings *dp)
static void hdmi_core_init(struct hdmi_core_video_config *video_cfg,
struct hdmi_core_infoframe_avi *avi_cfg,
struct hdmi_core_packet_enable_repeat *repeat_cfg)
static void hdmi_core_powerdown_disable(void)
static void hdmi_core_swreset_release(void)
static void hdmi_core_swreset_assert(void)
static void hdmi_core_video_config(struct hdmi_core_video_config *cfg)
static void hdmi_core_aux_infoframe_avi_config(
struct hdmi_core_infoframe_avi info_avi)
static void hdmi_core_av_packet_config(
struct hdmi_core_packet_enable_repeat repeat_cfg)
static void hdmi_wp_init(struct omap_video_timings *timings,
struct hdmi_video_format *video_fmt,
struct hdmi_video_interface *video_int)
static void hdmi_wp_video_start(bool start)
static void hdmi_wp_video_init_format(struct hdmi_video_format *video_fmt,
struct omap_video_timings *timings, struct hdmi_config *param)
static void hdmi_wp_video_config_format(
struct hdmi_video_format *video_fmt)
static void hdmi_wp_video_config_interface(
struct hdmi_video_interface *video_int)
static void hdmi_wp_video_config_timing(
struct omap_video_timings *timings)
static void hdmi_basic_configure(struct hdmi_config *cfg)
static void update_hdmi_timings(struct hdmi_config *cfg,
struct omap_video_timings *timings, int code)
static void hdmi_compute_pll(struct omap_dss_device *dssdev, int phy,
struct hdmi_pll_info *pi)
static void hdmi_enable_clocks(int enable)
static int hdmi_power_on(struct omap_dss_device *dssdev)
static void hdmi_power_off(struct omap_dss_device *dssdev)
int omapdss_hdmi_display_check_timing(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
void omapdss_hdmi_display_set_timing(struct omap_dss_device *dssdev)
int omapdss_hdmi_display_enable(struct omap_dss_device *dssdev)
void omapdss_hdmi_display_disable(struct omap_dss_device *dssdev)
#if defined(CONFIG_SND_OMAP_SOC_OMAP4_HDMI) || \
defined(CONFIG_SND_OMAP_SOC_OMAP4_HDMI_MODULE)
static void hdmi_wp_audio_config_format(
struct hdmi_audio_format *aud_fmt)
static void hdmi_wp_audio_config_dma(struct hdmi_audio_dma *aud_dma)
static void hdmi_core_audio_config(struct hdmi_core_audio_config *cfg)
static void hdmi_core_audio_infoframe_config(
struct hdmi_core_infoframe_audio *info_aud)
static int hdmi_config_audio_acr(u32 sample_freq, u32 *n, u32 *cts)
static int hdmi_audio_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int hdmi_audio_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int hdmi_audio_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static struct snd_soc_codec_driver hdmi_audio_codec_drv = ;
static struct snd_soc_dai_ops hdmi_audio_codec_ops = ;
static struct snd_soc_dai_driver hdmi_codec_dai_drv = ;
static int omapdss_hdmihw_probe(struct platform_device *pdev)
static int omapdss_hdmihw_remove(struct platform_device *pdev)
static struct platform_driver omapdss_hdmihw_driver = ;
int hdmi_init_platform_driver(void)
void hdmi_uninit_platform_driver(void)
