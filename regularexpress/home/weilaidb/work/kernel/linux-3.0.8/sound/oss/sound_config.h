#define  _SOUND_CONFIG_H_
#define SND_DEFAULT_ENABLE	1
#define MAX_REALTIME_FACTOR	4
#undef DSP_BUFFSIZE
#define DSP_BUFFSIZE		(64*1024)
#define DSP_BUFFCOUNT		1
#define FM_MONO		0x388
#define CONFIG_PAS_BASE	0x388
#define SEQ_MAX_QUEUE	1024
#define SBFM_MAXINSTR		(256)
#define SND_NDEVS	256
#define DSP_DEFAULT_SPEED	8000
#define MAX_AUDIO_DEV	5
#define MAX_MIXER_DEV	5
#define MAX_SYNTH_DEV	5
#define MAX_MIDI_DEV	6
#define MAX_TIMER_DEV	4
struct address_info ;
#define SYNTH_MAX_VOICES	32
struct voice_alloc_info ;
struct channel_info ;
#define WK_NONE		0x00
#define WK_WAKEUP	0x01
#define WK_TIMEOUT	0x02
#define WK_SIGNAL	0x04
#define WK_SLEEP	0x08
#define WK_SELECT	0x10
#define WK_ABORT	0x20
#define OPEN_READ	PCM_ENABLE_INPUT
#define OPEN_WRITE	PCM_ENABLE_OUTPUT
#define OPEN_READWRITE	(OPEN_READ|OPEN_WRITE)
static inline int translate_mode(struct file *file)
#define DEB(x)
#define DDB(x) do  while (0)
#define MDB(x) x
#define MDB(x)
#define TIMER_ARMED	121234
#define TIMER_NOT_ARMED	1
#define MAX_MEM_BLOCKS 1024
