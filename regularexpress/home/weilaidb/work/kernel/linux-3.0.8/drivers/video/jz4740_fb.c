#define JZ_REG_LCD_CFG		0x00
#define JZ_REG_LCD_VSYNC	0x04
#define JZ_REG_LCD_HSYNC	0x08
#define JZ_REG_LCD_VAT		0x0C
#define JZ_REG_LCD_DAH		0x10
#define JZ_REG_LCD_DAV		0x14
#define JZ_REG_LCD_PS		0x18
#define JZ_REG_LCD_CLS		0x1C
#define JZ_REG_LCD_SPL		0x20
#define JZ_REG_LCD_REV		0x24
#define JZ_REG_LCD_CTRL		0x30
#define JZ_REG_LCD_STATE	0x34
#define JZ_REG_LCD_IID		0x38
#define JZ_REG_LCD_DA0		0x40
#define JZ_REG_LCD_SA0		0x44
#define JZ_REG_LCD_FID0		0x48
#define JZ_REG_LCD_CMD0		0x4C
#define JZ_REG_LCD_DA1		0x50
#define JZ_REG_LCD_SA1		0x54
#define JZ_REG_LCD_FID1		0x58
#define JZ_REG_LCD_CMD1		0x5C
#define JZ_LCD_CFG_SLCD			BIT(31)
#define JZ_LCD_CFG_PS_DISABLE		BIT(23)
#define JZ_LCD_CFG_CLS_DISABLE		BIT(22)
#define JZ_LCD_CFG_SPL_DISABLE		BIT(21)
#define JZ_LCD_CFG_REV_DISABLE		BIT(20)
#define JZ_LCD_CFG_HSYNCM		BIT(19)
#define JZ_LCD_CFG_PCLKM		BIT(18)
#define JZ_LCD_CFG_INV			BIT(17)
#define JZ_LCD_CFG_SYNC_DIR		BIT(16)
#define JZ_LCD_CFG_PS_POLARITY		BIT(15)
#define JZ_LCD_CFG_CLS_POLARITY		BIT(14)
#define JZ_LCD_CFG_SPL_POLARITY		BIT(13)
#define JZ_LCD_CFG_REV_POLARITY		BIT(12)
#define JZ_LCD_CFG_HSYNC_ACTIVE_LOW	BIT(11)
#define JZ_LCD_CFG_PCLK_FALLING_EDGE	BIT(10)
#define JZ_LCD_CFG_DE_ACTIVE_LOW	BIT(9)
#define JZ_LCD_CFG_VSYNC_ACTIVE_LOW	BIT(8)
#define JZ_LCD_CFG_18_BIT		BIT(7)
#define JZ_LCD_CFG_PDW			(BIT(5) | BIT(4))
#define JZ_LCD_CFG_MODE_MASK 0xf
#define JZ_LCD_CTRL_BURST_4		(0x0 << 28)
#define JZ_LCD_CTRL_BURST_8		(0x1 << 28)
#define JZ_LCD_CTRL_BURST_16		(0x2 << 28)
#define JZ_LCD_CTRL_RGB555		BIT(27)
#define JZ_LCD_CTRL_OFUP		BIT(26)
#define JZ_LCD_CTRL_FRC_GRAYSCALE_16	(0x0 << 24)
#define JZ_LCD_CTRL_FRC_GRAYSCALE_4	(0x1 << 24)
#define JZ_LCD_CTRL_FRC_GRAYSCALE_2	(0x2 << 24)
#define JZ_LCD_CTRL_PDD_MASK		(0xff << 16)
#define JZ_LCD_CTRL_EOF_IRQ		BIT(13)
#define JZ_LCD_CTRL_SOF_IRQ		BIT(12)
#define JZ_LCD_CTRL_OFU_IRQ		BIT(11)
#define JZ_LCD_CTRL_IFU0_IRQ		BIT(10)
#define JZ_LCD_CTRL_IFU1_IRQ		BIT(9)
#define JZ_LCD_CTRL_DD_IRQ		BIT(8)
#define JZ_LCD_CTRL_QDD_IRQ		BIT(7)
#define JZ_LCD_CTRL_REVERSE_ENDIAN	BIT(6)
#define JZ_LCD_CTRL_LSB_FISRT		BIT(5)
#define JZ_LCD_CTRL_DISABLE		BIT(4)
#define JZ_LCD_CTRL_ENABLE		BIT(3)
#define JZ_LCD_CTRL_BPP_1		0x0
#define JZ_LCD_CTRL_BPP_2		0x1
#define JZ_LCD_CTRL_BPP_4		0x2
#define JZ_LCD_CTRL_BPP_8		0x3
#define JZ_LCD_CTRL_BPP_15_16		0x4
#define JZ_LCD_CTRL_BPP_18_24		0x5
#define JZ_LCD_CMD_SOF_IRQ BIT(15)
#define JZ_LCD_CMD_EOF_IRQ BIT(16)
#define JZ_LCD_CMD_ENABLE_PAL BIT(12)
#define JZ_LCD_SYNC_MASK 0x3ff
#define JZ_LCD_STATE_DISABLED BIT(0)
struct jzfb_framedesc  __packed;
struct jzfb ;
static const struct fb_fix_screeninfo jzfb_fix __devinitdata = ;
static const struct jz_gpio_bulk_request jz_lcd_ctrl_pins[] = ;
static const struct jz_gpio_bulk_request jz_lcd_data_pins[] = ;
static unsigned int jzfb_num_ctrl_pins(struct jzfb *jzfb)
static unsigned int jzfb_num_data_pins(struct jzfb *jzfb)
static inline uint32_t jzfb_convert_color_to_hw(unsigned val,
struct fb_bitfield *bf)
static int jzfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info *fb)
static int jzfb_get_controller_bpp(struct jzfb *jzfb)
static struct fb_videomode *jzfb_get_mode(struct jzfb *jzfb,
struct fb_var_screeninfo *var)
static int jzfb_check_var(struct fb_var_screeninfo *var, struct fb_info *fb)
static int jzfb_set_par(struct fb_info *info)
static void jzfb_enable(struct jzfb *jzfb)
static void jzfb_disable(struct jzfb *jzfb)
static int jzfb_blank(int blank_mode, struct fb_info *info)
static int jzfb_alloc_devmem(struct jzfb *jzfb)
static void jzfb_free_devmem(struct jzfb *jzfb)
static struct  fb_ops jzfb_ops = ;
static int __devinit jzfb_probe(struct platform_device *pdev)
static int __devexit jzfb_remove(struct platform_device *pdev)
static int jzfb_suspend(struct device *dev)
static int jzfb_resume(struct device *dev)
static const struct dev_pm_ops jzfb_pm_ops = ;
#define JZFB_PM_OPS (&jzfb_pm_ops)
#define JZFB_PM_OPS NULL
static struct platform_driver jzfb_driver = ;
static int __init jzfb_init(void)
module_init(jzfb_init);
static void __exit jzfb_exit(void)
module_exit(jzfb_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("JZ4740 SoC LCD framebuffer driver");
MODULE_ALIAS("platform:jz4740-fb");
