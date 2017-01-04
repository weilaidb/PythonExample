#define afs_breakring_space(server) \
CIRC_SPACE((server)->cb_break_head, (server)->cb_break_tail,	\
ARRAY_SIZE((server)->cb_break))
static struct workqueue_struct *afs_callback_update_worker;
void afs_init_callback_state(struct afs_server *server)
void afs_broken_callback_work(struct work_struct *work)
static void afs_break_callback(struct afs_server *server,
struct afs_vnode *vnode)
static void afs_break_one_callback(struct afs_server *server,
struct afs_fid *fid)
void afs_break_callbacks(struct afs_server *server, size_t count,
struct afs_callback callbacks[])
static void afs_do_give_up_callback(struct afs_server *server,
struct afs_vnode *vnode)
void afs_discard_callback_on_delete(struct afs_vnode *vnode)
void afs_give_up_callback(struct afs_vnode *vnode)
void afs_dispatch_give_up_callbacks(struct work_struct *work)
void afs_flush_callback_breaks(struct afs_server *server)
int __init afs_callback_update_init(void)
void afs_callback_update_kill(void)
