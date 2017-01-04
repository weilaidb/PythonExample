#define UVERBS_H
struct ib_uverbs_device ;
struct ib_uverbs_event_file ;
struct ib_uverbs_file ;
struct ib_uverbs_event ;
struct ib_uverbs_mcast_entry ;
struct ib_uevent_object ;
struct ib_uqp_object ;
struct ib_ucq_object ;
extern spinlock_t ib_uverbs_idr_lock;
extern struct idr ib_uverbs_pd_idr;
extern struct idr ib_uverbs_mr_idr;
extern struct idr ib_uverbs_mw_idr;
extern struct idr ib_uverbs_ah_idr;
extern struct idr ib_uverbs_cq_idr;
extern struct idr ib_uverbs_qp_idr;
extern struct idr ib_uverbs_srq_idr;
void idr_remove_uobj(struct idr *idp, struct ib_uobject *uobj);
struct file *ib_uverbs_alloc_event_file(struct ib_uverbs_file *uverbs_file,
int is_async);
struct ib_uverbs_event_file *ib_uverbs_lookup_comp_file(int fd);
void ib_uverbs_release_ucq(struct ib_uverbs_file *file,
struct ib_uverbs_event_file *ev_file,
struct ib_ucq_object *uobj);
void ib_uverbs_release_uevent(struct ib_uverbs_file *file,
struct ib_uevent_object *uobj);
void ib_uverbs_comp_handler(struct ib_cq *cq, void *cq_context);
void ib_uverbs_cq_event_handler(struct ib_event *event, void *context_ptr);
void ib_uverbs_qp_event_handler(struct ib_event *event, void *context_ptr);
void ib_uverbs_srq_event_handler(struct ib_event *event, void *context_ptr);
void ib_uverbs_event_handler(struct ib_event_handler *handler,
struct ib_event *event);
#define IB_UVERBS_DECLARE_CMD(name)					\
ssize_t ib_uverbs_##name(struct ib_uverbs_file *file,		\
const char __user *buf, int in_len,	\
int out_len)
IB_UVERBS_DECLARE_CMD(get_context);
IB_UVERBS_DECLARE_CMD(query_device);
IB_UVERBS_DECLARE_CMD(query_port);
IB_UVERBS_DECLARE_CMD(alloc_pd);
IB_UVERBS_DECLARE_CMD(dealloc_pd);
IB_UVERBS_DECLARE_CMD(reg_mr);
IB_UVERBS_DECLARE_CMD(dereg_mr);
IB_UVERBS_DECLARE_CMD(create_comp_channel);
IB_UVERBS_DECLARE_CMD(create_cq);
IB_UVERBS_DECLARE_CMD(resize_cq);
IB_UVERBS_DECLARE_CMD(poll_cq);
IB_UVERBS_DECLARE_CMD(req_notify_cq);
IB_UVERBS_DECLARE_CMD(destroy_cq);
IB_UVERBS_DECLARE_CMD(create_qp);
IB_UVERBS_DECLARE_CMD(query_qp);
IB_UVERBS_DECLARE_CMD(modify_qp);
IB_UVERBS_DECLARE_CMD(destroy_qp);
IB_UVERBS_DECLARE_CMD(post_send);
IB_UVERBS_DECLARE_CMD(post_recv);
IB_UVERBS_DECLARE_CMD(post_srq_recv);
IB_UVERBS_DECLARE_CMD(create_ah);
IB_UVERBS_DECLARE_CMD(destroy_ah);
IB_UVERBS_DECLARE_CMD(attach_mcast);
IB_UVERBS_DECLARE_CMD(detach_mcast);
IB_UVERBS_DECLARE_CMD(create_srq);
IB_UVERBS_DECLARE_CMD(modify_srq);
IB_UVERBS_DECLARE_CMD(query_srq);
IB_UVERBS_DECLARE_CMD(destroy_srq);
