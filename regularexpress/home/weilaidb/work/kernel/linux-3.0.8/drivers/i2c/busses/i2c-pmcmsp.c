#define DRV_NAME	"pmcmsptwi"
#define MSP_TWI_SF_CLK_REG_OFFSET	0x00
#define MSP_TWI_HS_CLK_REG_OFFSET	0x04
#define MSP_TWI_CFG_REG_OFFSET		0x08
#define MSP_TWI_CMD_REG_OFFSET		0x0c
#define MSP_TWI_ADD_REG_OFFSET		0x10
#define MSP_TWI_DAT_0_REG_OFFSET	0x14
#define MSP_TWI_DAT_1_REG_OFFSET	0x18
#define MSP_TWI_INT_STS_REG_OFFSET	0x1c
#define MSP_TWI_INT_MSK_REG_OFFSET	0x20
#define MSP_TWI_BUSY_REG_OFFSET		0x24
#define MSP_TWI_INT_STS_DONE			(1 << 0)
#define MSP_TWI_INT_STS_LOST_ARBITRATION	(1 << 1)
#define MSP_TWI_INT_STS_NO_RESPONSE		(1 << 2)
#define MSP_TWI_INT_STS_DATA_COLLISION		(1 << 3)
#define MSP_TWI_INT_STS_BUSY			(1 << 4)
#define MSP_TWI_INT_STS_ALL			0x1f
#define MSP_MAX_BYTES_PER_RW		8
#define MSP_MAX_POLL			5
#define MSP_POLL_DELAY			10
#define MSP_IRQ_TIMEOUT			(MSP_MAX_POLL * MSP_POLL_DELAY)
#define pmcmsptwi_readl		__raw_readl
#define pmcmsptwi_writel	__raw_writel
enum pmcmsptwi_cmd_type ;
enum pmcmsptwi_xfer_result ;
struct pmcmsptwi_clock ;
struct pmcmsptwi_clockcfg ;
struct pmcmsptwi_cfg ;
struct pmcmsptwi_cmd ;
struct pmcmsptwi_data ;
static const struct pmcmsptwi_clockcfg pmcmsptwi_defclockcfg = ;
static const struct pmcmsptwi_cfg pmcmsptwi_defcfg = ;
static struct pmcmsptwi_data pmcmsptwi_data;
static struct i2c_adapter pmcmsptwi_adapter;
static inline u32 pmcmsptwi_clock_to_reg(
const struct pmcmsptwi_clock *clock)
static inline void pmcmsptwi_reg_to_clock(
u32 reg, struct pmcmsptwi_clock *clock)
static inline u32 pmcmsptwi_cfg_to_reg(const struct pmcmsptwi_cfg *cfg)
static inline void pmcmsptwi_reg_to_cfg(u32 reg, struct pmcmsptwi_cfg *cfg)
static void pmcmsptwi_set_clock_config(const struct pmcmsptwi_clockcfg *cfg,
struct pmcmsptwi_data *data)
static void pmcmsptwi_get_twi_config(struct pmcmsptwi_cfg *cfg,
struct pmcmsptwi_data *data)
static void pmcmsptwi_set_twi_config(const struct pmcmsptwi_cfg *cfg,
struct pmcmsptwi_data *data)
static enum pmcmsptwi_xfer_result pmcmsptwi_get_result(u32 reg)
static irqreturn_t pmcmsptwi_interrupt(int irq, void *ptr)
static int __devinit pmcmsptwi_probe(struct platform_device *pldev)
static int __devexit pmcmsptwi_remove(struct platform_device *pldev)
static void pmcmsptwi_poll_complete(struct pmcmsptwi_data *data)
static enum pmcmsptwi_xfer_result pmcmsptwi_do_xfer(
u32 reg, struct pmcmsptwi_data *data)
static inline u32 pmcmsptwi_cmd_to_reg(const struct pmcmsptwi_cmd *cmd)
static enum pmcmsptwi_xfer_result pmcmsptwi_xfer_cmd(
struct pmcmsptwi_cmd *cmd,
struct pmcmsptwi_data *data)
static int pmcmsptwi_master_xfer(struct i2c_adapter *adap,
struct i2c_msg *msg, int num)
static u32 pmcmsptwi_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm pmcmsptwi_algo = ;
static struct i2c_adapter pmcmsptwi_adapter = ;
MODULE_ALIAS("platform:" DRV_NAME);
static struct platform_driver pmcmsptwi_driver = ;
static int __init pmcmsptwi_init(void)
static void __exit pmcmsptwi_exit(void)
MODULE_DESCRIPTION("PMC MSP TWI/SMBus/I2C driver");
MODULE_LICENSE("GPL");
module_init(pmcmsptwi_init);
module_exit(pmcmsptwi_exit);
