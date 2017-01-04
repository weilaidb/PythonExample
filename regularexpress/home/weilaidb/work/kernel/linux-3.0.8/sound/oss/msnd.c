#define LOGNAME			"msnd"
#define MSND_MAX_DEVS		4
static multisound_dev_t		*devs[MSND_MAX_DEVS];
static int			num_devs;
int msnd_register(multisound_dev_t *dev)
void msnd_unregister(multisound_dev_t *dev)
void msnd_init_queue(void __iomem *base, int start, int size)
void msnd_fifo_init(msnd_fifo *f)
void msnd_fifo_free(msnd_fifo *f)
int msnd_fifo_alloc(msnd_fifo *f, size_t n)
void msnd_fifo_make_empty(msnd_fifo *f)
int msnd_fifo_write_io(msnd_fifo *f, char __iomem *buf, size_t len)
int msnd_fifo_write(msnd_fifo *f, const char *buf, size_t len)
int msnd_fifo_read_io(msnd_fifo *f, char __iomem *buf, size_t len)
int msnd_fifo_read(msnd_fifo *f, char *buf, size_t len)
static int msnd_wait_TXDE(multisound_dev_t *dev)
static int msnd_wait_HC0(multisound_dev_t *dev)
int msnd_send_dsp_cmd(multisound_dev_t *dev, BYTE cmd)
int msnd_send_word(multisound_dev_t *dev, unsigned char high,
unsigned char mid, unsigned char low)
int msnd_upload_host(multisound_dev_t *dev, char *bin, int len)
int msnd_enable_irq(multisound_dev_t *dev)
int msnd_disable_irq(multisound_dev_t *dev)
EXPORT_SYMBOL(msnd_register);
EXPORT_SYMBOL(msnd_unregister);
EXPORT_SYMBOL(msnd_init_queue);
EXPORT_SYMBOL(msnd_fifo_init);
EXPORT_SYMBOL(msnd_fifo_free);
EXPORT_SYMBOL(msnd_fifo_alloc);
EXPORT_SYMBOL(msnd_fifo_make_empty);
EXPORT_SYMBOL(msnd_fifo_write_io);
EXPORT_SYMBOL(msnd_fifo_read_io);
EXPORT_SYMBOL(msnd_fifo_write);
EXPORT_SYMBOL(msnd_fifo_read);
EXPORT_SYMBOL(msnd_send_dsp_cmd);
EXPORT_SYMBOL(msnd_send_word);
EXPORT_SYMBOL(msnd_upload_host);
EXPORT_SYMBOL(msnd_enable_irq);
EXPORT_SYMBOL(msnd_disable_irq);
MODULE_AUTHOR				("Andrew Veliath <andrewtv@usa.net>");
MODULE_DESCRIPTION			("Turtle Beach MultiSound Driver Base");
MODULE_LICENSE("GPL");
int init_module(void)
void cleanup_module(void)
