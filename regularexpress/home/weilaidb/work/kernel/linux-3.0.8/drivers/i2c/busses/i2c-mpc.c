#define DRV_NAME "mpc-i2c"
#define MPC_I2C_CLOCK_LEGACY   0
#define MPC_I2C_CLOCK_PRESERVE (~0U)
#define MPC_I2C_FDR   0x04
#define MPC_I2C_CR    0x08
#define MPC_I2C_SR    0x0c
#define MPC_I2C_DR    0x10
#define MPC_I2C_DFSRR 0x14
#define CCR_MEN  0x80
#define CCR_MIEN 0x40
#define CCR_MSTA 0x20
#define CCR_MTX  0x10
#define CCR_TXAK 0x08
#define CCR_RSTA 0x04
#define CSR_MCF  0x80
#define CSR_MAAS 0x40
#define CSR_MBB  0x20
#define CSR_MAL  0x10
#define CSR_SRW  0x04
#define CSR_MIF  0x02
#define CSR_RXAK 0x01
struct mpc_i2c ;
struct mpc_i2c_divider ;
struct mpc_i2c_data ;
static inline void writeccr(struct mpc_i2c *i2c, u32 x)
static irqreturn_t mpc_i2c_isr(int irq, void *dev_id)
static void mpc_i2c_fixup(struct mpc_i2c *i2c)
static int i2c_wait(struct mpc_i2c *i2c, unsigned timeout, int writing)
#if defined(CONFIG_PPC_MPC52xx) || defined(CONFIG_PPC_MPC512x)
static const struct mpc_i2c_divider mpc_i2c_dividers_52xx[] __devinitconst = ;
static int __devinit mpc_i2c_get_fdr_52xx(struct device_node *node, u32 clock,
int prescaler, u32 *real_clk)
static void __devinit mpc_i2c_setup_52xx(struct device_node *node,
struct mpc_i2c *i2c,
u32 clock, u32 prescaler)
static void __devinit mpc_i2c_setup_52xx(struct device_node *node,
struct mpc_i2c *i2c,
u32 clock, u32 prescaler)
static void __devinit mpc_i2c_setup_512x(struct device_node *node,
struct mpc_i2c *i2c,
u32 clock, u32 prescaler)
static void __devinit mpc_i2c_setup_512x(struct device_node *node,
struct mpc_i2c *i2c,
u32 clock, u32 prescaler)
static const struct mpc_i2c_divider mpc_i2c_dividers_8xxx[] __devinitconst = ;
static u32 __devinit mpc_i2c_get_sec_cfg_8xxx(void)
static int __devinit mpc_i2c_get_fdr_8xxx(struct device_node *node, u32 clock,
u32 prescaler, u32 *real_clk)
static void __devinit mpc_i2c_setup_8xxx(struct device_node *node,
struct mpc_i2c *i2c,
u32 clock, u32 prescaler)
static void __devinit mpc_i2c_setup_8xxx(struct device_node *node,
struct mpc_i2c *i2c,
u32 clock, u32 prescaler)
static void mpc_i2c_start(struct mpc_i2c *i2c)
static void mpc_i2c_stop(struct mpc_i2c *i2c)
static int mpc_write(struct mpc_i2c *i2c, int target,
const u8 *data, int length, int restart)
static int mpc_read(struct mpc_i2c *i2c, int target,
u8 *data, int length, int restart)
static int mpc_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
static u32 mpc_functionality(struct i2c_adapter *adap)
static const struct i2c_algorithm mpc_algo = ;
static struct i2c_adapter mpc_ops = ;
static const struct of_device_id mpc_i2c_of_match[];
static int __devinit fsl_i2c_probe(struct platform_device *op)
;
static int __devexit fsl_i2c_remove(struct platform_device *op)
;
static struct mpc_i2c_data mpc_i2c_data_512x __devinitdata = ;
static struct mpc_i2c_data mpc_i2c_data_52xx __devinitdata = ;
static struct mpc_i2c_data mpc_i2c_data_8313 __devinitdata = ;
static struct mpc_i2c_data mpc_i2c_data_8543 __devinitdata = ;
static struct mpc_i2c_data mpc_i2c_data_8544 __devinitdata = ;
static const struct of_device_id mpc_i2c_of_match[] = ;
MODULE_DEVICE_TABLE(of, mpc_i2c_of_match);
static struct platform_driver mpc_i2c_driver = ;
static int __init fsl_i2c_init(void)
static void __exit fsl_i2c_exit(void)
module_init(fsl_i2c_init);
module_exit(fsl_i2c_exit);
MODULE_AUTHOR("Adrian Cox <adrian@humboldt.co.uk>");
MODULE_DESCRIPTION("I2C-Bus adapter for MPC107 bridge and "
"MPC824x/83xx/85xx/86xx/512x/52xx processors");
MODULE_LICENSE("GPL");
