struct device_driver xp_dbg_name = ;
struct device xp_dbg_subname = ;
struct device *xp = &xp_dbg_subname;
short xp_max_npartitions;
EXPORT_SYMBOL_GPL(xp_max_npartitions);
short xp_partition_id;
EXPORT_SYMBOL_GPL(xp_partition_id);
u8 xp_region_size;
EXPORT_SYMBOL_GPL(xp_region_size);
unsigned long (*xp_pa) (void *addr);
EXPORT_SYMBOL_GPL(xp_pa);
unsigned long (*xp_socket_pa) (unsigned long gpa);
EXPORT_SYMBOL_GPL(xp_socket_pa);
enum xp_retval (*xp_remote_memcpy) (unsigned long dst_gpa,
const unsigned long src_gpa, size_t len);
EXPORT_SYMBOL_GPL(xp_remote_memcpy);
int (*xp_cpu_to_nasid) (int cpuid);
EXPORT_SYMBOL_GPL(xp_cpu_to_nasid);
enum xp_retval (*xp_expand_memprotect) (unsigned long phys_addr,
unsigned long size);
EXPORT_SYMBOL_GPL(xp_expand_memprotect);
enum xp_retval (*xp_restrict_memprotect) (unsigned long phys_addr,
unsigned long size);
EXPORT_SYMBOL_GPL(xp_restrict_memprotect);
struct xpc_registration xpc_registrations[XPC_MAX_NCHANNELS];
EXPORT_SYMBOL_GPL(xpc_registrations);
static enum xp_retval
xpc_notloaded(void)
struct xpc_interface xpc_interface = ;
EXPORT_SYMBOL_GPL(xpc_interface);
void
xpc_set_interface(void (*connect) (int),
void (*disconnect) (int),
enum xp_retval (*send) (short, int, u32, void *, u16),
enum xp_retval (*send_notify) (short, int, u32, void *, u16,
xpc_notify_func, void *),
void (*received) (short, int, void *),
enum xp_retval (*partid_to_nasids) (short, void *))
EXPORT_SYMBOL_GPL(xpc_set_interface);
void
xpc_clear_interface(void)
EXPORT_SYMBOL_GPL(xpc_clear_interface);
enum xp_retval
xpc_connect(int ch_number, xpc_channel_func func, void *key, u16 payload_size,
u16 nentries, u32 assigned_limit, u32 idle_limit)
EXPORT_SYMBOL_GPL(xpc_connect);
void
xpc_disconnect(int ch_number)
EXPORT_SYMBOL_GPL(xpc_disconnect);
int __init
xp_init(void)
module_init(xp_init);
void __exit
xp_exit(void)
module_exit(xp_exit);
MODULE_AUTHOR("Silicon Graphics, Inc.");
MODULE_DESCRIPTION("Cross Partition (XP) base");
MODULE_LICENSE("GPL");
