#define ACC_MKNOD 1
#define ACC_READ  2
#define ACC_WRITE 4
#define ACC_MASK (ACC_MKNOD | ACC_READ | ACC_WRITE)
#define DEV_BLOCK 1
#define DEV_CHAR  2
#define DEV_ALL   4
static DEFINE_MUTEX(devcgroup_mutex);
struct dev_whitelist_item ;
struct dev_cgroup ;
static inline struct dev_cgroup *css_to_devcgroup(struct cgroup_subsys_state *s)
static inline struct dev_cgroup *cgroup_to_devcgroup(struct cgroup *cgroup)
static inline struct dev_cgroup *task_devcgroup(struct task_struct *task)
struct cgroup_subsys devices_subsys;
static int devcgroup_can_attach(struct cgroup_subsys *ss,
struct cgroup *new_cgroup, struct task_struct *task)
static int dev_whitelist_copy(struct list_head *dest, struct list_head *orig)
static int dev_whitelist_add(struct dev_cgroup *dev_cgroup,
struct dev_whitelist_item *wh)
static void whitelist_item_free(struct rcu_head *rcu)
static void dev_whitelist_rm(struct dev_cgroup *dev_cgroup,
struct dev_whitelist_item *wh)
static struct cgroup_subsys_state *devcgroup_create(struct cgroup_subsys *ss,
struct cgroup *cgroup)
static void devcgroup_destroy(struct cgroup_subsys *ss,
struct cgroup *cgroup)
#define DEVCG_ALLOW 1
#define DEVCG_DENY 2
#define DEVCG_LIST 3
#define MAJMINLEN 13
#define ACCLEN 4
static void set_access(char *acc, short access)
static char type_to_char(short type)
static void set_majmin(char *str, unsigned m)
static int devcgroup_seq_read(struct cgroup *cgroup, struct cftype *cft,
struct seq_file *m)
static int may_access_whitelist(struct dev_cgroup *c,
struct dev_whitelist_item *refwh)
static int parent_has_perm(struct dev_cgroup *childcg,
struct dev_whitelist_item *wh)
static int devcgroup_update_access(struct dev_cgroup *devcgroup,
int filetype, const char *buffer)
static int devcgroup_access_write(struct cgroup *cgrp, struct cftype *cft,
const char *buffer)
static struct cftype dev_cgroup_files[] = ;
static int devcgroup_populate(struct cgroup_subsys *ss,
struct cgroup *cgroup)
struct cgroup_subsys devices_subsys = ;
int __devcgroup_inode_permission(struct inode *inode, int mask)
int devcgroup_inode_mknod(int mode, dev_t dev)
