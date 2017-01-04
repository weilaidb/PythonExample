#define dprintk(level,fmt, arg...)	if (debug >= level) \
printk(KERN_INFO "%s/1: " fmt, chip->core->name , ## arg)
#define dprintk_core(level,fmt, arg...)	if (debug >= level) \
printk(KERN_DEBUG "%s/1: " fmt, chip->core->name , ## arg)
struct cx88_audio_buffer ;
struct cx88_audio_dev ;
typedef struct cx88_audio_dev snd_cx88_card_t;
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static const char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = ;
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable cx88x soundcard. default enabled.");
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for cx88x capture interface(s).");
MODULE_DESCRIPTION("ALSA driver module for cx2388x based TV cards");
MODULE_AUTHOR("Ricardo Cerqueira");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("{,"
"{,"
"{");
static unsigned int debug;
module_param(debug,int,0644);
MODULE_PARM_DESC(debug,"enable debug messages");
static int _cx88_start_audio_dma(snd_cx88_card_t *chip)
static int _cx88_stop_audio_dma(snd_cx88_card_t *chip)
#define MAX_IRQ_LOOP 50
static const char *cx88_aud_irqs[32] = ;
static void cx8801_aud_irq(snd_cx88_card_t *chip)
static irqreturn_t cx8801_irq(int irq, void *dev_id)
static int dsp_buffer_free(snd_cx88_card_t *chip)
#define DEFAULT_FIFO_SIZE	4096
static const struct snd_pcm_hardware snd_cx88_digital_hw = ;
static int snd_cx88_pcm_open(struct snd_pcm_substream *substream)
static int snd_cx88_close(struct snd_pcm_substream *substream)
static int snd_cx88_hw_params(struct snd_pcm_substream * substream,
struct snd_pcm_hw_params * hw_params)
static int snd_cx88_hw_free(struct snd_pcm_substream * substream)
static int snd_cx88_prepare(struct snd_pcm_substream *substream)
static int snd_cx88_card_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_cx88_pointer(struct snd_pcm_substream *substream)
static struct page *snd_cx88_page(struct snd_pcm_substream *substream,
unsigned long offset)
static struct snd_pcm_ops snd_cx88_pcm_ops = ;
static int __devinit snd_cx88_pcm(snd_cx88_card_t *chip, int device, const char *name)
static int snd_cx88_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *info)
static int snd_cx88_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static void snd_cx88_wm8775_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static int snd_cx88_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static const DECLARE_TLV_DB_SCALE(snd_cx88_db_scale, -6300, 100, 0);
static const struct snd_kcontrol_new snd_cx88_volume = ;
static int snd_cx88_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static int snd_cx88_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static const struct snd_kcontrol_new snd_cx88_dac_switch = ;
static const struct snd_kcontrol_new snd_cx88_source_switch = ;
static int snd_cx88_alc_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static int snd_cx88_alc_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static struct snd_kcontrol_new snd_cx88_alc_switch = ;
static const struct pci_device_id const cx88_audio_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, cx88_audio_pci_tbl);
static int snd_cx88_free(snd_cx88_card_t *chip)
static void snd_cx88_dev_free(struct snd_card * card)
static int devno;
static int __devinit snd_cx88_create(struct snd_card *card,
struct pci_dev *pci,
snd_cx88_card_t **rchip,
struct cx88_core **core_ptr)
static int __devinit cx88_audio_initdev(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit cx88_audio_finidev(struct pci_dev *pci)
static struct pci_driver cx88_audio_pci_driver = ;
static int __init cx88_audio_init(void)
static void __exit cx88_audio_fini(void)
module_init(cx88_audio_init);
module_exit(cx88_audio_fini);
