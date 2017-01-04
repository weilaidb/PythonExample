#define DRIVER_VERSION "2.2"
MODULE_DESCRIPTION("IBM IIC driver v" DRIVER_VERSION);
MODULE_LICENSE("GPL");
static int iic_force_poll;
module_param(iic_force_poll, bool, 0);
MODULE_PARM_DESC(iic_force_poll, "Force polling mode");
static int iic_force_fast;
module_param(iic_force_fast, bool, 0);
MODULE_PARM_DESC(iic_force_fast, "Force fast mode (400 kHz)");
#define DBG_LEVEL 0
#undef DBG
#undef DBG2
#if DBG_LEVEL > 0
#  define DBG(f,x...)	printk(KERN_DEBUG "ibm-iic" f, ##x)
#  define DBG(f,x...)	((void)0)
#if DBG_LEVEL > 1
#  define DBG2(f,x...) 	DBG(f, ##x)
#  define DBG2(f,x...) 	((void)0)
#if DBG_LEVEL > 2
static void dump_iic_regs(const char* header, struct ibm_iic_private* dev)
#  define DUMP_REGS(h,dev)	dump_iic_regs((h),(dev))
#  define DUMP_REGS(h,dev)	((void)0)
static struct i2c_timings  timings [] = ;
static inline void iic_interrupt_mode(struct ibm_iic_private* dev, int enable)
static void iic_dev_init(struct ibm_iic_private* dev)
static void iic_dev_reset(struct ibm_iic_private* dev)
static int iic_dc_wait(volatile struct iic_regs __iomem *iic, u8 mask)
static int iic_smbus_quick(struct ibm_iic_private* dev, const struct i2c_msg* p)
static irqreturn_t iic_handler(int irq, void *dev_id)
static int iic_xfer_result(struct ibm_iic_private* dev)
static void iic_abort_xfer(struct ibm_iic_private* dev)
static int iic_wait_for_tc(struct ibm_iic_private* dev)
static int iic_xfer_bytes(struct ibm_iic_private* dev, struct i2c_msg* pm,
int combined_xfer)
static inline void iic_address(struct ibm_iic_private* dev, struct i2c_msg* msg)
static inline int iic_invalid_address(const struct i2c_msg* p)
static inline int iic_address_neq(const struct i2c_msg* p1,
const struct i2c_msg* p2)
static int iic_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
static u32 iic_func(struct i2c_adapter *adap)
static const struct i2c_algorithm iic_algo = ;
static inline u8 iic_clckdiv(unsigned int opb)
static int __devinit iic_request_irq(struct platform_device *ofdev,
struct ibm_iic_private *dev)
static int __devinit iic_probe(struct platform_device *ofdev)
static int __devexit iic_remove(struct platform_device *ofdev)
static const struct of_device_id ibm_iic_match[] = ;
static struct platform_driver ibm_iic_driver = ;
static int __init iic_init(void)
static void __exit iic_exit(void)
module_init(iic_init);
module_exit(iic_exit);
