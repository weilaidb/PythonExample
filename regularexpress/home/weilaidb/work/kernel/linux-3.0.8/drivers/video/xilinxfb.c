#define DRIVER_NAME		"xilinxfb"
#define NUM_REGS	2
#define REG_FB_ADDR	0
#define REG_CTRL	1
#define REG_CTRL_ENABLE	 0x0001
#define REG_CTRL_ROTATE	 0x0002
#define BYTES_PER_PIXEL	4
#define BITS_PER_PIXEL	(BYTES_PER_PIXEL * 8)
#define RED_SHIFT	16
#define GREEN_SHIFT	8
#define BLUE_SHIFT	0
#define PALETTE_ENTRIES_NO	16
static struct xilinxfb_platform_data xilinx_fb_default_pdata = ;
static struct fb_fix_screeninfo xilinx_fb_fix = ;
static struct fb_var_screeninfo xilinx_fb_var = ;
#define PLB_ACCESS_FLAG	0x1
struct xilinxfb_drvdata ;
#define to_xilinxfb_drvdata(_info) \
container_of(_info, struct xilinxfb_drvdata, info)
static void xilinx_fb_out_be32(struct xilinxfb_drvdata *drvdata, u32 offset,
u32 val)
static int
xilinx_fb_setcolreg(unsigned regno, unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *fbi)
static int
xilinx_fb_blank(int blank_mode, struct fb_info *fbi)
static struct fb_ops xilinxfb_ops =
;
static int xilinxfb_assign(struct device *dev,
struct xilinxfb_drvdata *drvdata,
unsigned long physaddr,
struct xilinxfb_platform_data *pdata)
static int xilinxfb_release(struct device *dev)
static int __devinit xilinxfb_of_probe(struct platform_device *op)
static int __devexit xilinxfb_of_remove(struct platform_device *op)
static struct of_device_id xilinxfb_of_match[] __devinitdata = ;
MODULE_DEVICE_TABLE(of, xilinxfb_of_match);
static struct platform_driver xilinxfb_of_driver = ;
static int __init
xilinxfb_init(void)
static void __exit
xilinxfb_cleanup(void)
module_init(xilinxfb_init);
module_exit(xilinxfb_cleanup);
MODULE_AUTHOR("MontaVista Software, Inc. <source@mvista.com>");
MODULE_DESCRIPTION("Xilinx TFT frame buffer driver");
MODULE_LICENSE("GPL");
