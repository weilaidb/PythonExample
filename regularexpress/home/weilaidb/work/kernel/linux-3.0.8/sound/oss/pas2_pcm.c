#define DEB(WHAT)
#define PAS_PCM_INTRBITS (0x08)
#define PCM_NON	0
#define PCM_DAC	1
#define PCM_ADC	2
static unsigned long pcm_speed;
static unsigned char pcm_channels = 1;
static unsigned char pcm_bits = 8;
static unsigned char pcm_filter;
static unsigned char pcm_mode = PCM_NON;
static unsigned long pcm_count;
static unsigned short pcm_bitsok = 8;
static int      pcm_busy;
int             pas_audiodev = -1;
static int      open_mode;
extern spinlock_t pas_lock;
static int pcm_set_speed(int arg)
static int pcm_set_channels(int arg)
static int pcm_set_bits(int arg)
static int pas_audio_ioctl(int dev, unsigned int cmd, void __user *arg)
static void pas_audio_reset(int dev)
static int pas_audio_open(int dev, int mode)
static void pas_audio_close(int dev)
static void pas_audio_output_block(int dev, unsigned long buf, int count,
int intrflag)
static void pas_audio_start_input(int dev, unsigned long buf, int count,
int intrflag)
static void pas_audio_trigger(int dev, int state)
static int pas_audio_prepare_for_input(int dev, int bsize, int bcount)
static int pas_audio_prepare_for_output(int dev, int bsize, int bcount)
static struct audio_driver pas_audio_driver =
;
void __init pas_pcm_init(struct address_info *hw_config)
void pas_pcm_interrupt(unsigned char status, int cause)
