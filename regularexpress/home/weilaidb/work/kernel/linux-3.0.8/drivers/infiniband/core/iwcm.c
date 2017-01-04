MODULE_AUTHOR("Tom Tucker");
MODULE_DESCRIPTION("iWARP CM");
MODULE_LICENSE("Dual BSD/GPL");
static struct workqueue_struct *iwcm_wq;
struct iwcm_work ;
static struct iwcm_work *get_work(struct iwcm_id_private *cm_id_priv)
static void put_work(struct iwcm_work *work)
static void dealloc_work_entries(struct iwcm_id_private *cm_id_priv)
static int alloc_work_entries(struct iwcm_id_private *cm_id_priv, int count)
static int copy_private_data(struct iw_cm_event *event)
static void free_cm_id(struct iwcm_id_private *cm_id_priv)
static int iwcm_deref_id(struct iwcm_id_private *cm_id_priv)
static void add_ref(struct iw_cm_id *cm_id)
static void rem_ref(struct iw_cm_id *cm_id)
static int cm_event_handler(struct iw_cm_id *cm_id, struct iw_cm_event *event);
struct iw_cm_id *iw_create_cm_id(struct ib_device *device,
iw_cm_handler cm_handler,
void *context)
EXPORT_SYMBOL(iw_create_cm_id);
static int iwcm_modify_qp_err(struct ib_qp *qp)
static int iwcm_modify_qp_sqd(struct ib_qp *qp)
int iw_cm_disconnect(struct iw_cm_id *cm_id, int abrupt)
EXPORT_SYMBOL(iw_cm_disconnect);
static void destroy_cm_id(struct iw_cm_id *cm_id)
void iw_destroy_cm_id(struct iw_cm_id *cm_id)
EXPORT_SYMBOL(iw_destroy_cm_id);
int iw_cm_listen(struct iw_cm_id *cm_id, int backlog)
EXPORT_SYMBOL(iw_cm_listen);
int iw_cm_reject(struct iw_cm_id *cm_id,
const void *private_data,
u8 private_data_len)
EXPORT_SYMBOL(iw_cm_reject);
int iw_cm_accept(struct iw_cm_id *cm_id,
struct iw_cm_conn_param *iw_param)
EXPORT_SYMBOL(iw_cm_accept);
int iw_cm_connect(struct iw_cm_id *cm_id, struct iw_cm_conn_param *iw_param)
EXPORT_SYMBOL(iw_cm_connect);
static void cm_conn_req_handler(struct iwcm_id_private *listen_id_priv,
struct iw_cm_event *iw_event)
static int cm_conn_est_handler(struct iwcm_id_private *cm_id_priv,
struct iw_cm_event *iw_event)
static int cm_conn_rep_handler(struct iwcm_id_private *cm_id_priv,
struct iw_cm_event *iw_event)
static void cm_disconnect_handler(struct iwcm_id_private *cm_id_priv,
struct iw_cm_event *iw_event)
static int cm_close_handler(struct iwcm_id_private *cm_id_priv,
struct iw_cm_event *iw_event)
static int process_event(struct iwcm_id_private *cm_id_priv,
struct iw_cm_event *iw_event)
static void cm_work_handler(struct work_struct *_work)
static int cm_event_handler(struct iw_cm_id *cm_id,
struct iw_cm_event *iw_event)
static int iwcm_init_qp_init_attr(struct iwcm_id_private *cm_id_priv,
struct ib_qp_attr *qp_attr,
int *qp_attr_mask)
static int iwcm_init_qp_rts_attr(struct iwcm_id_private *cm_id_priv,
struct ib_qp_attr *qp_attr,
int *qp_attr_mask)
int iw_cm_init_qp_attr(struct iw_cm_id *cm_id,
struct ib_qp_attr *qp_attr,
int *qp_attr_mask)
EXPORT_SYMBOL(iw_cm_init_qp_attr);
static int __init iw_cm_init(void)
static void __exit iw_cm_cleanup(void)
module_init(iw_cm_init);
module_exit(iw_cm_cleanup);
