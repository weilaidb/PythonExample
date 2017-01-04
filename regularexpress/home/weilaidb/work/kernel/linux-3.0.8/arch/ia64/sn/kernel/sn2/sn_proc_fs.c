static int partition_id_show(struct seq_file *s, void *p)
static int partition_id_open(struct inode *inode, struct file *file)
static int system_serial_number_show(struct seq_file *s, void *p)
static int system_serial_number_open(struct inode *inode, struct file *file)
static int licenseID_show(struct seq_file *s, void *p)
static int licenseID_open(struct inode *inode, struct file *file)
static int coherence_id_show(struct seq_file *s, void *p)
static int coherence_id_open(struct inode *inode, struct file *file)
extern int sn_topology_open(struct inode *, struct file *);
extern int sn_topology_release(struct inode *, struct file *);
static const struct file_operations proc_partition_id_fops = ;
static const struct file_operations proc_system_sn_fops = ;
static const struct file_operations proc_license_id_fops = ;
static const struct file_operations proc_coherence_id_fops = ;
static const struct file_operations proc_sn_topo_fops = ;
void register_sn_procfs(void)
