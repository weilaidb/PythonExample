#define	AD1889_DRVVER	"Version: 1.7"
MODULE_AUTHOR("Kyle McMartin <kyle@parisc-linux.org>, Thibaut Varene <t-bone@parisc-linux.org>");
MODULE_DESCRIPTION("Analog Devices AD1889 ALSA sound driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the AD1889 soundcard.");
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the AD1889 soundcard.");
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable AD1889 soundcard.");
static char *ac97_quirk[SNDRV_CARDS];
module_param_array(ac97_quirk, charp, NULL, 0444);
MODULE_PARM_DESC(ac97_quirk, "AC'97 workaround for strange hardware.");
#define DEVNAME "ad1889"
#define PFX	DEVNAME ": "
#define ad1889_debug(fmt, arg...) snd_printd(KERN_DEBUG fmt, ## arg)
struct ad1889_register_state ;
struct snd_ad1889 ;
static inline u16
ad1889_readw(struct snd_ad1889 *chip, unsigned reg)
static inline void
ad1889_writew(struct snd_ad1889 *chip, unsigned reg, u16 val)
static inline u32
ad1889_readl(struct snd_ad1889 *chip, unsigned reg)
static inline void
ad1889_writel(struct snd_ad1889 *chip, unsigned reg, u32 val)
static inline void
ad1889_unmute(struct snd_ad1889 *chip)
static inline void
ad1889_mute(struct snd_ad1889 *chip)
static inline void
ad1889_load_adc_buffer_address(struct snd_ad1889 *chip, u32 address)
static inline void
ad1889_load_adc_buffer_count(struct snd_ad1889 *chip, u32 count)
static inline void
ad1889_load_adc_interrupt_count(struct snd_ad1889 *chip, u32 count)
static inline void
ad1889_load_wave_buffer_address(struct snd_ad1889 *chip, u32 address)
static inline void
ad1889_load_wave_buffer_count(struct snd_ad1889 *chip, u32 count)
static inline void
ad1889_load_wave_interrupt_count(struct snd_ad1889 *chip, u32 count)
static void
ad1889_channel_reset(struct snd_ad1889 *chip, unsigned int channel)
static u16
snd_ad1889_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
static void
snd_ad1889_ac97_write(struct snd_ac97 *ac97, unsigned short reg, unsigned short val)
static int
snd_ad1889_ac97_ready(struct snd_ad1889 *chip)
static int
snd_ad1889_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int
snd_ad1889_hw_free(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_ad1889_playback_hw = ;
static struct snd_pcm_hardware snd_ad1889_capture_hw = ;
static int
snd_ad1889_playback_open(struct snd_pcm_substream *ss)
static int
snd_ad1889_capture_open(struct snd_pcm_substream *ss)
static int
snd_ad1889_playback_close(struct snd_pcm_substream *ss)
static int
snd_ad1889_capture_close(struct snd_pcm_substream *ss)
static int
snd_ad1889_playback_prepare(struct snd_pcm_substream *ss)
static int
snd_ad1889_capture_prepare(struct snd_pcm_substream *ss)
static int
snd_ad1889_playback_trigger(struct snd_pcm_substream *ss, int cmd)
static int
snd_ad1889_capture_trigger(struct snd_pcm_substream *ss, int cmd)
static snd_pcm_uframes_t
snd_ad1889_playback_pointer(struct snd_pcm_substream *ss)
static snd_pcm_uframes_t
snd_ad1889_capture_pointer(struct snd_pcm_substream *ss)
static struct snd_pcm_ops snd_ad1889_playback_ops = ;
static struct snd_pcm_ops snd_ad1889_capture_ops = ;
static irqreturn_t
snd_ad1889_interrupt(int irq, void *dev_id)
static int __devinit
snd_ad1889_pcm_init(struct snd_ad1889 *chip, int device, struct snd_pcm **rpcm)
static void
snd_ad1889_proc_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void __devinit
snd_ad1889_proc_init(struct snd_ad1889 *chip)
static struct ac97_quirk ac97_quirks[] = ;
static void __devinit
snd_ad1889_ac97_xinit(struct snd_ad1889 *chip)
static void
snd_ad1889_ac97_bus_free(struct snd_ac97_bus *bus)
static void
snd_ad1889_ac97_free(struct snd_ac97 *ac97)
static int __devinit
snd_ad1889_ac97_init(struct snd_ad1889 *chip, const char *quirk_override)
static int
snd_ad1889_free(struct snd_ad1889 *chip)
static int
snd_ad1889_dev_free(struct snd_device *device)
static int __devinit
snd_ad1889_init(struct snd_ad1889 *chip)
static int __devinit
snd_ad1889_create(struct snd_card *card,
struct pci_dev *pci,
struct snd_ad1889 **rchip)
static int __devinit
snd_ad1889_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit
snd_ad1889_remove(struct pci_dev *pci)
static DEFINE_PCI_DEVICE_TABLE(snd_ad1889_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_ad1889_ids);
static struct pci_driver ad1889_pci_driver = ;
static int __init
alsa_ad1889_init(void)
static void __exit
alsa_ad1889_fini(void)
module_init(alsa_ad1889_init);
module_exit(alsa_ad1889_fini);
