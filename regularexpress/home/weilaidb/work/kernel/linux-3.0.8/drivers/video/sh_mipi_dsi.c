#define SYSCTRL		0x0000
#define SYSCONF		0x0004
#define TIMSET		0x0008
#define RESREQSET0	0x0018
#define RESREQSET1	0x001c
#define HSTTOVSET	0x0020
#define LPRTOVSET	0x0024
#define TATOVSET	0x0028
#define PRTOVSET	0x002c
#define DSICTRL		0x0030
#define DSIINTE		0x0060
#define PHYCTRL		0x0070
#define DTCTR		0x0000
#define VMCTR1		0x0020
#define VMCTR2		0x0024
#define VMLEN1		0x0028
#define CMTSRTREQ	0x0070
#define CMTSRTCTR	0x00d0
#define MAX_SH_MIPI_DSI 2
struct sh_mipi ;
static struct sh_mipi *mipi_dsi[MAX_SH_MIPI_DSI];
static DEFINE_MUTEX(array_lock);
static struct sh_mipi *sh_mipi_by_handle(int handle)
static int sh_mipi_send_short(struct sh_mipi *mipi, u8 dsi_cmd,
u8 cmd, u8 param)
#define LCD_CHAN2MIPI(c) ((c) < LCDC_CHAN_MAINLCD || (c) > LCDC_CHAN_SUBLCD ? \
-EINVAL : (c) - 1)
static int sh_mipi_dcs(int handle, u8 cmd)
static int sh_mipi_dcs_param(int handle, u8 cmd, u8 param)
static void sh_mipi_dsi_enable(struct sh_mipi *mipi, bool enable)
static void sh_mipi_shutdown(struct platform_device *pdev)
static void mipi_display_on(void *arg, struct fb_info *info)
static void mipi_display_off(void *arg)
static int __init sh_mipi_setup(struct sh_mipi *mipi,
struct sh_mipi_dsi_info *pdata)
static int __init sh_mipi_probe(struct platform_device *pdev)
static int __exit sh_mipi_remove(struct platform_device *pdev)
static struct platform_driver sh_mipi_driver = ;
static int __init sh_mipi_init(void)
module_init(sh_mipi_init);
static void __exit sh_mipi_exit(void)
module_exit(sh_mipi_exit);
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_DESCRIPTION("SuperH / ARM-shmobile MIPI DSI driver");
MODULE_LICENSE("GPL v2");
