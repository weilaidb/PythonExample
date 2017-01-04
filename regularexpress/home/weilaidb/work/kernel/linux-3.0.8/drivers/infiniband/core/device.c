MODULE_AUTHOR("Roland Dreier");
MODULE_DESCRIPTION("core kernel InfiniBand API");
MODULE_LICENSE("Dual BSD/GPL");
struct ib_client_data ;
struct workqueue_struct *ib_wq;
EXPORT_SYMBOL_GPL(ib_wq);
static LIST_HEAD(device_list);
static LIST_HEAD(client_list);
static DEFINE_MUTEX(device_mutex);
static int ib_device_check_mandatory(struct ib_device *device)
static struct ib_device *__ib_device_get_by_name(const char *name)
static int alloc_name(char *name)
static int start_port(struct ib_device *device)
static int end_port(struct ib_device *device)
struct ib_device *ib_alloc_device(size_t size)
EXPORT_SYMBOL(ib_alloc_device);
void ib_dealloc_device(struct ib_device *device)
EXPORT_SYMBOL(ib_dealloc_device);
static int add_client_context(struct ib_device *device, struct ib_client *client)
static int read_port_table_lengths(struct ib_device *device)
int ib_register_device(struct ib_device *device,
int (*port_callback)(struct ib_device *,
u8, struct kobject *))
EXPORT_SYMBOL(ib_register_device);
void ib_unregister_device(struct ib_device *device)
EXPORT_SYMBOL(ib_unregister_device);
int ib_register_client(struct ib_client *client)
EXPORT_SYMBOL(ib_register_client);
void ib_unregister_client(struct ib_client *client)
EXPORT_SYMBOL(ib_unregister_client);
void *ib_get_client_data(struct ib_device *device, struct ib_client *client)
EXPORT_SYMBOL(ib_get_client_data);
void ib_set_client_data(struct ib_device *device, struct ib_client *client,
void *data)
EXPORT_SYMBOL(ib_set_client_data);
int ib_register_event_handler  (struct ib_event_handler *event_handler)
EXPORT_SYMBOL(ib_register_event_handler);
int ib_unregister_event_handler(struct ib_event_handler *event_handler)
EXPORT_SYMBOL(ib_unregister_event_handler);
void ib_dispatch_event(struct ib_event *event)
EXPORT_SYMBOL(ib_dispatch_event);
int ib_query_device(struct ib_device *device,
struct ib_device_attr *device_attr)
EXPORT_SYMBOL(ib_query_device);
int ib_query_port(struct ib_device *device,
u8 port_num,
struct ib_port_attr *port_attr)
EXPORT_SYMBOL(ib_query_port);
int ib_query_gid(struct ib_device *device,
u8 port_num, int index, union ib_gid *gid)
EXPORT_SYMBOL(ib_query_gid);
int ib_query_pkey(struct ib_device *device,
u8 port_num, u16 index, u16 *pkey)
EXPORT_SYMBOL(ib_query_pkey);
int ib_modify_device(struct ib_device *device,
int device_modify_mask,
struct ib_device_modify *device_modify)
EXPORT_SYMBOL(ib_modify_device);
int ib_modify_port(struct ib_device *device,
u8 port_num, int port_modify_mask,
struct ib_port_modify *port_modify)
EXPORT_SYMBOL(ib_modify_port);
int ib_find_gid(struct ib_device *device, union ib_gid *gid,
u8 *port_num, u16 *index)
EXPORT_SYMBOL(ib_find_gid);
int ib_find_pkey(struct ib_device *device,
u8 port_num, u16 pkey, u16 *index)
EXPORT_SYMBOL(ib_find_pkey);
static int __init ib_core_init(void)
static void __exit ib_core_cleanup(void)
module_init(ib_core_init);
module_exit(ib_core_cleanup);
