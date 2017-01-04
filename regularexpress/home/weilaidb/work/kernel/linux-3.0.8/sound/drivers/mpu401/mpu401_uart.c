MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Routines for control of MPU-401 in UART mode");
MODULE_LICENSE("GPL");
static void snd_mpu401_uart_input_read(struct snd_mpu401 * mpu);
static void snd_mpu401_uart_output_write(struct snd_mpu401 * mpu);
#define snd_mpu401_input_avail(mpu) \
(!(mpu->read(mpu, MPU401C(mpu)) & MPU401_RX_EMPTY))
#define snd_mpu401_output_ready(mpu) \
(!(mpu->read(mpu, MPU401C(mpu)) & MPU401_TX_FULL))
static void mpu401_write_port(struct snd_mpu401 *mpu, unsigned char data,
unsigned long addr)
static unsigned char mpu401_read_port(struct snd_mpu401 *mpu,
unsigned long addr)
static void mpu401_write_mmio(struct snd_mpu401 *mpu, unsigned char data,
unsigned long addr)
static unsigned char mpu401_read_mmio(struct snd_mpu401 *mpu,
unsigned long addr)
static void snd_mpu401_uart_clear_rx(struct snd_mpu401 *mpu)
static void uart_interrupt_tx(struct snd_mpu401 *mpu)
static void _snd_mpu401_uart_interrupt(struct snd_mpu401 *mpu)
irqreturn_t snd_mpu401_uart_interrupt(int irq, void *dev_id)
EXPORT_SYMBOL(snd_mpu401_uart_interrupt);
irqreturn_t snd_mpu401_uart_interrupt_tx(int irq, void *dev_id)
EXPORT_SYMBOL(snd_mpu401_uart_interrupt_tx);
static void snd_mpu401_uart_timer(unsigned long data)
static void snd_mpu401_uart_add_timer (struct snd_mpu401 *mpu, int input)
static void snd_mpu401_uart_remove_timer (struct snd_mpu401 *mpu, int input)
static int snd_mpu401_uart_cmd(struct snd_mpu401 * mpu, unsigned char cmd,
int ack)
static int snd_mpu401_do_reset(struct snd_mpu401 *mpu)
static int snd_mpu401_uart_input_open(struct snd_rawmidi_substream *substream)
static int snd_mpu401_uart_output_open(struct snd_rawmidi_substream *substream)
static int snd_mpu401_uart_input_close(struct snd_rawmidi_substream *substream)
static int snd_mpu401_uart_output_close(struct snd_rawmidi_substream *substream)
static void
snd_mpu401_uart_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_mpu401_uart_input_read(struct snd_mpu401 * mpu)
static void snd_mpu401_uart_output_write(struct snd_mpu401 * mpu)
static void
snd_mpu401_uart_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_mpu401_uart_output =
;
static struct snd_rawmidi_ops snd_mpu401_uart_input =
;
static void snd_mpu401_uart_free(struct snd_rawmidi *rmidi)
int snd_mpu401_uart_new(struct snd_card *card, int device,
unsigned short hardware,
unsigned long port,
unsigned int info_flags,
int irq, int irq_flags,
struct snd_rawmidi ** rrawmidi)
EXPORT_SYMBOL(snd_mpu401_uart_new);
static int __init alsa_mpu401_uart_init(void)
static void __exit alsa_mpu401_uart_exit(void)
module_init(alsa_mpu401_uart_init)
module_exit(alsa_mpu401_uart_exit)
