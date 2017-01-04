MODULE_AUTHOR("Roland Dreier");
MODULE_DESCRIPTION("InfiniBand subnet administration query support");
MODULE_LICENSE("Dual BSD/GPL");
struct ib_sa_sm_ah ;
struct ib_sa_port ;
struct ib_sa_device ;
struct ib_sa_query ;
struct ib_sa_service_query ;
struct ib_sa_path_query ;
struct ib_sa_mcmember_query ;
static void ib_sa_add_one(struct ib_device *device);
static void ib_sa_remove_one(struct ib_device *device);
static struct ib_client sa_client = ;
static DEFINE_SPINLOCK(idr_lock);
static DEFINE_IDR(query_idr);
static DEFINE_SPINLOCK(tid_lock);
static u32 tid;
#define PATH_REC_FIELD(field) \
.struct_offset_bytes = offsetof(struct ib_sa_path_rec, field),		\
.struct_size_bytes   = sizeof ((struct ib_sa_path_rec *) 0)->field,	\
.field_name          = "sa_path_rec:" #field
static const struct ib_field path_rec_table[] = ;
#define MCMEMBER_REC_FIELD(field) \
.struct_offset_bytes = offsetof(struct ib_sa_mcmember_rec, field),	\
.struct_size_bytes   = sizeof ((struct ib_sa_mcmember_rec *) 0)->field,	\
.field_name          = "sa_mcmember_rec:" #field
static const struct ib_field mcmember_rec_table[] = ;
#define SERVICE_REC_FIELD(field) \
.struct_offset_bytes = offsetof(struct ib_sa_service_rec, field),	\
.struct_size_bytes   = sizeof ((struct ib_sa_service_rec *) 0)->field,	\
.field_name          = "sa_service_rec:" #field
static const struct ib_field service_rec_table[] = ;
static void free_sm_ah(struct kref *kref)
static void update_sm_ah(struct work_struct *work)
static void ib_sa_event(struct ib_event_handler *handler, struct ib_event *event)
void ib_sa_register_client(struct ib_sa_client *client)
EXPORT_SYMBOL(ib_sa_register_client);
void ib_sa_unregister_client(struct ib_sa_client *client)
EXPORT_SYMBOL(ib_sa_unregister_client);
void ib_sa_cancel_query(int id, struct ib_sa_query *query)
EXPORT_SYMBOL(ib_sa_cancel_query);
static u8 get_src_path_mask(struct ib_device *device, u8 port_num)
int ib_init_ah_from_path(struct ib_device *device, u8 port_num,
struct ib_sa_path_rec *rec, struct ib_ah_attr *ah_attr)
EXPORT_SYMBOL(ib_init_ah_from_path);
static int alloc_mad(struct ib_sa_query *query, gfp_t gfp_mask)
static void free_mad(struct ib_sa_query *query)
static void init_mad(struct ib_sa_mad *mad, struct ib_mad_agent *agent)
static int send_mad(struct ib_sa_query *query, int timeout_ms, gfp_t gfp_mask)
void ib_sa_unpack_path(void *attribute, struct ib_sa_path_rec *rec)
EXPORT_SYMBOL(ib_sa_unpack_path);
static void ib_sa_path_rec_callback(struct ib_sa_query *sa_query,
int status,
struct ib_sa_mad *mad)
static void ib_sa_path_rec_release(struct ib_sa_query *sa_query)
int ib_sa_path_rec_get(struct ib_sa_client *client,
struct ib_device *device, u8 port_num,
struct ib_sa_path_rec *rec,
ib_sa_comp_mask comp_mask,
int timeout_ms, gfp_t gfp_mask,
void (*callback)(int status,
struct ib_sa_path_rec *resp,
void *context),
void *context,
struct ib_sa_query **sa_query)
EXPORT_SYMBOL(ib_sa_path_rec_get);
static void ib_sa_service_rec_callback(struct ib_sa_query *sa_query,
int status,
struct ib_sa_mad *mad)
static void ib_sa_service_rec_release(struct ib_sa_query *sa_query)
int ib_sa_service_rec_query(struct ib_sa_client *client,
struct ib_device *device, u8 port_num, u8 method,
struct ib_sa_service_rec *rec,
ib_sa_comp_mask comp_mask,
int timeout_ms, gfp_t gfp_mask,
void (*callback)(int status,
struct ib_sa_service_rec *resp,
void *context),
void *context,
struct ib_sa_query **sa_query)
EXPORT_SYMBOL(ib_sa_service_rec_query);
static void ib_sa_mcmember_rec_callback(struct ib_sa_query *sa_query,
int status,
struct ib_sa_mad *mad)
static void ib_sa_mcmember_rec_release(struct ib_sa_query *sa_query)
int ib_sa_mcmember_rec_query(struct ib_sa_client *client,
struct ib_device *device, u8 port_num,
u8 method,
struct ib_sa_mcmember_rec *rec,
ib_sa_comp_mask comp_mask,
int timeout_ms, gfp_t gfp_mask,
void (*callback)(int status,
struct ib_sa_mcmember_rec *resp,
void *context),
void *context,
struct ib_sa_query **sa_query)
static void send_handler(struct ib_mad_agent *agent,
struct ib_mad_send_wc *mad_send_wc)
static void recv_handler(struct ib_mad_agent *mad_agent,
struct ib_mad_recv_wc *mad_recv_wc)
static void ib_sa_add_one(struct ib_device *device)
static void ib_sa_remove_one(struct ib_device *device)
static int __init ib_sa_init(void)
static void __exit ib_sa_cleanup(void)
module_init(ib_sa_init);
module_exit(ib_sa_cleanup);
