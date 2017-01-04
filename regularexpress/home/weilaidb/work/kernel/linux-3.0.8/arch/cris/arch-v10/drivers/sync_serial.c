#define SYNC_SERIAL_MAJOR 125
#define IN_BUFFER_SIZE 12288
#define IN_DESCR_SIZE 256
#define NUM_IN_DESCR (IN_BUFFER_SIZE/IN_DESCR_SIZE)
#define OUT_BUFFER_SIZE 4096
#define DEFAULT_FRAME_RATE 0
#define DEFAULT_WORD_RATE 7
#define DEBUG(x)
#define DEBUGREAD(x)
#define DEBUGWRITE(x)
#define DEBUGPOLL(x)
#define DEBUGRXINT(x)
#define DEBUGTXINT(x)
#define SETF(var, reg, field, val) \
do  while (0)
#define SETS(var, reg, field, val) \
do  while (0)
struct sync_port ;
static DEFINE_MUTEX(sync_serial_mutex);
static int etrax_sync_serial_init(void);
static void initialize_port(int portnbr);
static inline int sync_data_avail(struct sync_port *port);
static int sync_serial_open(struct inode *inode, struct file *file);
static int sync_serial_release(struct inode *inode, struct file *file);
static unsigned int sync_serial_poll(struct file *filp, poll_table *wait);
static long sync_serial_ioctl(struct file *file,
unsigned int cmd, unsigned long arg);
static ssize_t sync_serial_write(struct file *file, const char *buf,
size_t count, loff_t *ppos);
static ssize_t sync_serial_read(struct file *file, char *buf,
size_t count, loff_t *ppos);
#if ((defined(CONFIG_ETRAX_SYNCHRONOUS_SERIAL_PORT0) && \
defined(CONFIG_ETRAX_SYNCHRONOUS_SERIAL0_DMA)) || \
(defined(CONFIG_ETRAX_SYNCHRONOUS_SERIAL_PORT1) && \
defined(CONFIG_ETRAX_SYNCHRONOUS_SERIAL1_DMA)))
#define SYNC_SER_DMA
static void send_word(struct sync_port *port);
static void start_dma(struct sync_port *port, const char *data, int count);
static void start_dma_in(struct sync_port *port);
static irqreturn_t tr_interrupt(int irq, void *dev_id);
static irqreturn_t rx_interrupt(int irq, void *dev_id);
#if ((defined(CONFIG_ETRAX_SYNCHRONOUS_SERIAL_PORT0) && \
!defined(CONFIG_ETRAX_SYNCHRONOUS_SERIAL0_DMA)) || \
(defined(CONFIG_ETRAX_SYNCHRONOUS_SERIAL_PORT1) && \
!defined(CONFIG_ETRAX_SYNCHRONOUS_SERIAL1_DMA)))
#define SYNC_SER_MANUAL
static irqreturn_t manual_interrupt(int irq, void *dev_id);
static struct sync_port ports[] = ;
static unsigned sync_serial_prescale_shadow;
#define NUMBER_OF_PORTS 2
static const struct file_operations sync_serial_fops = ;
static int __init etrax_sync_serial_init(void)
static void __init initialize_port(int portnbr)
static inline int sync_data_avail(struct sync_port *port)
static inline int sync_data_avail_to_end(struct sync_port *port)
static int sync_serial_open(struct inode *inode, struct file *file)
static int sync_serial_release(struct inode *inode, struct file *file)
static unsigned int sync_serial_poll(struct file *file, poll_table *wait)
static int sync_serial_ioctl_unlocked(struct file *file,
unsigned int cmd, unsigned long arg)
static long sync_serial_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static ssize_t sync_serial_write(struct file *file, const char *buf,
size_t count, loff_t *ppos)
static ssize_t sync_serial_read(struct file *file, char *buf,
size_t count, loff_t *ppos)
static void send_word(struct sync_port *port)
static void start_dma(struct sync_port *port, const char *data, int count)
static void start_dma_in(struct sync_port *port)
static irqreturn_t tr_interrupt(int irq, void *dev_id)
static irqreturn_t rx_interrupt(int irq, void *dev_id)
static irqreturn_t manual_interrupt(int irq, void *dev_id)
module_init(etrax_sync_serial_init);
