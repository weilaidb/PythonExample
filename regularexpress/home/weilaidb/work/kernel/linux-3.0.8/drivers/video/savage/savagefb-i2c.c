#define SAVAGE_DDC 	0x50
#define VGA_CR_IX	0x3d4
#define VGA_CR_DATA	0x3d5
#define CR_SERIAL1	0xa0
#define MM_SERIAL1	0xff20
#define CR_SERIAL2	0xb1
#define PROSAVAGE_I2C_ENAB	0x10
#define PROSAVAGE_I2C_SCL_OUT	0x01
#define PROSAVAGE_I2C_SDA_OUT	0x02
#define PROSAVAGE_I2C_SCL_IN	0x04
#define PROSAVAGE_I2C_SDA_IN	0x08
#define SAVAGE4_I2C_ENAB	0x00000020
#define SAVAGE4_I2C_SCL_OUT	0x00000001
#define SAVAGE4_I2C_SDA_OUT	0x00000002
#define SAVAGE4_I2C_SCL_IN	0x00000008
#define SAVAGE4_I2C_SDA_IN	0x00000010
static void savage4_gpio_setscl(void *data, int val)
static void savage4_gpio_setsda(void *data, int val)
static int savage4_gpio_getscl(void *data)
static int savage4_gpio_getsda(void *data)
static void prosavage_gpio_setscl(void* data, int val)
static void prosavage_gpio_setsda(void* data, int val)
static int prosavage_gpio_getscl(void* data)
static int prosavage_gpio_getsda(void* data)
static int savage_setup_i2c_bus(struct savagefb_i2c_chan *chan,
const char *name)
void savagefb_create_i2c_busses(struct fb_info *info)
void savagefb_delete_i2c_busses(struct fb_info *info)
int savagefb_probe_i2c_connector(struct fb_info *info, u8 **out_edid)
MODULE_LICENSE("GPL");
