#if defined(CONFIG_M68VZ328)
#elif defined(CONFIG_M68EZ328)
#elif defined(CONFIG_M68328)
#error wrong architecture for the MC68x328 frame buffer device
#if defined(CONFIG_FB_68328_INVERT)
#define MC68X328FB_MONO_VISUAL FB_VISUAL_MONO01
#define MC68X328FB_MONO_VISUAL FB_VISUAL_MONO10
static u_long videomemory;
static u_long videomemorysize;
static struct fb_info fb_info;
static u32 mc68x328fb_pseudo_palette[16];
static struct fb_var_screeninfo mc68x328fb_default __initdata = ;
static struct fb_fix_screeninfo mc68x328fb_fix __initdata = ;
int mc68x328fb_init(void);
int mc68x328fb_setup(char *);
static int mc68x328fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int mc68x328fb_set_par(struct fb_info *info);
static int mc68x328fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static int mc68x328fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static int mc68x328fb_mmap(struct fb_info *info, struct vm_area_struct *vma);
static struct fb_ops mc68x328fb_ops = ;
static u_long get_line_length(int xres_virtual, int bpp)
static int mc68x328fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int mc68x328fb_set_par(struct fb_info *info)
static int mc68x328fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int mc68x328fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int mc68x328fb_mmap(struct fb_info *info, struct vm_area_struct *vma)
int __init mc68x328fb_setup(char *options)
int __init mc68x328fb_init(void)
module_init(mc68x328fb_init);
static void __exit mc68x328fb_cleanup(void)
module_exit(mc68x328fb_cleanup);
MODULE_LICENSE("GPL");
