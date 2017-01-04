static struct kmem_cache *rds_iw_incoming_slab;
static struct kmem_cache *rds_iw_frag_slab;
static atomic_t	rds_iw_allocation = ATOMIC_INIT(0);
static void rds_iw_frag_drop_page(struct rds_page_frag *frag)
static void rds_iw_frag_free(struct rds_page_frag *frag)
static void rds_iw_recv_unmap_page(struct rds_iw_connection *ic,
struct rds_iw_recv_work *recv)
void rds_iw_recv_init_ring(struct rds_iw_connection *ic)
static void rds_iw_recv_clear_one(struct rds_iw_connection *ic,
struct rds_iw_recv_work *recv)
void rds_iw_recv_clear_ring(struct rds_iw_connection *ic)
static int rds_iw_recv_refill_one(struct rds_connection *conn,
struct rds_iw_recv_work *recv,
gfp_t kptr_gfp, gfp_t page_gfp)
int rds_iw_recv_refill(struct rds_connection *conn, gfp_t kptr_gfp,
gfp_t page_gfp, int prefill)
static void rds_iw_inc_purge(struct rds_incoming *inc)
void rds_iw_inc_free(struct rds_incoming *inc)
int rds_iw_inc_copy_to_user(struct rds_incoming *inc, struct iovec *first_iov,
size_t size)
void rds_iw_recv_init_ack(struct rds_iw_connection *ic)
static void rds_iw_set_ack(struct rds_iw_connection *ic, u64 seq,
int ack_required)
static u64 rds_iw_get_ack(struct rds_iw_connection *ic)
static void rds_iw_set_ack(struct rds_iw_connection *ic, u64 seq,
int ack_required)
static u64 rds_iw_get_ack(struct rds_iw_connection *ic)
static void rds_iw_send_ack(struct rds_iw_connection *ic, unsigned int adv_credits)
void rds_iw_attempt_ack(struct rds_iw_connection *ic)
void rds_iw_ack_send_complete(struct rds_iw_connection *ic)
u64 rds_iw_piggyb_ack(struct rds_iw_connection *ic)
static void rds_iw_cong_recv(struct rds_connection *conn,
struct rds_iw_incoming *iwinc)
struct rds_iw_ack_state ;
static void rds_iw_process_recv(struct rds_connection *conn,
struct rds_iw_recv_work *recv, u32 byte_len,
struct rds_iw_ack_state *state)
void rds_iw_recv_cq_comp_handler(struct ib_cq *cq, void *context)
static inline void rds_poll_cq(struct rds_iw_connection *ic,
struct rds_iw_ack_state *state)
void rds_iw_recv_tasklet_fn(unsigned long data)
int rds_iw_recv(struct rds_connection *conn)
int rds_iw_recv_init(void)
void rds_iw_recv_exit(void)
