static unsigned int audio_debug;
module_param(audio_debug, int, 0644);
MODULE_PARM_DESC(audio_debug,"enable debug messages [tv audio]");
static unsigned int audio_ddep;
module_param(audio_ddep, int, 0644);
MODULE_PARM_DESC(audio_ddep,"audio ddep overwrite");
static int audio_clock_override = UNSET;
module_param(audio_clock_override, int, 0644);
static int audio_clock_tweak;
module_param(audio_clock_tweak, int, 0644);
MODULE_PARM_DESC(audio_clock_tweak, "Audio clock tick fine tuning for cards with audio crystal that's slightly off (range [-1024 .. 1024])");
#define dprintk(fmt, arg...)	if (audio_debug) \
printk(KERN_DEBUG "%s/audio: " fmt, dev->name , ## arg)
#define d2printk(fmt, arg...)	if (audio_debug > 1) \
printk(KERN_DEBUG "%s/audio: " fmt, dev->name, ## arg)
#define print_regb(reg) printk("%s:   reg 0x%03x [%-16s]: 0x%02x\n", \
dev->name,(SAA7134_##reg),(#reg),saa_readb((SAA7134_##reg)))
#define SCAN_INITIAL_DELAY     1000
#define SCAN_SAMPLE_DELAY       200
#define SCAN_SUBCARRIER_DELAY  2000
static struct mainscan  mainscan[] = ;
static struct saa7134_tvaudio tvaudio[] = ;
#define TVAUDIO ARRAY_SIZE(tvaudio)
static u32 tvaudio_carr2reg(u32 carrier)
static void tvaudio_setcarrier(struct saa7134_dev *dev,
int primary, int secondary)
#define SAA7134_MUTE_MASK 0xbb
#define SAA7134_MUTE_ANALOG 0x04
#define SAA7134_MUTE_I2S 0x40
static void mute_input_7134(struct saa7134_dev *dev)
static void tvaudio_setmode(struct saa7134_dev *dev,
struct saa7134_tvaudio *audio,
char *note)
static int tvaudio_sleep(struct saa7134_dev *dev, int timeout)
static int tvaudio_checkcarrier(struct saa7134_dev *dev, struct mainscan *scan)
static int tvaudio_getstereo(struct saa7134_dev *dev, struct saa7134_tvaudio *audio)
static int tvaudio_setstereo(struct saa7134_dev *dev, struct saa7134_tvaudio *audio,
u32 mode)
static int tvaudio_thread(void *data)
static char *stdres[0x20] = ;
#define DSP_RETRY 32
#define DSP_DELAY 16
#define SAA7135_DSP_RWCLEAR_RERR 1
static inline int saa_dsp_reset_error_bit(struct saa7134_dev *dev)
static inline int saa_dsp_wait_bit(struct saa7134_dev *dev, int bit)
int saa_dsp_writel(struct saa7134_dev *dev, int reg, u32 value)
static int getstereo_7133(struct saa7134_dev *dev)
static int mute_input_7133(struct saa7134_dev *dev)
static int tvaudio_thread_ddep(void *data)
void saa7134_enable_i2s(struct saa7134_dev *dev)
int saa7134_tvaudio_rx2mode(u32 rx)
void saa7134_tvaudio_setmute(struct saa7134_dev *dev)
void saa7134_tvaudio_setinput(struct saa7134_dev *dev,
struct saa7134_input *in)
void saa7134_tvaudio_setvolume(struct saa7134_dev *dev, int level)
int saa7134_tvaudio_getstereo(struct saa7134_dev *dev)
void saa7134_tvaudio_init(struct saa7134_dev *dev)
int saa7134_tvaudio_init2(struct saa7134_dev *dev)
int saa7134_tvaudio_fini(struct saa7134_dev *dev)
int saa7134_tvaudio_do_scan(struct saa7134_dev *dev)
EXPORT_SYMBOL(saa_dsp_writel);
EXPORT_SYMBOL(saa7134_tvaudio_setmute);
