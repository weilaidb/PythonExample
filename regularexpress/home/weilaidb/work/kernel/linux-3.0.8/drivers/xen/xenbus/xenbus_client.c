const char *xenbus_strstate(enum xenbus_state state)
EXPORT_SYMBOL_GPL(xenbus_strstate);
int xenbus_watch_path(struct xenbus_device *dev, const char *path,
struct xenbus_watch *watch,
void (*callback)(struct xenbus_watch *,
const char **, unsigned int))
EXPORT_SYMBOL_GPL(xenbus_watch_path);
int xenbus_watch_pathfmt(struct xenbus_device *dev,
struct xenbus_watch *watch,
void (*callback)(struct xenbus_watch *,
const char **, unsigned int),
const char *pathfmt, ...)
EXPORT_SYMBOL_GPL(xenbus_watch_pathfmt);
static void xenbus_switch_fatal(struct xenbus_device *, int, int,
const char *, ...);
static int
__xenbus_switch_state(struct xenbus_device *dev,
enum xenbus_state state, int depth)
int xenbus_switch_state(struct xenbus_device *dev, enum xenbus_state state)
EXPORT_SYMBOL_GPL(xenbus_switch_state);
int xenbus_frontend_closed(struct xenbus_device *dev)
EXPORT_SYMBOL_GPL(xenbus_frontend_closed);
static char *error_path(struct xenbus_device *dev)
static void xenbus_va_dev_error(struct xenbus_device *dev, int err,
const char *fmt, va_list ap)
void xenbus_dev_error(struct xenbus_device *dev, int err, const char *fmt, ...)
EXPORT_SYMBOL_GPL(xenbus_dev_error);
void xenbus_dev_fatal(struct xenbus_device *dev, int err, const char *fmt, ...)
EXPORT_SYMBOL_GPL(xenbus_dev_fatal);
static void xenbus_switch_fatal(struct xenbus_device *dev, int depth, int err,
const char *fmt, ...)
int xenbus_grant_ring(struct xenbus_device *dev, unsigned long ring_mfn)
EXPORT_SYMBOL_GPL(xenbus_grant_ring);
int xenbus_alloc_evtchn(struct xenbus_device *dev, int *port)
EXPORT_SYMBOL_GPL(xenbus_alloc_evtchn);
int xenbus_bind_evtchn(struct xenbus_device *dev, int remote_port, int *port)
EXPORT_SYMBOL_GPL(xenbus_bind_evtchn);
int xenbus_free_evtchn(struct xenbus_device *dev, int port)
EXPORT_SYMBOL_GPL(xenbus_free_evtchn);
int xenbus_map_ring_valloc(struct xenbus_device *dev, int gnt_ref, void **vaddr)
EXPORT_SYMBOL_GPL(xenbus_map_ring_valloc);
int xenbus_map_ring(struct xenbus_device *dev, int gnt_ref,
grant_handle_t *handle, void *vaddr)
EXPORT_SYMBOL_GPL(xenbus_map_ring);
int xenbus_unmap_ring_vfree(struct xenbus_device *dev, void *vaddr)
EXPORT_SYMBOL_GPL(xenbus_unmap_ring_vfree);
int xenbus_unmap_ring(struct xenbus_device *dev,
grant_handle_t handle, void *vaddr)
EXPORT_SYMBOL_GPL(xenbus_unmap_ring);
enum xenbus_state xenbus_read_driver_state(const char *path)
EXPORT_SYMBOL_GPL(xenbus_read_driver_state);
