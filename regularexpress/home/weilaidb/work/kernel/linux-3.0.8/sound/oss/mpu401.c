#define USE_SEQ_MACROS
#define USE_SIMPLE_MACROS
static int      timer_mode = TMR_INTERNAL, timer_caps = TMR_INTERNAL;
struct mpu_config
;
#define	DATAPORT(base)   (base)
#define	COMDPORT(base)   (base+1)
#define	STATPORT(base)   (base+1)
static void mpu401_close(int dev);
static inline int mpu401_status(struct mpu_config *devc)
#define input_avail(devc)		(!(mpu401_status(devc)&INPUT_AVAIL))
#define output_ready(devc)		(!(mpu401_status(devc)&OUTPUT_READY))
static inline void write_command(struct mpu_config *devc, unsigned char cmd)
static inline int read_data(struct mpu_config *devc)
static inline void write_data(struct mpu_config *devc, unsigned char byte)
#define	OUTPUT_READY	0x40
#define	INPUT_AVAIL	0x80
#define	MPU_ACK		0xFE
#define	MPU_RESET	0xFF
#define	UART_MODE_ON	0x3F
static struct mpu_config dev_conf[MAX_MIDI_DEV];
static int n_mpu_devs;
static int reset_mpu401(struct mpu_config *devc);
static void set_uart_mode(int dev, struct mpu_config *devc, int arg);
static int mpu_timer_init(int midi_dev);
static void mpu_timer_interrupt(void);
static void timer_ext_event(struct mpu_config *devc, int event, int parm);
static struct synth_info mpu_synth_info_proto = ;
static struct synth_info mpu_synth_info[MAX_MIDI_DEV];
#define ST_INIT			0
#define ST_TIMED		1
#define ST_DATABYTE		2
#define ST_SYSMSG		100
#define ST_SYSEX		101
#define ST_MTC			102
#define ST_SONGSEL		103
#define ST_SONGPOS		104
static unsigned char len_tab[] =
;
#define STORE(cmd) \
#define _seqbuf obuf
#define _seqbufptr 0
#define _SEQ_ADVBUF(x) len=x
static int mpu_input_scanner(struct mpu_config *devc, unsigned char midic)
static void mpu401_input_loop(struct mpu_config *devc)
static irqreturn_t mpuintr(int irq, void *dev_id)
static int mpu401_open(int dev, int mode,
void            (*input) (int dev, unsigned char data),
void            (*output) (int dev)
)
static void mpu401_close(int dev)
static int mpu401_out(int dev, unsigned char midi_byte)
static int mpu401_command(int dev, mpu_command_rec * cmd)
static int mpu_cmd(int dev, int cmd, int data)
static int mpu401_prefix_cmd(int dev, unsigned char status)
static int mpu401_start_read(int dev)
static int mpu401_end_read(int dev)
static int mpu401_ioctl(int dev, unsigned cmd, void __user *arg)
static void mpu401_kick(int dev)
static int mpu401_buffer_status(int dev)
static int mpu_synth_ioctl(int dev, unsigned int cmd, void __user *arg)
static int mpu_synth_open(int dev, int mode)
static void mpu_synth_close(int dev)
#define MIDI_SYNTH_NAME	"MPU-401 UART Midi"
#define MIDI_SYNTH_CAPS	SYNTH_CAP_INPUT
static struct synth_operations mpu401_synth_proto =
;
static struct synth_operations *mpu401_synth_operations[MAX_MIDI_DEV];
static struct midi_operations mpu401_midi_proto =
;
static struct midi_operations mpu401_midi_operations[MAX_MIDI_DEV];
static void mpu401_chk_version(int n, struct mpu_config *devc)
int attach_mpu401(struct address_info *hw_config, struct module *owner)
static int reset_mpu401(struct mpu_config *devc)
static void set_uart_mode(int dev, struct mpu_config *devc, int arg)
int probe_mpu401(struct address_info *hw_config, struct resource *ports)
void unload_mpu401(struct address_info *hw_config)
static volatile int timer_initialized = 0, timer_open = 0, tmr_running = 0;
static volatile int curr_tempo, curr_timebase, hw_timebase;
static int      max_timebase = 8;
static volatile unsigned long next_event_time;
static volatile unsigned long curr_ticks, curr_clocks;
static unsigned long prev_event_time;
static int      metronome_mode;
static unsigned long clocks2ticks(unsigned long clocks)
static void set_timebase(int midi_dev, int val)
static void tmr_reset(struct mpu_config *devc)
static void set_timer_mode(int midi_dev)
static void stop_metronome(int midi_dev)
static void setup_metronome(int midi_dev)
static int mpu_start_timer(int midi_dev)
static int mpu_timer_open(int dev, int mode)
static void mpu_timer_close(int dev)
static int mpu_timer_event(int dev, unsigned char *event)
static unsigned long mpu_timer_get_time(int dev)
static int mpu_timer_ioctl(int dev, unsigned int command, void __user *arg)
static void mpu_timer_arm(int dev, long time)
static struct sound_timer_operations mpu_timer =
;
static void mpu_timer_interrupt(void)
static void timer_ext_event(struct mpu_config *devc, int event, int parm)
static int mpu_timer_init(int midi_dev)
EXPORT_SYMBOL(probe_mpu401);
EXPORT_SYMBOL(attach_mpu401);
EXPORT_SYMBOL(unload_mpu401);
static struct address_info cfg;
static int io = -1;
static int irq = -1;
module_param(irq, int, 0);
module_param(io, int, 0);
static int __init init_mpu401(void)
static void __exit cleanup_mpu401(void)
module_init(init_mpu401);
module_exit(cleanup_mpu401);
static int __init setup_mpu401(char *str)
__setup("mpu401=", setup_mpu401);
MODULE_LICENSE("GPL");
