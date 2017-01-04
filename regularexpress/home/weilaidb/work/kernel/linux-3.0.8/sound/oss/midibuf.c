#define MIDIBUF_C
#define MAX_QUEUE_SIZE	4000
static wait_queue_head_t midi_sleeper[MAX_MIDI_DEV];
static wait_queue_head_t input_sleeper[MAX_MIDI_DEV];
struct midi_buf
;
struct midi_parms
;
static struct midi_buf *midi_out_buf[MAX_MIDI_DEV] = ;
static struct midi_buf *midi_in_buf[MAX_MIDI_DEV] = ;
static struct midi_parms parms[MAX_MIDI_DEV];
static void midi_poll(unsigned long dummy);
static DEFINE_TIMER(poll_timer, midi_poll, 0, 0);
static volatile int open_devs;
static DEFINE_SPINLOCK(lock);
#define DATA_AVAIL(q) (q->len)
#define SPACE_AVAIL(q) (MAX_QUEUE_SIZE - q->len)
#define QUEUE_BYTE(q, data) \
if (SPACE_AVAIL(q)) \
#define REMOVE_BYTE(q, data) \
if (DATA_AVAIL(q)) \
static void drain_midi_queue(int dev)
static void midi_input_intr(int dev, unsigned char data)
static void midi_output_intr(int dev)
static void midi_poll(unsigned long dummy)
int MIDIbuf_open(int dev, struct file *file)
void MIDIbuf_release(int dev, struct file *file)
int MIDIbuf_write(int dev, struct file *file, const char __user *buf, int count)
int MIDIbuf_read(int dev, struct file *file, char __user *buf, int count)
int MIDIbuf_ioctl(int dev, struct file *file,
unsigned int cmd, void __user *arg)
unsigned int MIDIbuf_poll(int dev, struct file *file, poll_table * wait)
int MIDIbuf_avail(int dev)
EXPORT_SYMBOL(MIDIbuf_avail);
