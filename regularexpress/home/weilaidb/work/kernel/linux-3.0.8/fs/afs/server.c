static unsigned afs_server_timeout = 10;
static void afs_reap_server(struct work_struct *);
static struct rb_root afs_servers = RB_ROOT;
static DEFINE_RWLOCK(afs_servers_lock);
static LIST_HEAD(afs_server_graveyard);
static DEFINE_SPINLOCK(afs_server_graveyard_lock);
static DECLARE_DELAYED_WORK(afs_server_reaper, afs_reap_server);
static int afs_install_server(struct afs_server *server)
static struct afs_server *afs_alloc_server(struct afs_cell *cell,
const struct in_addr *addr)
struct afs_server *afs_lookup_server(struct afs_cell *cell,
const struct in_addr *addr)
struct afs_server *afs_find_server(const struct in_addr *_addr)
void afs_put_server(struct afs_server *server)
static void afs_destroy_server(struct afs_server *server)
static void afs_reap_server(struct work_struct *work)
void __exit afs_purge_servers(void)
