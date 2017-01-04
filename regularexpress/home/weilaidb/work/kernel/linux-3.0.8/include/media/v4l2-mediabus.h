#define V4L2_MEDIABUS_H
static inline void v4l2_fill_pix_format(struct v4l2_pix_format *pix_fmt,
const struct v4l2_mbus_framefmt *mbus_fmt)
static inline void v4l2_fill_mbus_format(struct v4l2_mbus_framefmt *mbus_fmt,
const struct v4l2_pix_format *pix_fmt,
enum v4l2_mbus_pixelcode code)
