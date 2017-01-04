struct xenfb_info ;
#define XENFB_DEFAULT_FB_LEN (XENFB_WIDTH * XENFB_HEIGHT * XENFB_DEPTH / 8)
enum ;
static int video[KPARAM_CNT] = ;
module_param_array(video, int, NULL, 0);
MODULE_PARM_DESC(video,
"Video memory size in MB, width, height in pixels (default 2,800,600)");
static void xenfb_make_preferred_console(void);
static int xenfb_remove(struct xenbus_device *);
static void xenfb_init_shared_page(struct xenfb_info *, struct fb_info *);
static int xenfb_connect_backend(struct xenbus_device *, struct xenfb_info *);
static void xenfb_disconnect_backend(struct xenfb_info *);
static void xenfb_send_event(struct xenfb_info *info,
union xenfb_out_event *event)
static void xenfb_do_update(struct xenfb_info *info,
int x, int y, int w, int h)
static void xenfb_do_resize(struct xenfb_info *info)
static int xenfb_queue_full(struct xenfb_info *info)
static void xenfb_handle_resize_dpy(struct xenfb_info *info)
static void xenfb_refresh(struct xenfb_info *info,
int x1, int y1, int w, int h)
static void xenfb_deferred_io(struct fb_info *fb_info,
struct list_head *pagelist)
static struct fb_deferred_io xenfb_defio = ;
static int xenfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static void xenfb_fillrect(struct fb_info *p, const struct fb_fillrect *rect)
static void xenfb_imageblit(struct fb_info *p, const struct fb_image *image)
static void xenfb_copyarea(struct fb_info *p, const struct fb_copyarea *area)
static ssize_t xenfb_write(struct fb_info *p, const char __user *buf,
size_t count, loff_t *ppos)
static int
xenfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int xenfb_set_par(struct fb_info *info)
static struct fb_ops xenfb_fb_ops = ;
static irqreturn_t xenfb_event_handler(int rq, void *dev_id)
static int __devinit xenfb_probe(struct xenbus_device *dev,
const struct xenbus_device_id *id)
static __devinit void
xenfb_make_preferred_console(void)
static int xenfb_resume(struct xenbus_device *dev)
static int xenfb_remove(struct xenbus_device *dev)
static unsigned long vmalloc_to_mfn(void *address)
static void xenfb_init_shared_page(struct xenfb_info *info,
struct fb_info *fb_info)
static int xenfb_connect_backend(struct xenbus_device *dev,
struct xenfb_info *info)
static void xenfb_disconnect_backend(struct xenfb_info *info)
static void xenfb_backend_changed(struct xenbus_device *dev,
enum xenbus_state backend_state)
static struct xenbus_device_id xenfb_ids[] = ;
static struct xenbus_driver xenfb_driver = ;
static int __init xenfb_init(void)
static void __exit xenfb_cleanup(void)
module_init(xenfb_init);
module_exit(xenfb_cleanup);
MODULE_DESCRIPTION("Xen virtual framebuffer device frontend");
MODULE_LICENSE("GPL");
MODULE_ALIAS("xen:vfb");
