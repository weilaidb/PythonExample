static void spidev_release(struct device *dev)
static ssize_t
modalias_show(struct device *dev, struct device_attribute *a, char *buf)
static struct device_attribute spi_dev_attrs[] = ;
static const struct spi_device_id *spi_match_id(const struct spi_device_id *id,
const struct spi_device *sdev)
const struct spi_device_id *spi_get_device_id(const struct spi_device *sdev)
EXPORT_SYMBOL_GPL(spi_get_device_id);
static int spi_match_device(struct device *dev, struct device_driver *drv)
static int spi_uevent(struct device *dev, struct kobj_uevent_env *env)
static int spi_legacy_suspend(struct device *dev, pm_message_t message)
static int spi_legacy_resume(struct device *dev)
static int spi_pm_suspend(struct device *dev)
static int spi_pm_resume(struct device *dev)
static int spi_pm_freeze(struct device *dev)
static int spi_pm_thaw(struct device *dev)
static int spi_pm_poweroff(struct device *dev)
static int spi_pm_restore(struct device *dev)
#define spi_pm_suspend	NULL
#define spi_pm_resume	NULL
#define spi_pm_freeze	NULL
#define spi_pm_thaw	NULL
#define spi_pm_poweroff	NULL
#define spi_pm_restore	NULL
static const struct dev_pm_ops spi_pm = ;
struct bus_type spi_bus_type = ;
EXPORT_SYMBOL_GPL(spi_bus_type);
static int spi_drv_probe(struct device *dev)
static int spi_drv_remove(struct device *dev)
static void spi_drv_shutdown(struct device *dev)
int spi_register_driver(struct spi_driver *sdrv)
EXPORT_SYMBOL_GPL(spi_register_driver);
struct boardinfo ;
static LIST_HEAD(board_list);
static LIST_HEAD(spi_master_list);
static DEFINE_MUTEX(board_lock);
struct spi_device *spi_alloc_device(struct spi_master *master)
EXPORT_SYMBOL_GPL(spi_alloc_device);
int spi_add_device(struct spi_device *spi)
EXPORT_SYMBOL_GPL(spi_add_device);
struct spi_device *spi_new_device(struct spi_master *master,
struct spi_board_info *chip)
EXPORT_SYMBOL_GPL(spi_new_device);
static void spi_match_master_to_boardinfo(struct spi_master *master,
struct spi_board_info *bi)
int __init
spi_register_board_info(struct spi_board_info const *info, unsigned n)
static void spi_master_release(struct device *dev)
static struct class spi_master_class = ;
struct spi_master *spi_alloc_master(struct device *dev, unsigned size)
EXPORT_SYMBOL_GPL(spi_alloc_master);
int spi_register_master(struct spi_master *master)
EXPORT_SYMBOL_GPL(spi_register_master);
static int __unregister(struct device *dev, void *null)
void spi_unregister_master(struct spi_master *master)
EXPORT_SYMBOL_GPL(spi_unregister_master);
static int __spi_master_match(struct device *dev, void *data)
struct spi_master *spi_busnum_to_master(u16 bus_num)
EXPORT_SYMBOL_GPL(spi_busnum_to_master);
int spi_setup(struct spi_device *spi)
EXPORT_SYMBOL_GPL(spi_setup);
static int __spi_async(struct spi_device *spi, struct spi_message *message)
int spi_async(struct spi_device *spi, struct spi_message *message)
EXPORT_SYMBOL_GPL(spi_async);
int spi_async_locked(struct spi_device *spi, struct spi_message *message)
EXPORT_SYMBOL_GPL(spi_async_locked);
static void spi_complete(void *arg)
static int __spi_sync(struct spi_device *spi, struct spi_message *message,
int bus_locked)
int spi_sync(struct spi_device *spi, struct spi_message *message)
EXPORT_SYMBOL_GPL(spi_sync);
int spi_sync_locked(struct spi_device *spi, struct spi_message *message)
EXPORT_SYMBOL_GPL(spi_sync_locked);
int spi_bus_lock(struct spi_master *master)
EXPORT_SYMBOL_GPL(spi_bus_lock);
int spi_bus_unlock(struct spi_master *master)
EXPORT_SYMBOL_GPL(spi_bus_unlock);
#define	SPI_BUFSIZ	max(32,SMP_CACHE_BYTES)
static u8	*buf;
int spi_write_then_read(struct spi_device *spi,
const void *txbuf, unsigned n_tx,
void *rxbuf, unsigned n_rx)
EXPORT_SYMBOL_GPL(spi_write_then_read);
static int __init spi_init(void)
postcore_initcall(spi_init);
