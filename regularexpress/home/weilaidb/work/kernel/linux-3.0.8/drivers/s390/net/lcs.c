#define KMSG_COMPONENT		"lcs"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#if !defined(CONFIG_NET_ETHERNET) && \
!defined(CONFIG_TR) && !defined(CONFIG_FDDI)
#error Cannot compile lcs.c without some net devices switched on.
static char version[] __initdata = "LCS driver";
static struct device *lcs_root_dev;
static void lcs_tasklet(unsigned long);
static void lcs_start_kernel_thread(struct work_struct *);
static void lcs_get_frames_cb(struct lcs_channel *, struct lcs_buffer *);
static int lcs_send_delipm(struct lcs_card *, struct lcs_ipm_list *);
static int lcs_recovery(void *ptr);
static char debug_buffer[255];
static debug_info_t *lcs_dbf_setup;
static debug_info_t *lcs_dbf_trace;
static void
lcs_unregister_debug_facility(void)
static int
lcs_register_debug_facility(void)
static int
lcs_alloc_channel(struct lcs_channel *channel)
static void
lcs_free_channel(struct lcs_channel *channel)
static void
lcs_cleanup_channel(struct lcs_channel *channel)
static void
lcs_free_card(struct lcs_card *card)
static struct lcs_card *
lcs_alloc_card(void)
static void
lcs_setup_read_ccws(struct lcs_card *card)
static void
lcs_setup_read(struct lcs_card *card)
static void
lcs_setup_write_ccws(struct lcs_card *card)
static void
lcs_setup_write(struct lcs_card *card)
static void
lcs_set_allowed_threads(struct lcs_card *card, unsigned long threads)
static inline int
lcs_threads_running(struct lcs_card *card, unsigned long threads)
static int
lcs_wait_for_threads(struct lcs_card *card, unsigned long threads)
static inline int
lcs_set_thread_start_bit(struct lcs_card *card, unsigned long thread)
static void
lcs_clear_thread_running_bit(struct lcs_card *card, unsigned long thread)
static inline int
__lcs_do_run_thread(struct lcs_card *card, unsigned long thread)
static int
lcs_do_run_thread(struct lcs_card *card, unsigned long thread)
static int
lcs_do_start_thread(struct lcs_card *card, unsigned long thread)
static void
lcs_setup_card(struct lcs_card *card)
static inline void
lcs_clear_multicast_list(struct lcs_card *card)
static void
lcs_cleanup_card(struct lcs_card *card)
static int
lcs_start_channel(struct lcs_channel *channel)
static int
lcs_clear_channel(struct lcs_channel *channel)
static int
lcs_stop_channel(struct lcs_channel *channel)
static int
lcs_start_channels(struct lcs_card *card)
static int
lcs_stop_channels(struct lcs_card *card)
static struct lcs_buffer *
__lcs_get_buffer(struct lcs_channel *channel)
static struct lcs_buffer *
lcs_get_buffer(struct lcs_channel *channel)
static int
__lcs_resume_channel(struct lcs_channel *channel)
static inline void
__lcs_ready_buffer_bits(struct lcs_channel *channel, int index)
static int
lcs_ready_buffer(struct lcs_channel *channel, struct lcs_buffer *buffer)
static int
__lcs_processed_buffer(struct lcs_channel *channel, struct lcs_buffer *buffer)
static void
lcs_release_buffer(struct lcs_channel *channel, struct lcs_buffer *buffer)
static struct lcs_buffer *
lcs_get_lancmd(struct lcs_card *card, int count)
static void
lcs_get_reply(struct lcs_reply *reply)
static void
lcs_put_reply(struct lcs_reply *reply)
static struct lcs_reply *
lcs_alloc_reply(struct lcs_cmd *cmd)
static void
lcs_notify_lancmd_waiters(struct lcs_card *card, struct lcs_cmd *cmd)
static void
lcs_lancmd_timeout(unsigned long data)
static int
lcs_send_lancmd(struct lcs_card *card, struct lcs_buffer *buffer,
void (*reply_callback)(struct lcs_card *, struct lcs_cmd *))
static int
lcs_send_startup(struct lcs_card *card, __u8 initiator)
static int
lcs_send_shutdown(struct lcs_card *card)
static void
__lcs_lanstat_cb(struct lcs_card *card, struct lcs_cmd *cmd)
static int
lcs_send_lanstat(struct lcs_card *card)
static int
lcs_send_stoplan(struct lcs_card *card, __u8 initiator)
static void
__lcs_send_startlan_cb(struct lcs_card *card, struct lcs_cmd *cmd)
static int
lcs_send_startlan(struct lcs_card *card, __u8 initiator)
static int
lcs_send_setipm(struct lcs_card *card,struct lcs_ipm_list *ipm_list)
static int
lcs_send_delipm(struct lcs_card *card,struct lcs_ipm_list *ipm_list)
static void
__lcs_check_multicast_cb(struct lcs_card *card, struct lcs_cmd *cmd)
static int
lcs_check_multicast_support(struct lcs_card *card)
static void
lcs_fix_multicast_list(struct lcs_card *card)
static void
lcs_get_mac_for_ipm(__be32 ipm, char *mac, struct net_device *dev)
static inline void
lcs_remove_mc_addresses(struct lcs_card *card, struct in_device *in4_dev)
static inline struct lcs_ipm_list *
lcs_check_addr_entry(struct lcs_card *card, struct ip_mc_list *im4, char *buf)
static inline void
lcs_set_mc_addresses(struct lcs_card *card, struct in_device *in4_dev)
static int
lcs_register_mc_addresses(void *data)
static void
lcs_set_multicast_list(struct net_device *dev)
static long
lcs_check_irb_error(struct ccw_device *cdev, struct irb *irb)
static int
lcs_get_problem(struct ccw_device *cdev, struct irb *irb)
static void
lcs_schedule_recovery(struct lcs_card *card)
static void
lcs_irq(struct ccw_device *cdev, unsigned long intparm, struct irb *irb)
static void
lcs_tasklet(unsigned long data)
static void
__lcs_emit_txbuffer(struct lcs_card *card)
static void
lcs_txbuffer_cb(struct lcs_channel *channel, struct lcs_buffer *buffer)
static int
__lcs_start_xmit(struct lcs_card *card, struct sk_buff *skb,
struct net_device *dev)
static int
lcs_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int
lcs_startlan_auto(struct lcs_card *card)
static int
lcs_startlan(struct lcs_card *card)
static int
lcs_detect(struct lcs_card *card)
static int
lcs_stopcard(struct lcs_card *card)
static void
lcs_start_kernel_thread(struct work_struct *work)
static void
lcs_get_control(struct lcs_card *card, struct lcs_cmd *cmd)
static void
lcs_get_skb(struct lcs_card *card, char *skb_data, unsigned int skb_len)
static void
lcs_get_frames_cb(struct lcs_channel *channel, struct lcs_buffer *buffer)
static struct net_device_stats *
lcs_getstats(struct net_device *dev)
static int
lcs_stop_device(struct net_device *dev)
static int
lcs_open_device(struct net_device *dev)
static ssize_t
lcs_portno_show (struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
lcs_portno_store (struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(portno, 0644, lcs_portno_show, lcs_portno_store);
const char *lcs_type[] = ;
static ssize_t
lcs_type_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(type, 0444, lcs_type_show, NULL);
static ssize_t
lcs_timeout_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
lcs_timeout_store (struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(lancmd_timeout, 0644, lcs_timeout_show, lcs_timeout_store);
static ssize_t
lcs_dev_recover_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(recover, 0200, NULL, lcs_dev_recover_store);
static struct attribute * lcs_attrs[] = ;
static struct attribute_group lcs_attr_group = ;
static int
lcs_probe_device(struct ccwgroup_device *ccwgdev)
static int
lcs_register_netdev(struct ccwgroup_device *ccwgdev)
static const struct net_device_ops lcs_netdev_ops = ;
static const struct net_device_ops lcs_mc_netdev_ops = ;
static int
lcs_new_device(struct ccwgroup_device *ccwgdev)
static int
__lcs_shutdown_device(struct ccwgroup_device *ccwgdev, int recovery_mode)
static int
lcs_shutdown_device(struct ccwgroup_device *ccwgdev)
static int
lcs_recovery(void *ptr)
static void
lcs_remove_device(struct ccwgroup_device *ccwgdev)
static int lcs_pm_suspend(struct lcs_card *card)
static int lcs_pm_resume(struct lcs_card *card)
static int lcs_prepare(struct ccwgroup_device *gdev)
static void lcs_complete(struct ccwgroup_device *gdev)
static int lcs_freeze(struct ccwgroup_device *gdev)
static int lcs_thaw(struct ccwgroup_device *gdev)
static int lcs_restore(struct ccwgroup_device *gdev)
static struct ccw_device_id lcs_ids[] = ;
MODULE_DEVICE_TABLE(ccw, lcs_ids);
static struct ccw_driver lcs_ccw_driver = ;
static struct ccwgroup_driver lcs_group_driver = ;
static ssize_t
lcs_driver_group_store(struct device_driver *ddrv, const char *buf,
size_t count)
static DRIVER_ATTR(group, 0200, NULL, lcs_driver_group_store);
static struct attribute *lcs_group_attrs[] = ;
static struct attribute_group lcs_group_attr_group = ;
static const struct attribute_group *lcs_group_attr_groups[] = ;
static int
__init lcs_init_module(void)
static void
__exit lcs_cleanup_module(void)
module_init(lcs_init_module);
module_exit(lcs_cleanup_module);
MODULE_AUTHOR("Frank Pavlic <fpavlic@de.ibm.com>");
MODULE_LICENSE("GPL");
