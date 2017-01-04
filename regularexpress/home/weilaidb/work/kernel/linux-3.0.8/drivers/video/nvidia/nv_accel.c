#define SKIPS  8
static const int NVCopyROP[16] = ;
static const int NVCopyROP_PM[16] = ;
static inline void nvidiafb_safe_mode(struct fb_info *info)
static inline void NVFlush(struct fb_info *info)
static inline void NVSync(struct fb_info *info)
static void NVDmaKickoff(struct nvidia_par *par)
static void NVDmaWait(struct fb_info *info, int size)
static void NVSetPattern(struct fb_info *info, u32 clr0, u32 clr1,
u32 pat0, u32 pat1)
static void NVSetRopSolid(struct fb_info *info, u32 rop, u32 planemask)
static void NVSetClippingRectangle(struct fb_info *info, int x1, int y1,
int x2, int y2)
void NVResetGraphics(struct fb_info *info)
int nvidiafb_sync(struct fb_info *info)
void nvidiafb_copyarea(struct fb_info *info, const struct fb_copyarea *region)
void nvidiafb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void nvidiafb_mono_color_expand(struct fb_info *info,
const struct fb_image *image)
void nvidiafb_imageblit(struct fb_info *info, const struct fb_image *image)
