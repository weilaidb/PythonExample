#define MAT_CLK		0x20
#define MAT_DATA	0x10
#define DDC1_CLK	0x08
#define DDC1_DATA	0x02
#define DDC1B_CLK	0x10
#define DDC1B_DATA	0x04
#define DDC2_CLK	0x04
#define DDC2_DATA	0x01
struct matroxfb_dh_maven_info ;
static int matroxfb_read_gpio(struct matrox_fb_info* minfo)
static void matroxfb_set_gpio(struct matrox_fb_info* minfo, int mask, int val)
static inline void matroxfb_i2c_set(struct matrox_fb_info* minfo, int mask, int state)
static void matroxfb_gpio_setsda(void* data, int state)
static void matroxfb_gpio_setscl(void* data, int state)
static int matroxfb_gpio_getsda(void* data)
static int matroxfb_gpio_getscl(void* data)
static const struct i2c_algo_bit_data matrox_i2c_algo_template =
;
static int i2c_bus_reg(struct i2c_bit_adapter* b, struct matrox_fb_info* minfo,
unsigned int data, unsigned int clock, const char *name,
int class)
static void i2c_bit_bus_del(struct i2c_bit_adapter* b)
static inline void i2c_maven_done(struct matroxfb_dh_maven_info* minfo2)
static inline void i2c_ddc1_done(struct matroxfb_dh_maven_info* minfo2)
static inline void i2c_ddc2_done(struct matroxfb_dh_maven_info* minfo2)
static void* i2c_matroxfb_probe(struct matrox_fb_info* minfo)
static void i2c_matroxfb_remove(struct matrox_fb_info* minfo, void* data)
static struct matroxfb_driver i2c_matroxfb = ;
static int __init i2c_matroxfb_init(void)
static void __exit i2c_matroxfb_exit(void)
MODULE_AUTHOR("(c) 1999-2002 Petr Vandrovec <vandrove@vc.cvut.cz>");
MODULE_DESCRIPTION("Support module providing I2C buses present on Matrox videocards");
module_init(i2c_matroxfb_init);
module_exit(i2c_matroxfb_exit);
MODULE_LICENSE("GPL");
