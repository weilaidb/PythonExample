#define HDMI_SYSTEM_CTRL			0x00
#define HDMI_L_R_DATA_SWAP_CTRL_RPKT		0x01
#define HDMI_20_BIT_N_FOR_AUDIO_RPKT_15_8	0x02
#define HDMI_20_BIT_N_FOR_AUDIO_RPKT_7_0	0x03
#define HDMI_SPDIF_AUDIO_SAMP_FREQ_CTS		0x04
#define HDMI_INTERNAL_CTS_15_8			0x05
#define HDMI_INTERNAL_CTS_7_0			0x06
#define HDMI_EXTERNAL_CTS_19_16			0x07
#define HDMI_EXTERNAL_CTS_15_8			0x08
#define HDMI_EXTERNAL_CTS_7_0			0x09
#define HDMI_AUDIO_SETTING_1			0x0A
#define HDMI_AUDIO_SETTING_2			0x0B
#define HDMI_I2S_AUDIO_SET			0x0C
#define HDMI_DSD_AUDIO_SET			0x0D
#define HDMI_DEBUG_MONITOR_1			0x0E
#define HDMI_DEBUG_MONITOR_2			0x0F
#define HDMI_I2S_INPUT_PIN_SWAP			0x10
#define HDMI_AUDIO_STATUS_BITS_SETTING_1	0x11
#define HDMI_AUDIO_STATUS_BITS_SETTING_2	0x12
#define HDMI_CATEGORY_CODE			0x13
#define HDMI_SOURCE_NUM_AUDIO_WORD_LEN		0x14
#define HDMI_AUDIO_VIDEO_SETTING_1		0x15
#define HDMI_VIDEO_SETTING_1			0x16
#define HDMI_DEEP_COLOR_MODES			0x17
#define HDMI_COLOR_SPACE_CONVERSION_PARAMETERS	0x18
#define HDMI_EXTERNAL_VIDEO_PARAM_SETTINGS	0x30
#define HDMI_EXTERNAL_H_TOTAL_7_0		0x31
#define HDMI_EXTERNAL_H_TOTAL_11_8		0x32
#define HDMI_EXTERNAL_H_BLANK_7_0		0x33
#define HDMI_EXTERNAL_H_BLANK_9_8		0x34
#define HDMI_EXTERNAL_H_DELAY_7_0		0x35
#define HDMI_EXTERNAL_H_DELAY_9_8		0x36
#define HDMI_EXTERNAL_H_DURATION_7_0		0x37
#define HDMI_EXTERNAL_H_DURATION_9_8		0x38
#define HDMI_EXTERNAL_V_TOTAL_7_0		0x39
#define HDMI_EXTERNAL_V_TOTAL_9_8		0x3A
#define HDMI_AUDIO_VIDEO_SETTING_2		0x3B
#define HDMI_EXTERNAL_V_BLANK			0x3D
#define HDMI_EXTERNAL_V_DELAY			0x3E
#define HDMI_EXTERNAL_V_DURATION		0x3F
#define HDMI_CTRL_PKT_MANUAL_SEND_CONTROL	0x40
#define HDMI_CTRL_PKT_AUTO_SEND			0x41
#define HDMI_AUTO_CHECKSUM_OPTION		0x42
#define HDMI_VIDEO_SETTING_2			0x45
#define HDMI_OUTPUT_OPTION			0x46
#define HDMI_SLIPHDMIT_PARAM_OPTION		0x51
#define HDMI_HSYNC_PMENT_AT_EMB_7_0		0x52
#define HDMI_HSYNC_PMENT_AT_EMB_15_8		0x53
#define HDMI_VSYNC_PMENT_AT_EMB_7_0		0x54
#define HDMI_VSYNC_PMENT_AT_EMB_14_8		0x55
#define HDMI_SLIPHDMIT_PARAM_SETTINGS_1		0x56
#define HDMI_SLIPHDMIT_PARAM_SETTINGS_2		0x57
#define HDMI_SLIPHDMIT_PARAM_SETTINGS_3		0x58
#define HDMI_SLIPHDMIT_PARAM_SETTINGS_5		0x59
#define HDMI_SLIPHDMIT_PARAM_SETTINGS_6		0x5A
#define HDMI_SLIPHDMIT_PARAM_SETTINGS_7		0x5B
#define HDMI_SLIPHDMIT_PARAM_SETTINGS_8		0x5C
#define HDMI_SLIPHDMIT_PARAM_SETTINGS_9		0x5D
#define HDMI_SLIPHDMIT_PARAM_SETTINGS_10	0x5E
#define HDMI_CTRL_PKT_BUF_INDEX			0x5F
#define HDMI_CTRL_PKT_BUF_ACCESS_HB0		0x60
#define HDMI_CTRL_PKT_BUF_ACCESS_HB1		0x61
#define HDMI_CTRL_PKT_BUF_ACCESS_HB2		0x62
#define HDMI_CTRL_PKT_BUF_ACCESS_PB0		0x63
#define HDMI_CTRL_PKT_BUF_ACCESS_PB1		0x64
#define HDMI_CTRL_PKT_BUF_ACCESS_PB2		0x65
#define HDMI_CTRL_PKT_BUF_ACCESS_PB3		0x66
#define HDMI_CTRL_PKT_BUF_ACCESS_PB4		0x67
#define HDMI_CTRL_PKT_BUF_ACCESS_PB5		0x68
#define HDMI_CTRL_PKT_BUF_ACCESS_PB6		0x69
#define HDMI_CTRL_PKT_BUF_ACCESS_PB7		0x6A
#define HDMI_CTRL_PKT_BUF_ACCESS_PB8		0x6B
#define HDMI_CTRL_PKT_BUF_ACCESS_PB9		0x6C
#define HDMI_CTRL_PKT_BUF_ACCESS_PB10		0x6D
#define HDMI_CTRL_PKT_BUF_ACCESS_PB11		0x6E
#define HDMI_CTRL_PKT_BUF_ACCESS_PB12		0x6F
#define HDMI_CTRL_PKT_BUF_ACCESS_PB13		0x70
#define HDMI_CTRL_PKT_BUF_ACCESS_PB14		0x71
#define HDMI_CTRL_PKT_BUF_ACCESS_PB15		0x72
#define HDMI_CTRL_PKT_BUF_ACCESS_PB16		0x73
#define HDMI_CTRL_PKT_BUF_ACCESS_PB17		0x74
#define HDMI_CTRL_PKT_BUF_ACCESS_PB18		0x75
#define HDMI_CTRL_PKT_BUF_ACCESS_PB19		0x76
#define HDMI_CTRL_PKT_BUF_ACCESS_PB20		0x77
#define HDMI_CTRL_PKT_BUF_ACCESS_PB21		0x78
#define HDMI_CTRL_PKT_BUF_ACCESS_PB22		0x79
#define HDMI_CTRL_PKT_BUF_ACCESS_PB23		0x7A
#define HDMI_CTRL_PKT_BUF_ACCESS_PB24		0x7B
#define HDMI_CTRL_PKT_BUF_ACCESS_PB25		0x7C
#define HDMI_CTRL_PKT_BUF_ACCESS_PB26		0x7D
#define HDMI_CTRL_PKT_BUF_ACCESS_PB27		0x7E
#define HDMI_EDID_KSV_FIFO_ACCESS_WINDOW	0x80
#define HDMI_DDC_BUS_ACCESS_FREQ_CTRL_7_0	0x81
#define HDMI_DDC_BUS_ACCESS_FREQ_CTRL_15_8	0x82
#define HDMI_INTERRUPT_MASK_1			0x92
#define HDMI_INTERRUPT_MASK_2			0x93
#define HDMI_INTERRUPT_STATUS_1			0x94
#define HDMI_INTERRUPT_STATUS_2			0x95
#define HDMI_INTERRUPT_MASK_3			0x96
#define HDMI_INTERRUPT_MASK_4			0x97
#define HDMI_INTERRUPT_STATUS_3			0x98
#define HDMI_INTERRUPT_STATUS_4			0x99
#define HDMI_SOFTWARE_HDCP_CONTROL_1		0x9A
#define HDMI_FRAME_COUNTER			0x9C
#define HDMI_FRAME_COUNTER_FOR_RI_CHECK		0x9D
#define HDMI_HDCP_CONTROL			0xAF
#define HDMI_RI_FRAME_COUNT_REGISTER		0xB2
#define HDMI_DDC_BUS_CONTROL			0xB7
#define HDMI_HDCP_STATUS			0xB8
#define HDMI_SHA0				0xB9
#define HDMI_SHA1				0xBA
#define HDMI_SHA2				0xBB
#define HDMI_SHA3				0xBC
#define HDMI_SHA4				0xBD
#define HDMI_BCAPS_READ				0xBE
#define HDMI_AKSV_BKSV_7_0_MONITOR		0xBF
#define HDMI_AKSV_BKSV_15_8_MONITOR		0xC0
#define HDMI_AKSV_BKSV_23_16_MONITOR		0xC1
#define HDMI_AKSV_BKSV_31_24_MONITOR		0xC2
#define HDMI_AKSV_BKSV_39_32_MONITOR		0xC3
#define HDMI_EDID_SEGMENT_POINTER		0xC4
#define HDMI_EDID_WORD_ADDRESS			0xC5
#define HDMI_EDID_DATA_FIFO_ADDRESS		0xC6
#define HDMI_NUM_OF_HDMI_DEVICES		0xC7
#define HDMI_HDCP_ERROR_CODE			0xC8
#define HDMI_100MS_TIMER_SET			0xC9
#define HDMI_5SEC_TIMER_SET			0xCA
#define HDMI_RI_READ_COUNT			0xCB
#define HDMI_AN_SEED				0xCC
#define HDMI_MAX_NUM_OF_RCIVRS_ALLOWED		0xCD
#define HDMI_HDCP_MEMORY_ACCESS_CONTROL_1	0xCE
#define HDMI_HDCP_MEMORY_ACCESS_CONTROL_2	0xCF
#define HDMI_HDCP_CONTROL_2			0xD0
#define HDMI_HDCP_KEY_MEMORY_CONTROL		0xD2
#define HDMI_COLOR_SPACE_CONV_CONFIG_1		0xD3
#define HDMI_VIDEO_SETTING_3			0xD4
#define HDMI_RI_7_0				0xD5
#define HDMI_RI_15_8				0xD6
#define HDMI_PJ					0xD7
#define HDMI_SHA_RD				0xD8
#define HDMI_RI_7_0_SAVED			0xD9
#define HDMI_RI_15_8_SAVED			0xDA
#define HDMI_PJ_SAVED				0xDB
#define HDMI_NUM_OF_DEVICES			0xDC
#define HDMI_HOT_PLUG_MSENS_STATUS		0xDF
#define HDMI_BCAPS_WRITE			0xE0
#define HDMI_BSTAT_7_0				0xE1
#define HDMI_BSTAT_15_8				0xE2
#define HDMI_BKSV_7_0				0xE3
#define HDMI_BKSV_15_8				0xE4
#define HDMI_BKSV_23_16				0xE5
#define HDMI_BKSV_31_24				0xE6
#define HDMI_BKSV_39_32				0xE7
#define HDMI_AN_7_0				0xE8
#define HDMI_AN_15_8				0xE9
#define HDMI_AN_23_16				0xEA
#define HDMI_AN_31_24				0xEB
#define HDMI_AN_39_32				0xEC
#define HDMI_AN_47_40				0xED
#define HDMI_AN_55_48				0xEE
#define HDMI_AN_63_56				0xEF
#define HDMI_PRODUCT_ID				0xF0
#define HDMI_REVISION_ID			0xF1
#define HDMI_TEST_MODE				0xFE
enum hotplug_state ;
struct sh_hdmi ;
static void hdmi_write(struct sh_hdmi *hdmi, u8 data, u8 reg)
static u8 hdmi_read(struct sh_hdmi *hdmi, u8 reg)
static unsigned int sh_hdmi_snd_read(struct snd_soc_codec *codec,
unsigned int reg)
static int sh_hdmi_snd_write(struct snd_soc_codec *codec,
unsigned int reg,
unsigned int value)
static struct snd_soc_dai_driver sh_hdmi_dai = ;
static int sh_hdmi_snd_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_sh_hdmi = ;
static void sh_hdmi_external_video_param(struct sh_hdmi *hdmi)
static void sh_hdmi_video_config(struct sh_hdmi *hdmi)
static void sh_hdmi_audio_config(struct sh_hdmi *hdmi)
static void sh_hdmi_phy_config(struct sh_hdmi *hdmi)
static void sh_hdmi_avi_infoframe_setup(struct sh_hdmi *hdmi)
static void sh_hdmi_audio_infoframe_setup(struct sh_hdmi *hdmi)
static void sh_hdmi_configure(struct sh_hdmi *hdmi)
static unsigned long sh_hdmi_rate_error(struct sh_hdmi *hdmi,
const struct fb_videomode *mode,
unsigned long *hdmi_rate, unsigned long *parent_rate)
static int sh_hdmi_read_edid(struct sh_hdmi *hdmi, unsigned long *hdmi_rate,
unsigned long *parent_rate)
static irqreturn_t sh_hdmi_hotplug(int irq, void *dev_id)
static void sh_hdmi_display_on(void *arg, struct fb_info *info)
static void sh_hdmi_display_off(void *arg)
static bool sh_hdmi_must_reconfigure(struct sh_hdmi *hdmi)
static long sh_hdmi_clk_configure(struct sh_hdmi *hdmi, unsigned long hdmi_rate,
unsigned long parent_rate)
static void sh_hdmi_edid_work_fn(struct work_struct *work)
static int sh_hdmi_notify(struct notifier_block *nb,
unsigned long action, void *data)
static int __init sh_hdmi_probe(struct platform_device *pdev)
static int __exit sh_hdmi_remove(struct platform_device *pdev)
static struct platform_driver sh_hdmi_driver = ;
static int __init sh_hdmi_init(void)
module_init(sh_hdmi_init);
static void __exit sh_hdmi_exit(void)
module_exit(sh_hdmi_exit);
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_DESCRIPTION("SuperH / ARM-shmobile HDMI driver");
MODULE_LICENSE("GPL v2");
