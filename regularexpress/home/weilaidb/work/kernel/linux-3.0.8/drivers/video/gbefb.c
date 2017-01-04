static struct sgi_gbe *gbe;
struct gbefb_par ;
#define GBE_BASE	0x16000000
#define GBE_BASE	0xd0000000
#define pgprot_fb(_prot) (((_prot) & (~_CACHE_MASK)) | _CACHE_UNCACHED_ACCELERATED)
#define pgprot_fb(_prot) (((_prot) & (~_CACHE_MASK)) | _CACHE_CACHABLE_NO_WA)
#define pgprot_fb(_prot) ((_prot) | _PAGE_PCD)
#if CONFIG_FB_GBE_MEM > 8
#error GBE Framebuffer cannot use more than 8MB of memory
#define TILE_SHIFT 16
#define TILE_SIZE (1 << TILE_SHIFT)
#define TILE_MASK (TILE_SIZE - 1)
static unsigned int gbe_mem_size = CONFIG_FB_GBE_MEM * 1024*1024;
static void *gbe_mem;
static dma_addr_t gbe_dma_addr;
static unsigned long gbe_mem_phys;
static struct  gbe_tiles;
static int gbe_revision;
static int ypan, ywrap;
static uint32_t pseudo_palette[16];
static uint32_t gbe_cmap[256];
static int gbe_turned_on;
static char *mode_option __devinitdata = NULL;
static struct fb_var_screeninfo default_var_CRT __devinitdata = ;
static struct fb_var_screeninfo default_var_LCD __devinitdata = ;
static struct fb_videomode default_mode_CRT __devinitdata = ;
static struct fb_videomode default_mode_LCD __devinitdata = ;
static struct fb_videomode *default_mode __devinitdata = &default_mode_CRT;
static struct fb_var_screeninfo *default_var __devinitdata = &default_var_CRT;
static int flat_panel_enabled = 0;
static void gbe_reset(void)
static void gbe_turn_off(void)
static void gbe_turn_on(void)
static void gbe_loadcmap(void)
static int gbefb_blank(int blank, struct fb_info *info)
static void gbefb_setup_flatpanel(struct gbe_timing_info *timing)
struct gbe_pll_info ;
static struct gbe_pll_info gbe_pll_table[2] = ;
static int compute_gbe_timing(struct fb_var_screeninfo *var,
struct gbe_timing_info *timing)
static void gbe_set_timing_info(struct gbe_timing_info *timing)
static int gbefb_set_par(struct fb_info *info)
static void gbefb_encode_fix(struct fb_fix_screeninfo *fix,
struct fb_var_screeninfo *var)
static int gbefb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int gbefb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int gbefb_mmap(struct fb_info *info,
struct vm_area_struct *vma)
static struct fb_ops gbefb_ops = ;
static ssize_t gbefb_show_memsize(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(size, S_IRUGO, gbefb_show_memsize, NULL);
static ssize_t gbefb_show_rev(struct device *device, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(revision, S_IRUGO, gbefb_show_rev, NULL);
static void __devexit gbefb_remove_sysfs(struct device *dev)
static void gbefb_create_sysfs(struct device *dev)
static int __devinit gbefb_setup(char *options)
static int __devinit gbefb_probe(struct platform_device *p_dev)
static int __devexit gbefb_remove(struct platform_device* p_dev)
static struct platform_driver gbefb_driver = ;
static struct platform_device *gbefb_device;
static int __init gbefb_init(void)
static void __exit gbefb_exit(void)
module_init(gbefb_init);
module_exit(gbefb_exit);
MODULE_LICENSE("GPL");
