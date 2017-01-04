#define DRV_NAME	"bfin-spi"
#define DRV_AUTHOR	"Bryan Wu, Luke Yang"
#define DRV_DESC	"Blackfin on-chip SPI Controller Driver"
#define DRV_VERSION	"1.0"
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION(DRV_DESC);
MODULE_LICENSE("GPL");
#define START_STATE	((void *)0)
#define RUNNING_STATE	((void *)1)
#define DONE_STATE	((void *)2)
#define ERROR_STATE	((void *)-1)
struct bfin_spi_master_data;
struct bfin_spi_transfer_ops ;
struct bfin_spi_master_data ;
struct bfin_spi_slave_data ;
#define DEFINE_SPI_REG(reg, off) \
static inline u16 read_##reg(struct bfin_spi_master_data *drv_data) \
\
static inline void write_##reg(struct bfin_spi_master_data *drv_data, u16 v) \
DEFINE_SPI_REG(CTRL, 0x00)
DEFINE_SPI_REG(FLAG, 0x04)
DEFINE_SPI_REG(STAT, 0x08)
DEFINE_SPI_REG(TDBR, 0x0C)
DEFINE_SPI_REG(RDBR, 0x10)
DEFINE_SPI_REG(BAUD, 0x14)
DEFINE_SPI_REG(SHAW, 0x18)
static void bfin_spi_enable(struct bfin_spi_master_data *drv_data)
static void bfin_spi_disable(struct bfin_spi_master_data *drv_data)
static u16 hz_to_spi_baud(u32 speed_hz)
static int bfin_spi_flush(struct bfin_spi_master_data *drv_data)
static void bfin_spi_cs_active(struct bfin_spi_master_data *drv_data, struct bfin_spi_slave_data *chip)
static void bfin_spi_cs_deactive(struct bfin_spi_master_data *drv_data,
struct bfin_spi_slave_data *chip)
static inline void bfin_spi_cs_enable(struct bfin_spi_master_data *drv_data,
struct bfin_spi_slave_data *chip)
static inline void bfin_spi_cs_disable(struct bfin_spi_master_data *drv_data,
struct bfin_spi_slave_data *chip)
static void bfin_spi_restore_state(struct bfin_spi_master_data *drv_data)
static inline void bfin_spi_dummy_read(struct bfin_spi_master_data *drv_data)
static void bfin_spi_u8_writer(struct bfin_spi_master_data *drv_data)
static void bfin_spi_u8_reader(struct bfin_spi_master_data *drv_data)
static void bfin_spi_u8_duplex(struct bfin_spi_master_data *drv_data)
static const struct bfin_spi_transfer_ops bfin_bfin_spi_transfer_ops_u8 = ;
static void bfin_spi_u16_writer(struct bfin_spi_master_data *drv_data)
static void bfin_spi_u16_reader(struct bfin_spi_master_data *drv_data)
static void bfin_spi_u16_duplex(struct bfin_spi_master_data *drv_data)
static const struct bfin_spi_transfer_ops bfin_bfin_spi_transfer_ops_u16 = ;
static void *bfin_spi_next_transfer(struct bfin_spi_master_data *drv_data)
static void bfin_spi_giveback(struct bfin_spi_master_data *drv_data)
static irqreturn_t bfin_spi_pio_irq_handler(int irq, void *dev_id)
static irqreturn_t bfin_spi_dma_irq_handler(int irq, void *dev_id)
static void bfin_spi_pump_transfers(unsigned long data)
static void bfin_spi_pump_messages(struct work_struct *work)
static int bfin_spi_transfer(struct spi_device *spi, struct spi_message *msg)
#define MAX_SPI_SSEL	7
static u16 ssel[][MAX_SPI_SSEL] = ;
static int bfin_spi_setup(struct spi_device *spi)
static void bfin_spi_cleanup(struct spi_device *spi)
static inline int bfin_spi_init_queue(struct bfin_spi_master_data *drv_data)
static inline int bfin_spi_start_queue(struct bfin_spi_master_data *drv_data)
static inline int bfin_spi_stop_queue(struct bfin_spi_master_data *drv_data)
static inline int bfin_spi_destroy_queue(struct bfin_spi_master_data *drv_data)
static int __init bfin_spi_probe(struct platform_device *pdev)
static int __devexit bfin_spi_remove(struct platform_device *pdev)
static int bfin_spi_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_spi_resume(struct platform_device *pdev)
#define bfin_spi_suspend NULL
#define bfin_spi_resume NULL
MODULE_ALIAS("platform:bfin-spi");
static struct platform_driver bfin_spi_driver = ;
static int __init bfin_spi_init(void)
subsys_initcall(bfin_spi_init);
static void __exit bfin_spi_exit(void)
module_exit(bfin_spi_exit);
