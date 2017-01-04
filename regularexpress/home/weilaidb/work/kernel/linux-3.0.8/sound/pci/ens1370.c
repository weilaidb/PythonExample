#undef CHIP1370
#define CHIP1370
#define DRIVER_NAME "ENS1370"
#define DRIVER_NAME "ENS1371"
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>, Thomas Sailer <sailer@ife.ee.ethz.ch>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Ensoniq AudioPCI ES1370");
MODULE_SUPPORTED_DEVICE("");
MODULE_DESCRIPTION("Ensoniq/Creative AudioPCI ES1371+");
MODULE_SUPPORTED_DEVICE("");
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
#define SUPPORT_JOYSTICK
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int joystick_port[SNDRV_CARDS];
static int joystick[SNDRV_CARDS];
static int spdif[SNDRV_CARDS];
static int lineio[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Ensoniq AudioPCI soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Ensoniq AudioPCI soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Ensoniq AudioPCI soundcard.");
module_param_array(joystick_port, int, NULL, 0444);
MODULE_PARM_DESC(joystick_port, "Joystick port address.");
module_param_array(joystick, bool, NULL, 0444);
MODULE_PARM_DESC(joystick, "Enable joystick.");
module_param_array(spdif, int, NULL, 0444);
MODULE_PARM_DESC(spdif, "S/PDIF output (-1 = none, 0 = auto, 1 = force).");
module_param_array(lineio, int, NULL, 0444);
MODULE_PARM_DESC(lineio, "Line In to Rear Out (0 = auto, 1 = force).");
#define ES1371REV_ES1373_A  0x04
#define ES1371REV_ES1373_B  0x06
#define ES1371REV_CT5880_A  0x07
#define CT5880REV_CT5880_C  0x02
#define CT5880REV_CT5880_D  0x03
#define CT5880REV_CT5880_E  0x04
#define ES1371REV_ES1371_B  0x09
#define EV1938REV_EV1938_A  0x00
#define ES1371REV_ES1373_8  0x08
#define ES_REG(ensoniq, x) ((ensoniq)->port + ES_REG_##x)
#define ES_REG_CONTROL	0x00
#define   ES_1370_ADC_STOP	(1<<31)
#define   ES_1370_XCTL1 	(1<<30)
#define   ES_1373_BYPASS_P1	(1<<31)
#define   ES_1373_BYPASS_P2	(1<<30)
#define   ES_1373_BYPASS_R	(1<<29)
#define   ES_1373_TEST_BIT	(1<<28)
#define   ES_1373_RECEN_B	(1<<27)
#define   ES_1373_SPDIF_THRU	(1<<26)
#define   ES_1371_JOY_ASEL(o)	(((o)&0x03)<<24)
#define   ES_1371_JOY_ASELM	(0x03<<24)
#define   ES_1371_JOY_ASELI(i)  (((i)>>24)&0x03)
#define   ES_1371_GPIO_IN(i)	(((i)>>20)&0x0f)
#define   ES_1370_PCLKDIVO(o)	(((o)&0x1fff)<<16)
#define   ES_1370_PCLKDIVM	((0x1fff)<<16)
#define   ES_1370_PCLKDIVI(i)	(((i)>>16)&0x1fff)
#define   ES_1371_GPIO_OUT(o)	(((o)&0x0f)<<16)
#define   ES_1371_GPIO_OUTM     (0x0f<<16)
#define   ES_MSFMTSEL		(1<<15)
#define   ES_1370_M_SBB		(1<<14)
#define   ES_1371_SYNC_RES	(1<<14)
#define   ES_1370_WTSRSEL(o)	(((o)&0x03)<<12)
#define   ES_1370_WTSRSELM	(0x03<<12)
#define   ES_1371_ADC_STOP	(1<<13)
#define   ES_1371_PWR_INTRM	(1<<12)
#define   ES_1370_DAC_SYNC	(1<<11)
#define   ES_1371_M_CB		(1<<11)
#define   ES_CCB_INTRM		(1<<10)
#define   ES_1370_M_CB		(1<<9)
#define   ES_1370_XCTL0		(1<<8)
#define   ES_1371_PDLEV(o)	(((o)&0x03)<<8)
#define   ES_1371_PDLEVM	(0x03<<8)
#define   ES_BREQ		(1<<7)
#define   ES_DAC1_EN		(1<<6)
#define   ES_DAC2_EN		(1<<5)
#define   ES_ADC_EN		(1<<4)
#define   ES_UART_EN		(1<<3)
#define   ES_JYSTK_EN		(1<<2)
#define   ES_1370_CDC_EN	(1<<1)
#define   ES_1371_XTALCKDIS	(1<<1)
#define   ES_1370_SERR_DISABLE	(1<<0)
#define   ES_1371_PCICLKDIS     (1<<0)
#define ES_REG_STATUS	0x04
#define   ES_INTR               (1<<31)
#define   ES_1371_ST_AC97_RST	(1<<29)
#define   ES_1373_REAR_BIT27	(1<<27)
#define   ES_1373_REAR_BIT26	(1<<26)
#define   ES_1373_REAR_BIT24	(1<<24)
#define   ES_1373_GPIO_INT_EN(o)(((o)&0x0f)<<20)
#define   ES_1373_SPDIF_EN	(1<<18)
#define   ES_1373_SPDIF_TEST	(1<<17)
#define   ES_1371_TEST          (1<<16)
#define   ES_1373_GPIO_INT(i)	(((i)&0x0f)>>12)
#define   ES_1370_CSTAT		(1<<10)
#define   ES_1370_CBUSY         (1<<9)
#define   ES_1370_CWRIP		(1<<8)
#define   ES_1371_SYNC_ERR	(1<<8)
#define   ES_1371_VC(i)         (((i)>>6)&0x03)
#define   ES_1370_VC(i)		(((i)>>5)&0x03)
#define   ES_1371_MPWR          (1<<5)
#define   ES_MCCB		(1<<4)
#define   ES_UART		(1<<3)
#define   ES_DAC1		(1<<2)
#define   ES_DAC2		(1<<1)
#define   ES_ADC		(1<<0)
#define ES_REG_UART_DATA 0x08
#define ES_REG_UART_STATUS 0x09
#define   ES_RXINT		(1<<7)
#define   ES_TXINT		(1<<2)
#define   ES_TXRDY		(1<<1)
#define   ES_RXRDY		(1<<0)
#define ES_REG_UART_CONTROL 0x09
#define   ES_RXINTEN		(1<<7)
#define   ES_TXINTENO(o)	(((o)&0x03)<<5)
#define   ES_TXINTENM		(0x03<<5)
#define   ES_TXINTENI(i)	(((i)>>5)&0x03)
#define   ES_CNTRL(o)		(((o)&0x03)<<0)
#define   ES_CNTRLM		(0x03<<0)
#define ES_REG_UART_RES	0x0a
#define   ES_TEST_MODE		(1<<0)
#define ES_REG_MEM_PAGE	0x0c
#define   ES_MEM_PAGEO(o)	(((o)&0x0f)<<0)
#define   ES_MEM_PAGEM		(0x0f<<0)
#define   ES_MEM_PAGEI(i)	(((i)>>0)&0x0f)
#define ES_REG_1370_CODEC 0x10
#define   ES_1370_CODEC_WRITE(a,d) ((((a)&0xff)<<8)|(((d)&0xff)<<0))
#define ES_REG_1371_CODEC 0x14
#define   ES_1371_CODEC_RDY	   (1<<31)
#define   ES_1371_CODEC_WIP	   (1<<30)
#define   EV_1938_CODEC_MAGIC	   (1<<26)
#define   ES_1371_CODEC_PIRD	   (1<<23)
#define   ES_1371_CODEC_WRITE(a,d) ((((a)&0x7f)<<16)|(((d)&0xffff)<<0))
#define   ES_1371_CODEC_READS(a)   ((((a)&0x7f)<<16)|ES_1371_CODEC_PIRD)
#define   ES_1371_CODEC_READ(i)    (((i)>>0)&0xffff)
#define ES_REG_1371_SMPRATE 0x10
#define   ES_1371_SRC_RAM_ADDRO(o) (((o)&0x7f)<<25)
#define   ES_1371_SRC_RAM_ADDRM	   (0x7f<<25)
#define   ES_1371_SRC_RAM_ADDRI(i) (((i)>>25)&0x7f)
#define   ES_1371_SRC_RAM_WE	   (1<<24)
#define   ES_1371_SRC_RAM_BUSY     (1<<23)
#define   ES_1371_SRC_DISABLE      (1<<22)
#define   ES_1371_DIS_P1	   (1<<21)
#define   ES_1371_DIS_P2	   (1<<20)
#define   ES_1371_DIS_R1	   (1<<19)
#define   ES_1371_SRC_RAM_DATAO(o) (((o)&0xffff)<<0)
#define   ES_1371_SRC_RAM_DATAM	   (0xffff<<0)
#define   ES_1371_SRC_RAM_DATAI(i) (((i)>>0)&0xffff)
#define ES_REG_1371_LEGACY 0x18
#define   ES_1371_JFAST		(1<<31)
#define   ES_1371_HIB		(1<<30)
#define   ES_1371_VSB		(1<<29)
#define   ES_1371_VMPUO(o)	(((o)&0x03)<<27)
#define   ES_1371_VMPUM		(0x03<<27)
#define   ES_1371_VMPUI(i)	(((i)>>27)&0x03)
#define   ES_1371_VCDCO(o)	(((o)&0x03)<<25)
#define   ES_1371_VCDCM		(0x03<<25)
#define   ES_1371_VCDCI(i)	(((i)>>25)&0x03)
#define   ES_1371_FIRQ		(1<<24)
#define   ES_1371_SDMACAP	(1<<23)
#define   ES_1371_SPICAP	(1<<22)
#define   ES_1371_MDMACAP	(1<<21)
#define   ES_1371_MPICAP	(1<<20)
#define   ES_1371_ADCAP		(1<<19)
#define   ES_1371_SVCAP		(1<<18)
#define   ES_1371_CDCCAP	(1<<17)
#define   ES_1371_BACAP		(1<<16)
#define   ES_1371_EXI(i)	(((i)>>8)&0x07)
#define   ES_1371_AI(i)		(((i)>>3)&0x1f)
#define   ES_1371_WR		(1<<2)
#define   ES_1371_LEGINT	(1<<0)
#define ES_REG_CHANNEL_STATUS 0x1c
#define ES_REG_SERIAL	0x20
#define   ES_1371_DAC_TEST	(1<<22)
#define   ES_P2_END_INCO(o)	(((o)&0x07)<<19)
#define   ES_P2_END_INCM	(0x07<<19)
#define   ES_P2_END_INCI(i)	(((i)>>16)&0x07)
#define   ES_P2_ST_INCO(o)	(((o)&0x07)<<16)
#define   ES_P2_ST_INCM		(0x07<<16)
#define   ES_P2_ST_INCI(i)	(((i)<<16)&0x07)
#define   ES_R1_LOOP_SEL	(1<<15)
#define   ES_P2_LOOP_SEL	(1<<14)
#define   ES_P1_LOOP_SEL	(1<<13)
#define   ES_P2_PAUSE		(1<<12)
#define   ES_P1_PAUSE		(1<<11)
#define   ES_R1_INT_EN		(1<<10)
#define   ES_P2_INT_EN		(1<<9)
#define   ES_P1_INT_EN		(1<<8)
#define   ES_P1_SCT_RLD		(1<<7)
#define   ES_P2_DAC_SEN		(1<<6)
#define   ES_R1_MODEO(o)	(((o)&0x03)<<4)
#define   ES_R1_MODEM		(0x03<<4)
#define   ES_R1_MODEI(i)	(((i)>>4)&0x03)
#define   ES_P2_MODEO(o)	(((o)&0x03)<<2)
#define   ES_P2_MODEM		(0x03<<2)
#define   ES_P2_MODEI(i)	(((i)>>2)&0x03)
#define   ES_P1_MODEO(o)	(((o)&0x03)<<0)
#define   ES_P1_MODEM		(0x03<<0)
#define   ES_P1_MODEI(i)	(((i)>>0)&0x03)
#define ES_REG_DAC1_COUNT 0x24
#define ES_REG_DAC2_COUNT 0x28
#define ES_REG_ADC_COUNT  0x2c
#define   ES_REG_CURR_COUNT(i)  (((i)>>16)&0xffff)
#define   ES_REG_COUNTO(o)	(((o)&0xffff)<<0)
#define   ES_REG_COUNTM		(0xffff<<0)
#define   ES_REG_COUNTI(i)	(((i)>>0)&0xffff)
#define ES_REG_DAC1_FRAME 0x30
#define ES_REG_DAC1_SIZE  0x34
#define ES_REG_DAC2_FRAME 0x38
#define ES_REG_DAC2_SIZE  0x3c
#define ES_REG_ADC_FRAME  0x30
#define ES_REG_ADC_SIZE	  0x34
#define   ES_REG_FCURR_COUNTO(o) (((o)&0xffff)<<16)
#define   ES_REG_FCURR_COUNTM    (0xffff<<16)
#define   ES_REG_FCURR_COUNTI(i) (((i)>>14)&0x3fffc)
#define   ES_REG_FSIZEO(o)	 (((o)&0xffff)<<0)
#define   ES_REG_FSIZEM		 (0xffff<<0)
#define   ES_REG_FSIZEI(i)	 (((i)>>0)&0xffff)
#define ES_REG_PHANTOM_FRAME 0x38
#define ES_REG_PHANTOM_COUNT 0x3c
#define ES_REG_UART_FIFO  0x30
#define   ES_REG_UF_VALID	 (1<<8)
#define   ES_REG_UF_BYTEO(o)	 (((o)&0xff)<<0)
#define   ES_REG_UF_BYTEM	 (0xff<<0)
#define   ES_REG_UF_BYTEI(i)	 (((i)>>0)&0xff)
#define ES_PAGE_DAC	0x0c
#define ES_PAGE_ADC	0x0d
#define ES_PAGE_UART	0x0e
#define ES_PAGE_UART1	0x0f
#define ES_SMPREG_DAC1		0x70
#define ES_SMPREG_DAC2		0x74
#define ES_SMPREG_ADC		0x78
#define ES_SMPREG_VOL_ADC	0x6c
#define ES_SMPREG_VOL_DAC1	0x7c
#define ES_SMPREG_VOL_DAC2	0x7e
#define ES_SMPREG_TRUNC_N	0x00
#define ES_SMPREG_INT_REGS	0x01
#define ES_SMPREG_ACCUM_FRAC	0x02
#define ES_SMPREG_VFREQ_FRAC	0x03
#define ES_1370_SRCLOCK	   1411200
#define ES_1370_SRTODIV(x) (ES_1370_SRCLOCK/(x)-2)
#define ES_MODE_PLAY1	0x0001
#define ES_MODE_PLAY2	0x0002
#define ES_MODE_CAPTURE	0x0004
#define ES_MODE_OUTPUT	0x0001
#define ES_MODE_INPUT	0x0002
struct ensoniq ;
static irqreturn_t snd_audiopci_interrupt(int irq, void *dev_id);
static DEFINE_PCI_DEVICE_TABLE(snd_audiopci_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_audiopci_ids);
#define POLL_COUNT	0xa000
static unsigned int snd_es1370_fixed_rates[] =
;
static struct snd_pcm_hw_constraint_list snd_es1370_hw_constraints_rates = ;
static struct snd_ratnum es1370_clock = ;
static struct snd_pcm_hw_constraint_ratnums snd_es1370_hw_constraints_clock = ;
static struct snd_ratden es1371_dac_clock = ;
static struct snd_pcm_hw_constraint_ratdens snd_es1371_hw_constraints_dac_clock = ;
static struct snd_ratnum es1371_adc_clock = ;
static struct snd_pcm_hw_constraint_ratnums snd_es1371_hw_constraints_adc_clock = ;
static const unsigned int snd_ensoniq_sample_shift[] =
;
static unsigned int snd_es1371_wait_src_ready(struct ensoniq * ensoniq)
static unsigned int snd_es1371_src_read(struct ensoniq * ensoniq, unsigned short reg)
static void snd_es1371_src_write(struct ensoniq * ensoniq,
unsigned short reg, unsigned short data)
static void snd_es1370_codec_write(struct snd_ak4531 *ak4531,
unsigned short reg, unsigned short val)
static inline bool is_ev1938(struct ensoniq *ensoniq)
static void snd_es1371_codec_write(struct snd_ac97 *ac97,
unsigned short reg, unsigned short val)
static unsigned short snd_es1371_codec_read(struct snd_ac97 *ac97,
unsigned short reg)
static void snd_es1371_codec_wait(struct snd_ac97 *ac97)
static void snd_es1371_adc_rate(struct ensoniq * ensoniq, unsigned int rate)
static void snd_es1371_dac1_rate(struct ensoniq * ensoniq, unsigned int rate)
static void snd_es1371_dac2_rate(struct ensoniq * ensoniq, unsigned int rate)
static int snd_ensoniq_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_ensoniq_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ensoniq_hw_free(struct snd_pcm_substream *substream)
static int snd_ensoniq_playback1_prepare(struct snd_pcm_substream *substream)
static int snd_ensoniq_playback2_prepare(struct snd_pcm_substream *substream)
static int snd_ensoniq_capture_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ensoniq_playback1_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ensoniq_playback2_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ensoniq_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_ensoniq_playback1 =
;
static struct snd_pcm_hardware snd_ensoniq_playback2 =
;
static struct snd_pcm_hardware snd_ensoniq_capture =
;
static int snd_ensoniq_playback1_open(struct snd_pcm_substream *substream)
static int snd_ensoniq_playback2_open(struct snd_pcm_substream *substream)
static int snd_ensoniq_capture_open(struct snd_pcm_substream *substream)
static int snd_ensoniq_playback1_close(struct snd_pcm_substream *substream)
static int snd_ensoniq_playback2_close(struct snd_pcm_substream *substream)
static int snd_ensoniq_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_ensoniq_playback1_ops = ;
static struct snd_pcm_ops snd_ensoniq_playback2_ops = ;
static struct snd_pcm_ops snd_ensoniq_capture_ops = ;
static int __devinit snd_ensoniq_pcm(struct ensoniq * ensoniq, int device,
struct snd_pcm ** rpcm)
static int __devinit snd_ensoniq_pcm2(struct ensoniq * ensoniq, int device,
struct snd_pcm ** rpcm)
static int snd_ens1373_spdif_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ens1373_spdif_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ens1373_spdif_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ens1373_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ens1373_spdif_stream_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ens1373_spdif_stream_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define ES1371_SPDIF(xname) \
#define snd_es1371_spdif_info		snd_ctl_boolean_mono_info
static int snd_es1371_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_es1371_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_es1371_mixer_spdif[] __devinitdata = ;
#define snd_es1373_rear_info		snd_ctl_boolean_mono_info
static int snd_es1373_rear_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_es1373_rear_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ens1373_rear __devinitdata =
;
#define snd_es1373_line_info		snd_ctl_boolean_mono_info
static int snd_es1373_line_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_es1373_line_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ens1373_line __devinitdata =
;
static void snd_ensoniq_mixer_free_ac97(struct snd_ac97 *ac97)
struct es1371_quirk ;
static int es1371_quirk_lookup(struct ensoniq *ensoniq,
struct es1371_quirk *list)
static struct es1371_quirk es1371_spdif_present[] __devinitdata = ;
static struct snd_pci_quirk ens1373_line_quirk[] __devinitdata = ;
static int __devinit snd_ensoniq_1371_mixer(struct ensoniq *ensoniq,
int has_spdif, int has_line)
#define ENSONIQ_CONTROL(xname, mask) \
#define snd_ensoniq_control_info	snd_ctl_boolean_mono_info
static int snd_ensoniq_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ensoniq_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_es1370_controls[2] __devinitdata = ;
#define ES1370_CONTROLS ARRAY_SIZE(snd_es1370_controls)
static void snd_ensoniq_mixer_free_ak4531(struct snd_ak4531 *ak4531)
static int __devinit snd_ensoniq_1370_mixer(struct ensoniq * ensoniq)
static int __devinit snd_ensoniq_get_joystick_port(int dev)
static inline int snd_ensoniq_get_joystick_port(int dev)
static int __devinit snd_ensoniq_create_gameport(struct ensoniq *ensoniq, int dev)
static void snd_ensoniq_free_gameport(struct ensoniq *ensoniq)
static inline int snd_ensoniq_create_gameport(struct ensoniq *ensoniq, long port)
static inline void snd_ensoniq_free_gameport(struct ensoniq *ensoniq)
static void snd_ensoniq_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_ensoniq_proc_init(struct ensoniq * ensoniq)
static int snd_ensoniq_free(struct ensoniq *ensoniq)
static int snd_ensoniq_dev_free(struct snd_device *device)
static struct snd_pci_quirk es1371_amplifier_hack[] __devinitdata = ;
static struct es1371_quirk es1371_ac97_reset_hack[] = ;
static void snd_ensoniq_chip_init(struct ensoniq *ensoniq)
static int snd_ensoniq_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_ensoniq_resume(struct pci_dev *pci)
static int __devinit snd_ensoniq_create(struct snd_card *card,
struct pci_dev *pci,
struct ensoniq ** rensoniq)
static void snd_ensoniq_midi_interrupt(struct ensoniq * ensoniq)
static int snd_ensoniq_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_ensoniq_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_ensoniq_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_ensoniq_midi_output_close(struct snd_rawmidi_substream *substream)
static void snd_ensoniq_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_ensoniq_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_ensoniq_midi_output =
;
static struct snd_rawmidi_ops snd_ensoniq_midi_input =
;
static int __devinit snd_ensoniq_midi(struct ensoniq * ensoniq, int device,
struct snd_rawmidi **rrawmidi)
static irqreturn_t snd_audiopci_interrupt(int irq, void *dev_id)
static int __devinit snd_audiopci_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_audiopci_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_ens137x_init(void)
static void __exit alsa_card_ens137x_exit(void)
module_init(alsa_card_ens137x_init)
module_exit(alsa_card_ens137x_exit)
