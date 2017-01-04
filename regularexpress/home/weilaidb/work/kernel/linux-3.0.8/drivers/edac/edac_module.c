#define EDAC_VERSION "Ver: 2.1.0"
int edac_debug_level = 2;
EXPORT_SYMBOL_GPL(edac_debug_level);
struct workqueue_struct *edac_workqueue;
char *edac_op_state_to_string(int opstate)
static int edac_workqueue_setup(void)
static void edac_workqueue_teardown(void)
static int __init edac_init(void)
static void __exit edac_exit(void)
module_init(edac_init);
module_exit(edac_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Doug Thompson www.softwarebitmaker.com, et al");
MODULE_DESCRIPTION("Core library routines for EDAC reporting");
module_param(edac_debug_level, int, 0644);
MODULE_PARM_DESC(edac_debug_level, "Debug level");
