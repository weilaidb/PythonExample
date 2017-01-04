#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define BUGPRINT(format, args...) printk("kernel msg: ebtables bug: please "\
"report to author: "format, ## args)
#define SMP_ALIGN(x) (((x) + SMP_CACHE_BYTES-1) & ~(SMP_CACHE_BYTES-1))
#define COUNTER_OFFSET(n) (SMP_ALIGN(n * sizeof(struct ebt_counter)))
#define COUNTER_BASE(c, n, cpu) ((struct ebt_counter *)(((char *)c) + \
COUNTER_OFFSET(n) * cpu))
static DEFINE_MUTEX(ebt_mutex);
static void ebt_standard_compat_from_user(void *dst, const void *src)
static int ebt_standard_compat_to_user(void __user *dst, const void *src)
static struct xt_target ebt_standard_target = ;
static inline int
ebt_do_watcher(const struct ebt_entry_watcher *w, struct sk_buff *skb,
struct xt_action_param *par)
static inline int
ebt_do_match(struct ebt_entry_match *m, const struct sk_buff *skb,
struct xt_action_param *par)
static inline int
ebt_dev_check(const char *entry, const struct net_device *device)
#define FWINV2(bool,invflg) ((bool) ^ !!(e->invflags & invflg))
static inline int
ebt_basic_match(const struct ebt_entry *e, const struct sk_buff *skb,
const struct net_device *in, const struct net_device *out)
static inline __pure
struct ebt_entry *ebt_next_entry(const struct ebt_entry *entry)
unsigned int ebt_do_table (unsigned int hook, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
struct ebt_table *table)
static inline void *
find_inlist_lock_noload(struct list_head *head, const char *name, int *error,
struct mutex *mutex)
static void *
find_inlist_lock(struct list_head *head, const char *name, const char *prefix,
int *error, struct mutex *mutex)
static inline struct ebt_table *
find_table_lock(struct net *net, const char *name, int *error,
struct mutex *mutex)
static inline int
ebt_check_match(struct ebt_entry_match *m, struct xt_mtchk_param *par,
unsigned int *cnt)
static inline int
ebt_check_watcher(struct ebt_entry_watcher *w, struct xt_tgchk_param *par,
unsigned int *cnt)
static int ebt_verify_pointers(const struct ebt_replace *repl,
struct ebt_table_info *newinfo)
static inline int
ebt_check_entry_size_and_hooks(const struct ebt_entry *e,
const struct ebt_table_info *newinfo,
unsigned int *n, unsigned int *cnt,
unsigned int *totalcnt, unsigned int *udc_cnt)
struct ebt_cl_stack
;
static inline int
ebt_get_udc_positions(struct ebt_entry *e, struct ebt_table_info *newinfo,
unsigned int *n, struct ebt_cl_stack *udc)
static inline int
ebt_cleanup_match(struct ebt_entry_match *m, struct net *net, unsigned int *i)
static inline int
ebt_cleanup_watcher(struct ebt_entry_watcher *w, struct net *net, unsigned int *i)
static inline int
ebt_cleanup_entry(struct ebt_entry *e, struct net *net, unsigned int *cnt)
static inline int
ebt_check_entry(struct ebt_entry *e, struct net *net,
const struct ebt_table_info *newinfo,
const char *name, unsigned int *cnt,
struct ebt_cl_stack *cl_s, unsigned int udc_cnt)
static int check_chainloops(const struct ebt_entries *chain, struct ebt_cl_stack *cl_s,
unsigned int udc_cnt, unsigned int hooknr, char *base)
static int translate_table(struct net *net, const char *name,
struct ebt_table_info *newinfo)
static void get_counters(const struct ebt_counter *oldcounters,
struct ebt_counter *counters, unsigned int nentries)
static int do_replace_finish(struct net *net, struct ebt_replace *repl,
struct ebt_table_info *newinfo)
static int do_replace(struct net *net, const void __user *user,
unsigned int len)
struct ebt_table *
ebt_register_table(struct net *net, const struct ebt_table *input_table)
void ebt_unregister_table(struct net *net, struct ebt_table *table)
static int do_update_counters(struct net *net, const char *name,
struct ebt_counter __user *counters,
unsigned int num_counters,
const void __user *user, unsigned int len)
static int update_counters(struct net *net, const void __user *user,
unsigned int len)
static inline int ebt_make_matchname(const struct ebt_entry_match *m,
const char *base, char __user *ubase)
static inline int ebt_make_watchername(const struct ebt_entry_watcher *w,
const char *base, char __user *ubase)
static inline int
ebt_make_names(struct ebt_entry *e, const char *base, char __user *ubase)
static int copy_counters_to_user(struct ebt_table *t,
const struct ebt_counter *oldcounters,
void __user *user, unsigned int num_counters,
unsigned int nentries)
static int copy_everything_to_user(struct ebt_table *t, void __user *user,
const int *len, int cmd)
static int do_ebt_set_ctl(struct sock *sk,
int cmd, void __user *user, unsigned int len)
static int do_ebt_get_ctl(struct sock *sk, int cmd, void __user *user, int *len)
struct compat_ebt_replace ;
struct compat_ebt_entry_mwt ;
static int ebt_compat_entry_padsize(void)
static int ebt_compat_match_offset(const struct xt_match *match,
unsigned int userlen)
static int compat_match_to_user(struct ebt_entry_match *m, void __user **dstptr,
unsigned int *size)
static int compat_target_to_user(struct ebt_entry_target *t,
void __user **dstptr,
unsigned int *size)
static int compat_watcher_to_user(struct ebt_entry_watcher *w,
void __user **dstptr,
unsigned int *size)
static int compat_copy_entry_to_user(struct ebt_entry *e, void __user **dstptr,
unsigned int *size)
static int compat_calc_match(struct ebt_entry_match *m, int *off)
static int compat_calc_watcher(struct ebt_entry_watcher *w, int *off)
static int compat_calc_entry(const struct ebt_entry *e,
const struct ebt_table_info *info,
const void *base,
struct compat_ebt_replace *newinfo)
static int compat_table_info(const struct ebt_table_info *info,
struct compat_ebt_replace *newinfo)
static int compat_copy_everything_to_user(struct ebt_table *t,
void __user *user, int *len, int cmd)
struct ebt_entries_buf_state ;
static int ebt_buf_count(struct ebt_entries_buf_state *state, unsigned int sz)
static int ebt_buf_add(struct ebt_entries_buf_state *state,
void *data, unsigned int sz)
static int ebt_buf_add_pad(struct ebt_entries_buf_state *state, unsigned int sz)
enum compat_mwt ;
static int compat_mtw_from_user(struct compat_ebt_entry_mwt *mwt,
enum compat_mwt compat_mwt,
struct ebt_entries_buf_state *state,
const unsigned char *base)
static int ebt_size_mwt(struct compat_ebt_entry_mwt *match32,
unsigned int size_left, enum compat_mwt type,
struct ebt_entries_buf_state *state, const void *base)
static int size_entry_mwt(struct ebt_entry *entry, const unsigned char *base,
unsigned int *total,
struct ebt_entries_buf_state *state)
static int compat_copy_entries(unsigned char *data, unsigned int size_user,
struct ebt_entries_buf_state *state)
static int compat_copy_ebt_replace_from_user(struct ebt_replace *repl,
void __user *user, unsigned int len)
static int compat_do_replace(struct net *net, void __user *user,
unsigned int len)
static int compat_update_counters(struct net *net, void __user *user,
unsigned int len)
static int compat_do_ebt_set_ctl(struct sock *sk,
int cmd, void __user *user, unsigned int len)
static int compat_do_ebt_get_ctl(struct sock *sk, int cmd,
void __user *user, int *len)
static struct nf_sockopt_ops ebt_sockopts =
;
static int __init ebtables_init(void)
static void __exit ebtables_fini(void)
EXPORT_SYMBOL(ebt_register_table);
EXPORT_SYMBOL(ebt_unregister_table);
EXPORT_SYMBOL(ebt_do_table);
module_init(ebtables_init);
module_exit(ebtables_fini);
MODULE_LICENSE("GPL");
