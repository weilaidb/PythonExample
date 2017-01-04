static int uart6850_base = 0x330;
static int *uart6850_osp;
#define	DATAPORT   (uart6850_base)
#define	COMDPORT   (uart6850_base+1)
#define	STATPORT   (uart6850_base+1)
static int uart6850_status(void)
#define input_avail()		(uart6850_status()&INPUT_AVAIL)
#define output_ready()		(uart6850_status()&OUTPUT_READY)
static void uart6850_cmd(unsigned char cmd)
static int uart6850_read(void)
static void uart6850_write(unsigned char byte)
#define	OUTPUT_READY	0x02
#define	INPUT_AVAIL	0x01
#define	UART_RESET	0x95
#define	UART_MODE_ON	0x03
static int uart6850_opened;
static int uart6850_irq;
static int uart6850_detected;
static int my_dev;
static DEFINE_SPINLOCK(lock);
static void (*midi_input_intr) (int dev, unsigned char data);
static void poll_uart6850(unsigned long dummy);
static DEFINE_TIMER(uart6850_timer, poll_uart6850, 0, 0);
static void uart6850_input_loop(void)
static irqreturn_t m6850intr(int irq, void *dev_id)
static void poll_uart6850(unsigned long dummy)
static int uart6850_open(int dev, int mode,
void            (*input) (int dev, unsigned char data),
void            (*output) (int dev)
)
static void uart6850_close(int dev)
static int uart6850_out(int dev, unsigned char midi_byte)
static inline int uart6850_command(int dev, unsigned char *midi_byte)
static inline int uart6850_start_read(int dev)
static inline int uart6850_end_read(int dev)
static inline void uart6850_kick(int dev)
static inline int uart6850_buffer_status(int dev)
#define MIDI_SYNTH_NAME	"6850 UART Midi"
#define MIDI_SYNTH_CAPS	SYNTH_CAP_INPUT
static struct midi_operations uart6850_operations =
;
static void __init attach_uart6850(struct address_info *hw_config)
static inline int reset_uart6850(void)
static int __init probe_uart6850(struct address_info *hw_config)
static void __exit unload_uart6850(struct address_info *hw_config)
static struct address_info cfg_mpu;
static int __initdata io = -1;
static int __initdata irq = -1;
module_param(io, int, 0);
module_param(irq, int, 0);
static int __init init_uart6850(void)
static void __exit cleanup_uart6850(void)
module_init(init_uart6850);
module_exit(cleanup_uart6850);
static int __init setup_uart6850(char *str)
__setup("uart6850=", setup_uart6850);
MODULE_LICENSE("GPL");
