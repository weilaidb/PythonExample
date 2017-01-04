static u8 get_mem_idx(struct omapfb_info *ofbi)
static struct omapfb2_mem_region *get_mem_region(struct omapfb_info *ofbi,
u8 mem_idx)
static int omapfb_setup_plane(struct fb_info *fbi, struct omapfb_plane_info *pi)
static int omapfb_query_plane(struct fb_info *fbi, struct omapfb_plane_info *pi)
static int omapfb_setup_mem(struct fb_info *fbi, struct omapfb_mem_info *mi)
static int omapfb_query_mem(struct fb_info *fbi, struct omapfb_mem_info *mi)
static int omapfb_update_window_nolock(struct fb_info *fbi,
u32 x, u32 y, u32 w, u32 h)
int omapfb_update_window(struct fb_info *fbi,
u32 x, u32 y, u32 w, u32 h)
EXPORT_SYMBOL(omapfb_update_window);
static int omapfb_set_update_mode(struct fb_info *fbi,
enum omapfb_update_mode mode)
static int omapfb_get_update_mode(struct fb_info *fbi,
enum omapfb_update_mode *mode)
static struct omapfb_color_key omapfb_color_keys[2];
static int _omapfb_set_color_key(struct omap_overlay_manager *mgr,
struct omapfb_color_key *ck)
static int omapfb_set_color_key(struct fb_info *fbi,
struct omapfb_color_key *ck)
static int omapfb_get_color_key(struct fb_info *fbi,
struct omapfb_color_key *ck)
static int omapfb_memory_read(struct fb_info *fbi,
struct omapfb_memory_read *mr)
static int omapfb_get_ovl_colormode(struct omapfb2_device *fbdev,
struct omapfb_ovl_colormode *mode)
static int omapfb_wait_for_go(struct fb_info *fbi)
int omapfb_ioctl(struct fb_info *fbi, unsigned int cmd, unsigned long arg)
