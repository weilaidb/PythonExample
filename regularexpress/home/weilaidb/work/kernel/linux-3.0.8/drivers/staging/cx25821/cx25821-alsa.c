#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define AUDIO_SRAM_CHANNEL	SRAM_CH08
#define dprintk(level, fmt, arg...)				\
do  while (0)
#define dprintk_core(level, fmt, arg...)				\
do  while (0)
static struct snd_card *snd_cx25821_cards[SNDRV_CARDS];
static int devno;
struct cx25821_audio_buffer ;
struct cx25821_audio_dev ;
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = ;
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable cx25821 soundcard. default enabled.");
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for cx25821 capture interface(s).");
MODULE_DESCRIPTION("ALSA driver module for cx25821 based capture cards");
MODULE_AUTHOR("Hiep Huynh");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("{");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug messages");
#define AUD_INT_DN_RISCI1       (1 <<  0)
#define AUD_INT_UP_RISCI1       (1 <<  1)
#define AUD_INT_RDS_DN_RISCI1   (1 <<  2)
#define AUD_INT_DN_RISCI2       (1 <<  4)
#define AUD_INT_UP_RISCI2       (1 <<  5)
#define AUD_INT_RDS_DN_RISCI2   (1 <<  6)
#define AUD_INT_DN_SYNC         (1 << 12)
#define AUD_INT_UP_SYNC         (1 << 13)
#define AUD_INT_RDS_DN_SYNC     (1 << 14)
#define AUD_INT_OPC_ERR         (1 << 16)
#define AUD_INT_BER_IRQ         (1 << 20)
#define AUD_INT_MCHG_IRQ        (1 << 21)
#define GP_COUNT_CONTROL_RESET	0x3
#define PCI_MSK_AUD_EXT   (1 <<  4)
#define PCI_MSK_AUD_INT   (1 <<  3)
static int _cx25821_start_audio_dma(struct cx25821_audio_dev *chip)
static int _cx25821_stop_audio_dma(struct cx25821_audio_dev *chip)
#define MAX_IRQ_LOOP 50
static char *cx25821_aud_irqs[32] = ;
static void cx25821_aud_irq(struct cx25821_audio_dev *chip, u32 status,
u32 mask)
static irqreturn_t cx25821_irq(int irq, void *dev_id)
static int dsp_buffer_free(struct cx25821_audio_dev *chip)
#define DEFAULT_FIFO_SIZE	384
static struct snd_pcm_hardware snd_cx25821_digital_hw = ;
static int snd_cx25821_pcm_open(struct snd_pcm_substream *substream)
static int snd_cx25821_close(struct snd_pcm_substream *substream)
static int snd_cx25821_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_cx25821_hw_free(struct snd_pcm_substream *substream)
static int snd_cx25821_prepare(struct snd_pcm_substream *substream)
static int snd_cx25821_card_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_cx25821_pointer(struct snd_pcm_substream
*substream)
static struct page *snd_cx25821_page(struct snd_pcm_substream *substream,
unsigned long offset)
static struct snd_pcm_ops snd_cx25821_pcm_ops = ;
static int snd_cx25821_pcm(struct cx25821_audio_dev *chip, int device,
char *name)
static DEFINE_PCI_DEVICE_TABLE(cx25821_audio_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, cx25821_audio_pci_tbl);
static void snd_cx25821_dev_free(struct snd_card *card)
static int cx25821_audio_initdev(struct cx25821_dev *dev)
static void cx25821_audio_fini(void)
static int cx25821_alsa_init(void)
late_initcall(cx25821_alsa_init);
module_exit(cx25821_audio_fini);
