#define WM831X_UNIQUE_ID_LEN 16
static int wm831x_unique_id_read(struct wm831x *wm831x, char *id)
static ssize_t wm831x_unique_id_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(unique_id, 0444, wm831x_unique_id_show, NULL);
int wm831x_otp_init(struct wm831x *wm831x)
void wm831x_otp_exit(struct wm831x *wm831x)
