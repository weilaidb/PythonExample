#define _dmasound_h_
#define SND_NDEVS	256
#define SND_DEV_CTL	0
#define SND_DEV_SEQ	1
#define SND_DEV_MIDIN	2
#define SND_DEV_DSP	3
#define SND_DEV_AUDIO	4
#define SND_DEV_DSP16	5
#define SND_DEV_STATUS	6
#define SND_DEV_SEQ2	8
#define SND_DEV_SNDPROC 9
#define SND_DEV_PSS	SND_DEV_SNDPROC
#define DEBUG_DMASOUND 1
#define MAX_AUDIO_DEV	5
#define MAX_MIXER_DEV	4
#define MAX_SYNTH_DEV	3
#define MAX_MIDI_DEV	6
#define MAX_TIMER_DEV	3
#define MAX_CATCH_RADIUS	10
#define le2be16(x)	(((x)<<8 & 0xff00) | ((x)>>8 & 0x00ff))
#define le2be16dbl(x)	(((x)<<8 & 0xff00ff00) | ((x)>>8 & 0x00ff00ff))
#define IOCTL_IN(arg, ret) \
do  while (0)
#define IOCTL_OUT(arg, ret)	ioctl_return((int __user *)(arg), ret)
static inline int ioctl_return(int __user *addr, int value)
#undef HAS_8BIT_TABLES
#if defined(CONFIG_DMASOUND_ATARI) || defined(CONFIG_DMASOUND_ATARI_MODULE) ||\
defined(CONFIG_DMASOUND_PAULA) || defined(CONFIG_DMASOUND_PAULA_MODULE) ||\
defined(CONFIG_DMASOUND_Q40) || defined(CONFIG_DMASOUND_Q40_MODULE)
#define HAS_8BIT_TABLES
#define MIN_BUFFERS	4
#define MIN_BUFSIZE	(1<<12)
#define MIN_FRAG_SIZE	8
#define MAX_BUFSIZE	(1<<17)
#define MAX_FRAG_SIZE	15
#define MIN_BUFFERS	2
#define MIN_BUFSIZE	(1<<8)
#define MIN_FRAG_SIZE	8
#define MAX_BUFSIZE	(1<<18)
#define MAX_FRAG_SIZE	16
#define DEFAULT_N_BUFFERS 4
#define DEFAULT_BUFF_SIZE (1<<15)
extern int dmasound_init(void);
extern void dmasound_deinit(void);
#define dmasound_deinit()	do  while (0)
typedef struct  SETTINGS;
typedef struct  MACHINE;
typedef struct  TRANS;
struct sound_settings ;
extern struct sound_settings dmasound;
extern char dmasound_ulaw2dma8[];
extern char dmasound_alaw2dma8[];
static inline int dmasound_set_volume(int volume)
static inline int dmasound_set_bass(int bass)
static inline int dmasound_set_treble(int treble)
static inline int dmasound_set_gain(int gain)
struct sound_queue ;
#define SLEEP(queue)		interruptible_sleep_on_timeout(&queue, HZ)
#define WAKE_UP(queue)		(wake_up_interruptible(&queue))
extern struct sound_queue dmasound_write_sq;
#define write_sq	dmasound_write_sq
extern int dmasound_catchRadius;
#define catchRadius	dmasound_catchRadius
#define BS_VAL 1
#define SW_INPUT_VOLUME_SCALE	4
#define SW_INPUT_VOLUME_DEFAULT	(128 / SW_INPUT_VOLUME_SCALE)
extern int expand_read_bal;
extern uint software_input_volume;
