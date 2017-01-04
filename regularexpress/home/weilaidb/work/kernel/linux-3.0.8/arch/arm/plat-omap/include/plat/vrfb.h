#define __OMAP_VRFB_H__
#define OMAP_VRFB_LINE_LEN 2048
struct vrfb ;
extern int omap_vrfb_request_ctx(struct vrfb *vrfb);
extern void omap_vrfb_release_ctx(struct vrfb *vrfb);
extern void omap_vrfb_adjust_size(u16 *width, u16 *height,
u8 bytespp);
extern u32 omap_vrfb_min_phys_size(u16 width, u16 height, u8 bytespp);
extern u16 omap_vrfb_max_height(u32 phys_size, u16 width, u8 bytespp);
extern void omap_vrfb_setup(struct vrfb *vrfb, unsigned long paddr,
u16 width, u16 height,
unsigned bytespp, bool yuv_mode);
extern int omap_vrfb_map_angle(struct vrfb *vrfb, u16 height, u8 rot);
extern void omap_vrfb_restore_context(void);
static inline int omap_vrfb_request_ctx(struct vrfb *vrfb)
static inline void omap_vrfb_release_ctx(struct vrfb *vrfb)
static inline void omap_vrfb_adjust_size(u16 *width, u16 *height,
u8 bytespp)
static inline u32 omap_vrfb_min_phys_size(u16 width, u16 height, u8 bytespp)
static inline u16 omap_vrfb_max_height(u32 phys_size, u16 width, u8 bytespp)
static inline void omap_vrfb_setup(struct vrfb *vrfb, unsigned long paddr,
u16 width, u16 height, unsigned bytespp, bool yuv_mode)
static inline int omap_vrfb_map_angle(struct vrfb *vrfb, u16 height, u8 rot)
static inline void omap_vrfb_restore_context(void)
