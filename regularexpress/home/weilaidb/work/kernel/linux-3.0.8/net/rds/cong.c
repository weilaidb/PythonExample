static atomic_t		rds_cong_generation = ATOMIC_INIT(0);
static LIST_HEAD(rds_cong_monitor);
static DEFINE_RWLOCK(rds_cong_monitor_lock);
static DEFINE_SPINLOCK(rds_cong_lock);
static struct rb_root rds_cong_tree = RB_ROOT;
static struct rds_cong_map *rds_cong_tree_walk(__be32 addr,
struct rds_cong_map *insert)
static struct rds_cong_map *rds_cong_from_addr(__be32 addr)
void rds_cong_add_conn(struct rds_connection *conn)
void rds_cong_remove_conn(struct rds_connection *conn)
int rds_cong_get_maps(struct rds_connection *conn)
void rds_cong_queue_updates(struct rds_cong_map *map)
void rds_cong_map_updated(struct rds_cong_map *map, uint64_t portmask)
EXPORT_SYMBOL_GPL(rds_cong_map_updated);
int rds_cong_updated_since(unsigned long *recent)
void rds_cong_set_bit(struct rds_cong_map *map, __be16 port)
void rds_cong_clear_bit(struct rds_cong_map *map, __be16 port)
static int rds_cong_test_bit(struct rds_cong_map *map, __be16 port)
void rds_cong_add_socket(struct rds_sock *rs)
void rds_cong_remove_socket(struct rds_sock *rs)
int rds_cong_wait(struct rds_cong_map *map, __be16 port, int nonblock,
struct rds_sock *rs)
void rds_cong_exit(void)
struct rds_message *rds_cong_update_alloc(struct rds_connection *conn)
