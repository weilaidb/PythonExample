MODULE_AUTHOR("Sean Hefty");
MODULE_DESCRIPTION("InfiniBand CM");
MODULE_LICENSE("Dual BSD/GPL");
static void cm_add_one(struct ib_device *device);
static void cm_remove_one(struct ib_device *device);
static struct ib_client cm_client = ;
static struct ib_cm  cm;
enum ;
enum ;
static char const counter_group_names[CM_COUNTER_GROUPS]
[sizeof("cm_rx_duplicates")] = ;
struct cm_counter_group ;
struct cm_counter_attribute ;
#define CM_COUNTER_ATTR(_name, _index) \
struct cm_counter_attribute cm_##_name##_counter_attr =
static CM_COUNTER_ATTR(req, CM_REQ_COUNTER);
static CM_COUNTER_ATTR(mra, CM_MRA_COUNTER);
static CM_COUNTER_ATTR(rej, CM_REJ_COUNTER);
static CM_COUNTER_ATTR(rep, CM_REP_COUNTER);
static CM_COUNTER_ATTR(rtu, CM_RTU_COUNTER);
static CM_COUNTER_ATTR(dreq, CM_DREQ_COUNTER);
static CM_COUNTER_ATTR(drep, CM_DREP_COUNTER);
static CM_COUNTER_ATTR(sidr_req, CM_SIDR_REQ_COUNTER);
static CM_COUNTER_ATTR(sidr_rep, CM_SIDR_REP_COUNTER);
static CM_COUNTER_ATTR(lap, CM_LAP_COUNTER);
static CM_COUNTER_ATTR(apr, CM_APR_COUNTER);
static struct attribute *cm_counter_default_attrs[] = ;
struct cm_port ;
struct cm_device ;
struct cm_av ;
struct cm_work ;
struct cm_timewait_info ;
struct cm_id_private ;
static void cm_work_handler(struct work_struct *work);
static inline void cm_deref_id(struct cm_id_private *cm_id_priv)
static int cm_alloc_msg(struct cm_id_private *cm_id_priv,
struct ib_mad_send_buf **msg)
static int cm_alloc_response_msg(struct cm_port *port,
struct ib_mad_recv_wc *mad_recv_wc,
struct ib_mad_send_buf **msg)
static void cm_free_msg(struct ib_mad_send_buf *msg)
static void * cm_copy_private_data(const void *private_data,
u8 private_data_len)
static void cm_set_private_data(struct cm_id_private *cm_id_priv,
void *private_data, u8 private_data_len)
static void cm_init_av_for_response(struct cm_port *port, struct ib_wc *wc,
struct ib_grh *grh, struct cm_av *av)
static int cm_init_av_by_path(struct ib_sa_path_rec *path, struct cm_av *av)
static int cm_alloc_id(struct cm_id_private *cm_id_priv)
static void cm_free_id(__be32 local_id)
static struct cm_id_private * cm_get_id(__be32 local_id, __be32 remote_id)
static struct cm_id_private * cm_acquire_id(__be32 local_id, __be32 remote_id)
static void cm_mask_copy(u8 *dst, u8 *src, u8 *mask)
static int cm_compare_data(struct ib_cm_compare_data *src_data,
struct ib_cm_compare_data *dst_data)
static int cm_compare_private_data(u8 *private_data,
struct ib_cm_compare_data *dst_data)
static int be32_lt(__be32 a, __be32 b)
static int be32_gt(__be32 a, __be32 b)
static int be64_lt(__be64 a, __be64 b)
static int be64_gt(__be64 a, __be64 b)
static struct cm_id_private * cm_insert_listen(struct cm_id_private *cm_id_priv)
static struct cm_id_private * cm_find_listen(struct ib_device *device,
__be64 service_id,
u8 *private_data)
static struct cm_timewait_info * cm_insert_remote_id(struct cm_timewait_info
*timewait_info)
static struct cm_timewait_info * cm_find_remote_id(__be64 remote_ca_guid,
__be32 remote_id)
static struct cm_timewait_info * cm_insert_remote_qpn(struct cm_timewait_info
*timewait_info)
static struct cm_id_private * cm_insert_remote_sidr(struct cm_id_private
*cm_id_priv)
static void cm_reject_sidr_req(struct cm_id_private *cm_id_priv,
enum ib_cm_sidr_status status)
struct ib_cm_id *ib_create_cm_id(struct ib_device *device,
ib_cm_handler cm_handler,
void *context)
EXPORT_SYMBOL(ib_create_cm_id);
static struct cm_work * cm_dequeue_work(struct cm_id_private *cm_id_priv)
static void cm_free_work(struct cm_work *work)
static inline int cm_convert_to_ms(int iba_time)
static u8 cm_ack_timeout(u8 ca_ack_delay, u8 packet_life_time)
static void cm_cleanup_timewait(struct cm_timewait_info *timewait_info)
static struct cm_timewait_info * cm_create_timewait_info(__be32 local_id)
static void cm_enter_timewait(struct cm_id_private *cm_id_priv)
static void cm_reset_to_idle(struct cm_id_private *cm_id_priv)
static void cm_destroy_id(struct ib_cm_id *cm_id, int err)
void ib_destroy_cm_id(struct ib_cm_id *cm_id)
EXPORT_SYMBOL(ib_destroy_cm_id);
int ib_cm_listen(struct ib_cm_id *cm_id, __be64 service_id, __be64 service_mask,
struct ib_cm_compare_data *compare_data)
EXPORT_SYMBOL(ib_cm_listen);
static __be64 cm_form_tid(struct cm_id_private *cm_id_priv,
enum cm_msg_sequence msg_seq)
static void cm_format_mad_hdr(struct ib_mad_hdr *hdr,
__be16 attr_id, __be64 tid)
static void cm_format_req(struct cm_req_msg *req_msg,
struct cm_id_private *cm_id_priv,
struct ib_cm_req_param *param)
static int cm_validate_req_param(struct ib_cm_req_param *param)
int ib_send_cm_req(struct ib_cm_id *cm_id,
struct ib_cm_req_param *param)
EXPORT_SYMBOL(ib_send_cm_req);
static int cm_issue_rej(struct cm_port *port,
struct ib_mad_recv_wc *mad_recv_wc,
enum ib_cm_rej_reason reason,
enum cm_msg_response msg_rejected,
void *ari, u8 ari_length)
static inline int cm_is_active_peer(__be64 local_ca_guid, __be64 remote_ca_guid,
__be32 local_qpn, __be32 remote_qpn)
static void cm_format_paths_from_req(struct cm_req_msg *req_msg,
struct ib_sa_path_rec *primary_path,
struct ib_sa_path_rec *alt_path)
static void cm_format_req_event(struct cm_work *work,
struct cm_id_private *cm_id_priv,
struct ib_cm_id *listen_id)
static void cm_process_work(struct cm_id_private *cm_id_priv,
struct cm_work *work)
static void cm_format_mra(struct cm_mra_msg *mra_msg,
struct cm_id_private *cm_id_priv,
enum cm_msg_response msg_mraed, u8 service_timeout,
const void *private_data, u8 private_data_len)
static void cm_format_rej(struct cm_rej_msg *rej_msg,
struct cm_id_private *cm_id_priv,
enum ib_cm_rej_reason reason,
void *ari,
u8 ari_length,
const void *private_data,
u8 private_data_len)
static void cm_dup_req_handler(struct cm_work *work,
struct cm_id_private *cm_id_priv)
static struct cm_id_private * cm_match_req(struct cm_work *work,
struct cm_id_private *cm_id_priv)
static void cm_process_routed_req(struct cm_req_msg *req_msg, struct ib_wc *wc)
static int cm_req_handler(struct cm_work *work)
static void cm_format_rep(struct cm_rep_msg *rep_msg,
struct cm_id_private *cm_id_priv,
struct ib_cm_rep_param *param)
int ib_send_cm_rep(struct ib_cm_id *cm_id,
struct ib_cm_rep_param *param)
EXPORT_SYMBOL(ib_send_cm_rep);
static void cm_format_rtu(struct cm_rtu_msg *rtu_msg,
struct cm_id_private *cm_id_priv,
const void *private_data,
u8 private_data_len)
int ib_send_cm_rtu(struct ib_cm_id *cm_id,
const void *private_data,
u8 private_data_len)
EXPORT_SYMBOL(ib_send_cm_rtu);
static void cm_format_rep_event(struct cm_work *work)
static void cm_dup_rep_handler(struct cm_work *work)
static int cm_rep_handler(struct cm_work *work)
static int cm_establish_handler(struct cm_work *work)
static int cm_rtu_handler(struct cm_work *work)
static void cm_format_dreq(struct cm_dreq_msg *dreq_msg,
struct cm_id_private *cm_id_priv,
const void *private_data,
u8 private_data_len)
int ib_send_cm_dreq(struct ib_cm_id *cm_id,
const void *private_data,
u8 private_data_len)
EXPORT_SYMBOL(ib_send_cm_dreq);
static void cm_format_drep(struct cm_drep_msg *drep_msg,
struct cm_id_private *cm_id_priv,
const void *private_data,
u8 private_data_len)
int ib_send_cm_drep(struct ib_cm_id *cm_id,
const void *private_data,
u8 private_data_len)
EXPORT_SYMBOL(ib_send_cm_drep);
static int cm_issue_drep(struct cm_port *port,
struct ib_mad_recv_wc *mad_recv_wc)
static int cm_dreq_handler(struct cm_work *work)
static int cm_drep_handler(struct cm_work *work)
int ib_send_cm_rej(struct ib_cm_id *cm_id,
enum ib_cm_rej_reason reason,
void *ari,
u8 ari_length,
const void *private_data,
u8 private_data_len)
EXPORT_SYMBOL(ib_send_cm_rej);
static void cm_format_rej_event(struct cm_work *work)
static struct cm_id_private * cm_acquire_rejected_id(struct cm_rej_msg *rej_msg)
static int cm_rej_handler(struct cm_work *work)
int ib_send_cm_mra(struct ib_cm_id *cm_id,
u8 service_timeout,
const void *private_data,
u8 private_data_len)
EXPORT_SYMBOL(ib_send_cm_mra);
static struct cm_id_private * cm_acquire_mraed_id(struct cm_mra_msg *mra_msg)
static int cm_mra_handler(struct cm_work *work)
static void cm_format_lap(struct cm_lap_msg *lap_msg,
struct cm_id_private *cm_id_priv,
struct ib_sa_path_rec *alternate_path,
const void *private_data,
u8 private_data_len)
int ib_send_cm_lap(struct ib_cm_id *cm_id,
struct ib_sa_path_rec *alternate_path,
const void *private_data,
u8 private_data_len)
EXPORT_SYMBOL(ib_send_cm_lap);
static void cm_format_path_from_lap(struct cm_id_private *cm_id_priv,
struct ib_sa_path_rec *path,
struct cm_lap_msg *lap_msg)
static int cm_lap_handler(struct cm_work *work)
static void cm_format_apr(struct cm_apr_msg *apr_msg,
struct cm_id_private *cm_id_priv,
enum ib_cm_apr_status status,
void *info,
u8 info_length,
const void *private_data,
u8 private_data_len)
int ib_send_cm_apr(struct ib_cm_id *cm_id,
enum ib_cm_apr_status status,
void *info,
u8 info_length,
const void *private_data,
u8 private_data_len)
EXPORT_SYMBOL(ib_send_cm_apr);
static int cm_apr_handler(struct cm_work *work)
static int cm_timewait_handler(struct cm_work *work)
static void cm_format_sidr_req(struct cm_sidr_req_msg *sidr_req_msg,
struct cm_id_private *cm_id_priv,
struct ib_cm_sidr_req_param *param)
int ib_send_cm_sidr_req(struct ib_cm_id *cm_id,
struct ib_cm_sidr_req_param *param)
EXPORT_SYMBOL(ib_send_cm_sidr_req);
static void cm_format_sidr_req_event(struct cm_work *work,
struct ib_cm_id *listen_id)
static int cm_sidr_req_handler(struct cm_work *work)
static void cm_format_sidr_rep(struct cm_sidr_rep_msg *sidr_rep_msg,
struct cm_id_private *cm_id_priv,
struct ib_cm_sidr_rep_param *param)
int ib_send_cm_sidr_rep(struct ib_cm_id *cm_id,
struct ib_cm_sidr_rep_param *param)
EXPORT_SYMBOL(ib_send_cm_sidr_rep);
static void cm_format_sidr_rep_event(struct cm_work *work)
static int cm_sidr_rep_handler(struct cm_work *work)
static void cm_process_send_error(struct ib_mad_send_buf *msg,
enum ib_wc_status wc_status)
static void cm_send_handler(struct ib_mad_agent *mad_agent,
struct ib_mad_send_wc *mad_send_wc)
static void cm_work_handler(struct work_struct *_work)
static int cm_establish(struct ib_cm_id *cm_id)
static int cm_migrate(struct ib_cm_id *cm_id)
int ib_cm_notify(struct ib_cm_id *cm_id, enum ib_event_type event)
EXPORT_SYMBOL(ib_cm_notify);
static void cm_recv_handler(struct ib_mad_agent *mad_agent,
struct ib_mad_recv_wc *mad_recv_wc)
static int cm_init_qp_init_attr(struct cm_id_private *cm_id_priv,
struct ib_qp_attr *qp_attr,
int *qp_attr_mask)
static int cm_init_qp_rtr_attr(struct cm_id_private *cm_id_priv,
struct ib_qp_attr *qp_attr,
int *qp_attr_mask)
static int cm_init_qp_rts_attr(struct cm_id_private *cm_id_priv,
struct ib_qp_attr *qp_attr,
int *qp_attr_mask)
int ib_cm_init_qp_attr(struct ib_cm_id *cm_id,
struct ib_qp_attr *qp_attr,
int *qp_attr_mask)
EXPORT_SYMBOL(ib_cm_init_qp_attr);
static void cm_get_ack_delay(struct cm_device *cm_dev)
static ssize_t cm_show_counter(struct kobject *obj, struct attribute *attr,
char *buf)
static const struct sysfs_ops cm_counter_ops = ;
static struct kobj_type cm_counter_obj_type = ;
static void cm_release_port_obj(struct kobject *obj)
static struct kobj_type cm_port_obj_type = ;
static char *cm_devnode(struct device *dev, mode_t *mode)
struct class cm_class = ;
EXPORT_SYMBOL(cm_class);
static int cm_create_port_fs(struct cm_port *port)
static void cm_remove_port_fs(struct cm_port *port)
static void cm_add_one(struct ib_device *ib_device)
static void cm_remove_one(struct ib_device *ib_device)
static int __init ib_cm_init(void)
static void __exit ib_cm_cleanup(void)
module_init(ib_cm_init);
module_exit(ib_cm_cleanup);
