MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_DESCRIPTION("OPL4 driver");
MODULE_LICENSE("GPL");
static void inline snd_opl4_wait(struct snd_opl4 *opl4)
void snd_opl4_write(struct snd_opl4 *opl4, u8 reg, u8 value)
EXPORT_SYMBOL(snd_opl4_write);
u8 snd_opl4_read(struct snd_opl4 *opl4, u8 reg)
EXPORT_SYMBOL(snd_opl4_read);
void snd_opl4_read_memory(struct snd_opl4 *opl4, char *buf, int offset, int size)
EXPORT_SYMBOL(snd_opl4_read_memory);
void snd_opl4_write_memory(struct snd_opl4 *opl4, const char *buf, int offset, int size)
EXPORT_SYMBOL(snd_opl4_write_memory);
static void snd_opl4_enable_opl4(struct snd_opl4 *opl4)
static int snd_opl4_detect(struct snd_opl4 *opl4)
#if defined(CONFIG_SND_SEQUENCER) || (defined(MODULE) && defined(CONFIG_SND_SEQUENCER_MODULE))
static void snd_opl4_seq_dev_free(struct snd_seq_device *seq_dev)
static int snd_opl4_create_seq_dev(struct snd_opl4 *opl4, int seq_device)
static void snd_opl4_free(struct snd_opl4 *opl4)
static int snd_opl4_dev_free(struct snd_device *device)
int snd_opl4_create(struct snd_card *card,
unsigned long fm_port, unsigned long pcm_port,
int seq_device,
struct snd_opl3 **ropl3, struct snd_opl4 **ropl4)
EXPORT_SYMBOL(snd_opl4_create);
static int __init alsa_opl4_init(void)
static void __exit alsa_opl4_exit(void)
module_init(alsa_opl4_init)
module_exit(alsa_opl4_exit)
