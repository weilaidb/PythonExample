static int      sequencer_ok;
static struct sound_timer_operations *tmr;
static int      tmr_no = -1;
static int      pending_timer = -1;
extern unsigned long seq_time;
static int      obsolete_api_used;
static DEFINE_SPINLOCK(lock);
static int      max_mididev;
static int      max_synthdev;
#define SEQ_1	1
#define SEQ_2	2
static int      seq_mode = SEQ_1;
static DECLARE_WAIT_QUEUE_HEAD(seq_sleeper);
static DECLARE_WAIT_QUEUE_HEAD(midi_sleeper);
static int      midi_opened[MAX_MIDI_DEV];
static int      midi_written[MAX_MIDI_DEV];
static unsigned long prev_input_time;
static int      prev_event_time;
#define EV_SZ	8
#define IEV_SZ	8
static unsigned char *queue;
static unsigned char *iqueue;
static volatile int qhead, qtail, qlen;
static volatile int iqhead, iqtail, iqlen;
static volatile int seq_playing;
static volatile int sequencer_busy;
static int      output_threshold;
static long     pre_event_timeout;
static unsigned synth_open_mask;
static int      seq_queue(unsigned char *note, char nonblock);
static void     seq_startplay(void);
static int      seq_sync(void);
static void     seq_reset(void);
#if MAX_SYNTH_DEV > 15
#error Too many synthesizer devices enabled.
int sequencer_read(int dev, struct file *file, char __user *buf, int count)
static void sequencer_midi_output(int dev)
void seq_copy_to_input(unsigned char *event_rec, int len)
EXPORT_SYMBOL(seq_copy_to_input);
static void sequencer_midi_input(int dev, unsigned char data)
void seq_input_event(unsigned char *event_rec, int len)
EXPORT_SYMBOL(seq_input_event);
int sequencer_write(int dev, struct file *file, const char __user *buf, int count)
static int seq_queue(unsigned char *note, char nonblock)
static int extended_event(unsigned char *q)
static int find_voice(int dev, int chn, int note)
static int alloc_voice(int dev, int chn, int note)
static void seq_chn_voice_event(unsigned char *event_rec)
static void seq_chn_common_event(unsigned char *event_rec)
static int seq_timing_event(unsigned char *event_rec)
static void seq_local_event(unsigned char *event_rec)
static void seq_sysex_message(unsigned char *event_rec)
static int play_event(unsigned char *q)
static void seq_startplay(void)
static void reset_controllers(int dev, unsigned char *controller, int update_dev)
static void setup_mode2(void)
int sequencer_open(int dev, struct file *file)
static void seq_drain_midi_queues(void)
void sequencer_release(int dev, struct file *file)
static int seq_sync(void)
static void midi_outc(int dev, unsigned char data)
static void seq_reset(void)
static void seq_panic(void)
int sequencer_ioctl(int dev, struct file *file, unsigned int cmd, void __user *arg)
unsigned int sequencer_poll(int dev, struct file *file, poll_table * wait)
void sequencer_timer(unsigned long dummy)
EXPORT_SYMBOL(sequencer_timer);
int note_to_freq(int note_num)
EXPORT_SYMBOL(note_to_freq);
unsigned long compute_finetune(unsigned long base_freq, int bend, int range,
int vibrato_cents)
EXPORT_SYMBOL(compute_finetune);
void sequencer_init(void)
EXPORT_SYMBOL(sequencer_init);
void sequencer_unload(void)
