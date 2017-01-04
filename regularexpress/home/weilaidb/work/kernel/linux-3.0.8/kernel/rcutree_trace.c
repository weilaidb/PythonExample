#define RCU_TREE_NONCORE
DECLARE_PER_CPU(unsigned int, rcu_cpu_kthread_status);
DECLARE_PER_CPU(unsigned int, rcu_cpu_kthread_cpu);
DECLARE_PER_CPU(unsigned int, rcu_cpu_kthread_loops);
DECLARE_PER_CPU(char, rcu_cpu_has_work);
static char convert_kthread_status(unsigned int kthread_status)
static void print_one_rcu_data(struct seq_file *m, struct rcu_data *rdp)
#define PRINT_RCU_DATA(name, func, m) \
do  while (0)
static int show_rcudata(struct seq_file *m, void *unused)
static int rcudata_open(struct inode *inode, struct file *file)
static const struct file_operations rcudata_fops = ;
static void print_one_rcu_data_csv(struct seq_file *m, struct rcu_data *rdp)
static int show_rcudata_csv(struct seq_file *m, void *unused)
static int rcudata_csv_open(struct inode *inode, struct file *file)
static const struct file_operations rcudata_csv_fops = ;
static void print_one_rcu_node_boost(struct seq_file *m, struct rcu_node *rnp)
static int show_rcu_node_boost(struct seq_file *m, void *unused)
static int rcu_node_boost_open(struct inode *inode, struct file *file)
static const struct file_operations rcu_node_boost_fops = ;
static int rcu_boost_trace_create_file(struct dentry *rcudir)
static int rcu_boost_trace_create_file(struct dentry *rcudir)
static void print_one_rcu_state(struct seq_file *m, struct rcu_state *rsp)
static int show_rcuhier(struct seq_file *m, void *unused)
static int rcuhier_open(struct inode *inode, struct file *file)
static const struct file_operations rcuhier_fops = ;
static void show_one_rcugp(struct seq_file *m, struct rcu_state *rsp)
static int show_rcugp(struct seq_file *m, void *unused)
static int rcugp_open(struct inode *inode, struct file *file)
static const struct file_operations rcugp_fops = ;
static void print_one_rcu_pending(struct seq_file *m, struct rcu_data *rdp)
static void print_rcu_pendings(struct seq_file *m, struct rcu_state *rsp)
static int show_rcu_pending(struct seq_file *m, void *unused)
static int rcu_pending_open(struct inode *inode, struct file *file)
static const struct file_operations rcu_pending_fops = ;
static int show_rcutorture(struct seq_file *m, void *unused)
static int rcutorture_open(struct inode *inode, struct file *file)
static const struct file_operations rcutorture_fops = ;
static struct dentry *rcudir;
static int __init rcutree_trace_init(void)
static void __exit rcutree_trace_cleanup(void)
module_init(rcutree_trace_init);
module_exit(rcutree_trace_cleanup);
MODULE_AUTHOR("Paul E. McKenney");
MODULE_DESCRIPTION("Read-Copy Update tracing for hierarchical implementation");
MODULE_LICENSE("GPL");
