struct ib_pkey_cache ;
struct ib_gid_cache ;
struct ib_update_work ;
static inline int start_port(struct ib_device *device)
static inline int end_port(struct ib_device *device)
int ib_get_cached_gid(struct ib_device *device,
u8                port_num,
int               index,
union ib_gid     *gid)
EXPORT_SYMBOL(ib_get_cached_gid);
int ib_find_cached_gid(struct ib_device *device,
union ib_gid	*gid,
u8               *port_num,
u16              *index)
EXPORT_SYMBOL(ib_find_cached_gid);
int ib_get_cached_pkey(struct ib_device *device,
u8                port_num,
int               index,
u16              *pkey)
EXPORT_SYMBOL(ib_get_cached_pkey);
int ib_find_cached_pkey(struct ib_device *device,
u8                port_num,
u16               pkey,
u16              *index)
EXPORT_SYMBOL(ib_find_cached_pkey);
int ib_get_cached_lmc(struct ib_device *device,
u8                port_num,
u8                *lmc)
EXPORT_SYMBOL(ib_get_cached_lmc);
static void ib_cache_update(struct ib_device *device,
u8                port)
static void ib_cache_task(struct work_struct *_work)
static void ib_cache_event(struct ib_event_handler *handler,
struct ib_event *event)
static void ib_cache_setup_one(struct ib_device *device)
static void ib_cache_cleanup_one(struct ib_device *device)
static struct ib_client cache_client = ;
int __init ib_cache_setup(void)
void __exit ib_cache_cleanup(void)
