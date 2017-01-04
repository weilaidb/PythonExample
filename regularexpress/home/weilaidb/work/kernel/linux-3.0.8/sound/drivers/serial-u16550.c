MODULE_DESCRIPTION("MIDI serial u16550");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define SNDRV_SERIAL_SOUNDCANVAS 0
#define SNDRV_SERIAL_MS124T 1
#define SNDRV_SERIAL_MS124W_SA 2
#define SNDRV_SERIAL_MS124W_MB 3
#define SNDRV_SERIAL_GENERIC 4
#define SNDRV_SERIAL_MAX_ADAPTOR SNDRV_SERIAL_GENERIC
static char *adaptor_names[] = ;
#define SNDRV_SERIAL_NORMALBUFF 0
#define SNDRV_SERIAL_DROPBUFF   1
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int speed[SNDRV_CARDS] = ;
static int base[SNDRV_CARDS] = ;
static int outs[SNDRV_CARDS] = ;
static int ins[SNDRV_CARDS] = ;
static int adaptor[SNDRV_CARDS] = ;
static int droponfull[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Serial MIDI.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Serial MIDI.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable UART16550A chip.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for UART16550A chip.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for UART16550A chip.");
module_param_array(speed, int, NULL, 0444);
MODULE_PARM_DESC(speed, "Speed in bauds.");
module_param_array(base, int, NULL, 0444);
MODULE_PARM_DESC(base, "Base for divisor in bauds.");
module_param_array(outs, int, NULL, 0444);
MODULE_PARM_DESC(outs, "Number of MIDI outputs.");
module_param_array(ins, int, NULL, 0444);
MODULE_PARM_DESC(ins, "Number of MIDI inputs.");
module_param_array(droponfull, bool, NULL, 0444);
MODULE_PARM_DESC(droponfull, "Flag to enable drop-on-full buffer mode");
module_param_array(adaptor, int, NULL, 0444);
MODULE_PARM_DESC(adaptor, "Type of adaptor.");
#define SNDRV_SERIAL_MAX_OUTS	16
#define SNDRV_SERIAL_MAX_INS	16
#define TX_BUFF_SIZE		(1<<15)
#define TX_BUFF_MASK		(TX_BUFF_SIZE - 1)
#define SERIAL_MODE_NOT_OPENED 		(0)
#define SERIAL_MODE_INPUT_OPEN		(1 << 0)
#define SERIAL_MODE_OUTPUT_OPEN		(1 << 1)
#define SERIAL_MODE_INPUT_TRIGGERED	(1 << 2)
#define SERIAL_MODE_OUTPUT_TRIGGERED	(1 << 3)
struct snd_uart16550 ;
static struct platform_device *devices[SNDRV_CARDS];
static inline void snd_uart16550_add_timer(struct snd_uart16550 *uart)
static inline void snd_uart16550_del_timer(struct snd_uart16550 *uart)
static inline void snd_uart16550_buffer_output(struct snd_uart16550 *uart)
static void snd_uart16550_io_loop(struct snd_uart16550 * uart)
static irqreturn_t snd_uart16550_interrupt(int irq, void *dev_id)
static void snd_uart16550_buffer_timer(unsigned long data)
static int __devinit snd_uart16550_detect(struct snd_uart16550 *uart)
static void snd_uart16550_do_open(struct snd_uart16550 * uart)
static void snd_uart16550_do_close(struct snd_uart16550 * uart)
static int snd_uart16550_input_open(struct snd_rawmidi_substream *substream)
static int snd_uart16550_input_close(struct snd_rawmidi_substream *substream)
static void snd_uart16550_input_trigger(struct snd_rawmidi_substream *substream,
int up)
static int snd_uart16550_output_open(struct snd_rawmidi_substream *substream)
;
static int snd_uart16550_output_close(struct snd_rawmidi_substream *substream)
;
static inline int snd_uart16550_buffer_can_write(struct snd_uart16550 *uart,
int Num)
static inline int snd_uart16550_write_buffer(struct snd_uart16550 *uart,
unsigned char byte)
static int snd_uart16550_output_byte(struct snd_uart16550 *uart,
struct snd_rawmidi_substream *substream,
unsigned char midi_byte)
static void snd_uart16550_output_write(struct snd_rawmidi_substream *substream)
static void snd_uart16550_output_trigger(struct snd_rawmidi_substream *substream,
int up)
static struct snd_rawmidi_ops snd_uart16550_output =
;
static struct snd_rawmidi_ops snd_uart16550_input =
;
static int snd_uart16550_free(struct snd_uart16550 *uart)
;
static int snd_uart16550_dev_free(struct snd_device *device)
static int __devinit snd_uart16550_create(struct snd_card *card,
unsigned long iobase,
int irq,
unsigned int speed,
unsigned int base,
int adaptor,
int droponfull,
struct snd_uart16550 **ruart)
static void __devinit snd_uart16550_substreams(struct snd_rawmidi_str *stream)
static int __devinit snd_uart16550_rmidi(struct snd_uart16550 *uart, int device,
int outs, int ins,
struct snd_rawmidi **rmidi)
static int __devinit snd_serial_probe(struct platform_device *devptr)
static int __devexit snd_serial_remove(struct platform_device *devptr)
#define SND_SERIAL_DRIVER	"snd_serial_u16550"
static struct platform_driver snd_serial_driver = ;
static void snd_serial_unregister_all(void)
static int __init alsa_card_serial_init(void)
static void __exit alsa_card_serial_exit(void)
module_init(alsa_card_serial_init)
module_exit(alsa_card_serial_exit)
