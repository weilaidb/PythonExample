#define BIND_HASH_SIZE 1024
static struct hlist_head bind_hash_table[BIND_HASH_SIZE];
static DEFINE_SPINLOCK(rds_bind_lock);
static struct hlist_head *hash_to_bucket(__be32 addr, __be16 port)
static struct rds_sock *rds_bind_lookup(__be32 addr, __be16 port,
struct rds_sock *insert)
struct rds_sock *rds_find_bound(__be32 addr, __be16 port)
static int rds_add_bound(struct rds_sock *rs, __be32 addr, __be16 *port)
void rds_remove_bound(struct rds_sock *rs)
int rds_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
