#define IRQ_DISABLE		0
#define IRQ_ENABLE		1
#define AC97_ACCESS		0x00
#define AC97_READ		0x04
#define AC97_STATUS		0x06
#define   AC97_DATA_AVAIL		(1<<6)
#define   AC97_BUSY			(1<<7)
#define ALS300_IRQ_STATUS	0x07
#define   IRQ_PLAYBACK			(1<<3)
#define   IRQ_CAPTURE			(1<<2)
#define GCR_DATA		0x08
#define GCR_INDEX		0x0C
#define ALS300P_DRAM_IRQ_STATUS	0x0D
#define MPU_IRQ_STATUS		0x0E
#define ALS300P_IRQ_STATUS	0x0F
#define PLAYBACK_START		0x80
#define PLAYBACK_END		0x81
#define PLAYBACK_CONTROL	0x82
#define   TRANSFER_START		(1<<16)
#define   FIFO_PAUSE			(1<<17)
#define RECORD_START		0x83
#define RECORD_END		0x84
#define RECORD_CONTROL		0x85
#define DRAM_WRITE_CONTROL	0x8B
#define   WRITE_TRANS_START		(1<<16)
#define   DRAM_MODE_2			(1<<17)
#define MISC_CONTROL		0x8C
#define   IRQ_SET_BIT			(1<<15)
#define   VMUTE_NORMAL			(1<<20)
#define   MMUTE_NORMAL			(1<<21)
#define MUS_VOC_VOL		0x8E
#define PLAYBACK_BLOCK_COUNTER	0x9A
#define RECORD_BLOCK_COUNTER	0x9B
#define DEBUG_CALLS	0
#define DEBUG_PLAY_REC	0
#if DEBUG_CALLS
#define snd_als300_dbgcalls(format, args...) printk(KERN_DEBUG format, ##args)
#define snd_als300_dbgcallenter() printk(KERN_ERR "--> %s\n", __func__)
#define snd_als300_dbgcallleave() printk(KERN_ERR "<-- %s\n", __func__)
#define snd_als300_dbgcalls(format, args...)
#define snd_als300_dbgcallenter()
#define snd_als300_dbgcallleave()
#if DEBUG_PLAY_REC
#define snd_als300_dbgplay(format, args...) printk(KERN_ERR format, ##args)
#define snd_als300_dbgplay(format, args...)
enum ;
MODULE_AUTHOR("Ash Willis <ashwillis@programmer.net>");
MODULE_DESCRIPTION("Avance Logic ALS300");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
struct snd_als300 ;
struct snd_als300_substream_data ;
static DEFINE_PCI_DEVICE_TABLE(snd_als300_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_als300_ids);
static inline u32 snd_als300_gcr_read(unsigned long port, unsigned short reg)
static inline void snd_als300_gcr_write(unsigned long port,
unsigned short reg, u32 val)
static void snd_als300_set_irq_flag(struct snd_als300 *chip, int cmd)
static int snd_als300_free(struct snd_als300 *chip)
static int snd_als300_dev_free(struct snd_device *device)
static irqreturn_t snd_als300_interrupt(int irq, void *dev_id)
static irqreturn_t snd_als300plus_interrupt(int irq, void *dev_id)
static void __devexit snd_als300_remove(struct pci_dev *pci)
static unsigned short snd_als300_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void snd_als300_ac97_write(struct snd_ac97 *ac97,
unsigned short reg, unsigned short val)
static int snd_als300_ac97(struct snd_als300 *chip)
static struct snd_pcm_hardware snd_als300_playback_hw =
;
static struct snd_pcm_hardware snd_als300_capture_hw =
;
static int snd_als300_playback_open(struct snd_pcm_substream *substream)
static int snd_als300_playback_close(struct snd_pcm_substream *substream)
static int snd_als300_capture_open(struct snd_pcm_substream *substream)
static int snd_als300_capture_close(struct snd_pcm_substream *substream)
static int snd_als300_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_als300_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_als300_playback_prepare(struct snd_pcm_substream *substream)
static int snd_als300_capture_prepare(struct snd_pcm_substream *substream)
static int snd_als300_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_als300_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_als300_playback_ops = ;
static struct snd_pcm_ops snd_als300_capture_ops = ;
static int __devinit snd_als300_new_pcm(struct snd_als300 *chip)
static void snd_als300_init(struct snd_als300 *chip)
static int __devinit snd_als300_create(struct snd_card *card,
struct pci_dev *pci, int chip_type,
struct snd_als300 **rchip)
static int snd_als300_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_als300_resume(struct pci_dev *pci)
static int __devinit snd_als300_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static struct pci_driver driver = ;
static int __init alsa_card_als300_init(void)
static void __exit alsa_card_als300_exit(void)
module_init(alsa_card_als300_init)
module_exit(alsa_card_als300_exit)
