static const u8 sisALUConv[] =
;
static const u8 sisPatALUConv[] =
;
static const int myrops[] = ;
static void
SiS300Sync(struct sis_video_info *ivideo)
static void
SiS300SetupForScreenToScreenCopy(struct sis_video_info *ivideo, int xdir, int ydir,
int rop, int trans_color)
static void
SiS300SubsequentScreenToScreenCopy(struct sis_video_info *ivideo, int src_x,
int src_y, int dst_x, int dst_y, int width, int height)
static void
SiS300SetupForSolidFill(struct sis_video_info *ivideo, u32 color, int rop)
static void
SiS300SubsequentSolidFillRect(struct sis_video_info *ivideo, int x, int y, int w, int h)
static void
SiS310Sync(struct sis_video_info *ivideo)
static void
SiS310SetupForScreenToScreenCopy(struct sis_video_info *ivideo, int rop, int trans_color)
static void
SiS310SubsequentScreenToScreenCopy(struct sis_video_info *ivideo, int src_x, int src_y,
int dst_x, int dst_y, int width, int height)
static void
SiS310SetupForSolidFill(struct sis_video_info *ivideo, u32 color, int rop)
static void
SiS310SubsequentSolidFillRect(struct sis_video_info *ivideo, int x, int y, int w, int h)
int sisfb_initaccel(struct sis_video_info *ivideo)
void sisfb_syncaccel(struct sis_video_info *ivideo)
int fbcon_sis_sync(struct fb_info *info)
void fbcon_sis_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
void fbcon_sis_copyarea(struct fb_info *info, const struct fb_copyarea *area)
