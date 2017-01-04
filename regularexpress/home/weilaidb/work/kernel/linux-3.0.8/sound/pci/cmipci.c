MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("C-Media CMI8x38 PCI");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
#define SUPPORT_JOYSTICK 1
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static long mpu_port[SNDRV_CARDS];
static long fm_port[SNDRV_CARDS] = ;
static int soft_ac3[SNDRV_CARDS] = ;
static int joystick_port[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for C-Media PCI soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for C-Media PCI soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable C-Media PCI soundcard.");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port.");
module_param_array(fm_port, long, NULL, 0444);
MODULE_PARM_DESC(fm_port, "FM port.");
module_param_array(soft_ac3, bool, NULL, 0444);
MODULE_PARM_DESC(soft_ac3, "Software-conversion of raw SPDIF packets (model 033 only).");
module_param_array(joystick_port, int, NULL, 0444);
MODULE_PARM_DESC(joystick_port, "Joystick port address.");
#define CM_REG_FUNCTRL0		0x00
#define CM_RST_CH1		0x00080000
#define CM_RST_CH0		0x00040000
#define CM_CHEN1		0x00020000
#define CM_CHEN0		0x00010000
#define CM_PAUSE1		0x00000008
#define CM_PAUSE0		0x00000004
#define CM_CHADC1		0x00000002
#define CM_CHADC0		0x00000001
#define CM_REG_FUNCTRL1		0x04
#define CM_DSFC_MASK		0x0000E000
#define CM_DSFC_SHIFT		13
#define CM_ASFC_MASK		0x00001C00
#define CM_ASFC_SHIFT		10
#define CM_SPDF_1		0x00000200
#define CM_SPDF_0		0x00000100
#define CM_SPDFLOOP		0x00000080
#define CM_SPDO2DAC		0x00000040
#define CM_INTRM		0x00000020
#define CM_BREQ			0x00000010
#define CM_VOICE_EN		0x00000008
#define CM_UART_EN		0x00000004
#define CM_JYSTK_EN		0x00000002
#define CM_ZVPORT		0x00000001
#define CM_REG_CHFORMAT		0x08
#define CM_CHB3D5C		0x80000000
#define CM_FMOFFSET2		0x40000000
#define CM_CHB3D		0x20000000
#define CM_CHIP_MASK1		0x1f000000
#define CM_CHIP_037		0x01000000
#define CM_SETLAT48		0x00800000
#define CM_EDGEIRQ		0x00400000
#define CM_SPD24SEL39		0x00200000
#define CM_AC3EN1		0x00100000
#define CM_SPDIF_SELECT1	0x00080000
#define CM_SPD24SEL		0x00020000
#define CM_ADCBITLEN_MASK	0x0000C000
#define CM_ADCBITLEN_16		0x00000000
#define CM_ADCBITLEN_15		0x00004000
#define CM_ADCBITLEN_14		0x00008000
#define CM_ADCBITLEN_13		0x0000C000
#define CM_ADCDACLEN_MASK	0x00003000
#define CM_ADCDACLEN_060	0x00000000
#define CM_ADCDACLEN_066	0x00001000
#define CM_ADCDACLEN_130	0x00002000
#define CM_ADCDACLEN_280	0x00003000
#define CM_ADCDLEN_MASK		0x00003000
#define CM_ADCDLEN_ORIGINAL	0x00000000
#define CM_ADCDLEN_EXTRA	0x00001000
#define CM_ADCDLEN_24K		0x00002000
#define CM_ADCDLEN_WEIGHT	0x00003000
#define CM_CH1_SRATE_176K	0x00000800
#define CM_CH1_SRATE_96K	0x00000800
#define CM_CH1_SRATE_88K	0x00000400
#define CM_CH0_SRATE_176K	0x00000200
#define CM_CH0_SRATE_96K	0x00000200
#define CM_CH0_SRATE_88K	0x00000100
#define CM_CH0_SRATE_128K	0x00000300
#define CM_CH0_SRATE_MASK	0x00000300
#define CM_SPDIF_INVERSE2	0x00000080
#define CM_DBLSPDS		0x00000040
#define CM_POLVALID		0x00000020
#define CM_SPDLOCKED		0x00000010
#define CM_CH1FMT_MASK		0x0000000C
#define CM_CH1FMT_SHIFT		2
#define CM_CH0FMT_MASK		0x00000003
#define CM_CH0FMT_SHIFT		0
#define CM_REG_INT_HLDCLR	0x0C
#define CM_CHIP_MASK2		0xff000000
#define CM_CHIP_8768		0x20000000
#define CM_CHIP_055		0x08000000
#define CM_CHIP_039		0x04000000
#define CM_CHIP_039_6CH		0x01000000
#define CM_UNKNOWN_INT_EN	0x00080000
#define CM_TDMA_INT_EN		0x00040000
#define CM_CH1_INT_EN		0x00020000
#define CM_CH0_INT_EN		0x00010000
#define CM_REG_INT_STATUS	0x10
#define CM_INTR			0x80000000
#define CM_VCO			0x08000000
#define CM_MCBINT		0x04000000
#define CM_UARTINT		0x00010000
#define CM_LTDMAINT		0x00008000
#define CM_HTDMAINT		0x00004000
#define CM_XDO46		0x00000080
#define CM_LHBTOG		0x00000040
#define CM_LEG_HDMA		0x00000020
#define CM_LEG_STEREO		0x00000010
#define CM_CH1BUSY		0x00000008
#define CM_CH0BUSY		0x00000004
#define CM_CHINT1		0x00000002
#define CM_CHINT0		0x00000001
#define CM_REG_LEGACY_CTRL	0x14
#define CM_NXCHG		0x80000000
#define CM_VMPU_MASK		0x60000000
#define CM_VMPU_330		0x00000000
#define CM_VMPU_320		0x20000000
#define CM_VMPU_310		0x40000000
#define CM_VMPU_300		0x60000000
#define CM_ENWR8237		0x10000000
#define CM_VSBSEL_MASK		0x0C000000
#define CM_VSBSEL_220		0x00000000
#define CM_VSBSEL_240		0x04000000
#define CM_VSBSEL_260		0x08000000
#define CM_VSBSEL_280		0x0C000000
#define CM_FMSEL_MASK		0x03000000
#define CM_FMSEL_388		0x00000000
#define CM_FMSEL_3C8		0x01000000
#define CM_FMSEL_3E0		0x02000000
#define CM_FMSEL_3E8		0x03000000
#define CM_ENSPDOUT		0x00800000
#define CM_SPDCOPYRHT		0x00400000
#define CM_DAC2SPDO		0x00200000
#define CM_INVIDWEN		0x00100000
#define CM_SETRETRY		0x00100000
#define CM_C_EEACCESS		0x00080000
#define CM_C_EECS		0x00040000
#define CM_C_EEDI46		0x00020000
#define CM_C_EECK46		0x00010000
#define CM_CHB3D6C		0x00008000
#define CM_CENTR2LIN		0x00004000
#define CM_BASE2LIN		0x00002000
#define CM_EXBASEN		0x00001000
#define CM_REG_MISC_CTRL	0x18
#define CM_PWD			0x80000000
#define CM_RESET		0x40000000
#define CM_SFIL_MASK		0x30000000
#define CM_VMGAIN		0x10000000
#define CM_TXVX			0x08000000
#define CM_N4SPK3D		0x04000000
#define CM_SPDO5V		0x02000000
#define CM_SPDIF48K		0x01000000
#define CM_SPATUS48K		0x01000000
#define CM_ENDBDAC		0x00800000
#define CM_XCHGDAC		0x00400000
#define CM_SPD32SEL		0x00200000
#define CM_SPDFLOOPI		0x00100000
#define CM_FM_EN		0x00080000
#define CM_AC3EN2		0x00040000
#define CM_ENWRASID		0x00010000
#define CM_VIDWPDSB		0x00010000
#define CM_SPDF_AC97		0x00008000
#define CM_MASK_EN		0x00004000
#define CM_ENWRMSID		0x00002000
#define CM_VIDWPPRT		0x00002000
#define CM_SFILENB		0x00001000
#define CM_MMODE_MASK		0x00000E00
#define CM_SPDIF_SELECT2	0x00000100
#define CM_ENCENTER		0x00000080
#define CM_FLINKON		0x00000040
#define CM_MUTECH1		0x00000040
#define CM_FLINKOFF		0x00000020
#define CM_MIDSMP		0x00000010
#define CM_UPDDMA_MASK		0x0000000C
#define CM_UPDDMA_2048		0x00000000
#define CM_UPDDMA_1024		0x00000004
#define CM_UPDDMA_512		0x00000008
#define CM_UPDDMA_256		0x0000000C
#define CM_TWAIT_MASK		0x00000003
#define CM_TWAIT1		0x00000002
#define CM_TWAIT0		0x00000001
#define CM_REG_TDMA_POSITION	0x1C
#define CM_TDMA_CNT_MASK	0xFFFF0000
#define CM_TDMA_ADR_MASK	0x0000FFFF
#define CM_REG_MIXER0		0x20
#define CM_REG_SBVR		0x20
#define CM_REG_DEV		0x20
#define CM_REG_MIXER21		0x21
#define CM_UNKNOWN_21_MASK	0x78
#define CM_X_ADPCM		0x04
#define CM_PROINV		0x02
#define CM_X_SB16		0x01
#define CM_REG_SB16_DATA	0x22
#define CM_REG_SB16_ADDR	0x23
#define CM_REFFREQ_XIN		(315*1000*1000)/22
#define CM_ADCMULT_XIN		512
#define CM_TOLERANCE_RATE	0.001
#define CM_MAXIMUM_RATE		80000000
#define CM_REG_MIXER1		0x24
#define CM_FMMUTE		0x80
#define CM_FMMUTE_SHIFT		7
#define CM_WSMUTE		0x40
#define CM_WSMUTE_SHIFT		6
#define CM_REAR2LIN		0x20
#define CM_REAR2LIN_SHIFT	5
#define CM_REAR2FRONT		0x10
#define CM_REAR2FRONT_SHIFT	4
#define CM_WAVEINL		0x08
#define CM_WAVEINL_SHIFT	3
#define CM_WAVEINR		0x04
#define CM_WAVEINR_SHIFT	2
#define CM_X3DEN		0x02
#define CM_X3DEN_SHIFT		1
#define CM_CDPLAY		0x01
#define CM_CDPLAY_SHIFT		0
#define CM_REG_MIXER2		0x25
#define CM_RAUXREN		0x80
#define CM_RAUXREN_SHIFT	7
#define CM_RAUXLEN		0x40
#define CM_RAUXLEN_SHIFT	6
#define CM_VAUXRM		0x20
#define CM_VAUXRM_SHIFT		5
#define CM_VAUXLM		0x10
#define CM_VAUXLM_SHIFT		4
#define CM_VADMIC_MASK		0x0e
#define CM_VADMIC_SHIFT		1
#define CM_MICGAINZ		0x01
#define CM_MICGAINZ_SHIFT	0
#define CM_REG_MIXER3		0x24
#define CM_REG_AUX_VOL		0x26
#define CM_VAUXL_MASK		0xf0
#define CM_VAUXR_MASK		0x0f
#define CM_REG_MISC		0x27
#define CM_UNKNOWN_27_MASK	0xd8
#define CM_XGPO1		0x20
#define CM_MIC_CENTER_LFE	0x04
#define CM_SPDIF_INVERSE	0x04
#define CM_SPDVALID		0x02
#define CM_DMAUTO		0x01
#define CM_REG_AC97		0x28
#define CM_REG_EXTERN_CODEC	CM_REG_AC97
#define CM_REG_MPU_PCI		0x40
#define CM_REG_FM_PCI		0x50
#define CM_REG_EXTENT_IND	0xf0
#define CM_VPHONE_MASK		0xe0
#define CM_VPHONE_SHIFT		5
#define CM_VPHOM		0x10
#define CM_VSPKM		0x08
#define CM_RLOOPREN		0x04
#define CM_RLOOPLEN		0x02
#define CM_VADMIC3		0x01
#define CM_REG_PLL		0xf8
#define CM_REG_CH0_FRAME1	0x80
#define CM_REG_CH0_FRAME2	0x84
#define CM_REG_CH1_FRAME1	0x88
#define CM_REG_CH1_FRAME2	0x8C
#define CM_REG_EXT_MISC		0x90
#define CM_ADC48K44K		0x10000000
#define CM_CHB3D8C		0x00200000
#define CM_SPD32FMT		0x00100000
#define CM_ADC2SPDIF		0x00080000
#define CM_SHAREADC		0x00040000
#define CM_REALTCMP		0x00020000
#define CM_INVLRCK		0x00010000
#define CM_UNKNOWN_90_MASK	0x0000FFFF
#define CM_EXTENT_CODEC	  0x100
#define CM_EXTENT_MIDI	  0x2
#define CM_EXTENT_SYNTH	  0x4
#define CM_CH_PLAY	0
#define CM_CH_CAPT	1
#define CM_OPEN_NONE	0
#define CM_OPEN_CH_MASK	0x01
#define CM_OPEN_DAC	0x10
#define CM_OPEN_ADC	0x20
#define CM_OPEN_SPDIF	0x40
#define CM_OPEN_MCHAN	0x80
#define CM_OPEN_PLAYBACK	(CM_CH_PLAY | CM_OPEN_DAC)
#define CM_OPEN_PLAYBACK2	(CM_CH_CAPT | CM_OPEN_DAC)
#define CM_OPEN_PLAYBACK_MULTI	(CM_CH_PLAY | CM_OPEN_DAC | CM_OPEN_MCHAN)
#define CM_OPEN_CAPTURE		(CM_CH_CAPT | CM_OPEN_ADC)
#define CM_OPEN_SPDIF_PLAYBACK	(CM_CH_PLAY | CM_OPEN_DAC | CM_OPEN_SPDIF)
#define CM_OPEN_SPDIF_CAPTURE	(CM_CH_CAPT | CM_OPEN_ADC | CM_OPEN_SPDIF)
#if CM_CH_PLAY == 1
#define CM_PLAYBACK_SRATE_176K	CM_CH1_SRATE_176K
#define CM_PLAYBACK_SPDF	CM_SPDF_1
#define CM_CAPTURE_SPDF		CM_SPDF_0
#define CM_PLAYBACK_SRATE_176K CM_CH0_SRATE_176K
#define CM_PLAYBACK_SPDF	CM_SPDF_0
#define CM_CAPTURE_SPDF		CM_SPDF_1
struct cmipci_pcm ;
struct cmipci_mixer_auto_switches ;
static const struct cmipci_mixer_auto_switches cm_saved_mixer[] = ;
#define CM_SAVED_MIXERS		ARRAY_SIZE(cm_saved_mixer)
struct cmipci ;
static inline void snd_cmipci_write(struct cmipci *cm, unsigned int cmd, unsigned int data)
static inline unsigned int snd_cmipci_read(struct cmipci *cm, unsigned int cmd)
static inline void snd_cmipci_write_w(struct cmipci *cm, unsigned int cmd, unsigned short data)
static inline unsigned short snd_cmipci_read_w(struct cmipci *cm, unsigned int cmd)
static inline void snd_cmipci_write_b(struct cmipci *cm, unsigned int cmd, unsigned char data)
static inline unsigned char snd_cmipci_read_b(struct cmipci *cm, unsigned int cmd)
static int snd_cmipci_set_bit(struct cmipci *cm, unsigned int cmd, unsigned int flag)
static int snd_cmipci_clear_bit(struct cmipci *cm, unsigned int cmd, unsigned int flag)
static int snd_cmipci_set_bit_b(struct cmipci *cm, unsigned int cmd, unsigned char flag)
static int snd_cmipci_clear_bit_b(struct cmipci *cm, unsigned int cmd, unsigned char flag)
static unsigned int rates[] = ;
static unsigned int snd_cmipci_rate_freq(unsigned int rate)
static int snd_cmipci_pll_rmn(unsigned int rate, unsigned int adcmult, int *r, int *m, int *n)
static void snd_cmipci_set_pll(struct cmipci *cm, unsigned int rate, unsigned int slot)
static int snd_cmipci_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_cmipci_playback2_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static void snd_cmipci_ch_reset(struct cmipci *cm, int ch)
static int snd_cmipci_hw_free(struct snd_pcm_substream *substream)
static unsigned int hw_channels[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_channels_4 = ;
static struct snd_pcm_hw_constraint_list hw_constraints_channels_6 = ;
static struct snd_pcm_hw_constraint_list hw_constraints_channels_8 = ;
static int set_dac_channels(struct cmipci *cm, struct cmipci_pcm *rec, int channels)
static int snd_cmipci_pcm_prepare(struct cmipci *cm, struct cmipci_pcm *rec,
struct snd_pcm_substream *substream)
static int snd_cmipci_pcm_trigger(struct cmipci *cm, struct cmipci_pcm *rec,
int cmd)
static snd_pcm_uframes_t snd_cmipci_pcm_pointer(struct cmipci *cm, struct cmipci_pcm *rec,
struct snd_pcm_substream *substream)
static int snd_cmipci_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_cmipci_playback_pointer(struct snd_pcm_substream *substream)
static int snd_cmipci_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_cmipci_capture_pointer(struct snd_pcm_substream *substream)
static int snd_cmipci_spdif_default_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cmipci_spdif_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_spdif_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_cmipci_spdif_default __devinitdata =
;
static int snd_cmipci_spdif_mask_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cmipci_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_cmipci_spdif_mask __devinitdata =
;
static int snd_cmipci_spdif_stream_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cmipci_spdif_stream_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_spdif_stream_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_cmipci_spdif_stream __devinitdata =
;
static int save_mixer_state(struct cmipci *cm)
static void restore_mixer_state(struct cmipci *cm)
static void setup_ac3(struct cmipci *cm, struct snd_pcm_substream *subs, int do_ac3, int rate)
static int setup_spdif_playback(struct cmipci *cm, struct snd_pcm_substream *subs, int up, int do_ac3)
static int snd_cmipci_playback_prepare(struct snd_pcm_substream *substream)
static int snd_cmipci_playback_spdif_prepare(struct snd_pcm_substream *substream)
static void snd_cmipci_silence_hack(struct cmipci *cm, struct cmipci_pcm *rec)
static int snd_cmipci_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_cmipci_playback2_hw_free(struct snd_pcm_substream *substream)
static int snd_cmipci_capture_prepare(struct snd_pcm_substream *substream)
static int snd_cmipci_capture_spdif_prepare(struct snd_pcm_substream *substream)
static int snd_cmipci_capture_spdif_hw_free(struct snd_pcm_substream *subs)
static irqreturn_t snd_cmipci_interrupt(int irq, void *dev_id)
static struct snd_pcm_hardware snd_cmipci_playback =
;
static struct snd_pcm_hardware snd_cmipci_capture =
;
static struct snd_pcm_hardware snd_cmipci_playback2 =
;
static struct snd_pcm_hardware snd_cmipci_playback_spdif =
;
static struct snd_pcm_hardware snd_cmipci_playback_iec958_subframe =
;
static struct snd_pcm_hardware snd_cmipci_capture_spdif =
;
static unsigned int rate_constraints[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_rates = ;
static int open_device_check(struct cmipci *cm, int mode, struct snd_pcm_substream *subs)
static void close_device_check(struct cmipci *cm, int mode)
static int snd_cmipci_playback_open(struct snd_pcm_substream *substream)
static int snd_cmipci_capture_open(struct snd_pcm_substream *substream)
static int snd_cmipci_playback2_open(struct snd_pcm_substream *substream)
static int snd_cmipci_playback_spdif_open(struct snd_pcm_substream *substream)
static int snd_cmipci_capture_spdif_open(struct snd_pcm_substream *substream)
static int snd_cmipci_playback_close(struct snd_pcm_substream *substream)
static int snd_cmipci_capture_close(struct snd_pcm_substream *substream)
static int snd_cmipci_playback2_close(struct snd_pcm_substream *substream)
static int snd_cmipci_playback_spdif_close(struct snd_pcm_substream *substream)
static int snd_cmipci_capture_spdif_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_cmipci_playback_ops = ;
static struct snd_pcm_ops snd_cmipci_capture_ops = ;
static struct snd_pcm_ops snd_cmipci_playback2_ops = ;
static struct snd_pcm_ops snd_cmipci_playback_spdif_ops = ;
static struct snd_pcm_ops snd_cmipci_capture_spdif_ops = ;
static int __devinit snd_cmipci_pcm_new(struct cmipci *cm, int device)
static int __devinit snd_cmipci_pcm2_new(struct cmipci *cm, int device)
static int __devinit snd_cmipci_pcm_spdif_new(struct cmipci *cm, int device)
static void snd_cmipci_mixer_write(struct cmipci *s, unsigned char idx, unsigned char data)
static unsigned char snd_cmipci_mixer_read(struct cmipci *s, unsigned char idx)
struct cmipci_sb_reg ;
#define COMPOSE_SB_REG(lreg,rreg,lshift,rshift,mask,invert,stereo) \
((lreg) | ((rreg) << 8) | (lshift << 16) | (rshift << 19) | (mask << 24) | (invert << 22) | (stereo << 23))
#define CMIPCI_DOUBLE(xname, left_reg, right_reg, left_shift, right_shift, mask, invert, stereo) \
#define CMIPCI_SB_VOL_STEREO(xname,reg,shift,mask) CMIPCI_DOUBLE(xname, reg, reg+1, shift, shift, mask, 0, 1)
#define CMIPCI_SB_VOL_MONO(xname,reg,shift,mask) CMIPCI_DOUBLE(xname, reg, reg, shift, shift, mask, 0, 0)
#define CMIPCI_SB_SW_STEREO(xname,lshift,rshift) CMIPCI_DOUBLE(xname, SB_DSP4_OUTPUT_SW, SB_DSP4_OUTPUT_SW, lshift, rshift, 1, 0, 1)
#define CMIPCI_SB_SW_MONO(xname,shift) CMIPCI_DOUBLE(xname, SB_DSP4_OUTPUT_SW, SB_DSP4_OUTPUT_SW, shift, shift, 1, 0, 0)
static void cmipci_sb_reg_decode(struct cmipci_sb_reg *r, unsigned long val)
static int snd_cmipci_info_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cmipci_get_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_put_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define CMIPCI_SB_INPUT_SW(xname, left_shift, right_shift) \
static int snd_cmipci_info_input_sw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cmipci_get_input_sw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_put_input_sw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define CMIPCI_MIXER_SW_STEREO(xname, reg, lshift, rshift, invert) \
#define CMIPCI_MIXER_SW_MONO(xname, reg, shift, invert) \
#define CMIPCI_MIXER_VOL_STEREO(xname, reg, lshift, rshift, mask) \
#define CMIPCI_MIXER_VOL_MONO(xname, reg, shift, mask) \
static int snd_cmipci_info_native_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cmipci_get_native_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_put_native_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_get_native_mixer_sensitive(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_put_native_mixer_sensitive(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_cmipci_mixers[] __devinitdata = ;
struct cmipci_switch_args ;
#define snd_cmipci_uswitch_info		snd_ctl_boolean_mono_info
static int _snd_cmipci_uswitch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol,
struct cmipci_switch_args *args)
static int snd_cmipci_uswitch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int _snd_cmipci_uswitch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol,
struct cmipci_switch_args *args)
static int snd_cmipci_uswitch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define DEFINE_SWITCH_ARG(sname, xreg, xmask, xmask_on, xis_byte, xac3) \
static struct cmipci_switch_args cmipci_switch_arg_##sname =
#define DEFINE_BIT_SWITCH_ARG(sname, xreg, xmask, xis_byte, xac3) \
DEFINE_SWITCH_ARG(sname, xreg, xmask, xmask, xis_byte, xac3)
DEFINE_BIT_SWITCH_ARG(spdif_in_sel1, CM_REG_CHFORMAT, CM_SPDIF_SELECT1, 0, 0);
DEFINE_BIT_SWITCH_ARG(spdif_in_sel2, CM_REG_MISC_CTRL, CM_SPDIF_SELECT2, 0, 0);
DEFINE_BIT_SWITCH_ARG(spdif_enable, CM_REG_LEGACY_CTRL, CM_ENSPDOUT, 0, 0);
DEFINE_BIT_SWITCH_ARG(spdo2dac, CM_REG_FUNCTRL1, CM_SPDO2DAC, 0, 1);
DEFINE_BIT_SWITCH_ARG(spdi_valid, CM_REG_MISC, CM_SPDVALID, 1, 0);
DEFINE_BIT_SWITCH_ARG(spdif_copyright, CM_REG_LEGACY_CTRL, CM_SPDCOPYRHT, 0, 0);
DEFINE_BIT_SWITCH_ARG(spdif_dac_out, CM_REG_LEGACY_CTRL, CM_DAC2SPDO, 0, 1);
DEFINE_SWITCH_ARG(spdo_5v, CM_REG_MISC_CTRL, CM_SPDO5V, 0, 0, 0);
DEFINE_BIT_SWITCH_ARG(spdif_loop, CM_REG_FUNCTRL1, CM_SPDFLOOP, 0, 1);
DEFINE_BIT_SWITCH_ARG(spdi_monitor, CM_REG_MIXER1, CM_CDPLAY, 1, 0);
DEFINE_BIT_SWITCH_ARG(spdi_phase, CM_REG_MISC, CM_SPDIF_INVERSE, 1, 0);
DEFINE_BIT_SWITCH_ARG(spdi_phase2, CM_REG_CHFORMAT, CM_SPDIF_INVERSE2, 0, 0);
#if CM_CH_PLAY == 1
DEFINE_SWITCH_ARG(exchange_dac, CM_REG_MISC_CTRL, CM_XCHGDAC, 0, 0, 0);
DEFINE_SWITCH_ARG(exchange_dac, CM_REG_MISC_CTRL, CM_XCHGDAC, CM_XCHGDAC, 0, 0);
DEFINE_BIT_SWITCH_ARG(fourch, CM_REG_MISC_CTRL, CM_N4SPK3D, 0, 0);
DEFINE_SWITCH_ARG(modem, CM_REG_MISC_CTRL, CM_FLINKON|CM_FLINKOFF, CM_FLINKON, 0, 0);
#define DEFINE_SWITCH(sname, stype, sarg) \
#define DEFINE_CARD_SWITCH(sname, sarg) DEFINE_SWITCH(sname, SNDRV_CTL_ELEM_IFACE_CARD, sarg)
#define DEFINE_MIXER_SWITCH(sname, sarg) DEFINE_SWITCH(sname, SNDRV_CTL_ELEM_IFACE_MIXER, sarg)
static int snd_cmipci_spdout_enable_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_spdout_enable_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_line_in_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static inline unsigned int get_line_in_mode(struct cmipci *cm)
static int snd_cmipci_line_in_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_line_in_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_mic_in_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cmipci_mic_in_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cmipci_mic_in_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_cmipci_mixer_switches[] __devinitdata = ;
static struct snd_kcontrol_new snd_cmipci_nomulti_switch __devinitdata =
DEFINE_MIXER_SWITCH("Exchange DAC", exchange_dac);
static struct snd_kcontrol_new snd_cmipci_8738_mixer_switches[] __devinitdata = ;
static struct snd_kcontrol_new snd_cmipci_old_mixer_switches[] __devinitdata = ;
static struct snd_kcontrol_new snd_cmipci_extra_mixer_switches[] __devinitdata = ;
static struct snd_kcontrol_new snd_cmipci_modem_switch __devinitdata =
DEFINE_CARD_SWITCH("Modem", modem);
static int __devinit snd_cmipci_mixer_new(struct cmipci *cm, int pcm_spdif_device)
static void snd_cmipci_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_cmipci_proc_init(struct cmipci *cm)
static inline void snd_cmipci_proc_init(struct cmipci *cm)
static DEFINE_PCI_DEVICE_TABLE(snd_cmipci_ids) = ;
static void __devinit query_chip(struct cmipci *cm)
static int __devinit snd_cmipci_create_gameport(struct cmipci *cm, int dev)
static void snd_cmipci_free_gameport(struct cmipci *cm)
static inline int snd_cmipci_create_gameport(struct cmipci *cm, int dev)
static inline void snd_cmipci_free_gameport(struct cmipci *cm)
static int snd_cmipci_free(struct cmipci *cm)
static int snd_cmipci_dev_free(struct snd_device *device)
static int __devinit snd_cmipci_create_fm(struct cmipci *cm, long fm_port)
static int __devinit snd_cmipci_create(struct snd_card *card, struct pci_dev *pci,
int dev, struct cmipci **rcmipci)
MODULE_DEVICE_TABLE(pci, snd_cmipci_ids);
static int __devinit snd_cmipci_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_cmipci_remove(struct pci_dev *pci)
static unsigned char saved_regs[] = ;
static unsigned char saved_mixers[] = ;
static int snd_cmipci_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_cmipci_resume(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_cmipci_init(void)
static void __exit alsa_card_cmipci_exit(void)
module_init(alsa_card_cmipci_init)
module_exit(alsa_card_cmipci_exit)
