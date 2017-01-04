#define DRV_NAME	"bfin-sport-spi"
#define DRV_DESC	"SPI bus via the Blackfin SPORT"
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION(DRV_DESC);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:bfin-sport-spi");
enum bfin_sport_spi_state ;
struct bfin_sport_spi_master_data;
struct bfin_sport_transfer_ops ;
struct bfin_sport_spi_master_data ;
struct bfin_sport_spi_slave_data ;
static void
bfin_sport_spi_enable(struct bfin_sport_spi_master_data *drv_data)
static void
bfin_sport_spi_disable(struct bfin_sport_spi_master_data *drv_data)
static u16
bfin_sport_hz_to_spi_baud(u32 speed_hz)
static void
bfin_sport_spi_cs_active(struct bfin_sport_spi_slave_data *chip)
static void
bfin_sport_spi_cs_deactive(struct bfin_sport_spi_slave_data *chip)
static void
bfin_sport_spi_stat_poll_complete(struct bfin_sport_spi_master_data *drv_data)
static void
bfin_sport_spi_u8_writer(struct bfin_sport_spi_master_data *drv_data)
static void
bfin_sport_spi_u8_reader(struct bfin_sport_spi_master_data *drv_data)
static void
bfin_sport_spi_u8_duplex(struct bfin_sport_spi_master_data *drv_data)
static struct bfin_sport_transfer_ops bfin_sport_transfer_ops_u8 = ;
static void
bfin_sport_spi_u16_writer(struct bfin_sport_spi_master_data *drv_data)
static void
bfin_sport_spi_u16_reader(struct bfin_sport_spi_master_data *drv_data)
static void
bfin_sport_spi_u16_duplex(struct bfin_sport_spi_master_data *drv_data)
static struct bfin_sport_transfer_ops bfin_sport_transfer_ops_u16 = ;
static void
bfin_sport_spi_restore_state(struct bfin_sport_spi_master_data *drv_data)
static enum bfin_sport_spi_state
bfin_sport_spi_next_transfer(struct bfin_sport_spi_master_data *drv_data)
static void
bfin_sport_spi_giveback(struct bfin_sport_spi_master_data *drv_data)
static irqreturn_t
sport_err_handler(int irq, void *dev_id)
static void
bfin_sport_spi_pump_transfers(unsigned long data)
static void
bfin_sport_spi_pump_messages(struct work_struct *work)
static int
bfin_sport_spi_transfer(struct spi_device *spi, struct spi_message *msg)
static int
bfin_sport_spi_setup(struct spi_device *spi)
static void
bfin_sport_spi_cleanup(struct spi_device *spi)
static int
bfin_sport_spi_init_queue(struct bfin_sport_spi_master_data *drv_data)
static int
bfin_sport_spi_start_queue(struct bfin_sport_spi_master_data *drv_data)
static inline int
bfin_sport_spi_stop_queue(struct bfin_sport_spi_master_data *drv_data)
static inline int
bfin_sport_spi_destroy_queue(struct bfin_sport_spi_master_data *drv_data)
static int __devinit
bfin_sport_spi_probe(struct platform_device *pdev)
static int __devexit
bfin_sport_spi_remove(struct platform_device *pdev)
static int
bfin_sport_spi_suspend(struct platform_device *pdev, pm_message_t state)
static int
bfin_sport_spi_resume(struct platform_device *pdev)
# define bfin_sport_spi_suspend NULL
# define bfin_sport_spi_resume  NULL
static struct platform_driver bfin_sport_spi_driver = ;
static int __init bfin_sport_spi_init(void)
module_init(bfin_sport_spi_init);
static void __exit bfin_sport_spi_exit(void)
module_exit(bfin_sport_spi_exit);
