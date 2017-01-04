typedef struct  BM_DESCRIPTOR_ENTRY;
#define LAST_DESCRIPTOR (1 << 31)
#define SYSTEM_TO_FRAME_BUFFER 0
static u32 rotation24bpp(u32 dx, u32 direction)
void aty_reset_engine(const struct atyfb_par *par)
static void reset_GTC_3D_engine(const struct atyfb_par *par)
void aty_init_engine(struct atyfb_par *par, struct fb_info *info)
static inline void draw_rect(s16 x, s16 y, u16 width, u16 height,
struct atyfb_par *par)
void atyfb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
void atyfb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
void atyfb_imageblit(struct fb_info *info, const struct fb_image *image)
