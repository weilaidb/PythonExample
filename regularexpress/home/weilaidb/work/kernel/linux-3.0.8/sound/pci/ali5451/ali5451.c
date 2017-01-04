MODULE_AUTHOR("Matt Wu <Matt_Wu@acersoftech.com.cn>");
MODULE_DESCRIPTION("ALI M5451");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
static int pcm_channels = 32;
static int spdif;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for ALI M5451 PCI Audio.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for ALI M5451 PCI Audio.");
module_param(pcm_channels, int, 0444);
MODULE_PARM_DESC(pcm_channels, "PCM Channels");
module_param(spdif, bool, 0444);
MODULE_PARM_DESC(spdif, "Support SPDIF I/O");
static int enable;
module_param(enable, bool, 0444);
#define snd_ali_printk(format, args...) printk(KERN_DEBUG format, ##args);
#define snd_ali_printk(format, args...)
#define DEVICE_ID_ALI5451	((PCI_VENDOR_ID_AL<<16)|PCI_DEVICE_ID_AL_M5451)
#define ALI_CHANNELS		32
#define ALI_PCM_IN_CHANNEL	31
#define ALI_SPDIF_IN_CHANNEL	19
#define ALI_SPDIF_OUT_CHANNEL	15
#define ALI_CENTER_CHANNEL	24
#define ALI_LEF_CHANNEL		23
#define ALI_SURR_LEFT_CHANNEL	26
#define ALI_SURR_RIGHT_CHANNEL	25
#define ALI_MODEM_IN_CHANNEL    21
#define ALI_MODEM_OUT_CHANNEL   20
#define	SNDRV_ALI_VOICE_TYPE_PCM	01
#define SNDRV_ALI_VOICE_TYPE_OTH	02
#define	ALI_5451_V02		0x02
#define ALI_LEGACY_DMAR0        0x00
#define ALI_LEGACY_DMAR4        0x04
#define ALI_LEGACY_DMAR11       0x0b
#define ALI_LEGACY_DMAR15       0x0f
#define ALI_MPUR0		0x20
#define ALI_MPUR1		0x21
#define ALI_MPUR2		0x22
#define ALI_MPUR3		0x23
#define	ALI_AC97_WRITE		0x40
#define ALI_AC97_READ		0x44
#define ALI_SCTRL		0x48
#define   ALI_SPDIF_OUT_ENABLE		0x20
#define   ALI_SCTRL_LINE_IN2		(1 << 9)
#define   ALI_SCTRL_GPIO_IN2		(1 << 13)
#define   ALI_SCTRL_LINE_OUT_EN 	(1 << 20)
#define   ALI_SCTRL_GPIO_OUT_EN 	(1 << 23)
#define   ALI_SCTRL_CODEC1_READY	(1 << 24)
#define   ALI_SCTRL_CODEC2_READY	(1 << 25)
#define ALI_AC97_GPIO		0x4c
#define   ALI_AC97_GPIO_ENABLE		0x8000
#define   ALI_AC97_GPIO_DATA_SHIFT	16
#define ALI_SPDIF_CS		0x70
#define ALI_SPDIF_CTRL		0x74
#define   ALI_SPDIF_IN_FUNC_ENABLE	0x02
#define   ALI_SPDIF_IN_CH_STATUS	0x40
#define   ALI_SPDIF_OUT_CH_STATUS	0xbf
#define ALI_START		0x80
#define ALI_STOP		0x84
#define ALI_CSPF		0x90
#define ALI_AINT		0x98
#define ALI_GC_CIR		0xa0
#define ENDLP_IE		0x00001000
#define MIDLP_IE		0x00002000
#define ALI_AINTEN		0xa4
#define ALI_VOLUME		0xa8
#define ALI_SBDELTA_DELTA_R     0xac
#define ALI_MISCINT		0xb0
#define ADDRESS_IRQ		0x00000020
#define TARGET_REACHED		0x00008000
#define MIXER_OVERFLOW		0x00000800
#define MIXER_UNDERFLOW		0x00000400
#define GPIO_IRQ		0x01000000
#define ALI_SBBL_SBCL           0xc0
#define ALI_SBCTRL_SBE2R_SBDD   0xc4
#define ALI_STIMER		0xc8
#define ALI_GLOBAL_CONTROL	0xd4
#define   ALI_SPDIF_OUT_SEL_PCM		0x00000400
#define   ALI_SPDIF_IN_SUPPORT		0x00000800
#define   ALI_SPDIF_OUT_CH_ENABLE	0x00008000
#define   ALI_SPDIF_IN_CH_ENABLE	0x00080000
#define   ALI_PCM_IN_ENABLE		0x80000000
#define ALI_CSO_ALPHA_FMS	0xe0
#define ALI_LBA			0xe4
#define ALI_ESO_DELTA		0xe8
#define ALI_GVSEL_PAN_VOC_CTRL_EC	0xf0
#define ALI_EBUF1		0xf4
#define ALI_EBUF2		0xf8
#define ALI_REG(codec, x) ((codec)->port + x)
#define MAX_CODECS 2
struct snd_ali;
struct snd_ali_voice;
struct snd_ali_channel_control ;
struct snd_ali_voice ;
struct snd_alidev ;
#define ALI_GLOBAL_REGS		56
#define ALI_CHANNEL_REGS	8
struct snd_ali_image ;
struct snd_ali ;
static DEFINE_PCI_DEVICE_TABLE(snd_ali_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_ali_ids);
static void snd_ali_clear_voices(struct snd_ali *, unsigned int, unsigned int);
static unsigned short snd_ali_codec_peek(struct snd_ali *, int, unsigned short);
static void snd_ali_codec_poke(struct snd_ali *, int, unsigned short,
unsigned short);
static inline unsigned int snd_ali_5451_peek(struct snd_ali *codec,
unsigned int port)
static inline void snd_ali_5451_poke(struct snd_ali *codec,
unsigned int port,
unsigned int val)
static int snd_ali_codec_ready(struct snd_ali *codec,
unsigned int port)
static int snd_ali_stimer_ready(struct snd_ali *codec)
static void snd_ali_codec_poke(struct snd_ali *codec,int secondary,
unsigned short reg,
unsigned short val)
static unsigned short snd_ali_codec_peek(struct snd_ali *codec,
int secondary,
unsigned short reg)
static void snd_ali_codec_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val )
static unsigned short snd_ali_codec_read(struct snd_ac97 *ac97,
unsigned short reg)
static int snd_ali_reset_5451(struct snd_ali *codec)
static void snd_ali_enable_special_channel(struct snd_ali *codec,
unsigned int channel)
static void snd_ali_disable_special_channel(struct snd_ali *codec,
unsigned int channel)
static void snd_ali_enable_address_interrupt(struct snd_ali *codec)
static void snd_ali_disable_address_interrupt(struct snd_ali *codec)
static void snd_ali_disable_voice_irq(struct snd_ali *codec,
unsigned int channel)
static int snd_ali_alloc_pcm_channel(struct snd_ali *codec, int channel)
static int snd_ali_find_free_channel(struct snd_ali * codec, int rec)
static void snd_ali_free_channel_pcm(struct snd_ali *codec, int channel)
static void snd_ali_stop_voice(struct snd_ali *codec, unsigned int channel)
static void snd_ali_delay(struct snd_ali *codec,int interval)
static void snd_ali_detect_spdif_rate(struct snd_ali *codec)
static unsigned int snd_ali_get_spdif_in_rate(struct snd_ali *codec)
static void snd_ali_enable_spdif_in(struct snd_ali *codec)
static void snd_ali_disable_spdif_in(struct snd_ali *codec)
static void snd_ali_set_spdif_out_rate(struct snd_ali *codec, unsigned int rate)
static void snd_ali_enable_spdif_out(struct snd_ali *codec)
static void snd_ali_enable_spdif_chnout(struct snd_ali *codec)
static void snd_ali_disable_spdif_chnout(struct snd_ali *codec)
static void snd_ali_disable_spdif_out(struct snd_ali *codec)
static void snd_ali_update_ptr(struct snd_ali *codec, int channel)
static irqreturn_t snd_ali_card_interrupt(int irq, void *dev_id)
static struct snd_ali_voice *snd_ali_alloc_voice(struct snd_ali * codec,
int type, int rec, int channel)
static void snd_ali_free_voice(struct snd_ali * codec,
struct snd_ali_voice *pvoice)
static void snd_ali_clear_voices(struct snd_ali *codec,
unsigned int v_min,
unsigned int v_max)
static void snd_ali_write_voice_regs(struct snd_ali *codec,
unsigned int Channel,
unsigned int LBA,
unsigned int CSO,
unsigned int ESO,
unsigned int DELTA,
unsigned int ALPHA_FMS,
unsigned int GVSEL,
unsigned int PAN,
unsigned int VOL,
unsigned int CTRL,
unsigned int EC)
static unsigned int snd_ali_convert_rate(unsigned int rate, int rec)
static unsigned int snd_ali_control_mode(struct snd_pcm_substream *substream)
static int snd_ali_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_ali_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ali_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_ali_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ali_hw_free(struct snd_pcm_substream *substream)
static int snd_ali_playback_prepare(struct snd_pcm_substream *substream)
static int snd_ali_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
snd_ali_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ali_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_ali_playback =
;
static struct snd_pcm_hardware snd_ali_capture =
;
static void snd_ali_pcm_free_substream(struct snd_pcm_runtime *runtime)
static int snd_ali_open(struct snd_pcm_substream *substream, int rec,
int channel, struct snd_pcm_hardware *phw)
static int snd_ali_playback_open(struct snd_pcm_substream *substream)
static int snd_ali_capture_open(struct snd_pcm_substream *substream)
static int snd_ali_playback_close(struct snd_pcm_substream *substream)
static int snd_ali_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_ali_playback_ops = ;
static struct snd_pcm_ops snd_ali_capture_ops = ;
static int snd_ali_modem_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static struct snd_pcm_hardware snd_ali_modem =
;
static int snd_ali_modem_open(struct snd_pcm_substream *substream, int rec,
int channel)
static int snd_ali_modem_playback_open(struct snd_pcm_substream *substream)
static int snd_ali_modem_capture_open(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_ali_modem_playback_ops = ;
static struct snd_pcm_ops snd_ali_modem_capture_ops = ;
struct ali_pcm_description ;
static void snd_ali_pcm_free(struct snd_pcm *pcm)
static int __devinit snd_ali_pcm(struct snd_ali * codec, int device,
struct ali_pcm_description *desc)
static struct ali_pcm_description ali_pcms[] = ;
static int __devinit snd_ali_build_pcms(struct snd_ali *codec)
#define ALI5451_SPDIF(xname, xindex, value) \
#define snd_ali5451_spdif_info		snd_ctl_boolean_mono_info
static int snd_ali5451_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ali5451_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ali5451_mixer_spdif[] __devinitdata = ;
static int __devinit snd_ali_mixer(struct snd_ali * codec)
static int ali_suspend(struct pci_dev *pci, pm_message_t state)
static int ali_resume(struct pci_dev *pci)
static int snd_ali_free(struct snd_ali * codec)
static int snd_ali_chip_init(struct snd_ali *codec)
static void snd_ali_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buf)
static void __devinit snd_ali_proc_init(struct snd_ali *codec)
static int __devinit snd_ali_resources(struct snd_ali *codec)
static int snd_ali_dev_free(struct snd_device *device)
static int __devinit snd_ali_create(struct snd_card *card,
struct pci_dev *pci,
int pcm_streams,
int spdif_support,
struct snd_ali ** r_ali)
static int __devinit snd_ali_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_ali_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_ali_init(void)
static void __exit alsa_card_ali_exit(void)
module_init(alsa_card_ali_init)
module_exit(alsa_card_ali_exit)
