enum sh_mobile_i2c_op ;
struct sh_mobile_i2c_data ;
#define IIC_FLAG_HAS_ICIC67	(1 << 0)
#define NORMAL_SPEED		100000
#define ICDR			0x00
#define ICCR			0x04
#define ICSR			0x08
#define ICIC			0x0c
#define ICCL			0x10
#define ICCH			0x14
#define ICCR_ICE		0x80
#define ICCR_RACK		0x40
#define ICCR_TRS		0x10
#define ICCR_BBSY		0x04
#define ICCR_SCP		0x01
#define ICSR_SCLM		0x80
#define ICSR_SDAM		0x40
#define SW_DONE			0x20
#define ICSR_BUSY		0x10
#define ICSR_AL			0x08
#define ICSR_TACK		0x04
#define ICSR_WAIT		0x02
#define ICSR_DTE		0x01
#define ICIC_ICCLB8		0x80
#define ICIC_ICCHB8		0x40
#define ICIC_ALE		0x08
#define ICIC_TACKE		0x04
#define ICIC_WAITE		0x02
#define ICIC_DTEE		0x01
static void iic_wr(struct sh_mobile_i2c_data *pd, int offs, unsigned char data)
static unsigned char iic_rd(struct sh_mobile_i2c_data *pd, int offs)
static void iic_set_clr(struct sh_mobile_i2c_data *pd, int offs,
unsigned char set, unsigned char clr)
static void activate_ch(struct sh_mobile_i2c_data *pd)
static void deactivate_ch(struct sh_mobile_i2c_data *pd)
static unsigned char i2c_op(struct sh_mobile_i2c_data *pd,
enum sh_mobile_i2c_op op, unsigned char data)
static int sh_mobile_i2c_is_first_byte(struct sh_mobile_i2c_data *pd)
static int sh_mobile_i2c_is_last_byte(struct sh_mobile_i2c_data *pd)
static void sh_mobile_i2c_get_data(struct sh_mobile_i2c_data *pd,
unsigned char *buf)
static int sh_mobile_i2c_isr_tx(struct sh_mobile_i2c_data *pd)
static int sh_mobile_i2c_isr_rx(struct sh_mobile_i2c_data *pd)
static irqreturn_t sh_mobile_i2c_isr(int irq, void *dev_id)
static int start_ch(struct sh_mobile_i2c_data *pd, struct i2c_msg *usr_msg)
static int sh_mobile_i2c_xfer(struct i2c_adapter *adapter,
struct i2c_msg *msgs,
int num)
static u32 sh_mobile_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm sh_mobile_i2c_algorithm = ;
static int sh_mobile_i2c_hook_irqs(struct platform_device *dev, int hook)
static int sh_mobile_i2c_probe(struct platform_device *dev)
static int sh_mobile_i2c_remove(struct platform_device *dev)
static int sh_mobile_i2c_runtime_nop(struct device *dev)
static const struct dev_pm_ops sh_mobile_i2c_dev_pm_ops = ;
static struct platform_driver sh_mobile_i2c_driver = ;
static int __init sh_mobile_i2c_adap_init(void)
static void __exit sh_mobile_i2c_adap_exit(void)
subsys_initcall(sh_mobile_i2c_adap_init);
module_exit(sh_mobile_i2c_adap_exit);
MODULE_DESCRIPTION("SuperH Mobile I2C Bus Controller driver");
MODULE_AUTHOR("Magnus Damm");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:i2c-sh_mobile");
