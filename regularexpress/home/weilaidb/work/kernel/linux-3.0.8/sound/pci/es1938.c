MODULE_AUTHOR("Jaromir Koutek <miri@punknet.cz>");
MODULE_DESCRIPTION("ESS Solo-1");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
#define SUPPORT_JOYSTICK 1
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for ESS Solo-1 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for ESS Solo-1 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable ESS Solo-1 soundcard.");
#define SLIO_REG(chip, x) ((chip)->io_port + ESSIO_REG_##x)
#define SLDM_REG(chip, x) ((chip)->ddma_port + ESSDM_REG_##x)
#define SLSB_REG(chip, x) ((chip)->sb_port + ESSSB_REG_##x)
#define SL_PCI_LEGACYCONTROL		0x40
#define SL_PCI_CONFIG			0x50
#define SL_PCI_DDMACONTROL		0x60
#define ESSIO_REG_AUDIO2DMAADDR		0
#define ESSIO_REG_AUDIO2DMACOUNT	4
#define ESSIO_REG_AUDIO2MODE		6
#define ESSIO_REG_IRQCONTROL		7
#define ESSDM_REG_DMAADDR		0x00
#define ESSDM_REG_DMACOUNT		0x04
#define ESSDM_REG_DMACOMMAND		0x08
#define ESSDM_REG_DMASTATUS		0x08
#define ESSDM_REG_DMAMODE		0x0b
#define ESSDM_REG_DMACLEAR		0x0d
#define ESSDM_REG_DMAMASK		0x0f
#define ESSSB_REG_FMLOWADDR		0x00
#define ESSSB_REG_FMHIGHADDR		0x02
#define ESSSB_REG_MIXERADDR		0x04
#define ESSSB_REG_MIXERDATA		0x05
#define ESSSB_IREG_AUDIO1		0x14
#define ESSSB_IREG_MICMIX		0x1a
#define ESSSB_IREG_RECSRC		0x1c
#define ESSSB_IREG_MASTER		0x32
#define ESSSB_IREG_FM			0x36
#define ESSSB_IREG_AUXACD		0x38
#define ESSSB_IREG_AUXB			0x3a
#define ESSSB_IREG_PCSPEAKER		0x3c
#define ESSSB_IREG_LINE			0x3e
#define ESSSB_IREG_SPATCONTROL		0x50
#define ESSSB_IREG_SPATLEVEL		0x52
#define ESSSB_IREG_MASTER_LEFT		0x60
#define ESSSB_IREG_MASTER_RIGHT		0x62
#define ESSSB_IREG_MPU401CONTROL	0x64
#define ESSSB_IREG_MICMIXRECORD		0x68
#define ESSSB_IREG_AUDIO2RECORD		0x69
#define ESSSB_IREG_AUXACDRECORD		0x6a
#define ESSSB_IREG_FMRECORD		0x6b
#define ESSSB_IREG_AUXBRECORD		0x6c
#define ESSSB_IREG_MONO			0x6d
#define ESSSB_IREG_LINERECORD		0x6e
#define ESSSB_IREG_MONORECORD		0x6f
#define ESSSB_IREG_AUDIO2SAMPLE		0x70
#define ESSSB_IREG_AUDIO2MODE		0x71
#define ESSSB_IREG_AUDIO2FILTER		0x72
#define ESSSB_IREG_AUDIO2TCOUNTL	0x74
#define ESSSB_IREG_AUDIO2TCOUNTH	0x76
#define ESSSB_IREG_AUDIO2CONTROL1	0x78
#define ESSSB_IREG_AUDIO2CONTROL2	0x7a
#define ESSSB_IREG_AUDIO2		0x7c
#define ESSSB_REG_RESET			0x06
#define ESSSB_REG_READDATA		0x0a
#define ESSSB_REG_WRITEDATA		0x0c
#define ESSSB_REG_READSTATUS		0x0c
#define ESSSB_REG_STATUS		0x0e
#define ESS_CMD_EXTSAMPLERATE		0xa1
#define ESS_CMD_FILTERDIV		0xa2
#define ESS_CMD_DMACNTRELOADL		0xa4
#define ESS_CMD_DMACNTRELOADH		0xa5
#define ESS_CMD_ANALOGCONTROL		0xa8
#define ESS_CMD_IRQCONTROL		0xb1
#define ESS_CMD_DRQCONTROL		0xb2
#define ESS_CMD_RECLEVEL		0xb4
#define ESS_CMD_SETFORMAT		0xb6
#define ESS_CMD_SETFORMAT2		0xb7
#define ESS_CMD_DMACONTROL		0xb8
#define ESS_CMD_DMATYPE			0xb9
#define ESS_CMD_OFFSETLEFT		0xba
#define ESS_CMD_OFFSETRIGHT		0xbb
#define ESS_CMD_READREG			0xc0
#define ESS_CMD_ENABLEEXT		0xc6
#define ESS_CMD_PAUSEDMA		0xd0
#define ESS_CMD_ENABLEAUDIO1		0xd1
#define ESS_CMD_STOPAUDIO1		0xd3
#define ESS_CMD_AUDIO1STATUS		0xd8
#define ESS_CMD_CONTDMA			0xd4
#define ESS_CMD_TESTIRQ			0xf2
#define ESS_RECSRC_MIC		0
#define ESS_RECSRC_AUXACD	2
#define ESS_RECSRC_AUXB		5
#define ESS_RECSRC_LINE		6
#define ESS_RECSRC_NONE		7
#define DAC1 0x01
#define ADC1 0x02
#define DAC2 0x04
#define SAVED_REG_SIZE	32
struct es1938 ;
static irqreturn_t snd_es1938_interrupt(int irq, void *dev_id);
static DEFINE_PCI_DEVICE_TABLE(snd_es1938_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_es1938_ids);
#define RESET_LOOP_TIMEOUT	0x10000
#define WRITE_LOOP_TIMEOUT	0x10000
#define GET_LOOP_TIMEOUT	0x01000
#undef REG_DEBUG
static void snd_es1938_mixer_write(struct es1938 *chip, unsigned char reg, unsigned char val)
static int snd_es1938_mixer_read(struct es1938 *chip, unsigned char reg)
static int snd_es1938_mixer_bits(struct es1938 *chip, unsigned char reg,
unsigned char mask, unsigned char val)
static void snd_es1938_write_cmd(struct es1938 *chip, unsigned char cmd)
static int snd_es1938_get_byte(struct es1938 *chip)
static void snd_es1938_write(struct es1938 *chip, unsigned char reg, unsigned char val)
static unsigned char snd_es1938_read(struct es1938 *chip, unsigned char reg)
static int snd_es1938_bits(struct es1938 *chip, unsigned char reg, unsigned char mask,
unsigned char val)
static void snd_es1938_reset(struct es1938 *chip)
static void snd_es1938_reset_fifo(struct es1938 *chip)
static struct snd_ratnum clocks[2] = ;
static struct snd_pcm_hw_constraint_ratnums hw_constraints_clocks = ;
static void snd_es1938_rate_set(struct es1938 *chip,
struct snd_pcm_substream *substream,
int mode)
static void snd_es1938_playback1_setdma(struct es1938 *chip)
static void snd_es1938_playback2_setdma(struct es1938 *chip)
static void snd_es1938_capture_setdma(struct es1938 *chip)
static int snd_es1938_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_es1938_playback1_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_es1938_playback2_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_es1938_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_es1938_capture_prepare(struct snd_pcm_substream *substream)
static int snd_es1938_playback1_prepare(struct snd_pcm_substream *substream)
static int snd_es1938_playback2_prepare(struct snd_pcm_substream *substream)
static int snd_es1938_playback_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_es1938_capture_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_es1938_playback1_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_es1938_playback2_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_es1938_playback_pointer(struct snd_pcm_substream *substream)
static int snd_es1938_capture_copy(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
void __user *dst,
snd_pcm_uframes_t count)
static int snd_es1938_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_es1938_pcm_hw_free(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_es1938_capture =
;
static struct snd_pcm_hardware snd_es1938_playback =
;
static int snd_es1938_capture_open(struct snd_pcm_substream *substream)
static int snd_es1938_playback_open(struct snd_pcm_substream *substream)
static int snd_es1938_capture_close(struct snd_pcm_substream *substream)
static int snd_es1938_playback_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_es1938_playback_ops = ;
static struct snd_pcm_ops snd_es1938_capture_ops = ;
static int __devinit snd_es1938_new_pcm(struct es1938 *chip, int device)
static int snd_es1938_info_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_es1938_get_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_es1938_put_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define snd_es1938_info_spatializer_enable	snd_ctl_boolean_mono_info
static int snd_es1938_get_spatializer_enable(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_es1938_put_spatializer_enable(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_es1938_info_hw_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_es1938_get_hw_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define snd_es1938_info_hw_switch		snd_ctl_boolean_stereo_info
static int snd_es1938_get_hw_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void snd_es1938_hwv_free(struct snd_kcontrol *kcontrol)
static int snd_es1938_reg_bits(struct es1938 *chip, unsigned char reg,
unsigned char mask, unsigned char val)
static int snd_es1938_reg_read(struct es1938 *chip, unsigned char reg)
#define ES1938_SINGLE_TLV(xname, xindex, reg, shift, mask, invert, xtlv)    \
#define ES1938_SINGLE(xname, xindex, reg, shift, mask, invert) \
static int snd_es1938_info_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_es1938_get_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_es1938_put_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define ES1938_DOUBLE_TLV(xname, xindex, left_reg, right_reg, shift_left, shift_right, mask, invert, xtlv) \
#define ES1938_DOUBLE(xname, xindex, left_reg, right_reg, shift_left, shift_right, mask, invert) \
static int snd_es1938_info_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_es1938_get_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_es1938_put_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static unsigned int db_scale_master[] = ;
static unsigned int db_scale_audio1[] = ;
static unsigned int db_scale_audio2[] = ;
static unsigned int db_scale_mic[] = ;
static unsigned int db_scale_line[] = ;
static const DECLARE_TLV_DB_SCALE(db_scale_capture, 0, 150, 0);
static struct snd_kcontrol_new snd_es1938_controls[] = ;
static void snd_es1938_chip_init(struct es1938 *chip)
static unsigned char saved_regs[SAVED_REG_SIZE+1] = ;
static int es1938_suspend(struct pci_dev *pci, pm_message_t state)
static int es1938_resume(struct pci_dev *pci)
static int __devinit snd_es1938_create_gameport(struct es1938 *chip)
static void snd_es1938_free_gameport(struct es1938 *chip)
static inline int snd_es1938_create_gameport(struct es1938 *chip)
static inline void snd_es1938_free_gameport(struct es1938 *chip)
static int snd_es1938_free(struct es1938 *chip)
static int snd_es1938_dev_free(struct snd_device *device)
static int __devinit snd_es1938_create(struct snd_card *card,
struct pci_dev * pci,
struct es1938 ** rchip)
static irqreturn_t snd_es1938_interrupt(int irq, void *dev_id)
#define ES1938_DMA_SIZE 64
static int __devinit snd_es1938_mixer(struct es1938 *chip)
static int __devinit snd_es1938_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_es1938_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_es1938_init(void)
static void __exit alsa_card_es1938_exit(void)
module_init(alsa_card_es1938_init)
module_exit(alsa_card_es1938_exit)
