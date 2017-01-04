#define RDS_CONNECTION_HASH_BITS 12
#define RDS_CONNECTION_HASH_ENTRIES (1 << RDS_CONNECTION_HASH_BITS)
#define RDS_CONNECTION_HASH_MASK (RDS_CONNECTION_HASH_ENTRIES - 1)
static DEFINE_SPINLOCK(rds_conn_lock);
static unsigned long rds_conn_count;
static struct hlist_head rds_conn_hash[RDS_CONNECTION_HASH_ENTRIES];
static struct kmem_cache *rds_conn_slab;
static struct hlist_head *rds_conn_bucket(__be32 laddr, __be32 faddr)
#define rds_conn_info_set(var, test, suffix) do  while (0)
static struct rds_connection *rds_conn_lookup(struct hlist_head *head,
__be32 laddr, __be32 faddr,
struct rds_transport *trans)
static void rds_conn_reset(struct rds_connection *conn)
static struct rds_connection *__rds_conn_create(__be32 laddr, __be32 faddr,
struct rds_transport *trans, gfp_t gfp,
int is_outgoing)
struct rds_connection *rds_conn_create(__be32 laddr, __be32 faddr,
struct rds_transport *trans, gfp_t gfp)
EXPORT_SYMBOL_GPL(rds_conn_create);
struct rds_connection *rds_conn_create_outgoing(__be32 laddr, __be32 faddr,
struct rds_transport *trans, gfp_t gfp)
EXPORT_SYMBOL_GPL(rds_conn_create_outgoing);
void rds_conn_shutdown(struct rds_connection *conn)
void rds_conn_destroy(struct rds_connection *conn)
EXPORT_SYMBOL_GPL(rds_conn_destroy);
static void rds_conn_message_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens,
int want_send)
static void rds_conn_message_info_send(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens)
static void rds_conn_message_info_retrans(struct socket *sock,
unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens)
void rds_for_each_conn_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens,
int (*visitor)(struct rds_connection *, void *),
size_t item_len)
EXPORT_SYMBOL_GPL(rds_for_each_conn_info);
static int rds_conn_info_visitor(struct rds_connection *conn,
void *buffer)
static void rds_conn_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens)
int rds_conn_init(void)
void rds_conn_exit(void)
void rds_conn_drop(struct rds_connection *conn)
EXPORT_SYMBOL_GPL(rds_conn_drop);
void rds_conn_connect_if_down(struct rds_connection *conn)
EXPORT_SYMBOL_GPL(rds_conn_connect_if_down);
void
__rds_conn_error(struct rds_connection *conn, const char *fmt, ...)
