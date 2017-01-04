MODULE_AUTHOR("David Dillow <dave@thedillows.org>");
MODULE_DESCRIPTION("SiS7019");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
static int enable = 1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for SiS7019 Audio Accelerator.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for SiS7019 Audio Accelerator.");
module_param(enable, bool, 0444);
MODULE_PARM_DESC(enable, "Enable SiS7019 Audio Accelerator.");
static DEFINE_PCI_DEVICE_TABLE(snd_sis7019_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_sis7019_ids);
struct voice ;
#define SIS_SUSPEND_PAGES	4
#define SIS_SUSPEND_PAGES	1
struct sis7019 ;
#define SIS_PRIMARY_CODEC_PRESENT	0x0001
#define SIS_SECONDARY_CODEC_PRESENT	0x0002
#define SIS_TERTIARY_CODEC_PRESENT	0x0004
static struct snd_pcm_hardware sis_playback_hw_info = ;
static struct snd_pcm_hardware sis_capture_hw_info = ;
static void sis_update_sso(struct voice *voice, u16 period)
static void sis_update_voice(struct voice *voice)
static void sis_voice_irq(u32 status, struct voice *voice)
static irqreturn_t sis_interrupt(int irq, void *dev)
static u32 sis_rate_to_delta(unsigned int rate)
static void __sis_map_silence(struct sis7019 *sis)
static void __sis_unmap_silence(struct sis7019 *sis)
static void sis_free_voice(struct sis7019 *sis, struct voice *voice)
static struct voice *__sis_alloc_playback_voice(struct sis7019 *sis)
static struct voice *sis_alloc_playback_voice(struct sis7019 *sis)
static int sis_alloc_timing_voice(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int sis_playback_open(struct snd_pcm_substream *substream)
static int sis_substream_close(struct snd_pcm_substream *substream)
static int sis_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int sis_hw_free(struct snd_pcm_substream *substream)
static int sis_pcm_playback_prepare(struct snd_pcm_substream *substream)
static int sis_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t sis_pcm_pointer(struct snd_pcm_substream *substream)
static int sis_capture_open(struct snd_pcm_substream *substream)
static int sis_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static void sis_prepare_timing_voice(struct voice *voice,
struct snd_pcm_substream *substream)
static int sis_pcm_capture_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_ops sis_playback_ops = ;
static struct snd_pcm_ops sis_capture_ops = ;
static int __devinit sis_pcm_create(struct sis7019 *sis)
static unsigned short sis_ac97_rw(struct sis7019 *sis, int codec, u32 cmd)
static void sis_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static unsigned short sis_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
static int __devinit sis_mixer_create(struct sis7019 *sis)
static void sis_free_suspend(struct sis7019 *sis)
static int sis_chip_free(struct sis7019 *sis)
static int sis_dev_free(struct snd_device *dev)
static int sis_chip_init(struct sis7019 *sis)
static int sis_suspend(struct pci_dev *pci, pm_message_t state)
static int sis_resume(struct pci_dev *pci)
static int sis_alloc_suspend(struct sis7019 *sis)
static int __devinit sis_chip_create(struct snd_card *card,
struct pci_dev *pci)
static int __devinit snd_sis7019_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_sis7019_remove(struct pci_dev *pci)
static struct pci_driver sis7019_driver = ;
static int __init sis7019_init(void)
static void __exit sis7019_exit(void)
module_init(sis7019_init);
module_exit(sis7019_exit);
