#define CREATE_TRACE_POINTS
struct gfs2_glock_iter ;
typedef void (*glock_examiner) (struct gfs2_glock * gl);
static int __dump_glock(struct seq_file *seq, const struct gfs2_glock *gl);
#define GLOCK_BUG_ON(gl,x) do  while(0)
static void do_xmote(struct gfs2_glock *gl, struct gfs2_holder *gh, unsigned int target);
static struct dentry *gfs2_root;
static struct workqueue_struct *glock_workqueue;
struct workqueue_struct *gfs2_delete_workqueue;
static LIST_HEAD(lru_list);
static atomic_t lru_count = ATOMIC_INIT(0);
static DEFINE_SPINLOCK(lru_lock);
#define GFS2_GL_HASH_SHIFT      15
#define GFS2_GL_HASH_SIZE       (1 << GFS2_GL_HASH_SHIFT)
#define GFS2_GL_HASH_MASK       (GFS2_GL_HASH_SIZE - 1)
static struct hlist_bl_head gl_hash_table[GFS2_GL_HASH_SIZE];
static struct dentry *gfs2_root;
static unsigned int gl_hash(const struct gfs2_sbd *sdp,
const struct lm_lockname *name)
static inline void spin_lock_bucket(unsigned int hash)
static inline void spin_unlock_bucket(unsigned int hash)
static void gfs2_glock_dealloc(struct rcu_head *rcu)
void gfs2_glock_free(struct gfs2_glock *gl)
void gfs2_glock_hold(struct gfs2_glock *gl)
static int demote_ok(const struct gfs2_glock *gl)
void gfs2_glock_add_to_lru(struct gfs2_glock *gl)
static void gfs2_glock_remove_from_lru(struct gfs2_glock *gl)
static void __gfs2_glock_schedule_for_reclaim(struct gfs2_glock *gl)
void gfs2_glock_put_nolock(struct gfs2_glock *gl)
void gfs2_glock_put(struct gfs2_glock *gl)
static struct gfs2_glock *search_bucket(unsigned int hash,
const struct gfs2_sbd *sdp,
const struct lm_lockname *name)
static inline int may_grant(const struct gfs2_glock *gl, const struct gfs2_holder *gh)
static void gfs2_holder_wake(struct gfs2_holder *gh)
static inline void do_error(struct gfs2_glock *gl, const int ret)
static int do_promote(struct gfs2_glock *gl)
__releases(&gl->gl_spin)
__acquires(&gl->gl_spin)
static inline struct gfs2_holder *find_first_waiter(const struct gfs2_glock *gl)
static void state_change(struct gfs2_glock *gl, unsigned int new_state)
static void gfs2_demote_wake(struct gfs2_glock *gl)
static void finish_xmote(struct gfs2_glock *gl, unsigned int ret)
static void do_xmote(struct gfs2_glock *gl, struct gfs2_holder *gh, unsigned int target)
__releases(&gl->gl_spin)
__acquires(&gl->gl_spin)
static inline struct gfs2_holder *find_first_holder(const struct gfs2_glock *gl)
static void run_queue(struct gfs2_glock *gl, const int nonblock)
__releases(&gl->gl_spin)
__acquires(&gl->gl_spin)
static void delete_work_func(struct work_struct *work)
static void glock_work_func(struct work_struct *work)
int gfs2_glock_get(struct gfs2_sbd *sdp, u64 number,
const struct gfs2_glock_operations *glops, int create,
struct gfs2_glock **glp)
void gfs2_holder_init(struct gfs2_glock *gl, unsigned int state, unsigned flags,
struct gfs2_holder *gh)
void gfs2_holder_reinit(unsigned int state, unsigned flags, struct gfs2_holder *gh)
void gfs2_holder_uninit(struct gfs2_holder *gh)
static int gfs2_glock_holder_wait(void *word)
static int gfs2_glock_demote_wait(void *word)
static void wait_on_holder(struct gfs2_holder *gh)
static void wait_on_demote(struct gfs2_glock *gl)
static void handle_callback(struct gfs2_glock *gl, unsigned int state,
unsigned long delay)
int gfs2_glock_wait(struct gfs2_holder *gh)
void gfs2_print_dbg(struct seq_file *seq, const char *fmt, ...)
static inline void add_to_queue(struct gfs2_holder *gh)
__releases(&gl->gl_spin)
__acquires(&gl->gl_spin)
int gfs2_glock_nq(struct gfs2_holder *gh)
int gfs2_glock_poll(struct gfs2_holder *gh)
void gfs2_glock_dq(struct gfs2_holder *gh)
void gfs2_glock_dq_wait(struct gfs2_holder *gh)
void gfs2_glock_dq_uninit(struct gfs2_holder *gh)
int gfs2_glock_nq_num(struct gfs2_sbd *sdp, u64 number,
const struct gfs2_glock_operations *glops,
unsigned int state, int flags, struct gfs2_holder *gh)
static int glock_compare(const void *arg_a, const void *arg_b)
static int nq_m_sync(unsigned int num_gh, struct gfs2_holder *ghs,
struct gfs2_holder **p)
int gfs2_glock_nq_m(unsigned int num_gh, struct gfs2_holder *ghs)
void gfs2_glock_dq_m(unsigned int num_gh, struct gfs2_holder *ghs)
void gfs2_glock_dq_uninit_m(unsigned int num_gh, struct gfs2_holder *ghs)
void gfs2_glock_cb(struct gfs2_glock *gl, unsigned int state)
static int gfs2_should_freeze(const struct gfs2_glock *gl)
void gfs2_glock_complete(struct gfs2_glock *gl, int ret)
static int gfs2_shrink_glock_memory(struct shrinker *shrink,
struct shrink_control *sc)
static struct shrinker glock_shrinker = ;
static void examine_bucket(glock_examiner examiner, const struct gfs2_sbd *sdp,
unsigned int hash)
static void glock_hash_walk(glock_examiner examiner, const struct gfs2_sbd *sdp)
static void thaw_glock(struct gfs2_glock *gl)
static void clear_glock(struct gfs2_glock *gl)
void gfs2_glock_thaw(struct gfs2_sbd *sdp)
static int dump_glock(struct seq_file *seq, struct gfs2_glock *gl)
static void dump_glock_func(struct gfs2_glock *gl)
void gfs2_gl_hash_clear(struct gfs2_sbd *sdp)
void gfs2_glock_finish_truncate(struct gfs2_inode *ip)
static const char *state2str(unsigned state)
static const char *hflags2str(char *buf, unsigned flags, unsigned long iflags)
static int dump_holder(struct seq_file *seq, const struct gfs2_holder *gh)
static const char *gflags2str(char *buf, const struct gfs2_glock *gl)
static int __dump_glock(struct seq_file *seq, const struct gfs2_glock *gl)
int __init gfs2_glock_init(void)
void gfs2_glock_exit(void)
static inline struct gfs2_glock *glock_hash_chain(unsigned hash)
static inline struct gfs2_glock *glock_hash_next(struct gfs2_glock *gl)
static int gfs2_glock_iter_next(struct gfs2_glock_iter *gi)
static void *gfs2_glock_seq_start(struct seq_file *seq, loff_t *pos)
static void *gfs2_glock_seq_next(struct seq_file *seq, void *iter_ptr,
loff_t *pos)
static void gfs2_glock_seq_stop(struct seq_file *seq, void *iter_ptr)
static int gfs2_glock_seq_show(struct seq_file *seq, void *iter_ptr)
static const struct seq_operations gfs2_glock_seq_ops = ;
static int gfs2_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations gfs2_debug_fops = ;
int gfs2_create_debugfs_file(struct gfs2_sbd *sdp)
void gfs2_delete_debugfs_file(struct gfs2_sbd *sdp)
int gfs2_register_debugfs(void)
void gfs2_unregister_debugfs(void)
