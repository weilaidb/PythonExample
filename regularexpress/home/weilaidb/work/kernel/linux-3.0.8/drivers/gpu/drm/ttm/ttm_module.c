static DECLARE_WAIT_QUEUE_HEAD(exit_q);
atomic_t device_released;
static struct device_type ttm_drm_class_type = ;
static void ttm_drm_class_device_release(struct device *dev)
static struct device ttm_drm_class_device = ;
struct kobject *ttm_get_kobj(void)
static int __init ttm_init(void)
static void __exit ttm_exit(void)
module_init(ttm_init);
module_exit(ttm_exit);
MODULE_AUTHOR("Thomas Hellstrom, Jerome Glisse");
MODULE_DESCRIPTION("TTM memory manager subsystem (for DRM device)");
MODULE_LICENSE("GPL and additional rights");
