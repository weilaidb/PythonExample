#define IFX_SPI_MORE_MASK		0x10
#define IFX_SPI_MORE_BIT		12
#define IFX_SPI_CTS_BIT			13
#define IFX_SPI_MODE			SPI_MODE_1
#define IFX_SPI_TTY_ID			0
#define IFX_SPI_TIMEOUT_SEC		2
#define IFX_SPI_HEADER_0		(-1)
#define IFX_SPI_HEADER_F		(-2)
static void ifx_spi_handle_srdy(struct ifx_spi_device *ifx_dev);
static int spi_bpw = 16;
static struct tty_driver *tty_drv;
static struct ifx_spi_device *saved_ifx_dev;
static struct lock_class_key ifx_spi_key;
static inline void mrdy_set_high(struct ifx_spi_device *ifx)
static inline void mrdy_set_low(struct ifx_spi_device *ifx)
static void
ifx_spi_power_state_set(struct ifx_spi_device *ifx_dev, unsigned char val)
static void
ifx_spi_power_state_clear(struct ifx_spi_device *ifx_dev, unsigned char val)
static inline void swap_buf(u16 *buf, int len, void *end)
static void mrdy_assert(struct ifx_spi_device *ifx_dev)
static void ifx_spi_ttyhangup(struct ifx_spi_device *ifx_dev)
static void ifx_spi_timeout(unsigned long arg)
static int ifx_spi_tiocmget(struct tty_struct *tty)
static int ifx_spi_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int ifx_spi_open(struct tty_struct *tty, struct file *filp)
static void ifx_spi_close(struct tty_struct *tty, struct file *filp)
static int ifx_spi_decode_spi_header(unsigned char *buffer, int *length,
unsigned char *more, unsigned char *received_cts)
static void ifx_spi_setup_spi_header(unsigned char *txbuffer, int tx_count,
unsigned char more)
static void ifx_spi_wakeup_serial(struct ifx_spi_device *ifx_dev)
static int ifx_spi_prepare_tx_buffer(struct ifx_spi_device *ifx_dev)
static int ifx_spi_write(struct tty_struct *tty, const unsigned char *buf,
int count)
static int ifx_spi_write_room(struct tty_struct *tty)
static int ifx_spi_chars_in_buffer(struct tty_struct *tty)
static void ifx_spi_hangup(struct tty_struct *tty)
static int ifx_port_activate(struct tty_port *port, struct tty_struct *tty)
static void ifx_port_shutdown(struct tty_port *port)
static const struct tty_port_operations ifx_tty_port_ops = ;
static const struct tty_operations ifx_spi_serial_ops = ;
static void ifx_spi_insert_flip_string(struct ifx_spi_device *ifx_dev,
unsigned char *chars, size_t size)
static void ifx_spi_complete(void *ctx)
static void ifx_spi_io(unsigned long data)
static void ifx_spi_free_port(struct ifx_spi_device *ifx_dev)
static int ifx_spi_create_port(struct ifx_spi_device *ifx_dev)
static void ifx_spi_handle_srdy(struct ifx_spi_device *ifx_dev)
static irqreturn_t ifx_spi_srdy_interrupt(int irq, void *dev)
static irqreturn_t ifx_spi_reset_interrupt(int irq, void *dev)
static void ifx_spi_free_device(struct ifx_spi_device *ifx_dev)
static int ifx_spi_reset(struct ifx_spi_device *ifx_dev)
static int ifx_spi_spi_probe(struct spi_device *spi)
static int ifx_spi_spi_remove(struct spi_device *spi)
static void ifx_spi_spi_shutdown(struct spi_device *spi)
static int ifx_spi_spi_suspend(struct spi_device *spi, pm_message_t msg)
static int ifx_spi_spi_resume(struct spi_device *spi)
static int ifx_spi_pm_suspend(struct device *dev)
static int ifx_spi_pm_resume(struct device *dev)
static int ifx_spi_pm_runtime_resume(struct device *dev)
static int ifx_spi_pm_runtime_suspend(struct device *dev)
static int ifx_spi_pm_runtime_idle(struct device *dev)
static const struct dev_pm_ops ifx_spi_pm = ;
static const struct spi_device_id ifx_id_table[] = ;
MODULE_DEVICE_TABLE(spi, ifx_id_table);
static const struct spi_driver ifx_spi_driver = ;
static void __exit ifx_spi_exit(void)
static int __init ifx_spi_init(void)
module_init(ifx_spi_init);
module_exit(ifx_spi_exit);
MODULE_AUTHOR("Intel");
MODULE_DESCRIPTION("IFX6x60 spi driver");
MODULE_LICENSE("GPL");
MODULE_INFO(Version, "0.1-IFX6x60");
