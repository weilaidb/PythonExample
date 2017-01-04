MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>, Hannu Savolainen 1993-1996, Rob Hooft");
MODULE_DESCRIPTION("Routines for control of AdLib FM cards (OPL2/OPL3/OPL4 chips)");
MODULE_LICENSE("GPL");
extern char snd_opl3_regmap[MAX_OPL2_VOICES][4];
static void snd_opl2_command(struct snd_opl3 * opl3, unsigned short cmd, unsigned char val)
static void snd_opl3_command(struct snd_opl3 * opl3, unsigned short cmd, unsigned char val)
static int snd_opl3_detect(struct snd_opl3 * opl3)
static int snd_opl3_timer1_start(struct snd_timer * timer)
static int snd_opl3_timer1_stop(struct snd_timer * timer)
static int snd_opl3_timer2_start(struct snd_timer * timer)
static int snd_opl3_timer2_stop(struct snd_timer * timer)
static struct snd_timer_hardware snd_opl3_timer1 =
;
static struct snd_timer_hardware snd_opl3_timer2 =
;
static int snd_opl3_timer1_init(struct snd_opl3 * opl3, int timer_no)
static int snd_opl3_timer2_init(struct snd_opl3 * opl3, int timer_no)
void snd_opl3_interrupt(struct snd_hwdep * hw)
EXPORT_SYMBOL(snd_opl3_interrupt);
static int snd_opl3_free(struct snd_opl3 *opl3)
static int snd_opl3_dev_free(struct snd_device *device)
int snd_opl3_new(struct snd_card *card,
unsigned short hardware,
struct snd_opl3 **ropl3)
EXPORT_SYMBOL(snd_opl3_new);
int snd_opl3_init(struct snd_opl3 *opl3)
EXPORT_SYMBOL(snd_opl3_init);
int snd_opl3_create(struct snd_card *card,
unsigned long l_port,
unsigned long r_port,
unsigned short hardware,
int integrated,
struct snd_opl3 ** ropl3)
EXPORT_SYMBOL(snd_opl3_create);
int snd_opl3_timer_new(struct snd_opl3 * opl3, int timer1_dev, int timer2_dev)
EXPORT_SYMBOL(snd_opl3_timer_new);
int snd_opl3_hwdep_new(struct snd_opl3 * opl3,
int device, int seq_device,
struct snd_hwdep ** rhwdep)
EXPORT_SYMBOL(snd_opl3_hwdep_new);
static int __init alsa_opl3_init(void)
static void __exit alsa_opl3_exit(void)
module_init(alsa_opl3_init)
module_exit(alsa_opl3_exit)
