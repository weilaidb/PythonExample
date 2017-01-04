unsigned int p9_debug_level = 0;
EXPORT_SYMBOL(p9_debug_level);
module_param_named(debug, p9_debug_level, uint, 0);
MODULE_PARM_DESC(debug, "9P debugging level");
static DEFINE_SPINLOCK(v9fs_trans_lock);
static LIST_HEAD(v9fs_trans_list);
void v9fs_register_trans(struct p9_trans_module *m)
EXPORT_SYMBOL(v9fs_register_trans);
void v9fs_unregister_trans(struct p9_trans_module *m)
EXPORT_SYMBOL(v9fs_unregister_trans);
struct p9_trans_module *v9fs_get_trans_by_name(const substring_t *name)
EXPORT_SYMBOL(v9fs_get_trans_by_name);
struct p9_trans_module *v9fs_get_default_trans(void)
EXPORT_SYMBOL(v9fs_get_default_trans);
void v9fs_put_trans(struct p9_trans_module *m)
static int __init init_p9(void)
static void __exit exit_p9(void)
module_init(init_p9)
module_exit(exit_p9)
MODULE_AUTHOR("Latchesar Ionkov <lucho@ionkov.net>");
MODULE_AUTHOR("Eric Van Hensbergen <ericvh@gmail.com>");
MODULE_AUTHOR("Ron Minnich <rminnich@lanl.gov>");
MODULE_LICENSE("GPL");
