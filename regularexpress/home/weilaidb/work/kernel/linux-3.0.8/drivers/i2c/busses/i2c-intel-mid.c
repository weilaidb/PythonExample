#define DRIVER_NAME	"i2c-intel-mid"
#define VERSION		"Version 0.5ac2"
#define PLATFORM	"Moorestown/Medfield"
#define NUM_PLATFORMS	2
enum platform_enum ;
enum mid_i2c_status ;
struct intel_mid_i2c_private ;
#define NUM_SPEEDS		3
#define ACTIVE			0
#define STANDBY			1
#define IC_CON			0x00
#define SLV_DIS			(1 << 6)
#define RESTART			(1 << 5)
#define	ADDR_10BIT		(1 << 4)
#define	STANDARD_MODE		(1 << 1)
#define FAST_MODE		(2 << 1)
#define HIGH_MODE		(3 << 1)
#define	MASTER_EN		(1 << 0)
#define IC_TAR			0x04
#define IC_TAR_10BIT_ADDR	(1 << 12)
#define IC_TAR_SPECIAL		(1 << 11)
#define IC_TAR_GC_OR_START	(1 << 10)
#define IC_SAR			0x08
#define IC_HS_MADDR		0x0c
#define IC_DATA_CMD		0x10
#define IC_RD			(1 << 8)
#define IC_SS_SCL_HCNT		0x14
#define IC_SS_SCL_LCNT		0x18
#define IC_FS_SCL_HCNT		0x1c
#define IC_FS_SCL_LCNT		0x20
#define IC_HS_SCL_HCNT		0x24
#define IC_HS_SCL_LCNT		0x28
#define IC_INTR_STAT		0x2c
#define R_GEN_CALL		(1 << 11)
#define R_START_DET		(1 << 10)
#define R_STOP_DET		(1 << 9)
#define R_ACTIVITY		(1 << 8)
#define R_RX_DONE		(1 << 7)
#define	R_TX_ABRT		(1 << 6)
#define R_RD_REQ		(1 << 5)
#define R_TX_EMPTY		(1 << 4)
#define R_TX_OVER		(1 << 3)
#define	R_RX_FULL		(1 << 2)
#define	R_RX_OVER		(1 << 1)
#define R_RX_UNDER		(1 << 0)
#define IC_INTR_MASK		0x30
#define M_GEN_CALL		(1 << 11)
#define M_START_DET		(1 << 10)
#define M_STOP_DET		(1 << 9)
#define M_ACTIVITY		(1 << 8)
#define M_RX_DONE		(1 << 7)
#define	M_TX_ABRT		(1 << 6)
#define M_RD_REQ		(1 << 5)
#define M_TX_EMPTY		(1 << 4)
#define M_TX_OVER		(1 << 3)
#define	M_RX_FULL		(1 << 2)
#define	M_RX_OVER		(1 << 1)
#define M_RX_UNDER		(1 << 0)
#define IC_RAW_INTR_STAT	0x34
#define GEN_CALL		(1 << 11)
#define START_DET		(1 << 10)
#define STOP_DET		(1 << 9)
#define ACTIVITY		(1 << 8)
#define RX_DONE			(1 << 7)
#define	TX_ABRT			(1 << 6)
#define RD_REQ			(1 << 5)
#define TX_EMPTY		(1 << 4)
#define TX_OVER			(1 << 3)
#define	RX_FULL			(1 << 2)
#define	RX_OVER			(1 << 1)
#define RX_UNDER		(1 << 0)
#define IC_RX_TL		0x38
#define IC_TX_TL		0x3c
#define IC_CLR_INTR		0x40
#define CLR_INTR		(1 << 0)
#define IC_CLR_RX_UNDER		0x44
#define CLR_RX_UNDER		(1 << 0)
#define IC_CLR_RX_OVER		0x48
#define CLR_RX_OVER		(1 << 0)
#define IC_CLR_TX_OVER		0x4c
#define CLR_TX_OVER		(1 << 0)
#define IC_CLR_RD_REQ		0x50
#define IC_CLR_TX_ABRT		0x54
#define CLR_TX_ABRT		(1 << 0)
#define IC_CLR_RX_DONE		0x58
#define IC_CLR_ACTIVITY		0x5c
#define CLR_ACTIVITY		(1 << 0)
#define IC_CLR_STOP_DET		0x60
#define CLR_STOP_DET		(1 << 0)
#define IC_CLR_START_DET	0x64
#define CLR_START_DET		(1 << 0)
#define IC_CLR_GEN_CALL		0x68
#define CLR_GEN_CALL		(1 << 0)
#define IC_ENABLE		0x6c
#define ENABLE			(1 << 0)
#define IC_STATUS		0x70
#define STAT_SLV_ACTIVITY	(1 << 6)
#define STAT_MST_ACTIVITY	(1 << 5)
#define STAT_RFF		(1 << 4)
#define STAT_RFNE		(1 << 3)
#define STAT_TFE		(1 << 2)
#define STAT_TFNF		(1 << 1)
#define STAT_ACTIVITY		(1 << 0)
#define IC_TXFLR		0x74
#define TXFLR			(1 << 0)
#define IC_RXFLR		0x78
#define RXFLR			(1 << 0)
#define IC_TX_ABRT_SOURCE	0x80
#define ABRT_SLVRD_INTX		(1 << 15)
#define ABRT_SLV_ARBLOST	(1 << 14)
#define ABRT_SLVFLUSH_TXFIFO	(1 << 13)
#define	ARB_LOST		(1 << 12)
#define ABRT_MASTER_DIS		(1 << 11)
#define ABRT_10B_RD_NORSTRT	(1 << 10)
#define ABRT_SBYTE_NORSTRT	(1 << 9)
#define ABRT_HS_NORSTRT		(1 << 8)
#define ABRT_SBYTE_ACKDET	(1 << 7)
#define ABRT_HS_ACKDET		(1 << 6)
#define ABRT_GCALL_READ		(1 << 5)
#define ABRT_GCALL_NOACK	(1 << 4)
#define ABRT_TXDATA_NOACK	(1 << 3)
#define ABRT_10ADDR2_NOACK	(1 << 2)
#define ABRT_10ADDR1_NOACK	(1 << 1)
#define ABRT_7B_ADDR_NOACK	(1 << 0)
#define IC_ENABLE_STATUS	0x9c
#define IC_EN			(1 << 0)
#define IC_COMP_PARAM_1		0xf4
#define APB_DATA_WIDTH		(0x3 << 0)
#define SS_MIN_SCL_HIGH         4000
#define SS_MIN_SCL_LOW          4700
#define FS_MIN_SCL_HIGH         600
#define FS_MIN_SCL_LOW          1300
#define HS_MIN_SCL_HIGH_100PF   60
#define HS_MIN_SCL_LOW_100PF    120
#define STANDARD		0
#define FAST			1
#define HIGH			2
#define NUM_SPEEDS		3
static int speed_mode[6] = ;
static int ctl_num = 6;
module_param_array(speed_mode, int, &ctl_num, S_IRUGO);
MODULE_PARM_DESC(speed_mode, "Set the speed of the i2c interface (0-2)");
static int intel_mid_i2c_disable(struct i2c_adapter *adap)
static int intel_mid_i2c_hwinit(struct intel_mid_i2c_private *i2c)
static u32 intel_mid_i2c_func(struct i2c_adapter *adapter)
static inline bool intel_mid_i2c_address_neq(const struct i2c_msg *p1,
const struct i2c_msg *p2)
static void intel_mid_i2c_abort(struct intel_mid_i2c_private *i2c)
static int xfer_read(struct i2c_adapter *adap, unsigned char *buf, int length)
static int xfer_write(struct i2c_adapter *adap,
unsigned char *buf, int length)
static int intel_mid_i2c_setup(struct i2c_adapter *adap,  struct i2c_msg *pmsg)
static int intel_mid_i2c_xfer(struct i2c_adapter *adap,
struct i2c_msg *pmsg,
int num)
static int intel_mid_i2c_runtime_suspend(struct device *dev)
static int intel_mid_i2c_runtime_resume(struct device *dev)
static void i2c_isr_read(struct intel_mid_i2c_private *i2c)
static irqreturn_t intel_mid_i2c_isr(int this_irq, void *dev)
static struct i2c_algorithm intel_mid_i2c_algorithm = ;
static const struct dev_pm_ops intel_mid_i2c_pm_ops = ;
static int __devinit intel_mid_i2c_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit intel_mid_i2c_remove(struct pci_dev *dev)
static struct pci_device_id intel_mid_i2c_ids[] = ;
MODULE_DEVICE_TABLE(pci, intel_mid_i2c_ids);
static struct pci_driver intel_mid_i2c_driver = ;
static int __init intel_mid_i2c_init(void)
static void __exit intel_mid_i2c_exit(void)
module_init(intel_mid_i2c_init);
module_exit(intel_mid_i2c_exit);
MODULE_AUTHOR("Ba Zheng <zheng.ba@intel.com>");
MODULE_DESCRIPTION("I2C driver for Moorestown Platform");
MODULE_LICENSE("GPL");
MODULE_VERSION(VERSION);
