#define OMAP_VOUTLIB_H
extern void omap_vout_default_crop(struct v4l2_pix_format *pix,
struct v4l2_framebuffer *fbuf, struct v4l2_rect *crop);
extern int omap_vout_new_crop(struct v4l2_pix_format *pix,
struct v4l2_rect *crop, struct v4l2_window *win,
struct v4l2_framebuffer *fbuf,
const struct v4l2_rect *new_crop);
extern int omap_vout_try_window(struct v4l2_framebuffer *fbuf,
struct v4l2_window *new_win);
extern int omap_vout_new_window(struct v4l2_rect *crop,
struct v4l2_window *win, struct v4l2_framebuffer *fbuf,
struct v4l2_window *new_win);
extern void omap_vout_new_format(struct v4l2_pix_format *pix,
struct v4l2_framebuffer *fbuf, struct v4l2_rect *crop,
struct v4l2_window *win);
