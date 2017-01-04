#define P9_PORT			5640
#define P9_RDMA_SQ_DEPTH	32
#define P9_RDMA_RQ_DEPTH	32
#define P9_RDMA_SEND_SGE	4
#define P9_RDMA_RECV_SGE	4
#define P9_RDMA_IRD		0
#define P9_RDMA_ORD		0
#define P9_RDMA_TIMEOUT		30000
#define P9_RDMA_MAXSIZE		(4*4096)
struct p9_trans_rdma ;
struct p9_rdma_req;
struct p9_rdma_context ;
struct p9_rdma_opts ;
enum ;
static match_table_t tokens = ;
static int parse_opts(char *params, struct p9_rdma_opts *opts)
static int
p9_cm_event_handler(struct rdma_cm_id *id, struct rdma_cm_event *event)
static void
handle_recv(struct p9_client *client, struct p9_trans_rdma *rdma,
struct p9_rdma_context *c, enum ib_wc_status status, u32 byte_len)
static void
handle_send(struct p9_client *client, struct p9_trans_rdma *rdma,
struct p9_rdma_context *c, enum ib_wc_status status, u32 byte_len)
static void qp_event_handler(struct ib_event *event, void *context)
static void cq_comp_handler(struct ib_cq *cq, void *cq_context)
static void cq_event_handler(struct ib_event *e, void *v)
static void rdma_destroy_trans(struct p9_trans_rdma *rdma)
static int
post_recv(struct p9_client *client, struct p9_rdma_context *c)
static int rdma_request(struct p9_client *client, struct p9_req_t *req)
static void rdma_close(struct p9_client *client)
static struct p9_trans_rdma *alloc_rdma(struct p9_rdma_opts *opts)
static int rdma_cancel(struct p9_client *client, struct p9_req_t *req)
static int
rdma_create_trans(struct p9_client *client, const char *addr, char *args)
static struct p9_trans_module p9_rdma_trans = ;
static int __init p9_trans_rdma_init(void)
static void __exit p9_trans_rdma_exit(void)
module_init(p9_trans_rdma_init);
module_exit(p9_trans_rdma_exit);
MODULE_AUTHOR("Tom Tucker <tom@opengridcomputing.com>");
MODULE_DESCRIPTION("RDMA Transport for 9P");
MODULE_LICENSE("Dual BSD/GPL");
