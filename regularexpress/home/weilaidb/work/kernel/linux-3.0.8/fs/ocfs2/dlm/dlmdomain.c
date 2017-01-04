#define MLOG_MASK_PREFIX (ML_DLM|ML_DLM_DOMAIN)
static inline void byte_set_bit(u8 nr, u8 map[])
static inline int byte_test_bit(u8 nr, u8 map[])
static inline void byte_copymap(u8 dmap[], unsigned long smap[],
unsigned int sz)
static void dlm_free_pagevec(void **vec, int pages)
static void **dlm_alloc_pagevec(int pages)
DEFINE_SPINLOCK(dlm_domain_lock);
LIST_HEAD(dlm_domains);
static DECLARE_WAIT_QUEUE_HEAD(dlm_domain_events);
static const struct dlm_protocol_version dlm_protocol = ;
#define DLM_DOMAIN_BACKOFF_MS 200
static int dlm_query_join_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
static int dlm_assert_joined_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
static int dlm_cancel_join_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
static int dlm_query_region_handler(struct o2net_msg *msg, u32 len,
void *data, void **ret_data);
static int dlm_exit_domain_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
static int dlm_protocol_compare(struct dlm_protocol_version *existing,
struct dlm_protocol_version *request);
static void dlm_unregister_domain_handlers(struct dlm_ctxt *dlm);
void __dlm_unhash_lockres(struct dlm_lock_resource *lockres)
void __dlm_insert_lockres(struct dlm_ctxt *dlm,
struct dlm_lock_resource *res)
struct dlm_lock_resource * __dlm_lookup_lockres_full(struct dlm_ctxt *dlm,
const char *name,
unsigned int len,
unsigned int hash)
struct dlm_lock_resource * __dlm_lookup_lockres(struct dlm_ctxt *dlm,
const char *name,
unsigned int len,
unsigned int hash)
struct dlm_lock_resource * dlm_lookup_lockres(struct dlm_ctxt *dlm,
const char *name,
unsigned int len)
static struct dlm_ctxt * __dlm_lookup_domain_full(const char *domain, int len)
static struct dlm_ctxt * __dlm_lookup_domain(const char *domain)
static int dlm_wait_on_domain_helper(const char *domain)
static void dlm_free_ctxt_mem(struct dlm_ctxt *dlm)
static void dlm_ctxt_release(struct kref *kref)
void dlm_put(struct dlm_ctxt *dlm)
static void __dlm_get(struct dlm_ctxt *dlm)
struct dlm_ctxt *dlm_grab(struct dlm_ctxt *dlm)
int dlm_domain_fully_joined(struct dlm_ctxt *dlm)
static void dlm_destroy_dlm_worker(struct dlm_ctxt *dlm)
static void dlm_complete_dlm_shutdown(struct dlm_ctxt *dlm)
static int dlm_migrate_all_locks(struct dlm_ctxt *dlm)
static int dlm_no_joining_node(struct dlm_ctxt *dlm)
static int dlm_begin_exit_domain_handler(struct o2net_msg *msg, u32 len,
void *data, void **ret_data)
static void dlm_mark_domain_leaving(struct dlm_ctxt *dlm)
static void __dlm_print_nodes(struct dlm_ctxt *dlm)
static int dlm_exit_domain_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static int dlm_send_one_domain_exit(struct dlm_ctxt *dlm, u32 msg_type,
unsigned int node)
static void dlm_begin_exit_domain(struct dlm_ctxt *dlm)
static void dlm_leave_domain(struct dlm_ctxt *dlm)
int dlm_joined(struct dlm_ctxt *dlm)
int dlm_shutting_down(struct dlm_ctxt *dlm)
void dlm_unregister_domain(struct dlm_ctxt *dlm)
EXPORT_SYMBOL_GPL(dlm_unregister_domain);
static int dlm_query_join_proto_check(char *proto_type, int node,
struct dlm_protocol_version *ours,
struct dlm_protocol_version *request)
static void dlm_query_join_packet_to_wire(struct dlm_query_join_packet *packet,
u32 *wire)
static void dlm_query_join_wire_to_packet(u32 wire,
struct dlm_query_join_packet *packet)
static int dlm_query_join_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static int dlm_assert_joined_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static int dlm_match_regions(struct dlm_ctxt *dlm,
struct dlm_query_region *qr,
char *local, int locallen)
static int dlm_send_regions(struct dlm_ctxt *dlm, unsigned long *node_map)
static int dlm_query_region_handler(struct o2net_msg *msg, u32 len,
void *data, void **ret_data)
static int dlm_match_nodes(struct dlm_ctxt *dlm, struct dlm_query_nodeinfo *qn)
static int dlm_send_nodeinfo(struct dlm_ctxt *dlm, unsigned long *node_map)
static int dlm_query_nodeinfo_handler(struct o2net_msg *msg, u32 len,
void *data, void **ret_data)
static int dlm_cancel_join_handler(struct o2net_msg *msg, u32 len, void *data,
void **ret_data)
static int dlm_send_one_join_cancel(struct dlm_ctxt *dlm,
unsigned int node)
static int dlm_send_join_cancels(struct dlm_ctxt *dlm,
unsigned long *node_map,
unsigned int map_size)
static int dlm_request_join(struct dlm_ctxt *dlm,
int node,
enum dlm_query_join_response_code *response)
static int dlm_send_one_join_assert(struct dlm_ctxt *dlm,
unsigned int node)
static void dlm_send_join_asserts(struct dlm_ctxt *dlm,
unsigned long *node_map)
struct domain_join_ctxt ;
static int dlm_should_restart_join(struct dlm_ctxt *dlm,
struct domain_join_ctxt *ctxt,
enum dlm_query_join_response_code response)
static int dlm_try_to_join_domain(struct dlm_ctxt *dlm)
static void dlm_unregister_domain_handlers(struct dlm_ctxt *dlm)
static int dlm_register_domain_handlers(struct dlm_ctxt *dlm)
static int dlm_join_domain(struct dlm_ctxt *dlm)
static struct dlm_ctxt *dlm_alloc_ctxt(const char *domain,
u32 key)
static int dlm_protocol_compare(struct dlm_protocol_version *existing,
struct dlm_protocol_version *request)
struct dlm_ctxt * dlm_register_domain(const char *domain,
u32 key,
struct dlm_protocol_version *fs_proto)
EXPORT_SYMBOL_GPL(dlm_register_domain);
static LIST_HEAD(dlm_join_handlers);
static void dlm_unregister_net_handlers(void)
static int dlm_register_net_handlers(void)
static DECLARE_RWSEM(dlm_callback_sem);
void dlm_fire_domain_eviction_callbacks(struct dlm_ctxt *dlm,
int node_num)
void dlm_setup_eviction_cb(struct dlm_eviction_cb *cb,
dlm_eviction_func *f,
void *data)
EXPORT_SYMBOL_GPL(dlm_setup_eviction_cb);
void dlm_register_eviction_cb(struct dlm_ctxt *dlm,
struct dlm_eviction_cb *cb)
EXPORT_SYMBOL_GPL(dlm_register_eviction_cb);
void dlm_unregister_eviction_cb(struct dlm_eviction_cb *cb)
EXPORT_SYMBOL_GPL(dlm_unregister_eviction_cb);
static int __init dlm_init(void)
static void __exit dlm_exit (void)
MODULE_AUTHOR("Oracle");
MODULE_LICENSE("GPL");
module_init(dlm_init);
module_exit(dlm_exit);
