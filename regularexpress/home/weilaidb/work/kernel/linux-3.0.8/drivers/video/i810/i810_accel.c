static u32 i810fb_rop[] = ;
#define PUT_RING(n)
extern void flush_cache(void);
static inline void i810_report_error(u8 __iomem *mmio)
static inline int wait_for_space(struct fb_info *info, u32 space)
static inline int wait_for_engine_idle(struct fb_info *info)
static inline u32 begin_iring(struct fb_info *info, u32 space)
static inline void end_iring(struct i810fb_par *par)
static inline void source_copy_blit(int dwidth, int dheight, int dpitch,
int xdir, int src, int dest, int rop,
int blit_bpp, struct fb_info *info)
static inline void color_blit(int width, int height, int pitch,  int dest,
int rop, int what, int blit_bpp,
struct fb_info *info)
static inline void mono_src_copy_imm_blit(int dwidth, int dheight, int dpitch,
int dsize, int blit_bpp, int rop,
int dest, const u32 *src, int bg,
int fg, struct fb_info *info)
static inline void load_front(int offset, struct fb_info *info)
static inline void i810fb_iring_enable(struct i810fb_par *par, u32 mode)
void i810fb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
void i810fb_copyarea(struct fb_info *info, const struct fb_copyarea *region)
void i810fb_imageblit(struct fb_info *info, const struct fb_image *image)
int i810fb_sync(struct fb_info *info)
void i810fb_load_front(u32 offset, struct fb_info *info)
void i810fb_init_ringbuffer(struct fb_info *info)
