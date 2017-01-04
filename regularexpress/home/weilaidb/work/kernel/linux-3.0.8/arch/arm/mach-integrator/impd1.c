static int module_id;
module_param_named(lmid, module_id, int, 0444);
MODULE_PARM_DESC(lmid, "logic module stack position");
struct impd1_module ;
static const struct icst_params impd1_vco_params = ;
static void impd1_setvco(struct clk *clk, struct icst_vco vco)
static const struct clk_ops impd1_clk_ops = ;
void impd1_tweak_control(struct device *dev, u32 mask, u32 val)
EXPORT_SYMBOL(impd1_tweak_control);
#define PANEL		PROSPECTOR
#define LTM10C209		1
#define PROSPECTOR		2
#define SVGA			3
#define VGA			4
#if PANEL == VGA
#define PANELTYPE	vga
static struct clcd_panel vga = ;
#elif PANEL == SVGA
#define PANELTYPE	svga
static struct clcd_panel svga = ;
#elif PANEL == PROSPECTOR
#define PANELTYPE	prospector
static struct clcd_panel prospector = ;
#elif PANEL == LTM10C209
#define PANELTYPE	ltm10c209
static struct clcd_panel ltm10c209 = ;
static void impd1fb_clcd_disable(struct clcd_fb *fb)
static void impd1fb_clcd_enable(struct clcd_fb *fb)
static int impd1fb_clcd_setup(struct clcd_fb *fb)
static int impd1fb_clcd_mmap(struct clcd_fb *fb, struct vm_area_struct *vma)
static void impd1fb_clcd_remove(struct clcd_fb *fb)
static struct clcd_board impd1_clcd_data = ;
struct impd1_device ;
static struct impd1_device impd1_devs[] = ;
static struct clk fixed_14745600 = ;
static int impd1_probe(struct lm_device *dev)
static int impd1_remove_one(struct device *dev, void *data)
static void impd1_remove(struct lm_device *dev)
static struct lm_driver impd1_driver = ;
static int __init impd1_init(void)
static void __exit impd1_exit(void)
module_init(impd1_init);
module_exit(impd1_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Integrator/IM-PD1 logic module core driver");
MODULE_AUTHOR("Deep Blue Solutions Ltd");
