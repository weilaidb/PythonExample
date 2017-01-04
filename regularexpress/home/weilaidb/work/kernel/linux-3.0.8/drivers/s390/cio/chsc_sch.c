static debug_info_t *chsc_debug_msg_id;
static debug_info_t *chsc_debug_log_id;
#define CHSC_MSG(imp, args...) do  while (0)
#define CHSC_LOG(imp, txt) do  while (0)
static void CHSC_LOG_HEX(int level, void *data, int length)
MODULE_AUTHOR("IBM Corporation");
MODULE_DESCRIPTION("driver for s390 chsc subchannels");
MODULE_LICENSE("GPL");
static void chsc_subchannel_irq(struct subchannel *sch)
static int chsc_subchannel_probe(struct subchannel *sch)
static int chsc_subchannel_remove(struct subchannel *sch)
static void chsc_subchannel_shutdown(struct subchannel *sch)
static int chsc_subchannel_prepare(struct subchannel *sch)
static int chsc_subchannel_freeze(struct subchannel *sch)
static int chsc_subchannel_restore(struct subchannel *sch)
static struct css_device_id chsc_subchannel_ids[] = ;
MODULE_DEVICE_TABLE(css, chsc_subchannel_ids);
static struct css_driver chsc_subchannel_driver = ;
static int __init chsc_init_dbfs(void)
static void chsc_remove_dbfs(void)
static int __init chsc_init_sch_driver(void)
static void chsc_cleanup_sch_driver(void)
static DEFINE_SPINLOCK(chsc_lock);
static int chsc_subchannel_match_next_free(struct device *dev, void *data)
static struct subchannel *chsc_get_next_subchannel(struct subchannel *sch)
static int chsc_async(struct chsc_async_area *chsc_area,
struct chsc_request *request)
static void chsc_log_command(struct chsc_async_area *chsc_area)
static int chsc_examine_irb(struct chsc_request *request)
static int chsc_ioctl_start(void __user *user_area)
static int chsc_ioctl_info_channel_path(void __user *user_cd)
static int chsc_ioctl_info_cu(void __user *user_cd)
static int chsc_ioctl_info_sch_cu(void __user *user_cud)
static int chsc_ioctl_conf_info(void __user *user_ci)
static int chsc_ioctl_conf_comp_list(void __user *user_ccl)
static int chsc_ioctl_chpd(void __user *user_chpd)
static int chsc_ioctl_dcal(void __user *user_dcal)
static long chsc_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static const struct file_operations chsc_fops = ;
static struct miscdevice chsc_misc_device = ;
static int __init chsc_misc_init(void)
static void chsc_misc_cleanup(void)
static int __init chsc_sch_init(void)
static void __exit chsc_sch_exit(void)
module_init(chsc_sch_init);
module_exit(chsc_sch_exit);
