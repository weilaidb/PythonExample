#define _LOLA_H
#define DRVNAME	"snd-lola"
#define SFX	DRVNAME ": "
#define LOLA_BAR0_GCAP		0x00
#define LOLA_BAR0_VMIN		0x02
#define LOLA_BAR0_VMAJ		0x03
#define LOLA_BAR0_OUTPAY	0x04
#define LOLA_BAR0_INPAY		0x06
#define LOLA_BAR0_GCTL		0x08
#define LOLA_BAR0_WAKEEN	0x0c
#define LOLA_BAR0_STATESTS	0x0e
#define LOLA_BAR0_GSTS		0x10
#define LOLA_BAR0_OUTSTRMPAY	0x18
#define LOLA_BAR0_INSTRMPAY	0x1a
#define LOLA_BAR0_INTCTL	0x20
#define LOLA_BAR0_INTSTS	0x24
#define LOLA_BAR0_WALCLK	0x30
#define LOLA_BAR0_SSYNC		0x38
#define LOLA_BAR0_CORBLBASE	0x40
#define LOLA_BAR0_CORBUBASE	0x44
#define LOLA_BAR0_CORBWP	0x48
#define LOLA_BAR0_CORBRP	0x4a
#define LOLA_BAR0_CORBCTL	0x4c
#define LOLA_BAR0_CORBSTS	0x4d
#define LOLA_BAR0_CORBSIZE	0x4e
#define LOLA_BAR0_RIRBLBASE	0x50
#define LOLA_BAR0_RIRBUBASE	0x54
#define LOLA_BAR0_RIRBWP	0x58
#define LOLA_BAR0_RINTCNT	0x5a
#define LOLA_BAR0_RIRBCTL	0x5c
#define LOLA_BAR0_RIRBSTS	0x5d
#define LOLA_BAR0_RIRBSIZE	0x5e
#define LOLA_BAR0_ICW		0x60
#define LOLA_BAR0_IRR		0x64
#define LOLA_BAR0_ICS		0x68
#define LOLA_BAR0_DPLBASE	0x70
#define LOLA_BAR0_DPUBASE	0x74
#define LOLA_BAR0_SD0_OFFSET	0x80
#define LOLA_REG0_SD_CTL	0x00
#define LOLA_REG0_SD_STS	0x03
#define LOLA_REG0_SD_LPIB	0x04
#define LOLA_REG0_SD_CBL	0x08
#define LOLA_REG0_SD_LVI	0x0c
#define LOLA_REG0_SD_FIFOW	0x0e
#define LOLA_REG0_SD_FIFOSIZE	0x10
#define LOLA_REG0_SD_FORMAT	0x12
#define LOLA_REG0_SD_BDLPL	0x18
#define LOLA_REG0_SD_BDLPU	0x1c
#define LOLA_BAR1_FPGAVER	0x00
#define LOLA_BAR1_DEVER		0x04
#define LOLA_BAR1_UCBMV		0x08
#define LOLA_BAR1_JTAG		0x0c
#define LOLA_BAR1_UARTRX	0x10
#define LOLA_BAR1_UARTTX	0x14
#define LOLA_BAR1_UARTCR	0x18
#define LOLA_BAR1_NVRAMVER	0x1c
#define LOLA_BAR1_CTRLSPI	0x20
#define LOLA_BAR1_DSPI		0x24
#define LOLA_BAR1_AISPI		0x28
#define LOLA_BAR1_GRAN		0x2c
#define LOLA_BAR1_DINTCTL	0x80
#define LOLA_BAR1_DIINTCTL	0x84
#define LOLA_BAR1_DOINTCTL	0x88
#define LOLA_BAR1_LRC		0x90
#define LOLA_BAR1_DINTSTS	0x94
#define LOLA_BAR1_DIINTSTS	0x98
#define LOLA_BAR1_DOINTSTS	0x9c
#define LOLA_BAR1_DSD0_OFFSET	0xa0
#define LOLA_BAR1_DSD_SIZE	0x18
#define LOLA_BAR1_DSDnSTS       0x00
#define LOLA_BAR1_DSDnLPIB      0x04
#define LOLA_BAR1_DSDnCTL       0x08
#define LOLA_BAR1_DSDnLVI       0x0c
#define LOLA_BAR1_DSDnBDPL      0x10
#define LOLA_BAR1_DSDnBDPU      0x14
#define LOLA_BAR1_SSYNC		0x03e8
#define LOLA_BAR1_BOARD_CTRL	0x0f00
#define LOLA_BAR1_BOARD_MODE	0x0f02
#define LOLA_BAR1_SOURCE_GAIN_ENABLE		0x1000
#define LOLA_BAR1_DEST00_MIX_GAIN_ENABLE	0x1004
#define LOLA_BAR1_DEST31_MIX_GAIN_ENABLE	0x1080
#define LOLA_BAR1_SOURCE00_01_GAIN		0x1084
#define LOLA_BAR1_SOURCE30_31_GAIN		0x10c0
#define LOLA_BAR1_SOURCE_GAIN(src) \
(LOLA_BAR1_SOURCE00_01_GAIN + (src) * 2)
#define LOLA_BAR1_DEST00_MIX00_01_GAIN		0x10c4
#define LOLA_BAR1_DEST00_MIX30_31_GAIN		0x1100
#define LOLA_BAR1_DEST01_MIX00_01_GAIN		0x1104
#define LOLA_BAR1_DEST01_MIX30_31_GAIN		0x1140
#define LOLA_BAR1_DEST31_MIX00_01_GAIN		0x1884
#define LOLA_BAR1_DEST31_MIX30_31_GAIN		0x18c0
#define LOLA_BAR1_MIX_GAIN(dest, mix) \
(LOLA_BAR1_DEST00_MIX00_01_GAIN + (dest) * 0x40 + (mix) * 2)
#define LOLA_BAR1_ANALOG_CLIP_IN		0x18c4
#define LOLA_BAR1_PEAKMETERS_SOURCE00_01	0x18c8
#define LOLA_BAR1_PEAKMETERS_SOURCE30_31	0x1904
#define LOLA_BAR1_PEAKMETERS_SOURCE(src) \
(LOLA_BAR1_PEAKMETERS_SOURCE00_01 + (src) * 2)
#define LOLA_BAR1_PEAKMETERS_DEST00_01		0x1908
#define LOLA_BAR1_PEAKMETERS_DEST30_31		0x1944
#define LOLA_BAR1_PEAKMETERS_DEST(dest) \
(LOLA_BAR1_PEAKMETERS_DEST00_01 + (dest) * 2)
#define LOLA_BAR1_PEAKMETERS_AGC00_01		0x1948
#define LOLA_BAR1_PEAKMETERS_AGC14_15		0x1964
#define LOLA_BAR1_PEAKMETERS_AGC(x) \
(LOLA_BAR1_PEAKMETERS_AGC00_01 + (x) * 2)
#define LOLA_GCTL_RESET		(1 << 0)
#define LOLA_GCTL_UREN		(1 << 8)
#define LOLA_RBCTL_DMA_EN	0x02
#define LOLA_RBCTL_IRQ_EN	0x01
#define LOLA_RBRWP_CLR		0x8000
#define LOLA_RIRB_EX_UNSOL_EV	0x40000000
#define LOLA_RIRB_EX_ERROR	0x80000000
#define LOLA_CORB_INT_CMEI	0x01
#define LOLA_CORB_INT_MASK	LOLA_CORB_INT_CMEI
#define LOLA_RIRB_INT_RESPONSE	0x01
#define LOLA_RIRB_INT_OVERRUN	0x04
#define LOLA_RIRB_INT_MASK	(LOLA_RIRB_INT_RESPONSE | LOLA_RIRB_INT_OVERRUN)
#define LOLA_DINT_GLOBAL	0x80000000
#define LOLA_DINT_CTRL		0x40000000
#define LOLA_DINT_FIFOERR	0x20000000
#define LOLA_DINT_MUERR		0x10000000
#define LOLA_DSD_CTL_SRST	0x01
#define LOLA_DSD_CTL_SRUN	0x02
#define LOLA_DSD_CTL_IOCE	0x04
#define LOLA_DSD_CTL_DEIE	0x10
#define LOLA_DSD_CTL_VLRCV	0x20
#define LOLA_LRC_MASK		0xffffff00
#define LOLA_DSD_STS_BCIS	0x04
#define LOLA_DSD_STS_DESE	0x10
#define LOLA_DSD_STS_FIFORDY	0x20
#define LOLA_CORB_ENTRIES	256
#define MAX_STREAM_IN_COUNT	16
#define MAX_STREAM_OUT_COUNT	16
#define MAX_STREAM_COUNT	16
#define MAX_PINS		MAX_STREAM_COUNT
#define MAX_STREAM_BUFFER_COUNT	16
#define MAX_AUDIO_INOUT_COUNT	16
#define LOLA_CLOCK_TYPE_INTERNAL    0
#define LOLA_CLOCK_TYPE_AES         1
#define LOLA_CLOCK_TYPE_AES_SYNC    2
#define LOLA_CLOCK_TYPE_WORDCLOCK   3
#define LOLA_CLOCK_TYPE_ETHERSOUND  4
#define LOLA_CLOCK_TYPE_VIDEO       5
#define LOLA_CLOCK_FORMAT_NONE      0
#define LOLA_CLOCK_FORMAT_NTSC      1
#define LOLA_CLOCK_FORMAT_PAL       2
#define MAX_SAMPLE_CLOCK_COUNT  48
#define LOLA_PEAK_METER_CAN_AGC_MASK		1
#define LOLA_PEAK_METER_CAN_ANALOG_CLIP_MASK	2
struct lola_bar ;
struct lola_rb ;
struct lola_pin ;
struct lola_pin_array ;
struct lola_sample_clock ;
struct lola_clock_widget ;
#define LOLA_MIXER_DIM      32
struct lola_mixer_array ;
struct lola_mixer_widget ;
struct lola_stream ;
#define PLAY	SNDRV_PCM_STREAM_PLAYBACK
#define CAPT	SNDRV_PCM_STREAM_CAPTURE
struct lola_pcm ;
struct lola ;
#define BAR0	0
#define BAR1	1
#define lola_readl(chip, idx, name) \
readl((chip)->bar[idx].remap_addr + LOLA_##idx##_##name)
#define lola_readw(chip, idx, name) \
readw((chip)->bar[idx].remap_addr + LOLA_##idx##_##name)
#define lola_readb(chip, idx, name) \
readb((chip)->bar[idx].remap_addr + LOLA_##idx##_##name)
#define lola_writel(chip, idx, name, val) \
writel((val), (chip)->bar[idx].remap_addr + LOLA_##idx##_##name)
#define lola_writew(chip, idx, name, val) \
writew((val), (chip)->bar[idx].remap_addr + LOLA_##idx##_##name)
#define lola_writeb(chip, idx, name, val) \
writeb((val), (chip)->bar[idx].remap_addr + LOLA_##idx##_##name)
#define lola_dsd_read(chip, dsd, name) \
readl((chip)->bar[BAR1].remap_addr + LOLA_BAR1_DSD0_OFFSET + \
(LOLA_BAR1_DSD_SIZE * (dsd)) + LOLA_BAR1_DSDn##name)
#define lola_dsd_write(chip, dsd, name, val) \
writel((val), (chip)->bar[BAR1].remap_addr + LOLA_BAR1_DSD0_OFFSET + \
(LOLA_BAR1_DSD_SIZE * (dsd)) + LOLA_BAR1_DSDn##name)
#define LOLA_VERB_GET_STREAM_FORMAT		0xa00
#define LOLA_VERB_GET_AMP_GAIN_MUTE		0xb00
#define LOLA_VERB_PARAMETERS			0xf00
#define LOLA_VERB_GET_POWER_STATE		0xf05
#define LOLA_VERB_GET_CONV			0xf06
#define LOLA_VERB_GET_UNSOLICITED_RESPONSE	0xf08
#define LOLA_VERB_GET_DIGI_CONVERT_1		0xf0d
#define LOLA_VERB_GET_CONFIG_DEFAULT		0xf1c
#define LOLA_VERB_GET_SUBSYSTEM_ID		0xf20
#define LOLA_VERB_GET_FIXED_GAIN		0xfc0
#define LOLA_VERB_GET_GAIN_SELECT		0xfc1
#define LOLA_VERB_GET_MAX_LEVEL			0xfc2
#define LOLA_VERB_GET_CLOCK_LIST		0xfc3
#define LOLA_VERB_GET_CLOCK_SELECT		0xfc4
#define LOLA_VERB_GET_CLOCK_STATUS		0xfc5
#define LOLA_VERB_SET_STREAM_FORMAT		0x200
#define LOLA_VERB_SET_AMP_GAIN_MUTE		0x300
#define LOLA_VERB_SET_POWER_STATE		0x705
#define LOLA_VERB_SET_CHANNEL_STREAMID		0x706
#define LOLA_VERB_SET_UNSOLICITED_ENABLE	0x708
#define LOLA_VERB_SET_DIGI_CONVERT_1		0x70d
#define LOLA_VERB_SET_GAIN_SELECT		0xf81
#define LOLA_VERB_SET_CLOCK_SELECT		0xf84
#define LOLA_VERB_SET_GRANULARITY_STEPS		0xf86
#define LOLA_VERB_SET_SOURCE_GAIN		0xf87
#define LOLA_VERB_SET_MIX_GAIN			0xf88
#define LOLA_VERB_SET_DESTINATION_GAIN		0xf89
#define LOLA_VERB_SET_SRC			0xf8a
#define LOLA_PAR_VENDOR_ID			0x00
#define LOLA_PAR_FUNCTION_TYPE			0x05
#define LOLA_PAR_AUDIO_WIDGET_CAP		0x09
#define LOLA_PAR_PCM				0x0a
#define LOLA_PAR_STREAM_FORMATS			0x0b
#define LOLA_PAR_PIN_CAP			0x0c
#define LOLA_PAR_AMP_IN_CAP			0x0d
#define LOLA_PAR_CONNLIST_LEN			0x0e
#define LOLA_PAR_POWER_STATE			0x0f
#define LOLA_PAR_GPIO_CAP			0x11
#define LOLA_PAR_AMP_OUT_CAP			0x12
#define LOLA_PAR_SPECIFIC_CAPS			0x80
#define LOLA_PAR_FIXED_GAIN_LIST		0x81
#define LOLA_AFG_MIXER_WIDGET_PRESENT(res)	((res & (1 << 21)) != 0)
#define LOLA_AFG_CLOCK_WIDGET_PRESENT(res)	((res & (1 << 20)) != 0)
#define LOLA_AFG_INPUT_PIN_COUNT(res)		((res >> 10) & 0x2ff)
#define LOLA_AFG_OUTPUT_PIN_COUNT(res)		((res) & 0x2ff)
#define LOLA_AMP_MUTE_CAPABLE(res)		((res & (1 << 31)) != 0)
#define LOLA_AMP_STEP_SIZE(res)			((res >> 24) & 0x7f)
#define LOLA_AMP_NUM_STEPS(res)			((res >> 12) & 0x3ff)
#define LOLA_AMP_OFFSET(res)			((res) & 0x3ff)
#define LOLA_GRANULARITY_MIN		8
#define LOLA_GRANULARITY_MAX		32
#define LOLA_GRANULARITY_STEP		8
#define LOLA_UNSOLICITED_TAG_MASK	0x3f
#define LOLA_UNSOLICITED_TAG		0x1a
#define LOLA_UNSOLICITED_ENABLE		0x80
#define LOLA_UNSOL_RESP_TAG_OFFSET	26
#define LOLA_MIXER_SRC_INPUT_PLAY_SEPARATION(res)   ((res >> 2) & 0x1f)
#define LOLA_MIXER_DEST_REC_OUTPUT_SEPATATION(res)  ((res >> 7) & 0x1f)
int lola_codec_write(struct lola *chip, unsigned int nid, unsigned int verb,
unsigned int data, unsigned int extdata);
int lola_codec_read(struct lola *chip, unsigned int nid, unsigned int verb,
unsigned int data, unsigned int extdata,
unsigned int *val, unsigned int *extval);
int lola_codec_flush(struct lola *chip);
#define lola_read_param(chip, nid, param, val) \
lola_codec_read(chip, nid, LOLA_VERB_PARAMETERS, param, 0, val, NULL)
int lola_create_pcm(struct lola *chip);
void lola_free_pcm(struct lola *chip);
int lola_init_pcm(struct lola *chip, int dir, int *nidp);
void lola_pcm_update(struct lola *chip, struct lola_pcm *pcm, unsigned int bits);
int lola_init_clock_widget(struct lola *chip, int nid);
int lola_set_granularity(struct lola *chip, unsigned int val, bool force);
int lola_enable_clock_events(struct lola *chip);
int lola_set_clock_index(struct lola *chip, unsigned int idx);
int lola_set_clock(struct lola *chip, int idx);
int lola_set_sample_rate(struct lola *chip, int rate);
bool lola_update_ext_clock_freq(struct lola *chip, unsigned int val);
unsigned int lola_sample_rate_convert(unsigned int coded);
int lola_init_pins(struct lola *chip, int dir, int *nidp);
int lola_init_mixer_widget(struct lola *chip, int nid);
void lola_free_mixer(struct lola *chip);
int lola_create_mixer(struct lola *chip);
int lola_setup_all_analog_gains(struct lola *chip, int dir, bool mute);
void lola_save_mixer(struct lola *chip);
void lola_restore_mixer(struct lola *chip);
int lola_set_src_config(struct lola *chip, unsigned int src_mask, bool update);
void lola_proc_debug_new(struct lola *chip);
#define lola_proc_debug_new(chip)
