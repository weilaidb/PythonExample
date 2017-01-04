static void default_handler(int, struct pt_regs *);
static struct exec_domain *exec_domains = &default_exec_domain;
static DEFINE_RWLOCK(exec_domains_lock);
static unsigned long ident_map[32] = ;
struct exec_domain default_exec_domain = ;
static void
default_handler(int segment, struct pt_regs *regp)
static struct exec_domain *
lookup_exec_domain(unsigned int personality)
int
register_exec_domain(struct exec_domain *ep)
int
unregister_exec_domain(struct exec_domain *ep)
int __set_personality(unsigned int personality)
static int execdomains_proc_show(struct seq_file *m, void *v)
static int execdomains_proc_open(struct inode *inode, struct file *file)
static const struct file_operations execdomains_proc_fops = ;
static int __init proc_execdomains_init(void)
module_init(proc_execdomains_init);
SYSCALL_DEFINE1(personality, unsigned int, personality)
EXPORT_SYMBOL(register_exec_domain);
EXPORT_SYMBOL(unregister_exec_domain);
EXPORT_SYMBOL(__set_personality);
