#define KMSG_COMPONENT "claw"
static char version[] __initdata = "CLAW driver";
static char debug_buffer[255];
static debug_info_t *claw_dbf_setup;
static debug_info_t *claw_dbf_trace;
static void
claw_unregister_debug_facility(void)
static int
claw_register_debug_facility(void)
static inline void
claw_set_busy(struct net_device *dev)
static inline void
claw_clear_busy(struct net_device *dev)
static inline int
claw_check_busy(struct net_device *dev)
static inline void
claw_setbit_busy(int nr,struct net_device *dev)
static inline void
claw_clearbit_busy(int nr,struct net_device *dev)
static inline int
claw_test_and_setbit_busy(int nr,struct net_device *dev)
static int claw_probe(struct ccwgroup_device *cgdev);
static void claw_remove_device(struct ccwgroup_device *cgdev);
static void claw_purge_skb_queue(struct sk_buff_head *q);
static int claw_new_device(struct ccwgroup_device *cgdev);
static int claw_shutdown_device(struct ccwgroup_device *cgdev);
static int claw_tx(struct sk_buff *skb, struct net_device *dev);
static int claw_change_mtu( struct net_device *dev, int new_mtu);
static int claw_open(struct net_device *dev);
static void claw_irq_handler(struct ccw_device *cdev,
unsigned long intparm, struct irb *irb);
static void claw_irq_tasklet ( unsigned long data );
static int claw_release(struct net_device *dev);
static void claw_write_retry ( struct chbk * p_ch );
static void claw_write_next ( struct chbk * p_ch );
static void claw_timer ( struct chbk * p_ch );
static int add_claw_reads(struct net_device *dev,
struct ccwbk* p_first, struct ccwbk* p_last);
static void ccw_check_return_code (struct ccw_device *cdev, int return_code);
static void ccw_check_unit_check (struct chbk * p_ch, unsigned char sense );
static int find_link(struct net_device *dev, char *host_name, char *ws_name );
static int claw_hw_tx(struct sk_buff *skb, struct net_device *dev, long linkid);
static int init_ccw_bk(struct net_device *dev);
static void probe_error( struct ccwgroup_device *cgdev);
static struct net_device_stats *claw_stats(struct net_device *dev);
static int pages_to_order_of_mag(int num_of_pages);
static struct sk_buff *claw_pack_skb(struct claw_privbk *privptr);
static ssize_t claw_hname_show(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t claw_hname_write(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count);
static ssize_t claw_adname_show(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t claw_adname_write(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count);
static ssize_t claw_apname_show(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t claw_apname_write(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count);
static ssize_t claw_wbuff_show(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t claw_wbuff_write(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count);
static ssize_t claw_rbuff_show(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t claw_rbuff_write(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count);
static int claw_add_files(struct device *dev);
static void claw_remove_files(struct device *dev);
static int claw_process_control( struct net_device *dev, struct ccwbk * p_ccw);
static int claw_send_control(struct net_device *dev, __u8 type, __u8 link,
__u8 correlator, __u8 rc , char *local_name, char *remote_name);
static int claw_snd_conn_req(struct net_device *dev, __u8 link);
static int claw_snd_disc(struct net_device *dev, struct clawctl * p_ctl);
static int claw_snd_sys_validate_rsp(struct net_device *dev,
struct clawctl * p_ctl, __u32 return_code);
static int claw_strt_conn_req(struct net_device *dev );
static void claw_strt_read(struct net_device *dev, int lock);
static void claw_strt_out_IO(struct net_device *dev);
static void claw_free_wrt_buf(struct net_device *dev);
static void unpack_read(struct net_device *dev);
static int claw_pm_prepare(struct ccwgroup_device *gdev)
static struct device *claw_root_dev;
static struct ccwgroup_driver claw_group_driver = ;
static struct ccw_device_id claw_ids[] = ;
MODULE_DEVICE_TABLE(ccw, claw_ids);
static struct ccw_driver claw_ccw_driver = ;
static ssize_t
claw_driver_group_store(struct device_driver *ddrv, const char *buf,
size_t count)
static DRIVER_ATTR(group, 0200, NULL, claw_driver_group_store);
static struct attribute *claw_group_attrs[] = ;
static struct attribute_group claw_group_attr_group = ;
static const struct attribute_group *claw_group_attr_groups[] = ;
static int
claw_probe(struct ccwgroup_device *cgdev)
static int
claw_tx(struct sk_buff *skb, struct net_device *dev)
static struct sk_buff *
claw_pack_skb(struct claw_privbk *privptr)
static int
claw_change_mtu(struct net_device *dev, int new_mtu)
static int
claw_open(struct net_device *dev)
static void
claw_irq_handler(struct ccw_device *cdev,
unsigned long intparm, struct irb *irb)
static void
claw_irq_tasklet ( unsigned long data )
static int
claw_release(struct net_device *dev)
static void
claw_write_retry ( struct chbk *p_ch )
static void
claw_write_next ( struct chbk * p_ch )
static void
claw_timer ( struct chbk * p_ch )
static int
pages_to_order_of_mag(int num_of_pages)
static int
add_claw_reads(struct net_device *dev, struct ccwbk* p_first,
struct ccwbk* p_last)
static void
ccw_check_return_code(struct ccw_device *cdev, int return_code)
static void
ccw_check_unit_check(struct chbk * p_ch, unsigned char sense )
static int
find_link(struct net_device *dev, char *host_name, char *ws_name )
static int
claw_hw_tx(struct sk_buff *skb, struct net_device *dev, long linkid)
static int
init_ccw_bk(struct net_device *dev)
static void
probe_error( struct ccwgroup_device *cgdev)
static int
claw_process_control( struct net_device *dev, struct ccwbk * p_ccw)
static int
claw_send_control(struct net_device *dev, __u8 type, __u8 link,
__u8 correlator, __u8 rc, char *local_name, char *remote_name)
static int
claw_snd_conn_req(struct net_device *dev, __u8 link)
static int
claw_snd_disc(struct net_device *dev, struct clawctl * p_ctl)
static int
claw_snd_sys_validate_rsp(struct net_device *dev,
struct clawctl *p_ctl, __u32 return_code)
static int
claw_strt_conn_req(struct net_device *dev )
static struct
net_device_stats *claw_stats(struct net_device *dev)
static void
unpack_read(struct net_device *dev )
static void
claw_strt_read (struct net_device *dev, int lock )
static void
claw_strt_out_IO( struct net_device *dev )
static void
claw_free_wrt_buf( struct net_device *dev )
static void
claw_free_netdevice(struct net_device * dev, int free_dev)
static const struct net_device_ops claw_netdev_ops = ;
static void
claw_init_netdevice(struct net_device * dev)
static int
add_channel(struct ccw_device *cdev,int i,struct claw_privbk *privptr)
static int
claw_new_device(struct ccwgroup_device *cgdev)
static void
claw_purge_skb_queue(struct sk_buff_head *q)
static int
claw_shutdown_device(struct ccwgroup_device *cgdev)
static void
claw_remove_device(struct ccwgroup_device *cgdev)
static ssize_t
claw_hname_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
claw_hname_write(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(host_name, 0644, claw_hname_show, claw_hname_write);
static ssize_t
claw_adname_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
claw_adname_write(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(adapter_name, 0644, claw_adname_show, claw_adname_write);
static ssize_t
claw_apname_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
claw_apname_write(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(api_type, 0644, claw_apname_show, claw_apname_write);
static ssize_t
claw_wbuff_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
claw_wbuff_write(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(write_buffer, 0644, claw_wbuff_show, claw_wbuff_write);
static ssize_t
claw_rbuff_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
claw_rbuff_write(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(read_buffer, 0644, claw_rbuff_show, claw_rbuff_write);
static struct attribute *claw_attr[] = ;
static struct attribute_group claw_attr_group = ;
static int
claw_add_files(struct device *dev)
static void
claw_remove_files(struct device *dev)
static void __exit
claw_cleanup(void)
static int __init
claw_init(void)
module_init(claw_init);
module_exit(claw_cleanup);
MODULE_AUTHOR("Andy Richter <richtera@us.ibm.com>");
MODULE_DESCRIPTION("Linux for System z CLAW Driver\n" \
"Copyright 2000,2008 IBM Corporation\n");
MODULE_LICENSE("GPL");
