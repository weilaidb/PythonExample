static int vlan_seq_show(struct seq_file *seq, void *v);
static void *vlan_seq_start(struct seq_file *seq, loff_t *pos);
static void *vlan_seq_next(struct seq_file *seq, void *v, loff_t *pos);
static void vlan_seq_stop(struct seq_file *seq, void *);
static int vlandev_seq_show(struct seq_file *seq, void *v);
static const char name_root[]	 = "vlan";
static const char name_conf[]	 = "config";
static const struct seq_operations vlan_seq_ops = ;
static int vlan_seq_open(struct inode *inode, struct file *file)
static const struct file_operations vlan_fops = ;
static int vlandev_seq_open(struct inode *inode, struct file *file)
static const struct file_operations vlandev_fops = ;
static const char *const vlan_name_type_str[VLAN_NAME_TYPE_HIGHEST] = ;
void vlan_proc_cleanup(struct net *net)
int __net_init vlan_proc_init(struct net *net)
int vlan_proc_add_dev(struct net_device *vlandev)
int vlan_proc_rem_dev(struct net_device *vlandev)
static void *vlan_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(rcu)
static void *vlan_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void vlan_seq_stop(struct seq_file *seq, void *v)
__releases(rcu)
static int vlan_seq_show(struct seq_file *seq, void *v)
static int vlandev_seq_show(struct seq_file *seq, void *offset)
