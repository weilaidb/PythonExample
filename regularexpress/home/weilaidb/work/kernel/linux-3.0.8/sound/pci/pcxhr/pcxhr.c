#define DRIVER_NAME "pcxhr"
MODULE_AUTHOR("Markus Bollinger <bollinger@digigram.com>, "
"Marc Titinger <titinger@digigram.com>");
MODULE_DESCRIPTION("Digigram " DRIVER_NAME " " PCXHR_DRIVER_VERSION_STRING);
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int mono[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Digigram " DRIVER_NAME " soundcard");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Digigram " DRIVER_NAME " soundcard");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Digigram " DRIVER_NAME " soundcard");
module_param_array(mono, bool, NULL, 0444);
MODULE_PARM_DESC(mono, "Mono capture mode (default is stereo)");
enum ;
static DEFINE_PCI_DEVICE_TABLE(pcxhr_ids) = ;
MODULE_DEVICE_TABLE(pci, pcxhr_ids);
struct board_parameters ;
static struct board_parameters pcxhr_board_params[] = ;
#define PCXHR_BOARD_HAS_AES1(x) (x->fw_file_set != 4)
#define PCXHR_BOARD_AESIN_NO_192K(x) ((x->capture_chips == 0) || \
(x->fw_file_set == 0)   || \
(x->fw_file_set == 2))
static int pcxhr_pll_freq_register(unsigned int freq, unsigned int* pllreg,
unsigned int* realfreq)
#define PCXHR_FREQ_REG_MASK		0x1f
#define PCXHR_FREQ_QUARTZ_48000		0x00
#define PCXHR_FREQ_QUARTZ_24000		0x01
#define PCXHR_FREQ_QUARTZ_12000		0x09
#define PCXHR_FREQ_QUARTZ_32000		0x08
#define PCXHR_FREQ_QUARTZ_16000		0x04
#define PCXHR_FREQ_QUARTZ_8000		0x0c
#define PCXHR_FREQ_QUARTZ_44100		0x02
#define PCXHR_FREQ_QUARTZ_22050		0x0a
#define PCXHR_FREQ_QUARTZ_11025		0x06
#define PCXHR_FREQ_PLL			0x05
#define PCXHR_FREQ_QUARTZ_192000	0x10
#define PCXHR_FREQ_QUARTZ_96000		0x18
#define PCXHR_FREQ_QUARTZ_176400	0x14
#define PCXHR_FREQ_QUARTZ_88200		0x1c
#define PCXHR_FREQ_QUARTZ_128000	0x12
#define PCXHR_FREQ_QUARTZ_64000		0x1a
#define PCXHR_FREQ_WORD_CLOCK		0x0f
#define PCXHR_FREQ_SYNC_AES		0x0e
#define PCXHR_FREQ_AES_1		0x07
#define PCXHR_FREQ_AES_2		0x0b
#define PCXHR_FREQ_AES_3		0x03
#define PCXHR_FREQ_AES_4		0x0d
static int pcxhr_get_clock_reg(struct pcxhr_mgr *mgr, unsigned int rate,
unsigned int *reg, unsigned int *freq)
static int pcxhr_sub_set_clock(struct pcxhr_mgr *mgr,
unsigned int rate,
int *changed)
#define PCXHR_MODIFY_CLOCK_S_BIT	0x04
#define PCXHR_IRQ_TIMER_FREQ		92000
#define PCXHR_IRQ_TIMER_PERIOD		48
int pcxhr_set_clock(struct pcxhr_mgr *mgr, unsigned int rate)
static int pcxhr_sub_get_external_clock(struct pcxhr_mgr *mgr,
enum pcxhr_clock_type clock_type,
int *sample_rate)
int pcxhr_get_external_clock(struct pcxhr_mgr *mgr,
enum pcxhr_clock_type clock_type,
int *sample_rate)
static int pcxhr_set_stream_state(struct pcxhr_stream *stream)
#define HEADER_FMT_BASE_LIN		0xfed00000
#define HEADER_FMT_BASE_FLOAT		0xfad00000
#define HEADER_FMT_INTEL		0x00008000
#define HEADER_FMT_24BITS		0x00004000
#define HEADER_FMT_16BITS		0x00002000
#define HEADER_FMT_UPTO11		0x00000200
#define HEADER_FMT_UPTO32		0x00000100
#define HEADER_FMT_MONO			0x00000080
static int pcxhr_set_format(struct pcxhr_stream *stream)
static int pcxhr_update_r_buffer(struct pcxhr_stream *stream)
static inline int pcxhr_stream_scheduled_get_pipe(struct pcxhr_stream *stream,
struct pcxhr_pipe **pipe)
static void pcxhr_trigger_tasklet(unsigned long arg)
static int pcxhr_trigger(struct snd_pcm_substream *subs, int cmd)
static int pcxhr_hardware_timer(struct pcxhr_mgr *mgr, int start)
static int pcxhr_prepare(struct snd_pcm_substream *subs)
static int pcxhr_hw_params(struct snd_pcm_substream *subs,
struct snd_pcm_hw_params *hw)
static int pcxhr_hw_free(struct snd_pcm_substream *subs)
static struct snd_pcm_hardware pcxhr_caps =
;
static int pcxhr_open(struct snd_pcm_substream *subs)
static int pcxhr_close(struct snd_pcm_substream *subs)
static snd_pcm_uframes_t pcxhr_stream_pointer(struct snd_pcm_substream *subs)
static struct snd_pcm_ops pcxhr_ops = ;
int pcxhr_create_pcm(struct snd_pcxhr *chip)
static int pcxhr_chip_free(struct snd_pcxhr *chip)
static int pcxhr_chip_dev_free(struct snd_device *device)
static int __devinit pcxhr_create(struct pcxhr_mgr *mgr,
struct snd_card *card, int idx)
static void pcxhr_proc_info(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void pcxhr_proc_sync(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void pcxhr_proc_gpio_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void pcxhr_proc_gpo_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit pcxhr_proc_init(struct snd_pcxhr *chip)
static int pcxhr_free(struct pcxhr_mgr *mgr)
static int __devinit pcxhr_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit pcxhr_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init pcxhr_module_init(void)
static void __exit pcxhr_module_exit(void)
module_init(pcxhr_module_init)
module_exit(pcxhr_module_exit)
