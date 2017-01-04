#define SPIDEV_MAJOR			153
#define N_SPI_MINORS			32
static DECLARE_BITMAP(minors, N_SPI_MINORS);
#define SPI_MODE_MASK		(SPI_CPHA | SPI_CPOL | SPI_CS_HIGH \
| SPI_LSB_FIRST | SPI_3WIRE | SPI_LOOP \
| SPI_NO_CS | SPI_READY)
struct spidev_data ;
static LIST_HEAD(device_list);
static DEFINE_MUTEX(device_list_lock);
static unsigned bufsiz = 4096;
module_param(bufsiz, uint, S_IRUGO);
MODULE_PARM_DESC(bufsiz, "data bytes in biggest supported SPI message");
static void spidev_complete(void *arg)
static ssize_t
spidev_sync(struct spidev_data *spidev, struct spi_message *message)
static inline ssize_t
spidev_sync_write(struct spidev_data *spidev, size_t len)
static inline ssize_t
spidev_sync_read(struct spidev_data *spidev, size_t len)
static ssize_t
spidev_read(struct file *filp, char __user *buf, size_t count, loff_t *f_pos)
static ssize_t
spidev_write(struct file *filp, const char __user *buf,
size_t count, loff_t *f_pos)
static int spidev_message(struct spidev_data *spidev,
struct spi_ioc_transfer *u_xfers, unsigned n_xfers)
static long
spidev_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static long
spidev_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
#define spidev_compat_ioctl NULL
static int spidev_open(struct inode *inode, struct file *filp)
static int spidev_release(struct inode *inode, struct file *filp)
static const struct file_operations spidev_fops = ;
static struct class *spidev_class;
static int __devinit spidev_probe(struct spi_device *spi)
static int __devexit spidev_remove(struct spi_device *spi)
static struct spi_driver spidev_spi_driver = ;
static int __init spidev_init(void)
module_init(spidev_init);
static void __exit spidev_exit(void)
module_exit(spidev_exit);
MODULE_AUTHOR("Andrea Paterniani, <a.paterniani@swapp-eng.it>");
MODULE_DESCRIPTION("User mode SPI device interface");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:spidev");
