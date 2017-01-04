struct dentry *arch_debugfs_dir;
EXPORT_SYMBOL(arch_debugfs_dir);
static int __init arch_kdebugfs_init(void)
arch_initcall(arch_kdebugfs_init);
