struct at25_data ;
#define	AT25_WREN	0x06
#define	AT25_WRDI	0x04
#define	AT25_RDSR	0x05
#define	AT25_WRSR	0x01
#define	AT25_READ	0x03
#define	AT25_WRITE	0x02
#define	AT25_SR_nRDY	0x01
#define	AT25_SR_WEN	0x02
#define	AT25_SR_BP0	0x04
#define	AT25_SR_BP1	0x08
#define	AT25_SR_WPEN	0x80
#define EE_MAXADDRLEN	3
#define	EE_TIMEOUT	25
#define	io_limit	PAGE_SIZE
static ssize_t
at25_ee_read(
struct at25_data	*at25,
char			*buf,
unsigned		offset,
size_t			count
)
static ssize_t
at25_bin_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
at25_ee_write(struct at25_data *at25, const char *buf, loff_t off,
size_t count)
static ssize_t
at25_bin_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t at25_mem_read(struct memory_accessor *mem, char *buf,
off_t offset, size_t count)
static ssize_t at25_mem_write(struct memory_accessor *mem, const char *buf,
off_t offset, size_t count)
static int at25_probe(struct spi_device *spi)
static int __devexit at25_remove(struct spi_device *spi)
static struct spi_driver at25_driver = ;
static int __init at25_init(void)
module_init(at25_init);
static void __exit at25_exit(void)
module_exit(at25_exit);
MODULE_DESCRIPTION("Driver for most SPI EEPROMs");
MODULE_AUTHOR("David Brownell");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:at25");
