static unsigned int rds_pages_in_vec(struct rds_iovec *vec)
static struct rds_mr *rds_mr_tree_walk(struct rb_root *root, u64 key,
struct rds_mr *insert)
static void rds_destroy_mr(struct rds_mr *mr)
void __rds_put_mr_final(struct rds_mr *mr)
void rds_rdma_drop_keys(struct rds_sock *rs)
static int rds_pin_pages(unsigned long user_addr, unsigned int nr_pages,
struct page **pages, int write)
static int __rds_rdma_map(struct rds_sock *rs, struct rds_get_mr_args *args,
u64 *cookie_ret, struct rds_mr **mr_ret)
int rds_get_mr(struct rds_sock *rs, char __user *optval, int optlen)
int rds_get_mr_for_dest(struct rds_sock *rs, char __user *optval, int optlen)
int rds_free_mr(struct rds_sock *rs, char __user *optval, int optlen)
void rds_rdma_unuse(struct rds_sock *rs, u32 r_key, int force)
void rds_rdma_free_op(struct rm_rdma_op *ro)
void rds_atomic_free_op(struct rm_atomic_op *ao)
static int rds_rdma_pages(struct rds_iovec iov[], int nr_iovecs)
int rds_rdma_extra_size(struct rds_rdma_args *args)
int rds_cmsg_rdma_args(struct rds_sock *rs, struct rds_message *rm,
struct cmsghdr *cmsg)
int rds_cmsg_rdma_dest(struct rds_sock *rs, struct rds_message *rm,
struct cmsghdr *cmsg)
int rds_cmsg_rdma_map(struct rds_sock *rs, struct rds_message *rm,
struct cmsghdr *cmsg)
int rds_cmsg_atomic(struct rds_sock *rs, struct rds_message *rm,
struct cmsghdr *cmsg)
