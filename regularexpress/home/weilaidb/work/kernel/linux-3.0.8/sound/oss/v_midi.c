static vmidi_devc *v_devc[2] = ;
static int midi1,midi2;
static void *midi_mem = NULL;
static int v_midi_open (int dev, int mode,
void            (*input) (int dev, unsigned char data),
void            (*output) (int dev)
)
static void v_midi_close (int dev)
static int v_midi_out (int dev, unsigned char midi_byte)
static inline int v_midi_start_read (int dev)
static int v_midi_end_read (int dev)
static inline int v_midi_ioctl (int dev, unsigned cmd, void __user *arg)
#define MIDI_SYNTH_NAME	"Loopback MIDI"
#define MIDI_SYNTH_CAPS	SYNTH_CAP_INPUT
static struct midi_operations v_midi_operations =
;
static struct midi_operations v_midi_operations2 =
;
struct vmidi_memory
;
static void __init attach_v_midi (struct address_info *hw_config)
static inline int __init probe_v_midi(struct address_info *hw_config)
static void __exit unload_v_midi(struct address_info *hw_config)
static struct address_info cfg;
static int __init init_vmidi(void)
static void __exit cleanup_vmidi(void)
module_init(init_vmidi);
module_exit(cleanup_vmidi);
MODULE_LICENSE("GPL");
