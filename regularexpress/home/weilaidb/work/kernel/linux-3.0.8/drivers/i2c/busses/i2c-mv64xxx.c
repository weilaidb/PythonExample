#define	MV64XXX_I2C_REG_SLAVE_ADDR			0x00
#define	MV64XXX_I2C_REG_DATA				0x04
#define	MV64XXX_I2C_REG_CONTROL				0x08
#define	MV64XXX_I2C_REG_STATUS				0x0c
#define	MV64XXX_I2C_REG_BAUD				0x0c
#define	MV64XXX_I2C_REG_EXT_SLAVE_ADDR			0x10
#define	MV64XXX_I2C_REG_SOFT_RESET			0x1c
#define	MV64XXX_I2C_REG_CONTROL_ACK			0x00000004
#define	MV64XXX_I2C_REG_CONTROL_IFLG			0x00000008
#define	MV64XXX_I2C_REG_CONTROL_STOP			0x00000010
#define	MV64XXX_I2C_REG_CONTROL_START			0x00000020
#define	MV64XXX_I2C_REG_CONTROL_TWSIEN			0x00000040
#define	MV64XXX_I2C_REG_CONTROL_INTEN			0x00000080
#define	MV64XXX_I2C_STATUS_BUS_ERR			0x00
#define	MV64XXX_I2C_STATUS_MAST_START			0x08
#define	MV64XXX_I2C_STATUS_MAST_REPEAT_START		0x10
#define	MV64XXX_I2C_STATUS_MAST_WR_ADDR_ACK		0x18
#define	MV64XXX_I2C_STATUS_MAST_WR_ADDR_NO_ACK		0x20
#define	MV64XXX_I2C_STATUS_MAST_WR_ACK			0x28
#define	MV64XXX_I2C_STATUS_MAST_WR_NO_ACK		0x30
#define	MV64XXX_I2C_STATUS_MAST_LOST_ARB		0x38
#define	MV64XXX_I2C_STATUS_MAST_RD_ADDR_ACK		0x40
#define	MV64XXX_I2C_STATUS_MAST_RD_ADDR_NO_ACK		0x48
#define	MV64XXX_I2C_STATUS_MAST_RD_DATA_ACK		0x50
#define	MV64XXX_I2C_STATUS_MAST_RD_DATA_NO_ACK		0x58
#define	MV64XXX_I2C_STATUS_MAST_WR_ADDR_2_ACK		0xd0
#define	MV64XXX_I2C_STATUS_MAST_WR_ADDR_2_NO_ACK	0xd8
#define	MV64XXX_I2C_STATUS_MAST_RD_ADDR_2_ACK		0xe0
#define	MV64XXX_I2C_STATUS_MAST_RD_ADDR_2_NO_ACK	0xe8
#define	MV64XXX_I2C_STATUS_NO_STATUS			0xf8
enum ;
enum ;
struct mv64xxx_i2c_data ;
static void
mv64xxx_i2c_hw_init(struct mv64xxx_i2c_data *drv_data)
static void
mv64xxx_i2c_fsm(struct mv64xxx_i2c_data *drv_data, u32 status)
static void
mv64xxx_i2c_do_action(struct mv64xxx_i2c_data *drv_data)
static irqreturn_t
mv64xxx_i2c_intr(int irq, void *dev_id)
static void
mv64xxx_i2c_prepare_for_io(struct mv64xxx_i2c_data *drv_data,
struct i2c_msg *msg)
static void
mv64xxx_i2c_wait_for_completion(struct mv64xxx_i2c_data *drv_data)
static int
mv64xxx_i2c_execute_msg(struct mv64xxx_i2c_data *drv_data, struct i2c_msg *msg,
int is_first, int is_last)
static u32
mv64xxx_i2c_functionality(struct i2c_adapter *adap)
static int
mv64xxx_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msgs[], int num)
static const struct i2c_algorithm mv64xxx_i2c_algo = ;
static int __devinit
mv64xxx_i2c_map_regs(struct platform_device *pd,
struct mv64xxx_i2c_data *drv_data)
static void
mv64xxx_i2c_unmap_regs(struct mv64xxx_i2c_data *drv_data)
static int __devinit
mv64xxx_i2c_probe(struct platform_device *pd)
static int __devexit
mv64xxx_i2c_remove(struct platform_device *dev)
static struct platform_driver mv64xxx_i2c_driver = ;
static int __init
mv64xxx_i2c_init(void)
static void __exit
mv64xxx_i2c_exit(void)
module_init(mv64xxx_i2c_init);
module_exit(mv64xxx_i2c_exit);
MODULE_AUTHOR("Mark A. Greer <mgreer@mvista.com>");
MODULE_DESCRIPTION("Marvell mv64xxx host bridge i2c ctlr driver");
MODULE_LICENSE("GPL");
