void sbusfb_fill_var(struct fb_var_screeninfo *var, struct device_node *dp,
int bpp)
EXPORT_SYMBOL(sbusfb_fill_var);
static unsigned long sbusfb_mmapsize(long size, unsigned long fbsize)
int sbusfb_mmap_helper(struct sbus_mmap_map *map,
unsigned long physbase,
unsigned long fbsize,
unsigned long iospace,
struct vm_area_struct *vma)
EXPORT_SYMBOL(sbusfb_mmap_helper);
int sbusfb_ioctl_helper(unsigned long cmd, unsigned long arg,
struct fb_info *info,
int type, int fb_depth, unsigned long fb_size)
EXPORT_SYMBOL(sbusfb_ioctl_helper);
static int fbiogetputcmap(struct fb_info *info, unsigned int cmd, unsigned long arg)
static int fbiogscursor(struct fb_info *info, unsigned long arg)
int sbusfb_compat_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(sbusfb_compat_ioctl);
