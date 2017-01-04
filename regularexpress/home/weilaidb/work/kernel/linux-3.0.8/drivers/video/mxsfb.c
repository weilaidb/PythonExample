#define DRIVER_NAME "mxsfb"
#define REG_SET	4
#define REG_CLR	8
#define LCDC_CTRL			0x00
#define LCDC_CTRL1			0x10
#define LCDC_V4_CTRL2			0x20
#define LCDC_V3_TRANSFER_COUNT		0x20
#define LCDC_V4_TRANSFER_COUNT		0x30
#define LCDC_V4_CUR_BUF			0x40
#define LCDC_V4_NEXT_BUF		0x50
#define LCDC_V3_CUR_BUF			0x30
#define LCDC_V3_NEXT_BUF		0x40
#define LCDC_TIMING			0x60
#define LCDC_VDCTRL0			0x70
#define LCDC_VDCTRL1			0x80
#define LCDC_VDCTRL2			0x90
#define LCDC_VDCTRL3			0xa0
#define LCDC_VDCTRL4			0xb0
#define LCDC_DVICTRL0			0xc0
#define LCDC_DVICTRL1			0xd0
#define LCDC_DVICTRL2			0xe0
#define LCDC_DVICTRL3			0xf0
#define LCDC_DVICTRL4			0x100
#define LCDC_V4_DATA			0x180
#define LCDC_V3_DATA			0x1b0
#define LCDC_V4_DEBUG0			0x1d0
#define LCDC_V3_DEBUG0			0x1f0
#define CTRL_SFTRST			(1 << 31)
#define CTRL_CLKGATE			(1 << 30)
#define CTRL_BYPASS_COUNT		(1 << 19)
#define CTRL_VSYNC_MODE			(1 << 18)
#define CTRL_DOTCLK_MODE		(1 << 17)
#define CTRL_DATA_SELECT		(1 << 16)
#define CTRL_SET_BUS_WIDTH(x)		(((x) & 0x3) << 10)
#define CTRL_GET_BUS_WIDTH(x)		(((x) >> 10) & 0x3)
#define CTRL_SET_WORD_LENGTH(x)		(((x) & 0x3) << 8)
#define CTRL_GET_WORD_LENGTH(x)		(((x) >> 8) & 0x3)
#define CTRL_MASTER			(1 << 5)
#define CTRL_DF16			(1 << 3)
#define CTRL_DF18			(1 << 2)
#define CTRL_DF24			(1 << 1)
#define CTRL_RUN			(1 << 0)
#define CTRL1_FIFO_CLEAR		(1 << 21)
#define CTRL1_SET_BYTE_PACKAGING(x)	(((x) & 0xf) << 16)
#define CTRL1_GET_BYTE_PACKAGING(x)	(((x) >> 16) & 0xf)
#define TRANSFER_COUNT_SET_VCOUNT(x)	(((x) & 0xffff) << 16)
#define TRANSFER_COUNT_GET_VCOUNT(x)	(((x) >> 16) & 0xffff)
#define TRANSFER_COUNT_SET_HCOUNT(x)	((x) & 0xffff)
#define TRANSFER_COUNT_GET_HCOUNT(x)	((x) & 0xffff)
#define VDCTRL0_ENABLE_PRESENT		(1 << 28)
#define VDCTRL0_VSYNC_ACT_HIGH		(1 << 27)
#define VDCTRL0_HSYNC_ACT_HIGH		(1 << 26)
#define VDCTRL0_DOTCLK_ACT_FAILING	(1 << 25)
#define VDCTRL0_ENABLE_ACT_HIGH		(1 << 24)
#define VDCTRL0_VSYNC_PERIOD_UNIT	(1 << 21)
#define VDCTRL0_VSYNC_PULSE_WIDTH_UNIT	(1 << 20)
#define VDCTRL0_HALF_LINE		(1 << 19)
#define VDCTRL0_HALF_LINE_MODE		(1 << 18)
#define VDCTRL0_SET_VSYNC_PULSE_WIDTH(x) ((x) & 0x3ffff)
#define VDCTRL0_GET_VSYNC_PULSE_WIDTH(x) ((x) & 0x3ffff)
#define VDCTRL2_SET_HSYNC_PERIOD(x)	((x) & 0x3ffff)
#define VDCTRL2_GET_HSYNC_PERIOD(x)	((x) & 0x3ffff)
#define VDCTRL3_MUX_SYNC_SIGNALS	(1 << 29)
#define VDCTRL3_VSYNC_ONLY		(1 << 28)
#define SET_HOR_WAIT_CNT(x)		(((x) & 0xfff) << 16)
#define GET_HOR_WAIT_CNT(x)		(((x) >> 16) & 0xfff)
#define SET_VERT_WAIT_CNT(x)		((x) & 0xffff)
#define GET_VERT_WAIT_CNT(x)		((x) & 0xffff)
#define VDCTRL4_SET_DOTCLK_DLY(x)	(((x) & 0x7) << 29)
#define VDCTRL4_GET_DOTCLK_DLY(x)	(((x) >> 29) & 0x7)
#define VDCTRL4_SYNC_SIGNALS_ON		(1 << 18)
#define SET_DOTCLK_H_VALID_DATA_CNT(x)	((x) & 0x3ffff)
#define DEBUG0_HSYNC			(1 < 26)
#define DEBUG0_VSYNC			(1 < 25)
#define MIN_XRES			120
#define MIN_YRES			120
#define RED 0
#define GREEN 1
#define BLUE 2
#define TRANSP 3
enum mxsfb_devtype ;
struct mxsfb_devdata ;
struct mxsfb_info ;
#define mxsfb_is_v3(host) (host->devdata->ipversion == 3)
#define mxsfb_is_v4(host) (host->devdata->ipversion == 4)
static const struct mxsfb_devdata mxsfb_devdata[] = ;
#define to_imxfb_host(x) (container_of(x, struct mxsfb_info, fb_info))
static inline u32 set_hsync_pulse_width(struct mxsfb_info *host, unsigned val)
static inline u32 get_hsync_pulse_width(struct mxsfb_info *host, unsigned val)
static const struct fb_bitfield def_rgb565[] = ;
static const struct fb_bitfield def_rgb666[] = ;
static const struct fb_bitfield def_rgb888[] = ;
static inline unsigned chan_to_field(unsigned chan, struct fb_bitfield *bf)
static int mxsfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *fb_info)
static void mxsfb_enable_controller(struct fb_info *fb_info)
static void mxsfb_disable_controller(struct fb_info *fb_info)
static int mxsfb_set_par(struct fb_info *fb_info)
static int mxsfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *fb_info)
static int mxsfb_blank(int blank, struct fb_info *fb_info)
static int mxsfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *fb_info)
static struct fb_ops mxsfb_ops = ;
static int __devinit mxsfb_restore_mode(struct mxsfb_info *host)
static int __devinit mxsfb_init_fbinfo(struct mxsfb_info *host)
static void __devexit mxsfb_free_videomem(struct mxsfb_info *host)
static int __devinit mxsfb_probe(struct platform_device *pdev)
static int __devexit mxsfb_remove(struct platform_device *pdev)
static struct platform_device_id mxsfb_devtype[] = ;
MODULE_DEVICE_TABLE(platform, mxsfb_devtype);
static struct platform_driver mxsfb_driver = ;
static int __init mxsfb_init(void)
static void __exit mxsfb_exit(void)
module_init(mxsfb_init);
module_exit(mxsfb_exit);
MODULE_DESCRIPTION("Freescale mxs framebuffer driver");
MODULE_AUTHOR("Sascha Hauer, Pengutronix");
MODULE_LICENSE("GPL");
