struct backend_info ;
static struct kmem_cache *xen_blkif_cachep;
static void connect(struct backend_info *);
static int connect_ring(struct backend_info *);
static void backend_changed(struct xenbus_watch *, const char **,
unsigned int);
struct xenbus_device *xen_blkbk_xenbus(struct backend_info *be)
static int blkback_name(struct xen_blkif *blkif, char *buf)
static void xen_update_blkif_status(struct xen_blkif *blkif)
static struct xen_blkif *xen_blkif_alloc(domid_t domid)
static int map_frontend_page(struct xen_blkif *blkif, unsigned long shared_page)
static void unmap_frontend_page(struct xen_blkif *blkif)
static int xen_blkif_map(struct xen_blkif *blkif, unsigned long shared_page,
unsigned int evtchn)
static void xen_blkif_disconnect(struct xen_blkif *blkif)
void xen_blkif_free(struct xen_blkif *blkif)
int __init xen_blkif_interface_init(void)
#define VBD_SHOW(name, format, args...)					\
static ssize_t show_##name(struct device *_dev,			\
struct device_attribute *attr,	\
char *buf)				\
\
static DEVICE_ATTR(name, S_IRUGO, show_##name, NULL)
VBD_SHOW(oo_req,  "%d\n", be->blkif->st_oo_req);
VBD_SHOW(rd_req,  "%d\n", be->blkif->st_rd_req);
VBD_SHOW(wr_req,  "%d\n", be->blkif->st_wr_req);
VBD_SHOW(f_req,  "%d\n", be->blkif->st_f_req);
VBD_SHOW(rd_sect, "%d\n", be->blkif->st_rd_sect);
VBD_SHOW(wr_sect, "%d\n", be->blkif->st_wr_sect);
static struct attribute *xen_vbdstat_attrs[] = ;
static struct attribute_group xen_vbdstat_group = ;
VBD_SHOW(physical_device, "%x:%x\n", be->major, be->minor);
VBD_SHOW(mode, "%s\n", be->mode);
int xenvbd_sysfs_addif(struct xenbus_device *dev)
void xenvbd_sysfs_delif(struct xenbus_device *dev)
static void xen_vbd_free(struct xen_vbd *vbd)
static int xen_vbd_create(struct xen_blkif *blkif, blkif_vdev_t handle,
unsigned major, unsigned minor, int readonly,
int cdrom)
static int xen_blkbk_remove(struct xenbus_device *dev)
int xen_blkbk_flush_diskcache(struct xenbus_transaction xbt,
struct backend_info *be, int state)
static int xen_blkbk_probe(struct xenbus_device *dev,
const struct xenbus_device_id *id)
static void backend_changed(struct xenbus_watch *watch,
const char **vec, unsigned int len)
static void frontend_changed(struct xenbus_device *dev,
enum xenbus_state frontend_state)
static void connect(struct backend_info *be)
static int connect_ring(struct backend_info *be)
static const struct xenbus_device_id xen_blkbk_ids[] = ;
static struct xenbus_driver xen_blkbk = ;
int xen_blkif_xenbus_init(void)
