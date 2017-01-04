MODULE_DESCRIPTION("AFS Client File System");
MODULE_AUTHOR("Red Hat, Inc.");
MODULE_LICENSE("GPL");
unsigned afs_debug;
module_param_named(debug, afs_debug, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(debug, "AFS debugging mask");
static char *rootcell;
module_param(rootcell, charp, 0);
MODULE_PARM_DESC(rootcell, "root AFS cell name and VL server IP addr list");
struct afs_uuid afs_uuid;
struct workqueue_struct *afs_wq;
static int __init afs_get_client_UUID(void)
static int __init afs_init(void)
late_initcall(afs_init);
static void __exit afs_exit(void)
module_exit(afs_exit);
