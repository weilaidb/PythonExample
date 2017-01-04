#define DSP56K_DEV_56001        0
#define TIMEOUT    10
#define MAXIO    2048
#define DSP56K_MAX_BINARY_LENGTH (3*64*1024)
#define DSP56K_TX_INT_ON	dsp56k_host_interface.icr |=  DSP56K_ICR_TREQ
#define DSP56K_RX_INT_ON	dsp56k_host_interface.icr |=  DSP56K_ICR_RREQ
#define DSP56K_TX_INT_OFF	dsp56k_host_interface.icr &= ~DSP56K_ICR_TREQ
#define DSP56K_RX_INT_OFF	dsp56k_host_interface.icr &= ~DSP56K_ICR_RREQ
#define DSP56K_TRANSMIT		(dsp56k_host_interface.isr & DSP56K_ISR_TXDE)
#define DSP56K_RECEIVE		(dsp56k_host_interface.isr & DSP56K_ISR_RXDF)
#define handshake(count, maxio, timeout, ENABLE, f) \
#define tx_wait(n) \
#define rx_wait(n) \
static DEFINE_MUTEX(dsp56k_mutex);
static struct dsp56k_device  dsp56k;
static struct class *dsp56k_class;
static int dsp56k_reset(void)
static int dsp56k_upload(u_char __user *bin, int len)
static ssize_t dsp56k_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static ssize_t dsp56k_write(struct file *file, const char __user *buf, size_t count,
loff_t *ppos)
static long dsp56k_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int dsp56k_open(struct inode *inode, struct file *file)
static int dsp56k_release(struct inode *inode, struct file *file)
static const struct file_operations dsp56k_fops = ;
static char banner[] __initdata = KERN_INFO "DSP56k driver installed\n";
static int __init dsp56k_init_driver(void)
module_init(dsp56k_init_driver);
static void __exit dsp56k_cleanup_driver(void)
module_exit(dsp56k_cleanup_driver);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("dsp56k/bootstrap.bin");
