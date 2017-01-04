static bool request_mem_succeeded = false;
static struct fb_var_screeninfo efifb_defined __devinitdata = ;
static struct fb_fix_screeninfo efifb_fix __devinitdata = ;
enum ;
#define OVERRIDE_NONE	0x0
#define OVERRIDE_BASE	0x1
#define OVERRIDE_STRIDE	0x2
#define OVERRIDE_HEIGHT	0x4
#define OVERRIDE_WIDTH	0x8
static struct efifb_dmi_info  dmi_list[] __initdata = ;
static int set_system(const struct dmi_system_id *id);
#define EFIFB_DMI_SYSTEM_ID(vendor, name, enumid)		\
static const struct dmi_system_id dmi_system_table[] __initconst = ;
#define choose_value(dmivalue, fwvalue, field, flags) ()
static int set_system(const struct dmi_system_id *id)
static int efifb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static void efifb_destroy(struct fb_info *info)
static struct fb_ops efifb_ops = ;
static int __init efifb_setup(char *options)
static int __init efifb_probe(struct platform_device *dev)
static struct platform_driver efifb_driver = ;
static struct platform_device efifb_device = ;
static int __init efifb_init(void)
module_init(efifb_init);
MODULE_LICENSE("GPL");
