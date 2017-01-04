#define __DRIVERS_VIDEO_OMAP2_OMAPFB_H__
#define DEBUG
extern unsigned int omapfb_debug;
#define DBG(format, ...) \
do  while (0)
#define DBG(format, ...)
#define FB2OFB(fb_info) ((struct omapfb_info *)(fb_info->par))
#define OMAPFB_MAX_OVL_PER_FB 3
struct omapfb2_mem_region ;
struct omapfb_info ;
struct omapfb2_device ;
struct omapfb_colormode ;
void set_fb_fix(struct fb_info *fbi);
int check_fb_var(struct fb_info *fbi, struct fb_var_screeninfo *var);
int omapfb_realloc_fbmem(struct fb_info *fbi, unsigned long size, int type);
int omapfb_apply_changes(struct fb_info *fbi, int init);
int omapfb_create_sysfs(struct omapfb2_device *fbdev);
void omapfb_remove_sysfs(struct omapfb2_device *fbdev);
int omapfb_ioctl(struct fb_info *fbi, unsigned int cmd, unsigned long arg);
int omapfb_update_window(struct fb_info *fbi,
u32 x, u32 y, u32 w, u32 h);
int dss_mode_to_fb_mode(enum omap_color_mode dssmode,
struct fb_var_screeninfo *var);
int omapfb_setup_overlay(struct fb_info *fbi, struct omap_overlay *ovl,
u16 posx, u16 posy, u16 outw, u16 outh);
static inline struct omap_dss_device *fb2display(struct fb_info *fbi)
static inline void omapfb_lock(struct omapfb2_device *fbdev)
static inline void omapfb_unlock(struct omapfb2_device *fbdev)
static inline int omapfb_overlay_enable(struct omap_overlay *ovl,
int enable)
static inline struct omapfb2_mem_region *
omapfb_get_mem_region(struct omapfb2_mem_region *rg)
static inline void omapfb_put_mem_region(struct omapfb2_mem_region *rg)
