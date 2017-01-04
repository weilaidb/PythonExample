#define DRV_NAME "i2c-octeon"
#define DRV_VERSION	"2.0"
#define SW_TWSI	 0x00
#define TWSI_INT 0x10
#define SW_TWSI_V               0x8000000000000000ull
#define SW_TWSI_EOP_TWSI_DATA   0x0C00000100000000ull
#define SW_TWSI_EOP_TWSI_CTL    0x0C00000200000000ull
#define SW_TWSI_EOP_TWSI_CLKCTL 0x0C00000300000000ull
#define SW_TWSI_EOP_TWSI_STAT   0x0C00000300000000ull
#define SW_TWSI_EOP_TWSI_RST    0x0C00000700000000ull
#define SW_TWSI_OP_TWSI_CLK     0x0800000000000000ull
#define SW_TWSI_R               0x0100000000000000ull
#define TWSI_CTL_CE   0x80
#define TWSI_CTL_ENAB 0x40
#define TWSI_CTL_STA  0x20
#define TWSI_CTL_STP  0x10
#define TWSI_CTL_IFLG 0x08
#define TWSI_CTL_AAK  0x04
#define STAT_START      0x08
#define STAT_RSTART     0x10
#define STAT_TXADDR_ACK 0x18
#define STAT_TXDATA_ACK 0x28
#define STAT_RXADDR_ACK 0x40
#define STAT_RXDATA_ACK 0x50
#define STAT_IDLE       0xF8
struct octeon_i2c ;
static void octeon_i2c_write_sw(struct octeon_i2c *i2c,
u64 eop_reg,
u8 data)
static u8 octeon_i2c_read_sw(struct octeon_i2c *i2c, u64 eop_reg)
static void octeon_i2c_write_int(struct octeon_i2c *i2c, u64 data)
static void octeon_i2c_int_enable(struct octeon_i2c *i2c)
static void octeon_i2c_int_disable(struct octeon_i2c *i2c)
static void octeon_i2c_unblock(struct octeon_i2c *i2c)
static irqreturn_t octeon_i2c_isr(int irq, void *dev_id)
static int octeon_i2c_test_iflg(struct octeon_i2c *i2c)
static int octeon_i2c_wait(struct octeon_i2c *i2c)
static int octeon_i2c_start(struct octeon_i2c *i2c)
static int octeon_i2c_stop(struct octeon_i2c *i2c)
static int octeon_i2c_write(struct octeon_i2c *i2c, int target,
const u8 *data, int length)
static int octeon_i2c_read(struct octeon_i2c *i2c, int target,
u8 *data, int length)
static int octeon_i2c_xfer(struct i2c_adapter *adap,
struct i2c_msg *msgs,
int num)
static u32 octeon_i2c_functionality(struct i2c_adapter *adap)
static const struct i2c_algorithm octeon_i2c_algo = ;
static struct i2c_adapter octeon_i2c_ops = ;
static int __devinit octeon_i2c_setclock(struct octeon_i2c *i2c)
static int __devinit octeon_i2c_initlowlevel(struct octeon_i2c *i2c)
static int __devinit octeon_i2c_probe(struct platform_device *pdev)
;
static int __devexit octeon_i2c_remove(struct platform_device *pdev)
;
static struct platform_driver octeon_i2c_driver = ;
static int __init octeon_i2c_init(void)
static void __exit octeon_i2c_exit(void)
MODULE_AUTHOR("Michael Lawnick <michael.lawnick.ext@nsn.com>");
MODULE_DESCRIPTION("I2C-Bus adapter for Cavium OCTEON processors");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:" DRV_NAME);
module_init(octeon_i2c_init);
module_exit(octeon_i2c_exit);
