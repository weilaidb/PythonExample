struct sa1100fb_rgb ;
struct sa1100fb_mach_info ;
struct sa1100fb_lcd_reg ;
#define RGB_4	(0)
#define RGB_8	(1)
#define RGB_16	(2)
#define NR_RGB	3
struct sa1100fb_info ;
#define TO_INF(ptr,member)	container_of(ptr,struct sa1100fb_info,member)
#define SA1100_PALETTE_MODE_VAL(bpp)    (((bpp) & 0x018) << 9)
#define C_DISABLE		(0)
#define C_ENABLE		(1)
#define C_DISABLE_CLKCHANGE	(2)
#define C_ENABLE_CLKCHANGE	(3)
#define C_REENABLE		(4)
#define C_DISABLE_PM		(5)
#define C_ENABLE_PM		(6)
#define C_STARTUP		(7)
#define SA1100_NAME	"SA1100"
#if DEBUG
#  define DPRINTK(fmt, args...)	printk("%s: " fmt, __func__ , ## args)
#  define DPRINTK(fmt, args...)
#define MIN_XRES	64
#define MIN_YRES	64
