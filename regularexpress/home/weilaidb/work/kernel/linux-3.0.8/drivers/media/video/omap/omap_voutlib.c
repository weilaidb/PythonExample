MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("OMAP Video library");
MODULE_LICENSE("GPL");
void omap_vout_default_crop(struct v4l2_pix_format *pix,
struct v4l2_framebuffer *fbuf, struct v4l2_rect *crop)
EXPORT_SYMBOL_GPL(omap_vout_default_crop);
int omap_vout_try_window(struct v4l2_framebuffer *fbuf,
struct v4l2_window *new_win)
EXPORT_SYMBOL_GPL(omap_vout_try_window);
int omap_vout_new_window(struct v4l2_rect *crop,
struct v4l2_window *win, struct v4l2_framebuffer *fbuf,
struct v4l2_window *new_win)
EXPORT_SYMBOL_GPL(omap_vout_new_window);
int omap_vout_new_crop(struct v4l2_pix_format *pix,
struct v4l2_rect *crop, struct v4l2_window *win,
struct v4l2_framebuffer *fbuf, const struct v4l2_rect *new_crop)
EXPORT_SYMBOL_GPL(omap_vout_new_crop);
void omap_vout_new_format(struct v4l2_pix_format *pix,
struct v4l2_framebuffer *fbuf, struct v4l2_rect *crop,
struct v4l2_window *win)
EXPORT_SYMBOL_GPL(omap_vout_new_format);
