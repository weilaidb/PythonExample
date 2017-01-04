extern int sm501_unit_power(struct device *dev,
unsigned int unit, unsigned int to);
extern unsigned long sm501_set_clock(struct device *dev,
int clksrc, unsigned long freq);
extern unsigned long sm501_find_clock(struct device *dev,
int clksrc, unsigned long req_freq);
extern int sm501_misc_control(struct device *dev,
unsigned long set, unsigned long clear);
extern unsigned long sm501_modify_reg(struct device *dev,
unsigned long reg,
unsigned long set,
unsigned long clear);
#define SM501FB_FLAG_USE_INIT_MODE	(1<<0)
#define SM501FB_FLAG_DISABLE_AT_EXIT	(1<<1)
#define SM501FB_FLAG_USE_HWCURSOR	(1<<2)
#define SM501FB_FLAG_USE_HWACCEL	(1<<3)
#define SM501FB_FLAG_PANEL_NO_FPEN	(1<<4)
#define SM501FB_FLAG_PANEL_NO_VBIASEN	(1<<5)
#define SM501FB_FLAG_PANEL_INV_FPEN	(1<<6)
#define SM501FB_FLAG_PANEL_INV_VBIASEN	(1<<7)
struct sm501_platdata_fbsub ;
enum sm501_fb_routing ;
#define SM501_FBPD_SWAP_FB_ENDIAN	(1<<0)
struct sm501_platdata_fb ;
struct sm501_platdata_gpio_i2c ;
struct sm501_reg_init ;
#define SM501_USE_USB_HOST	(1<<0)
#define SM501_USE_USB_SLAVE	(1<<1)
#define SM501_USE_SSP0		(1<<2)
#define SM501_USE_SSP1		(1<<3)
#define SM501_USE_UART0		(1<<4)
#define SM501_USE_UART1		(1<<5)
#define SM501_USE_FBACCEL	(1<<6)
#define SM501_USE_AC97		(1<<7)
#define SM501_USE_I2S		(1<<8)
#define SM501_USE_GPIO		(1<<9)
#define SM501_USE_ALL		(0xffffffff)
struct sm501_initdata ;
struct sm501_init_gpio ;
#define SM501_FLAG_SUSPEND_OFF		(1<<4)
struct sm501_platdata ;
#if defined(CONFIG_PPC32)
#define smc501_readl(addr)		ioread32be((addr))
#define smc501_writel(val, addr)	iowrite32be((val), (addr))
#define smc501_readl(addr)		readl(addr)
#define smc501_writel(val, addr)	writel(val, addr)
