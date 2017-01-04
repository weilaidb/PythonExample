MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("S3 SonicVibes PCI");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
#define SUPPORT_JOYSTICK 1
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int reverb[SNDRV_CARDS];
static int mge[SNDRV_CARDS];
static unsigned int dmaio = 0x7a00;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for S3 SonicVibes soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for S3 SonicVibes soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable S3 SonicVibes soundcard.");
module_param_array(reverb, bool, NULL, 0444);
MODULE_PARM_DESC(reverb, "Enable reverb (SRAM is present) for S3 SonicVibes soundcard.");
module_param_array(mge, bool, NULL, 0444);
MODULE_PARM_DESC(mge, "MIC Gain Enable for S3 SonicVibes soundcard.");
module_param(dmaio, uint, 0444);
MODULE_PARM_DESC(dmaio, "DDMA i/o base address for S3 SonicVibes soundcard.");
#define SV_REG(sonic, x) ((sonic)->enh_port + SV_REG_##x)
#define SV_REG_CONTROL	0x00
#define   SV_ENHANCED	  0x01
#define   SV_TEST	  0x02
#define   SV_REVERB	  0x04
#define   SV_WAVETABLE	  0x08
#define   SV_INTA	  0x20
#define   SV_RESET	  0x80
#define SV_REG_IRQMASK	0x01
#define   SV_DMAA_MASK	  0x01
#define   SV_DMAC_MASK	  0x04
#define   SV_SPEC_MASK	  0x08
#define   SV_UD_MASK	  0x40
#define   SV_MIDI_MASK	  0x80
#define SV_REG_STATUS	0x02
#define   SV_DMAA_IRQ	  0x01
#define   SV_DMAC_IRQ	  0x04
#define   SV_SPEC_IRQ	  0x08
#define   SV_UD_IRQ	  0x40
#define   SV_MIDI_IRQ	  0x80
#define SV_REG_INDEX	0x04
#define   SV_MCE          0x40
#define   SV_TRD	  0x80
#define SV_REG_DATA	0x05
#define SV_IREG_LEFT_ADC	0x00
#define SV_IREG_RIGHT_ADC	0x01
#define SV_IREG_LEFT_AUX1	0x02
#define SV_IREG_RIGHT_AUX1	0x03
#define SV_IREG_LEFT_CD		0x04
#define SV_IREG_RIGHT_CD	0x05
#define SV_IREG_LEFT_LINE	0x06
#define SV_IREG_RIGHT_LINE	0x07
#define SV_IREG_MIC		0x08
#define SV_IREG_GAME_PORT	0x09
#define SV_IREG_LEFT_SYNTH	0x0a
#define SV_IREG_RIGHT_SYNTH	0x0b
#define SV_IREG_LEFT_AUX2	0x0c
#define SV_IREG_RIGHT_AUX2	0x0d
#define SV_IREG_LEFT_ANALOG	0x0e
#define SV_IREG_RIGHT_ANALOG	0x0f
#define SV_IREG_LEFT_PCM	0x10
#define SV_IREG_RIGHT_PCM	0x11
#define SV_IREG_DMA_DATA_FMT	0x12
#define SV_IREG_PC_ENABLE	0x13
#define SV_IREG_UD_BUTTON	0x14
#define SV_IREG_REVISION	0x15
#define SV_IREG_ADC_OUTPUT_CTRL	0x16
#define SV_IREG_DMA_A_UPPER	0x18
#define SV_IREG_DMA_A_LOWER	0x19
#define SV_IREG_DMA_C_UPPER	0x1c
#define SV_IREG_DMA_C_LOWER	0x1d
#define SV_IREG_PCM_RATE_LOW	0x1e
#define SV_IREG_PCM_RATE_HIGH	0x1f
#define SV_IREG_SYNTH_RATE_LOW	0x20
#define SV_IREG_SYNTH_RATE_HIGH 0x21
#define SV_IREG_ADC_CLOCK	0x22
#define SV_IREG_ADC_ALT_RATE	0x23
#define SV_IREG_ADC_PLL_M	0x24
#define SV_IREG_ADC_PLL_N	0x25
#define SV_IREG_SYNTH_PLL_M	0x26
#define SV_IREG_SYNTH_PLL_N	0x27
#define SV_IREG_MPU401		0x2a
#define SV_IREG_DRIVE_CTRL	0x2b
#define SV_IREG_SRS_SPACE	0x2c
#define SV_IREG_SRS_CENTER	0x2d
#define SV_IREG_WAVE_SOURCE	0x2e
#define SV_IREG_ANALOG_POWER	0x30
#define SV_IREG_DIGITAL_POWER	0x31
#define SV_IREG_ADC_PLL		SV_IREG_ADC_PLL_M
#define SV_IREG_SYNTH_PLL	SV_IREG_SYNTH_PLL_M
#define SV_DMA_ADDR0		0x00
#define SV_DMA_ADDR1		0x01
#define SV_DMA_ADDR2		0x02
#define SV_DMA_ADDR3		0x03
#define SV_DMA_COUNT0		0x04
#define SV_DMA_COUNT1		0x05
#define SV_DMA_COUNT2		0x06
#define SV_DMA_MODE		0x0b
#define SV_DMA_RESET		0x0d
#define SV_DMA_MASK		0x0f
#define SV_RECSRC_RESERVED	(0x00<<5)
#define SV_RECSRC_CD		(0x01<<5)
#define SV_RECSRC_DAC		(0x02<<5)
#define SV_RECSRC_AUX2		(0x03<<5)
#define SV_RECSRC_LINE		(0x04<<5)
#define SV_RECSRC_AUX1		(0x05<<5)
#define SV_RECSRC_MIC		(0x06<<5)
#define SV_RECSRC_OUT		(0x07<<5)
#define SV_FULLRATE		48000
#define SV_REFFREQUENCY		24576000
#define SV_ADCMULT		512
#define SV_MODE_PLAY		1
#define SV_MODE_CAPTURE		2
struct sonicvibes ;
static DEFINE_PCI_DEVICE_TABLE(snd_sonic_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_sonic_ids);
static struct snd_ratden sonicvibes_adc_clock = ;
static struct snd_pcm_hw_constraint_ratdens snd_sonicvibes_hw_constraints_adc_clock = ;
static inline void snd_sonicvibes_setdmaa(struct sonicvibes * sonic,
unsigned int addr,
unsigned int count)
static inline void snd_sonicvibes_setdmac(struct sonicvibes * sonic,
unsigned int addr,
unsigned int count)
static inline unsigned int snd_sonicvibes_getdmaa(struct sonicvibes * sonic)
static inline unsigned int snd_sonicvibes_getdmac(struct sonicvibes * sonic)
static void snd_sonicvibes_out1(struct sonicvibes * sonic,
unsigned char reg,
unsigned char value)
static void snd_sonicvibes_out(struct sonicvibes * sonic,
unsigned char reg,
unsigned char value)
static unsigned char snd_sonicvibes_in1(struct sonicvibes * sonic, unsigned char reg)
static unsigned char snd_sonicvibes_in(struct sonicvibes * sonic, unsigned char reg)
static void snd_sonicvibes_setfmt(struct sonicvibes * sonic,
unsigned char mask,
unsigned char value)
static void snd_sonicvibes_pll(unsigned int rate,
unsigned int *res_r,
unsigned int *res_m,
unsigned int *res_n)
static void snd_sonicvibes_setpll(struct sonicvibes * sonic,
unsigned char reg,
unsigned int rate)
static void snd_sonicvibes_set_adc_rate(struct sonicvibes * sonic, unsigned int rate)
static int snd_sonicvibes_hw_constraint_dac_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static void snd_sonicvibes_set_dac_rate(struct sonicvibes * sonic, unsigned int rate)
static int snd_sonicvibes_trigger(struct sonicvibes * sonic, int what, int cmd)
static irqreturn_t snd_sonicvibes_interrupt(int irq, void *dev_id)
static int snd_sonicvibes_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_sonicvibes_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_sonicvibes_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_sonicvibes_hw_free(struct snd_pcm_substream *substream)
static int snd_sonicvibes_playback_prepare(struct snd_pcm_substream *substream)
static int snd_sonicvibes_capture_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_sonicvibes_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_sonicvibes_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_sonicvibes_playback =
;
static struct snd_pcm_hardware snd_sonicvibes_capture =
;
static int snd_sonicvibes_playback_open(struct snd_pcm_substream *substream)
static int snd_sonicvibes_capture_open(struct snd_pcm_substream *substream)
static int snd_sonicvibes_playback_close(struct snd_pcm_substream *substream)
static int snd_sonicvibes_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_sonicvibes_playback_ops = ;
static struct snd_pcm_ops snd_sonicvibes_capture_ops = ;
static int __devinit snd_sonicvibes_pcm(struct sonicvibes * sonic, int device, struct snd_pcm ** rpcm)
#define SONICVIBES_MUX(xname, xindex) \
static int snd_sonicvibes_info_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_sonicvibes_get_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sonicvibes_put_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define SONICVIBES_SINGLE(xname, xindex, reg, shift, mask, invert) \
static int snd_sonicvibes_info_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_sonicvibes_get_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sonicvibes_put_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define SONICVIBES_DOUBLE(xname, xindex, left_reg, right_reg, shift_left, shift_right, mask, invert) \
static int snd_sonicvibes_info_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_sonicvibes_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sonicvibes_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_sonicvibes_controls[] __devinitdata = ;
static void snd_sonicvibes_master_free(struct snd_kcontrol *kcontrol)
static int __devinit snd_sonicvibes_mixer(struct sonicvibes * sonic)
static void snd_sonicvibes_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_sonicvibes_proc_init(struct sonicvibes * sonic)
static struct snd_kcontrol_new snd_sonicvibes_game_control __devinitdata =
SONICVIBES_SINGLE("Joystick Speed", 0, SV_IREG_GAME_PORT, 1, 15, 0);
static int __devinit snd_sonicvibes_create_gameport(struct sonicvibes *sonic)
static void snd_sonicvibes_free_gameport(struct sonicvibes *sonic)
static inline int snd_sonicvibes_create_gameport(struct sonicvibes *sonic)
static inline void snd_sonicvibes_free_gameport(struct sonicvibes *sonic)
static int snd_sonicvibes_free(struct sonicvibes *sonic)
static int snd_sonicvibes_dev_free(struct snd_device *device)
static int __devinit snd_sonicvibes_create(struct snd_card *card,
struct pci_dev *pci,
int reverb,
int mge,
struct sonicvibes ** rsonic)
static struct snd_kcontrol_new snd_sonicvibes_midi_controls[] __devinitdata = ;
static int snd_sonicvibes_midi_input_open(struct snd_mpu401 * mpu)
static void snd_sonicvibes_midi_input_close(struct snd_mpu401 * mpu)
static int __devinit snd_sonicvibes_midi(struct sonicvibes * sonic,
struct snd_rawmidi *rmidi)
static int __devinit snd_sonic_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_sonic_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_sonicvibes_init(void)
static void __exit alsa_card_sonicvibes_exit(void)
module_init(alsa_card_sonicvibes_init)
module_exit(alsa_card_sonicvibes_exit)
