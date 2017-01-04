#define VMW_DIRTY_DELAY (HZ / 30)
struct vmw_fb_par ;
static int vmw_fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int vmw_fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int vmw_fb_set_par(struct fb_info *info)
static int vmw_fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int vmw_fb_blank(int blank, struct fb_info *info)
static void vmw_fb_dirty_flush(struct vmw_fb_par *par)
static void vmw_fb_dirty_mark(struct vmw_fb_par *par,
unsigned x1, unsigned y1,
unsigned width, unsigned height)
static void vmw_deferred_io(struct fb_info *info,
struct list_head *pagelist)
;
struct fb_deferred_io vmw_defio = ;
static void vmw_fb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void vmw_fb_copyarea(struct fb_info *info, const struct fb_copyarea *region)
static void vmw_fb_imageblit(struct fb_info *info, const struct fb_image *image)
static struct fb_ops vmw_fb_ops = ;
static int vmw_fb_create_bo(struct vmw_private *vmw_priv,
size_t size, struct vmw_dma_buffer **out)
int vmw_fb_init(struct vmw_private *vmw_priv)
int vmw_fb_close(struct vmw_private *vmw_priv)
int vmw_dmabuf_from_vram(struct vmw_private *vmw_priv,
struct vmw_dma_buffer *vmw_bo)
int vmw_dmabuf_to_start_of_vram(struct vmw_private *vmw_priv,
struct vmw_dma_buffer *vmw_bo)
int vmw_fb_off(struct vmw_private *vmw_priv)
int vmw_fb_on(struct vmw_private *vmw_priv)
