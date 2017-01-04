static struct lock_class_key pd_lock_key;
static struct lock_class_key mr_lock_key;
static struct lock_class_key cq_lock_key;
static struct lock_class_key qp_lock_key;
static struct lock_class_key ah_lock_key;
static struct lock_class_key srq_lock_key;
#define INIT_UDATA(udata, ibuf, obuf, ilen, olen)			\
do  while (0)
static void init_uobj(struct ib_uobject *uobj, u64 user_handle,
struct ib_ucontext *context, struct lock_class_key *key)
static void release_uobj(struct kref *kref)
static void put_uobj(struct ib_uobject *uobj)
static void put_uobj_read(struct ib_uobject *uobj)
static void put_uobj_write(struct ib_uobject *uobj)
static int idr_add_uobj(struct idr *idr, struct ib_uobject *uobj)
void idr_remove_uobj(struct idr *idr, struct ib_uobject *uobj)
static struct ib_uobject *__idr_get_uobj(struct idr *idr, int id,
struct ib_ucontext *context)
static struct ib_uobject *idr_read_uobj(struct idr *idr, int id,
struct ib_ucontext *context, int nested)
static struct ib_uobject *idr_write_uobj(struct idr *idr, int id,
struct ib_ucontext *context)
static void *idr_read_obj(struct idr *idr, int id, struct ib_ucontext *context,
int nested)
static struct ib_pd *idr_read_pd(int pd_handle, struct ib_ucontext *context)
static void put_pd_read(struct ib_pd *pd)
static struct ib_cq *idr_read_cq(int cq_handle, struct ib_ucontext *context, int nested)
static void put_cq_read(struct ib_cq *cq)
static struct ib_ah *idr_read_ah(int ah_handle, struct ib_ucontext *context)
static void put_ah_read(struct ib_ah *ah)
static struct ib_qp *idr_read_qp(int qp_handle, struct ib_ucontext *context)
static void put_qp_read(struct ib_qp *qp)
static struct ib_srq *idr_read_srq(int srq_handle, struct ib_ucontext *context)
static void put_srq_read(struct ib_srq *srq)
ssize_t ib_uverbs_get_context(struct ib_uverbs_file *file,
const char __user *buf,
int in_len, int out_len)
ssize_t ib_uverbs_query_device(struct ib_uverbs_file *file,
const char __user *buf,
int in_len, int out_len)
ssize_t ib_uverbs_query_port(struct ib_uverbs_file *file,
const char __user *buf,
int in_len, int out_len)
ssize_t ib_uverbs_alloc_pd(struct ib_uverbs_file *file,
const char __user *buf,
int in_len, int out_len)
ssize_t ib_uverbs_dealloc_pd(struct ib_uverbs_file *file,
const char __user *buf,
int in_len, int out_len)
ssize_t ib_uverbs_reg_mr(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_dereg_mr(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_create_comp_channel(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_create_cq(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_resize_cq(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
static int copy_wc_to_user(void __user *dest, struct ib_wc *wc)
ssize_t ib_uverbs_poll_cq(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_req_notify_cq(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_destroy_cq(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_create_qp(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_query_qp(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_modify_qp(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_destroy_qp(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_post_send(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
static struct ib_recv_wr *ib_uverbs_unmarshall_recv(const char __user *buf,
int in_len,
u32 wr_count,
u32 sge_count,
u32 wqe_size)
ssize_t ib_uverbs_post_recv(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_post_srq_recv(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_create_ah(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_destroy_ah(struct ib_uverbs_file *file,
const char __user *buf, int in_len, int out_len)
ssize_t ib_uverbs_attach_mcast(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_detach_mcast(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_create_srq(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_modify_srq(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
ssize_t ib_uverbs_query_srq(struct ib_uverbs_file *file,
const char __user *buf,
int in_len, int out_len)
ssize_t ib_uverbs_destroy_srq(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len)
