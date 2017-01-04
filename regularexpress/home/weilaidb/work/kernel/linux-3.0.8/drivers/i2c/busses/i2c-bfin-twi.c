#define TWI_I2C_MODE_STANDARD		1
#define TWI_I2C_MODE_STANDARDSUB	2
#define TWI_I2C_MODE_COMBINED		3
#define TWI_I2C_MODE_REPEAT		4
struct bfin_twi_iface ;
#define DEFINE_TWI_REG(reg, off) \
static inline u16 read_##reg(struct bfin_twi_iface *iface) \
\
static inline void write_##reg(struct bfin_twi_iface *iface, u16 v) \
DEFINE_TWI_REG(CLKDIV, 0x00)
DEFINE_TWI_REG(CONTROL, 0x04)
DEFINE_TWI_REG(SLAVE_CTL, 0x08)
DEFINE_TWI_REG(SLAVE_STAT, 0x0C)
DEFINE_TWI_REG(SLAVE_ADDR, 0x10)
DEFINE_TWI_REG(MASTER_CTL, 0x14)
DEFINE_TWI_REG(MASTER_STAT, 0x18)
DEFINE_TWI_REG(MASTER_ADDR, 0x1C)
DEFINE_TWI_REG(INT_STAT, 0x20)
DEFINE_TWI_REG(INT_MASK, 0x24)
DEFINE_TWI_REG(FIFO_CTL, 0x28)
DEFINE_TWI_REG(FIFO_STAT, 0x2C)
DEFINE_TWI_REG(XMT_DATA8, 0x80)
DEFINE_TWI_REG(XMT_DATA16, 0x84)
DEFINE_TWI_REG(RCV_DATA8, 0x88)
DEFINE_TWI_REG(RCV_DATA16, 0x8C)
static const u16 pin_req[2][3] = ;
static void bfin_twi_handle_interrupt(struct bfin_twi_iface *iface,
unsigned short twi_int_status)
static irqreturn_t bfin_twi_interrupt_entry(int irq, void *dev_id)
static int bfin_twi_do_master_xfer(struct i2c_adapter *adap,
struct i2c_msg *msgs, int num)
static int bfin_twi_master_xfer(struct i2c_adapter *adap,
struct i2c_msg *msgs, int num)
int bfin_twi_do_smbus_xfer(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data *data)
int bfin_twi_smbus_xfer(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data *data)
static u32 bfin_twi_functionality(struct i2c_adapter *adap)
static struct i2c_algorithm bfin_twi_algorithm = ;
static int i2c_bfin_twi_suspend(struct platform_device *pdev, pm_message_t state)
static int i2c_bfin_twi_resume(struct platform_device *pdev)
static int i2c_bfin_twi_probe(struct platform_device *pdev)
static int i2c_bfin_twi_remove(struct platform_device *pdev)
static struct platform_driver i2c_bfin_twi_driver = ;
static int __init i2c_bfin_twi_init(void)
static void __exit i2c_bfin_twi_exit(void)
subsys_initcall(i2c_bfin_twi_init);
module_exit(i2c_bfin_twi_exit);
MODULE_AUTHOR("Bryan Wu, Sonic Zhang");
MODULE_DESCRIPTION("Blackfin BF5xx on-chip I2C TWI Contoller Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:i2c-bfin-twi");
