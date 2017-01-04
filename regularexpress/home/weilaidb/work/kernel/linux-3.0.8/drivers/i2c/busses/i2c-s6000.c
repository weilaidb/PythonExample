#define DRV_NAME "i2c-s6000"
#define POLL_TIMEOUT	(2 * HZ)
struct s6i2c_if ;
static inline u16 i2c_rd16(struct s6i2c_if *iface, unsigned n)
static inline void i2c_wr16(struct s6i2c_if *iface, unsigned n, u16 v)
static inline u32 i2c_rd32(struct s6i2c_if *iface, unsigned n)
static inline void i2c_wr32(struct s6i2c_if *iface, unsigned n, u32 v)
static struct s6i2c_if s6i2c_if;
static void s6i2c_handle_interrupt(struct s6i2c_if *iface)
static irqreturn_t s6i2c_interrupt_entry(int irq, void *dev_id)
static void s6i2c_timeout(unsigned long data)
static int s6i2c_master_xfer(struct i2c_adapter *adap,
struct i2c_msg *msgs, int num)
static u32 s6i2c_functionality(struct i2c_adapter *adap)
static struct i2c_algorithm s6i2c_algorithm = ;
static u16 __devinit nanoseconds_on_clk(struct s6i2c_if *iface, u32 ns)
static int __devinit s6i2c_probe(struct platform_device *dev)
static int __devexit s6i2c_remove(struct platform_device *pdev)
static struct platform_driver s6i2c_driver = ;
static int __init s6i2c_init(void)
static void __exit s6i2c_exit(void)
MODULE_DESCRIPTION("I2C-Bus adapter routines for S6000 I2C");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
subsys_initcall(s6i2c_init);
module_exit(s6i2c_exit);
