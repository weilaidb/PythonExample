#define AUDIT_DEBUG 0
enum audit_state ;
struct audit_watch;
struct audit_tree;
struct audit_chunk;
struct audit_entry ;
extern int audit_enabled;
extern int audit_ever_enabled;
extern int audit_pid;
#define AUDIT_INODE_BUCKETS	32
extern struct list_head audit_inode_hash[AUDIT_INODE_BUCKETS];
static inline int audit_hash_ino(u32 ino)
extern int audit_match_class(int class, unsigned syscall);
extern int audit_comparator(const u32 left, const u32 op, const u32 right);
extern int audit_compare_dname_path(const char *dname, const char *path,
int *dirlen);
extern struct sk_buff *	    audit_make_reply(int pid, int seq, int type,
int done, int multi,
const void *payload, int size);
extern void		    audit_panic(const char *message);
struct audit_netlink_list ;
int audit_send_list(void *);
extern int selinux_audit_rule_update(void);
extern struct mutex audit_filter_mutex;
extern void audit_free_rule_rcu(struct rcu_head *);
extern struct list_head audit_filter_list[];
extern struct audit_entry *audit_dupe_rule(struct audit_krule *old);
extern void audit_put_watch(struct audit_watch *watch);
extern void audit_get_watch(struct audit_watch *watch);
extern int audit_to_watch(struct audit_krule *krule, char *path, int len, u32 op);
extern int audit_add_watch(struct audit_krule *krule, struct list_head **list);
extern void audit_remove_watch_rule(struct audit_krule *krule);
extern char *audit_watch_path(struct audit_watch *watch);
extern int audit_watch_compare(struct audit_watch *watch, unsigned long ino, dev_t dev);
#define audit_put_watch(w)
#define audit_get_watch(w)
#define audit_to_watch(k, p, l, o) (-EINVAL)
#define audit_add_watch(k, l) (-EINVAL)
#define audit_remove_watch_rule(k) BUG()
#define audit_watch_path(w) ""
#define audit_watch_compare(w, i, d) 0
extern struct audit_chunk *audit_tree_lookup(const struct inode *);
extern void audit_put_chunk(struct audit_chunk *);
extern int audit_tree_match(struct audit_chunk *, struct audit_tree *);
extern int audit_make_tree(struct audit_krule *, char *, u32);
extern int audit_add_tree_rule(struct audit_krule *);
extern int audit_remove_tree_rule(struct audit_krule *);
extern void audit_trim_trees(void);
extern int audit_tag_tree(char *old, char *new);
extern const char *audit_tree_path(struct audit_tree *);
extern void audit_put_tree(struct audit_tree *);
extern void audit_kill_trees(struct list_head *);
#define audit_remove_tree_rule(rule) BUG()
#define audit_add_tree_rule(rule) -EINVAL
#define audit_make_tree(rule, str, op) -EINVAL
#define audit_trim_trees() (void)0
#define audit_put_tree(tree) (void)0
#define audit_tag_tree(old, new) -EINVAL
#define audit_tree_path(rule) ""
#define audit_kill_trees(list) BUG()
extern char *audit_unpack_string(void **, size_t *, size_t);
extern pid_t audit_sig_pid;
extern uid_t audit_sig_uid;
extern u32 audit_sig_sid;
extern int __audit_signal_info(int sig, struct task_struct *t);
static inline int audit_signal_info(int sig, struct task_struct *t)
extern void audit_filter_inodes(struct task_struct *, struct audit_context *);
extern struct list_head *audit_killed_trees(void);
#define audit_signal_info(s,t) AUDIT_DISABLED
#define audit_filter_inodes(t,c) AUDIT_DISABLED
extern struct mutex audit_cmd_mutex;
