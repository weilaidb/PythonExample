static void radeon_fixup_offset(struct radeonfb_info *rinfo)
static void radeonfb_prim_fillrect(struct radeonfb_info *rinfo,
const struct fb_fillrect *region)
void radeonfb_fillrect(struct fb_info *info, const struct fb_fillrect *region)
static void radeonfb_prim_copyarea(struct radeonfb_info *rinfo,
const struct fb_copyarea *area)
void radeonfb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
void radeonfb_imageblit(struct fb_info *info, const struct fb_image *image)
int radeonfb_sync(struct fb_info *info)
void radeonfb_engine_reset(struct radeonfb_info *rinfo)
void radeonfb_engine_init (struct radeonfb_info *rinfo)
