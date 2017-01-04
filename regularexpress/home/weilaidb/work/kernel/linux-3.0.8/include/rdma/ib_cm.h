#if !defined(IB_CM_H)
#define IB_CM_H
enum ib_cm_state ;
enum ib_cm_lap_state ;
enum ib_cm_event_type ;
enum ib_cm_data_size ;
struct ib_cm_id;
struct ib_cm_req_event_param ;
struct ib_cm_rep_event_param ;
enum ib_cm_rej_reason ;
struct ib_cm_rej_event_param ;
struct ib_cm_mra_event_param ;
struct ib_cm_lap_event_param ;
enum ib_cm_apr_status ;
struct ib_cm_apr_event_param ;
struct ib_cm_sidr_req_event_param ;
enum ib_cm_sidr_status ;
struct ib_cm_sidr_rep_event_param ;
struct ib_cm_event ;
typedef int (*ib_cm_handler)(struct ib_cm_id *cm_id,
struct ib_cm_event *event);
struct ib_cm_id ;
struct ib_cm_id *ib_create_cm_id(struct ib_device *device,
ib_cm_handler cm_handler,
void *context);
void ib_destroy_cm_id(struct ib_cm_id *cm_id);
#define IB_SERVICE_ID_AGN_MASK	cpu_to_be64(0xFF00000000000000ULL)
#define IB_CM_ASSIGN_SERVICE_ID	cpu_to_be64(0x0200000000000000ULL)
#define IB_CMA_SERVICE_ID	cpu_to_be64(0x0000000001000000ULL)
#define IB_CMA_SERVICE_ID_MASK	cpu_to_be64(0xFFFFFFFFFF000000ULL)
#define IB_SDP_SERVICE_ID	cpu_to_be64(0x0000000000010000ULL)
#define IB_SDP_SERVICE_ID_MASK	cpu_to_be64(0xFFFFFFFFFFFF0000ULL)
struct ib_cm_compare_data ;
int ib_cm_listen(struct ib_cm_id *cm_id, __be64 service_id, __be64 service_mask,
struct ib_cm_compare_data *compare_data);
struct ib_cm_req_param ;
int ib_send_cm_req(struct ib_cm_id *cm_id,
struct ib_cm_req_param *param);
struct ib_cm_rep_param ;
int ib_send_cm_rep(struct ib_cm_id *cm_id,
struct ib_cm_rep_param *param);
int ib_send_cm_rtu(struct ib_cm_id *cm_id,
const void *private_data,
u8 private_data_len);
int ib_send_cm_dreq(struct ib_cm_id *cm_id,
const void *private_data,
u8 private_data_len);
int ib_send_cm_drep(struct ib_cm_id *cm_id,
const void *private_data,
u8 private_data_len);
int ib_cm_notify(struct ib_cm_id *cm_id, enum ib_event_type event);
int ib_send_cm_rej(struct ib_cm_id *cm_id,
enum ib_cm_rej_reason reason,
void *ari,
u8 ari_length,
const void *private_data,
u8 private_data_len);
#define IB_CM_MRA_FLAG_DELAY 0x80
int ib_send_cm_mra(struct ib_cm_id *cm_id,
u8 service_timeout,
const void *private_data,
u8 private_data_len);
int ib_send_cm_lap(struct ib_cm_id *cm_id,
struct ib_sa_path_rec *alternate_path,
const void *private_data,
u8 private_data_len);
int ib_cm_init_qp_attr(struct ib_cm_id *cm_id,
struct ib_qp_attr *qp_attr,
int *qp_attr_mask);
int ib_send_cm_apr(struct ib_cm_id *cm_id,
enum ib_cm_apr_status status,
void *info,
u8 info_length,
const void *private_data,
u8 private_data_len);
struct ib_cm_sidr_req_param ;
int ib_send_cm_sidr_req(struct ib_cm_id *cm_id,
struct ib_cm_sidr_req_param *param);
struct ib_cm_sidr_rep_param ;
int ib_send_cm_sidr_rep(struct ib_cm_id *cm_id,
struct ib_cm_sidr_rep_param *param);
