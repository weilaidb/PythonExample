static struct kmem_cache *rds_ib_incoming_slab;
static struct kmem_cache *rds_ib_frag_slab;
static atomic_t	rds_ib_allocation = ATOMIC_INIT(0);
void rds_ib_recv_init_ring(struct rds_ib_connection *ic)
static void list_splice_entire_tail(struct list_head *from,
struct list_head *to)
static void rds_ib_cache_xfer_to_ready(struct rds_ib_refill_cache *cache)
static int rds_ib_recv_alloc_cache(struct rds_ib_refill_cache *cache)
int rds_ib_recv_alloc_caches(struct rds_ib_connection *ic)
static void rds_ib_cache_splice_all_lists(struct rds_ib_refill_cache *cache,
struct list_head *caller_list)
void rds_ib_recv_free_caches(struct rds_ib_connection *ic)
static void rds_ib_recv_cache_put(struct list_head *new_item,
struct rds_ib_refill_cache *cache);
static struct list_head *rds_ib_recv_cache_get(struct rds_ib_refill_cache *cache);
static void rds_ib_frag_free(struct rds_ib_connection *ic,
struct rds_page_frag *frag)
void rds_ib_inc_free(struct rds_incoming *inc)
static void rds_ib_recv_clear_one(struct rds_ib_connection *ic,
struct rds_ib_recv_work *recv)
void rds_ib_recv_clear_ring(struct rds_ib_connection *ic)
static struct rds_ib_incoming *rds_ib_refill_one_inc(struct rds_ib_connection *ic,
gfp_t slab_mask)
static struct rds_page_frag *rds_ib_refill_one_frag(struct rds_ib_connection *ic,
gfp_t slab_mask, gfp_t page_mask)
static int rds_ib_recv_refill_one(struct rds_connection *conn,
struct rds_ib_recv_work *recv, int prefill)
void rds_ib_recv_refill(struct rds_connection *conn, int prefill)
static void rds_ib_recv_cache_put(struct list_head *new_item,
struct rds_ib_refill_cache *cache)
static struct list_head *rds_ib_recv_cache_get(struct rds_ib_refill_cache *cache)
int rds_ib_inc_copy_to_user(struct rds_incoming *inc, struct iovec *first_iov,
size_t size)
void rds_ib_recv_init_ack(struct rds_ib_connection *ic)
static void rds_ib_set_ack(struct rds_ib_connection *ic, u64 seq,
int ack_required)
static u64 rds_ib_get_ack(struct rds_ib_connection *ic)
static void rds_ib_set_ack(struct rds_ib_connection *ic, u64 seq,
int ack_required)
static u64 rds_ib_get_ack(struct rds_ib_connection *ic)
static void rds_ib_send_ack(struct rds_ib_connection *ic, unsigned int adv_credits)
void rds_ib_attempt_ack(struct rds_ib_connection *ic)
void rds_ib_ack_send_complete(struct rds_ib_connection *ic)
u64 rds_ib_piggyb_ack(struct rds_ib_connection *ic)
static void rds_ib_cong_recv(struct rds_connection *conn,
struct rds_ib_incoming *ibinc)
struct rds_ib_ack_state ;
static void rds_ib_process_recv(struct rds_connection *conn,
struct rds_ib_recv_work *recv, u32 data_len,
struct rds_ib_ack_state *state)
void rds_ib_recv_cq_comp_handler(struct ib_cq *cq, void *context)
static inline void rds_poll_cq(struct rds_ib_connection *ic,
struct rds_ib_ack_state *state)
void rds_ib_recv_tasklet_fn(unsigned long data)
int rds_ib_recv(struct rds_connection *conn)
int rds_ib_recv_init(void)
void rds_ib_recv_exit(void)
