#define DBG(format, ...) pr_debug("VRFB: " format, ## __VA_ARGS__)
#define DBG(format, ...)
#define SMS_ROT_VIRT_BASE(context, rot) \
(((context >= 4) ? 0xD0000000 : 0x70000000) \
+ (0x4000000 * (context)) \
+ (0x1000000 * (rot)))
#define OMAP_VRFB_SIZE			(2048 * 2048 * 4)
#define VRFB_PAGE_WIDTH_EXP	5
#define VRFB_PAGE_HEIGHT_EXP	5
#define VRFB_PAGE_WIDTH		(1 << VRFB_PAGE_WIDTH_EXP)
#define VRFB_PAGE_HEIGHT	(1 << VRFB_PAGE_HEIGHT_EXP)
#define SMS_IMAGEHEIGHT_OFFSET	16
#define SMS_IMAGEWIDTH_OFFSET	0
#define SMS_PH_OFFSET		8
#define SMS_PW_OFFSET		4
#define SMS_PS_OFFSET		0
#define VRFB_NUM_CTXS 12
static unsigned long ctx_map;
static DEFINE_MUTEX(ctx_lock);
static struct  vrfb_hw_context[VRFB_NUM_CTXS];
static inline void restore_hw_context(int ctx)
static u32 get_image_width_roundup(u16 width, u8 bytespp)
static inline u32 get_extra_physical_size(u16 image_width_roundup, u8 bytespp)
void omap_vrfb_restore_context(void)
void omap_vrfb_adjust_size(u16 *width, u16 *height,
u8 bytespp)
EXPORT_SYMBOL(omap_vrfb_adjust_size);
u32 omap_vrfb_min_phys_size(u16 width, u16 height, u8 bytespp)
EXPORT_SYMBOL(omap_vrfb_min_phys_size);
u16 omap_vrfb_max_height(u32 phys_size, u16 width, u8 bytespp)
EXPORT_SYMBOL(omap_vrfb_max_height);
void omap_vrfb_setup(struct vrfb *vrfb, unsigned long paddr,
u16 width, u16 height,
unsigned bytespp, bool yuv_mode)
EXPORT_SYMBOL(omap_vrfb_setup);
int omap_vrfb_map_angle(struct vrfb *vrfb, u16 height, u8 rot)
EXPORT_SYMBOL(omap_vrfb_map_angle);
void omap_vrfb_release_ctx(struct vrfb *vrfb)
EXPORT_SYMBOL(omap_vrfb_release_ctx);
int omap_vrfb_request_ctx(struct vrfb *vrfb)
EXPORT_SYMBOL(omap_vrfb_request_ctx);
