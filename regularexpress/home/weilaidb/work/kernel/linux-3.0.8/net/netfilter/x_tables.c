#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("_tables backend module");
#define SMP_ALIGN(x) (((x) + SMP_CACHE_BYTES-1) & ~(SMP_CACHE_BYTES-1))
struct compat_delta ;
struct xt_af ;
static struct xt_af *xt;
static const char *const xt_prefix[NFPROTO_NUMPROTO] = ;
static const unsigned int xt_jumpstack_multiplier = 2;
int
xt_register_target(struct xt_target *target)
EXPORT_SYMBOL(xt_register_target);
void
xt_unregister_target(struct xt_target *target)
EXPORT_SYMBOL(xt_unregister_target);
int
xt_register_targets(struct xt_target *target, unsigned int n)
EXPORT_SYMBOL(xt_register_targets);
void
xt_unregister_targets(struct xt_target *target, unsigned int n)
EXPORT_SYMBOL(xt_unregister_targets);
int
xt_register_match(struct xt_match *match)
EXPORT_SYMBOL(xt_register_match);
void
xt_unregister_match(struct xt_match *match)
EXPORT_SYMBOL(xt_unregister_match);
int
xt_register_matches(struct xt_match *match, unsigned int n)
EXPORT_SYMBOL(xt_register_matches);
void
xt_unregister_matches(struct xt_match *match, unsigned int n)
EXPORT_SYMBOL(xt_unregister_matches);
struct xt_match *xt_find_match(u8 af, const char *name, u8 revision)
EXPORT_SYMBOL(xt_find_match);
struct xt_match *
xt_request_find_match(uint8_t nfproto, const char *name, uint8_t revision)
EXPORT_SYMBOL_GPL(xt_request_find_match);
struct xt_target *xt_find_target(u8 af, const char *name, u8 revision)
EXPORT_SYMBOL(xt_find_target);
struct xt_target *xt_request_find_target(u8 af, const char *name, u8 revision)
EXPORT_SYMBOL_GPL(xt_request_find_target);
static int match_revfn(u8 af, const char *name, u8 revision, int *bestp)
static int target_revfn(u8 af, const char *name, u8 revision, int *bestp)
int xt_find_revision(u8 af, const char *name, u8 revision, int target,
int *err)
EXPORT_SYMBOL_GPL(xt_find_revision);
static char *textify_hooks(char *buf, size_t size, unsigned int mask)
int xt_check_match(struct xt_mtchk_param *par,
unsigned int size, u_int8_t proto, bool inv_proto)
EXPORT_SYMBOL_GPL(xt_check_match);
int xt_compat_add_offset(u_int8_t af, unsigned int offset, int delta)
EXPORT_SYMBOL_GPL(xt_compat_add_offset);
void xt_compat_flush_offsets(u_int8_t af)
EXPORT_SYMBOL_GPL(xt_compat_flush_offsets);
int xt_compat_calc_jump(u_int8_t af, unsigned int offset)
EXPORT_SYMBOL_GPL(xt_compat_calc_jump);
void xt_compat_init_offsets(u_int8_t af, unsigned int number)
EXPORT_SYMBOL(xt_compat_init_offsets);
int xt_compat_match_offset(const struct xt_match *match)
EXPORT_SYMBOL_GPL(xt_compat_match_offset);
int xt_compat_match_from_user(struct xt_entry_match *m, void **dstptr,
unsigned int *size)
EXPORT_SYMBOL_GPL(xt_compat_match_from_user);
int xt_compat_match_to_user(const struct xt_entry_match *m,
void __user **dstptr, unsigned int *size)
EXPORT_SYMBOL_GPL(xt_compat_match_to_user);
int xt_check_target(struct xt_tgchk_param *par,
unsigned int size, u_int8_t proto, bool inv_proto)
EXPORT_SYMBOL_GPL(xt_check_target);
int xt_compat_target_offset(const struct xt_target *target)
EXPORT_SYMBOL_GPL(xt_compat_target_offset);
void xt_compat_target_from_user(struct xt_entry_target *t, void **dstptr,
unsigned int *size)
EXPORT_SYMBOL_GPL(xt_compat_target_from_user);
int xt_compat_target_to_user(const struct xt_entry_target *t,
void __user **dstptr, unsigned int *size)
EXPORT_SYMBOL_GPL(xt_compat_target_to_user);
struct xt_table_info *xt_alloc_table_info(unsigned int size)
EXPORT_SYMBOL(xt_alloc_table_info);
void xt_free_table_info(struct xt_table_info *info)
EXPORT_SYMBOL(xt_free_table_info);
struct xt_table *xt_find_table_lock(struct net *net, u_int8_t af,
const char *name)
EXPORT_SYMBOL_GPL(xt_find_table_lock);
void xt_table_unlock(struct xt_table *table)
EXPORT_SYMBOL_GPL(xt_table_unlock);
void xt_compat_lock(u_int8_t af)
EXPORT_SYMBOL_GPL(xt_compat_lock);
void xt_compat_unlock(u_int8_t af)
EXPORT_SYMBOL_GPL(xt_compat_unlock);
DEFINE_PER_CPU(seqcount_t, xt_recseq);
EXPORT_PER_CPU_SYMBOL_GPL(xt_recseq);
static int xt_jumpstack_alloc(struct xt_table_info *i)
struct xt_table_info *
xt_replace_table(struct xt_table *table,
unsigned int num_counters,
struct xt_table_info *newinfo,
int *error)
EXPORT_SYMBOL_GPL(xt_replace_table);
struct xt_table *xt_register_table(struct net *net,
const struct xt_table *input_table,
struct xt_table_info *bootstrap,
struct xt_table_info *newinfo)
EXPORT_SYMBOL_GPL(xt_register_table);
void *xt_unregister_table(struct xt_table *table)
EXPORT_SYMBOL_GPL(xt_unregister_table);
struct xt_names_priv ;
static void *xt_table_seq_start(struct seq_file *seq, loff_t *pos)
static void *xt_table_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void xt_table_seq_stop(struct seq_file *seq, void *v)
static int xt_table_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations xt_table_seq_ops = ;
static int xt_table_open(struct inode *inode, struct file *file)
static const struct file_operations xt_table_ops = ;
struct nf_mttg_trav ;
enum ;
static void *xt_mttg_seq_next(struct seq_file *seq, void *v, loff_t *ppos,
bool is_target)
static void *xt_mttg_seq_start(struct seq_file *seq, loff_t *pos,
bool is_target)
static void xt_mttg_seq_stop(struct seq_file *seq, void *v)
static void *xt_match_seq_start(struct seq_file *seq, loff_t *pos)
static void *xt_match_seq_next(struct seq_file *seq, void *v, loff_t *ppos)
static int xt_match_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations xt_match_seq_ops = ;
static int xt_match_open(struct inode *inode, struct file *file)
static const struct file_operations xt_match_ops = ;
static void *xt_target_seq_start(struct seq_file *seq, loff_t *pos)
static void *xt_target_seq_next(struct seq_file *seq, void *v, loff_t *ppos)
static int xt_target_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations xt_target_seq_ops = ;
static int xt_target_open(struct inode *inode, struct file *file)
static const struct file_operations xt_target_ops = ;
#define FORMAT_TABLES	"_tables_names"
#define	FORMAT_MATCHES	"_tables_matches"
#define FORMAT_TARGETS 	"_tables_targets"
struct nf_hook_ops *xt_hook_link(const struct xt_table *table, nf_hookfn *fn)
EXPORT_SYMBOL_GPL(xt_hook_link);
void xt_hook_unlink(const struct xt_table *table, struct nf_hook_ops *ops)
EXPORT_SYMBOL_GPL(xt_hook_unlink);
int xt_proto_init(struct net *net, u_int8_t af)
EXPORT_SYMBOL_GPL(xt_proto_init);
void xt_proto_fini(struct net *net, u_int8_t af)
EXPORT_SYMBOL_GPL(xt_proto_fini);
static int __net_init xt_net_init(struct net *net)
static struct pernet_operations xt_net_ops = ;
static int __init xt_init(void)
static void __exit xt_fini(void)
module_init(xt_init);
module_exit(xt_fini);
