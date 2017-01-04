#if !defined(RDMA_CM_H)
#define RDMA_CM_H
enum rdma_cm_event_type ;
enum rdma_port_space ;
struct rdma_addr ;
struct rdma_route ;
struct rdma_conn_param ;
struct rdma_ud_param ;
struct rdma_cm_event ;
enum rdma_cm_state ;
struct rdma_cm_id;
typedef int (*rdma_cm_event_handler)(struct rdma_cm_id *id,
struct rdma_cm_event *event);
struct rdma_cm_id ;
struct rdma_cm_id *rdma_create_id(rdma_cm_event_handler event_handler,
void *context, enum rdma_port_space ps,
enum ib_qp_type qp_type);
void rdma_destroy_id(struct rdma_cm_id *id);
int rdma_bind_addr(struct rdma_cm_id *id, struct sockaddr *addr);
int rdma_resolve_addr(struct rdma_cm_id *id, struct sockaddr *src_addr,
struct sockaddr *dst_addr, int timeout_ms);
int rdma_resolve_route(struct rdma_cm_id *id, int timeout_ms);
int rdma_create_qp(struct rdma_cm_id *id, struct ib_pd *pd,
struct ib_qp_init_attr *qp_init_attr);
void rdma_destroy_qp(struct rdma_cm_id *id);
int rdma_init_qp_attr(struct rdma_cm_id *id, struct ib_qp_attr *qp_attr,
int *qp_attr_mask);
int rdma_connect(struct rdma_cm_id *id, struct rdma_conn_param *conn_param);
int rdma_listen(struct rdma_cm_id *id, int backlog);
int rdma_accept(struct rdma_cm_id *id, struct rdma_conn_param *conn_param);
int rdma_notify(struct rdma_cm_id *id, enum ib_event_type event);
int rdma_reject(struct rdma_cm_id *id, const void *private_data,
u8 private_data_len);
int rdma_disconnect(struct rdma_cm_id *id);
int rdma_join_multicast(struct rdma_cm_id *id, struct sockaddr *addr,
void *context);
void rdma_leave_multicast(struct rdma_cm_id *id, struct sockaddr *addr);
void rdma_set_service_type(struct rdma_cm_id *id, int tos);
int rdma_set_reuseaddr(struct rdma_cm_id *id, int reuse);
