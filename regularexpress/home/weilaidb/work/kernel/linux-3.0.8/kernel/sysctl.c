#if defined(CONFIG_PROVE_LOCKING) || defined(CONFIG_LOCK_STAT)
#if defined(CONFIG_SYSCTL)
extern int sysctl_overcommit_memory;
extern int sysctl_overcommit_ratio;
extern int max_threads;
extern int core_uses_pid;
extern int suid_dumpable;
extern char core_pattern[];
extern unsigned int core_pipe_limit;
extern int pid_max;
extern int min_free_kbytes;
extern int pid_max_min, pid_max_max;
extern int sysctl_drop_caches;
extern int percpu_pagelist_fraction;
extern int compat_log;
extern int latencytop_enabled;
extern int sysctl_nr_open_min, sysctl_nr_open_max;
extern int sysctl_nr_trim_pages;
extern int blk_iopoll_enabled;
static int sixty = 60;
static int neg_one = -1;
static int zero;
static int __maybe_unused one = 1;
static int __maybe_unused two = 2;
static int __maybe_unused three = 3;
static unsigned long one_ul = 1;
static int one_hundred = 100;
static int ten_thousand = 10000;
static unsigned long dirty_bytes_min = 2 * PAGE_SIZE;
static int maxolduid = 65535;
static int minolduid;
static int min_percpu_pagelist_fract = 8;
static int ngroups_max = NGROUPS_MAX;
extern int sysctl_tsb_ratio;
extern int pwrsw_enabled;
extern int unaligned_enabled;
extern int sysctl_ieee_emulation_warnings;
extern int sysctl_userprocess_debug;
extern int spin_retry;
extern int no_unaligned_warning;
extern int unaligned_dump_stack;
static int proc_do_cad_pid(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos);
static int proc_taint(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos);
static int proc_dmesg_restrict(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos);
static int __sysrq_enabled = SYSRQ_DEFAULT_ENABLE;
static int sysrq_sysctl_handler(ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static struct ctl_table root_table[];
static struct ctl_table_root sysctl_table_root;
static struct ctl_table_header root_table_header = ;
static struct ctl_table_root sysctl_table_root = ;
static struct ctl_table kern_table[];
static struct ctl_table vm_table[];
static struct ctl_table fs_table[];
static struct ctl_table debug_table[];
static struct ctl_table dev_table[];
extern struct ctl_table random_table[];
extern struct ctl_table epoll_table[];
int sysctl_legacy_va_layout;
static struct ctl_table root_table[] = ;
static int min_sched_granularity_ns = 100000;
static int max_sched_granularity_ns = NSEC_PER_SEC;
static int min_wakeup_granularity_ns;
static int max_wakeup_granularity_ns = NSEC_PER_SEC;
static int min_sched_tunable_scaling = SCHED_TUNABLESCALING_NONE;
static int max_sched_tunable_scaling = SCHED_TUNABLESCALING_END-1;
static int min_extfrag_threshold;
static int max_extfrag_threshold = 1000;
static struct ctl_table kern_table[] = ;
static struct ctl_table vm_table[] = ;
#if defined(CONFIG_BINFMT_MISC) || defined(CONFIG_BINFMT_MISC_MODULE)
static struct ctl_table binfmt_misc_table[] = ;
static struct ctl_table fs_table[] = ;
static struct ctl_table debug_table[] = ;
static struct ctl_table dev_table[] = ;
static DEFINE_SPINLOCK(sysctl_lock);
static int use_table(struct ctl_table_header *p)
static void unuse_table(struct ctl_table_header *p)
static void start_unregistering(struct ctl_table_header *p)
void sysctl_head_get(struct ctl_table_header *head)
static void free_head(struct rcu_head *rcu)
void sysctl_head_put(struct ctl_table_header *head)
struct ctl_table_header *sysctl_head_grab(struct ctl_table_header *head)
void sysctl_head_finish(struct ctl_table_header *head)
static struct ctl_table_set *
lookup_header_set(struct ctl_table_root *root, struct nsproxy *namespaces)
static struct list_head *
lookup_header_list(struct ctl_table_root *root, struct nsproxy *namespaces)
struct ctl_table_header *__sysctl_head_next(struct nsproxy *namespaces,
struct ctl_table_header *prev)
struct ctl_table_header *sysctl_head_next(struct ctl_table_header *prev)
void register_sysctl_root(struct ctl_table_root *root)
static int test_perm(int mode, int op)
int sysctl_perm(struct ctl_table_root *root, struct ctl_table *table, int op)
static void sysctl_set_parent(struct ctl_table *parent, struct ctl_table *table)
static __init int sysctl_init(void)
core_initcall(sysctl_init);
static struct ctl_table *is_branch_in(struct ctl_table *branch,
struct ctl_table *table)
static void try_attach(struct ctl_table_header *p, struct ctl_table_header *q)
struct ctl_table_header *__register_sysctl_paths(
struct ctl_table_root *root,
struct nsproxy *namespaces,
const struct ctl_path *path, struct ctl_table *table)
struct ctl_table_header *register_sysctl_paths(const struct ctl_path *path,
struct ctl_table *table)
struct ctl_table_header *register_sysctl_table(struct ctl_table *table)
void unregister_sysctl_table(struct ctl_table_header * header)
int sysctl_is_seen(struct ctl_table_header *p)
void setup_sysctl_set(struct ctl_table_set *p,
struct ctl_table_set *parent,
int (*is_seen)(struct ctl_table_set *))
struct ctl_table_header *register_sysctl_table(struct ctl_table * table)
struct ctl_table_header *register_sysctl_paths(const struct ctl_path *path,
struct ctl_table *table)
void unregister_sysctl_table(struct ctl_table_header * table)
void setup_sysctl_set(struct ctl_table_set *p,
struct ctl_table_set *parent,
int (*is_seen)(struct ctl_table_set *))
void sysctl_head_put(struct ctl_table_header *head)
static int _proc_do_string(void* data, int maxlen, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
int proc_dostring(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static size_t proc_skip_spaces(char **buf)
static void proc_skip_char(char **buf, size_t *size, const char v)
#define TMPBUFLEN 22
static int proc_get_long(char **buf, size_t *size,
unsigned long *val, bool *neg,
const char *perm_tr, unsigned perm_tr_len, char *tr)
static int proc_put_long(void __user **buf, size_t *size, unsigned long val,
bool neg)
#undef TMPBUFLEN
static int proc_put_char(void __user **buf, size_t *size, char c)
static int do_proc_dointvec_conv(bool *negp, unsigned long *lvalp,
int *valp,
int write, void *data)
static const char proc_wspace_sep[] = ;
static int __do_proc_dointvec(void *tbl_data, struct ctl_table *table,
int write, void __user *buffer,
size_t *lenp, loff_t *ppos,
int (*conv)(bool *negp, unsigned long *lvalp, int *valp,
int write, void *data),
void *data)
static int do_proc_dointvec(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos,
int (*conv)(bool *negp, unsigned long *lvalp, int *valp,
int write, void *data),
void *data)
int proc_dointvec(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int proc_taint(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int proc_dmesg_restrict(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
struct do_proc_dointvec_minmax_conv_param ;
static int do_proc_dointvec_minmax_conv(bool *negp, unsigned long *lvalp,
int *valp,
int write, void *data)
int proc_dointvec_minmax(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int __do_proc_doulongvec_minmax(void *data, struct ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos,
unsigned long convmul,
unsigned long convdiv)
static int do_proc_doulongvec_minmax(struct ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos,
unsigned long convmul,
unsigned long convdiv)
int proc_doulongvec_minmax(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static int do_proc_dointvec_jiffies_conv(bool *negp, unsigned long *lvalp,
int *valp,
int write, void *data)
static int do_proc_dointvec_userhz_jiffies_conv(bool *negp, unsigned long *lvalp,
int *valp,
int write, void *data)
static int do_proc_dointvec_ms_jiffies_conv(bool *negp, unsigned long *lvalp,
int *valp,
int write, void *data)
int proc_dointvec_jiffies(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_dointvec_userhz_jiffies(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_dointvec_ms_jiffies(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int proc_do_cad_pid(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_do_large_bitmap(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_dostring(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_dointvec(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_dointvec_minmax(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_dointvec_jiffies(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_dointvec_userhz_jiffies(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_dointvec_ms_jiffies(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_doulongvec_minmax(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
EXPORT_SYMBOL(proc_dointvec);
EXPORT_SYMBOL(proc_dointvec_jiffies);
EXPORT_SYMBOL(proc_dointvec_minmax);
EXPORT_SYMBOL(proc_dointvec_userhz_jiffies);
EXPORT_SYMBOL(proc_dointvec_ms_jiffies);
EXPORT_SYMBOL(proc_dostring);
EXPORT_SYMBOL(proc_doulongvec_minmax);
EXPORT_SYMBOL(proc_doulongvec_ms_jiffies_minmax);
EXPORT_SYMBOL(register_sysctl_table);
EXPORT_SYMBOL(register_sysctl_paths);
EXPORT_SYMBOL(unregister_sysctl_table);
