MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("ALSA lowlevel driver for Sound Blaster cards");
MODULE_LICENSE("GPL");
#define BUSY_LOOPS 100000
#undef IO_DEBUG
int snd_sbdsp_command(struct snd_sb *chip, unsigned char val)
int snd_sbdsp_get_byte(struct snd_sb *chip)
int snd_sbdsp_reset(struct snd_sb *chip)
static int snd_sbdsp_version(struct snd_sb * chip)
static int snd_sbdsp_probe(struct snd_sb * chip)
static int snd_sbdsp_free(struct snd_sb *chip)
static int snd_sbdsp_dev_free(struct snd_device *device)
int snd_sbdsp_create(struct snd_card *card,
unsigned long port,
int irq,
irq_handler_t irq_handler,
int dma8,
int dma16,
unsigned short hardware,
struct snd_sb **r_chip)
EXPORT_SYMBOL(snd_sbdsp_command);
EXPORT_SYMBOL(snd_sbdsp_get_byte);
EXPORT_SYMBOL(snd_sbdsp_reset);
EXPORT_SYMBOL(snd_sbdsp_create);
EXPORT_SYMBOL(snd_sbmixer_write);
EXPORT_SYMBOL(snd_sbmixer_read);
EXPORT_SYMBOL(snd_sbmixer_new);
EXPORT_SYMBOL(snd_sbmixer_add_ctl);
EXPORT_SYMBOL(snd_sbmixer_suspend);
EXPORT_SYMBOL(snd_sbmixer_resume);
static int __init alsa_sb_common_init(void)
static void __exit alsa_sb_common_exit(void)
module_init(alsa_sb_common_init)
module_exit(alsa_sb_common_exit)
