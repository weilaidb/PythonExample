static struct dentry *bonding_debug_root;
static int bond_debug_rlb_hash_show(struct seq_file *m, void *v)
static int bond_debug_rlb_hash_open(struct inode *inode, struct file *file)
static const struct file_operations bond_debug_rlb_hash_fops = ;
void bond_debug_register(struct bonding *bond)
void bond_debug_unregister(struct bonding *bond)
void bond_debug_reregister(struct bonding *bond)
void bond_create_debugfs(void)
void bond_destroy_debugfs(void)
void bond_debug_register(struct bonding *bond)
void bond_debug_unregister(struct bonding *bond)
void bond_debug_reregister(struct bonding *bond)
void bond_create_debugfs(void)
void bond_destroy_debugfs(void)
