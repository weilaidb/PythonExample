#define MODULE_NAME     "omapfb"
#define OMAPFB_PLANE_XRES_MIN		8
#define OMAPFB_PLANE_YRES_MIN		8
static char *def_mode;
static char *def_vram;
static int def_vrfb;
static int def_rotate;
static int def_mirror;
unsigned int omapfb_debug;
module_param_named(debug, omapfb_debug, bool, 0644);
static unsigned int omapfb_test_pattern;
module_param_named(test, omapfb_test_pattern, bool, 0644);
static int omapfb_fb_init(struct omapfb2_device *fbdev, struct fb_info *fbi);
static int omapfb_get_recommended_bpp(struct omapfb2_device *fbdev,
struct omap_dss_device *dssdev);
static void draw_pixel(struct fb_info *fbi, int x, int y, unsigned color)
static void fill_fb(struct fb_info *fbi)
static unsigned omapfb_get_vrfb_offset(const struct omapfb_info *ofbi, int rot)
static u32 omapfb_get_region_rot_paddr(const struct omapfb_info *ofbi, int rot)
static u32 omapfb_get_region_paddr(const struct omapfb_info *ofbi)
static void __iomem *omapfb_get_region_vaddr(const struct omapfb_info *ofbi)
static struct omapfb_colormode omapfb_colormodes[] = ;
static bool cmp_var_to_colormode(struct fb_var_screeninfo *var,
struct omapfb_colormode *color)
static void assign_colormode_to_var(struct fb_var_screeninfo *var,
struct omapfb_colormode *color)
static int fb_mode_to_dss_mode(struct fb_var_screeninfo *var,
enum omap_color_mode *mode)
static int check_fb_res_bounds(struct fb_var_screeninfo *var)
static void shrink_height(unsigned long max_frame_size,
struct fb_var_screeninfo *var)
static void shrink_width(unsigned long max_frame_size,
struct fb_var_screeninfo *var)
static int check_vrfb_fb_size(unsigned long region_size,
const struct fb_var_screeninfo *var)
static int check_fb_size(const struct omapfb_info *ofbi,
struct fb_var_screeninfo *var)
static int setup_vrfb_rotation(struct fb_info *fbi)
int dss_mode_to_fb_mode(enum omap_color_mode dssmode,
struct fb_var_screeninfo *var)
void set_fb_fix(struct fb_info *fbi)
int check_fb_var(struct fb_info *fbi, struct fb_var_screeninfo *var)
static int omapfb_open(struct fb_info *fbi, int user)
static int omapfb_release(struct fb_info *fbi, int user)
static unsigned calc_rotation_offset_dma(const struct fb_var_screeninfo *var,
const struct fb_fix_screeninfo *fix, int rotation)
static unsigned calc_rotation_offset_vrfb(const struct fb_var_screeninfo *var,
const struct fb_fix_screeninfo *fix, int rotation)
static void omapfb_calc_addr(const struct omapfb_info *ofbi,
const struct fb_var_screeninfo *var,
const struct fb_fix_screeninfo *fix,
int rotation, u32 *paddr, void __iomem **vaddr)
int omapfb_setup_overlay(struct fb_info *fbi, struct omap_overlay *ovl,
u16 posx, u16 posy, u16 outw, u16 outh)
int omapfb_apply_changes(struct fb_info *fbi, int init)
static int omapfb_check_var(struct fb_var_screeninfo *var, struct fb_info *fbi)
static int omapfb_set_par(struct fb_info *fbi)
static int omapfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *fbi)
static void mmap_user_open(struct vm_area_struct *vma)
static void mmap_user_close(struct vm_area_struct *vma)
static struct vm_operations_struct mmap_user_ops = ;
static int omapfb_mmap(struct fb_info *fbi, struct vm_area_struct *vma)
static int _setcolreg(struct fb_info *fbi, u_int regno, u_int red, u_int green,
u_int blue, u_int transp, int update_hw_pal)
static int omapfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int omapfb_setcmap(struct fb_cmap *cmap, struct fb_info *info)
static int omapfb_blank(int blank, struct fb_info *fbi)
static struct fb_ops omapfb_ops = ;
static void omapfb_free_fbmem(struct fb_info *fbi)
static void clear_fb_info(struct fb_info *fbi)
static int omapfb_free_all_fbmem(struct omapfb2_device *fbdev)
static int omapfb_alloc_fbmem(struct fb_info *fbi, unsigned long size,
unsigned long paddr)
static int omapfb_alloc_fbmem_display(struct fb_info *fbi, unsigned long size,
unsigned long paddr)
static enum omap_color_mode fb_format_to_dss_mode(enum omapfb_color_format fmt)
static int omapfb_parse_vram_param(const char *param, int max_entries,
unsigned long *sizes, unsigned long *paddrs)
static int omapfb_allocate_all_fbs(struct omapfb2_device *fbdev)
int omapfb_realloc_fbmem(struct fb_info *fbi, unsigned long size, int type)
static int omapfb_fb_init(struct omapfb2_device *fbdev, struct fb_info *fbi)
static void fbinfo_cleanup(struct omapfb2_device *fbdev, struct fb_info *fbi)
static void omapfb_free_resources(struct omapfb2_device *fbdev)
static int omapfb_create_framebuffers(struct omapfb2_device *fbdev)
static int omapfb_mode_to_timings(const char *mode_str,
struct omap_video_timings *timings, u8 *bpp)
static int omapfb_set_def_mode(struct omapfb2_device *fbdev,
struct omap_dss_device *display, char *mode_str)
static int omapfb_get_recommended_bpp(struct omapfb2_device *fbdev,
struct omap_dss_device *dssdev)
static int omapfb_parse_def_modes(struct omapfb2_device *fbdev)
static int omapfb_init_display(struct omapfb2_device *fbdev,
struct omap_dss_device *dssdev)
static int omapfb_probe(struct platform_device *pdev)
static int omapfb_remove(struct platform_device *pdev)
static struct platform_driver omapfb_driver = ;
static int __init omapfb_init(void)
static void __exit omapfb_exit(void)
module_param_named(mode, def_mode, charp, 0);
module_param_named(vram, def_vram, charp, 0);
module_param_named(rotate, def_rotate, int, 0);
module_param_named(vrfb, def_vrfb, bool, 0);
module_param_named(mirror, def_mirror, bool, 0);
late_initcall(omapfb_init);
module_exit(omapfb_exit);
MODULE_AUTHOR("Tomi Valkeinen <tomi.valkeinen@nokia.com>");
MODULE_DESCRIPTION("OMAP2/3 Framebuffer");
MODULE_LICENSE("GPL v2");
