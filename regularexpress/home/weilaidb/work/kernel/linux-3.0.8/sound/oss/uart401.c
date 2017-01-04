typedef struct uart401_devc
uart401_devc;
#define	DATAPORT   (devc->base)
#define	COMDPORT   (devc->base+1)
#define	STATPORT   (devc->base+1)
static int uart401_status(uart401_devc * devc)
#define input_avail(devc) (!(uart401_status(devc)&INPUT_AVAIL))
#define output_ready(devc)	(!(uart401_status(devc)&OUTPUT_READY))
static void uart401_cmd(uart401_devc * devc, unsigned char cmd)
static int uart401_read(uart401_devc * devc)
static void uart401_write(uart401_devc * devc, unsigned char byte)
#define	OUTPUT_READY	0x40
#define	INPUT_AVAIL	0x80
#define	MPU_ACK		0xFE
#define	MPU_RESET	0xFF
#define	UART_MODE_ON	0x3F
static int      reset_uart401(uart401_devc * devc);
static void     enter_uart_mode(uart401_devc * devc);
static void uart401_input_loop(uart401_devc * devc)
irqreturn_t uart401intr(int irq, void *dev_id)
static int
uart401_open(int dev, int mode,
void            (*input) (int dev, unsigned char data),
void            (*output) (int dev)
)
static void uart401_close(int dev)
static int uart401_out(int dev, unsigned char midi_byte)
static inline int uart401_start_read(int dev)
static inline int uart401_end_read(int dev)
static inline void uart401_kick(int dev)
static inline int uart401_buffer_status(int dev)
#define MIDI_SYNTH_NAME	"MPU-401 UART"
#define MIDI_SYNTH_CAPS	SYNTH_CAP_INPUT
static const struct midi_operations uart401_operations =
;
static void enter_uart_mode(uart401_devc * devc)
static int reset_uart401(uart401_devc * devc)
int probe_uart401(struct address_info *hw_config, struct module *owner)
void unload_uart401(struct address_info *hw_config)
EXPORT_SYMBOL(probe_uart401);
EXPORT_SYMBOL(unload_uart401);
EXPORT_SYMBOL(uart401intr);
static struct address_info cfg_mpu;
static int io = -1;
static int irq = -1;
module_param(io, int, 0444);
module_param(irq, int, 0444);
static int __init init_uart401(void)
static void __exit cleanup_uart401(void)
module_init(init_uart401);
module_exit(cleanup_uart401);
static int __init setup_uart401(char *str)
__setup("uart401=", setup_uart401);
MODULE_LICENSE("GPL");
