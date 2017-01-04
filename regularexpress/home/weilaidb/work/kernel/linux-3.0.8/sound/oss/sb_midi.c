#undef SB_TEST_IRQ
static int sb_midi_open(int dev, int mode,
void            (*input) (int dev, unsigned char data),
void            (*output) (int dev)
)
static void sb_midi_close(int dev)
static int sb_midi_out(int dev, unsigned char midi_byte)
static int sb_midi_start_read(int dev)
static int sb_midi_end_read(int dev)
static int sb_midi_ioctl(int dev, unsigned cmd, void __user *arg)
void sb_midi_interrupt(sb_devc * devc)
#define MIDI_SYNTH_NAME	"Sound Blaster Midi"
#define MIDI_SYNTH_CAPS	0
static struct midi_operations sb_midi_operations =
;
void sb_dsp_midi_init(sb_devc * devc, struct module *owner)
