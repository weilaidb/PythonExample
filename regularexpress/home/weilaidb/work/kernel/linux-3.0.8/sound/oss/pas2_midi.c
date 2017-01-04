extern spinlock_t pas_lock;
static int      midi_busy, input_opened;
static int      my_dev;
int pas2_mididev=-1;
static unsigned char tmp_queue[256];
static volatile int qlen;
static volatile unsigned char qhead, qtail;
static void     (*midi_input_intr) (int dev, unsigned char data);
static int pas_midi_open(int dev, int mode,
void            (*input) (int dev, unsigned char data),
void            (*output) (int dev)
)
static void pas_midi_close(int dev)
static int dump_to_midi(unsigned char midi_byte)
static int pas_midi_out(int dev, unsigned char midi_byte)
static int pas_midi_start_read(int dev)
static int pas_midi_end_read(int dev)
static void pas_midi_kick(int dev)
static int pas_buffer_status(int dev)
#define MIDI_SYNTH_NAME	"Pro Audio Spectrum Midi"
#define MIDI_SYNTH_CAPS	SYNTH_CAP_INPUT
static struct midi_operations pas_midi_operations =
;
void __init pas_midi_init(void)
void pas_midi_interrupt(void)
