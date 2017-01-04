#define CARD_NAME "miXart"
MODULE_AUTHOR("Digigram <alsa@digigram.com>");
MODULE_DESCRIPTION("Digigram " CARD_NAME);
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Digigram " CARD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Digigram " CARD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Digigram " CARD_NAME " soundcard.");
static DEFINE_PCI_DEVICE_TABLE(snd_mixart_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_mixart_ids);
static int mixart_set_pipe_state(struct mixart_mgr *mgr,
struct mixart_pipe *pipe, int start)
static int mixart_set_clock(struct mixart_mgr *mgr,
struct mixart_pipe *pipe, unsigned int rate)
struct mixart_pipe *
snd_mixart_add_ref_pipe(struct snd_mixart *chip, int pcm_number, int capture,
int monitoring)
int snd_mixart_kill_ref_pipe(struct mixart_mgr *mgr,
struct mixart_pipe *pipe, int monitoring)
static int mixart_set_stream_state(struct mixart_stream *stream, int start)
static int snd_mixart_trigger(struct snd_pcm_substream *subs, int cmd)
static int mixart_sync_nonblock_events(struct mixart_mgr *mgr)
static int snd_mixart_prepare(struct snd_pcm_substream *subs)
static int mixart_set_format(struct mixart_stream *stream, snd_pcm_format_t format)
static int snd_mixart_hw_params(struct snd_pcm_substream *subs,
struct snd_pcm_hw_params *hw)
static int snd_mixart_hw_free(struct snd_pcm_substream *subs)
static struct snd_pcm_hardware snd_mixart_analog_caps =
;
static struct snd_pcm_hardware snd_mixart_digital_caps =
;
static int snd_mixart_playback_open(struct snd_pcm_substream *subs)
static int snd_mixart_capture_open(struct snd_pcm_substream *subs)
static int snd_mixart_close(struct snd_pcm_substream *subs)
static snd_pcm_uframes_t snd_mixart_stream_pointer(struct snd_pcm_substream *subs)
static struct snd_pcm_ops snd_mixart_playback_ops = ;
static struct snd_pcm_ops snd_mixart_capture_ops = ;
static void preallocate_buffers(struct snd_mixart *chip, struct snd_pcm *pcm)
static int snd_mixart_pcm_analog(struct snd_mixart *chip)
static int snd_mixart_pcm_digital(struct snd_mixart *chip)
static int snd_mixart_chip_free(struct snd_mixart *chip)
static int snd_mixart_chip_dev_free(struct snd_device *device)
static int __devinit snd_mixart_create(struct mixart_mgr *mgr, struct snd_card *card, int idx)
int snd_mixart_create_pcm(struct snd_mixart* chip)
static int snd_mixart_free(struct mixart_mgr *mgr)
static ssize_t snd_mixart_BA0_read(struct snd_info_entry *entry,
void *file_private_data,
struct file *file, char __user *buf,
size_t count, loff_t pos)
static ssize_t snd_mixart_BA1_read(struct snd_info_entry *entry,
void *file_private_data,
struct file *file, char __user *buf,
size_t count, loff_t pos)
static struct snd_info_entry_ops snd_mixart_proc_ops_BA0 = ;
static struct snd_info_entry_ops snd_mixart_proc_ops_BA1 = ;
static void snd_mixart_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_mixart_proc_init(struct snd_mixart *chip)
static int __devinit snd_mixart_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_mixart_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_mixart_init(void)
static void __exit alsa_card_mixart_exit(void)
module_init(alsa_card_mixart_init)
module_exit(alsa_card_mixart_exit)
