#define IW_CM_H
struct iw_cm_id;
enum iw_cm_event_type ;
struct iw_cm_event ;
typedef int (*iw_cm_handler)(struct iw_cm_id *cm_id,
struct iw_cm_event *event);
typedef int (*iw_event_handler)(struct iw_cm_id *cm_id,
struct iw_cm_event *event);
struct iw_cm_id ;
struct iw_cm_conn_param ;
struct iw_cm_verbs ;
struct iw_cm_id *iw_create_cm_id(struct ib_device *device,
iw_cm_handler cm_handler, void *context);
void iw_destroy_cm_id(struct iw_cm_id *cm_id);
void iw_cm_unbind_qp(struct iw_cm_id *cm_id, struct ib_qp *qp);
struct ib_qp *iw_cm_get_qp(struct ib_device *device, int qpn);
int iw_cm_listen(struct iw_cm_id *cm_id, int backlog);
int iw_cm_accept(struct iw_cm_id *cm_id, struct iw_cm_conn_param *iw_param);
int iw_cm_reject(struct iw_cm_id *cm_id, const void *private_data,
u8 private_data_len);
int iw_cm_connect(struct iw_cm_id *cm_id, struct iw_cm_conn_param *iw_param);
int iw_cm_disconnect(struct iw_cm_id *cm_id, int abrupt);
int iw_cm_init_qp_attr(struct iw_cm_id *cm_id, struct ib_qp_attr *qp_attr,
int *qp_attr_mask);
