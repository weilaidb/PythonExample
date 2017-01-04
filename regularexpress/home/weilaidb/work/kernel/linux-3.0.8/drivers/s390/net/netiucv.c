#define KMSG_COMPONENT "netiucv"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#undef DEBUG
MODULE_AUTHOR
("(C) 2001 IBM Corporation by Fritz Elfert (felfert@millenux.com)");
MODULE_DESCRIPTION ("Linux for S/390 IUCV network driver");
#define IUCV_DBF_SETUP_NAME "iucv_setup"
#define IUCV_DBF_SETUP_LEN 32
#define IUCV_DBF_SETUP_PAGES 2
#define IUCV_DBF_SETUP_NR_AREAS 1
#define IUCV_DBF_SETUP_LEVEL 3
#define IUCV_DBF_DATA_NAME "iucv_data"
#define IUCV_DBF_DATA_LEN 128
#define IUCV_DBF_DATA_PAGES 2
#define IUCV_DBF_DATA_NR_AREAS 1
#define IUCV_DBF_DATA_LEVEL 2
#define IUCV_DBF_TRACE_NAME "iucv_trace"
#define IUCV_DBF_TRACE_LEN 16
#define IUCV_DBF_TRACE_PAGES 4
#define IUCV_DBF_TRACE_NR_AREAS 1
#define IUCV_DBF_TRACE_LEVEL 3
#define IUCV_DBF_TEXT(name,level,text) \
do  while (0)
#define IUCV_DBF_HEX(name,level,addr,len) \
do  while (0)
DECLARE_PER_CPU(char[256], iucv_dbf_txt_buf);
static inline int iucv_dbf_passes(debug_info_t *dbf_grp, int level)
#define IUCV_DBF_TEXT_(name, level, text...) \
do  while (0)
#define IUCV_DBF_SPRINTF(name,level,text...) \
do  while (0)
#define IUCV_HEXDUMP16(importance,header,ptr) \
PRINT_##importance(header "%02x %02x %02x %02x  %02x %02x %02x %02x  " \
"%02x %02x %02x %02x  %02x %02x %02x %02x\n", \
*(((char*)ptr)),*(((char*)ptr)+1),*(((char*)ptr)+2), \
*(((char*)ptr)+3),*(((char*)ptr)+4),*(((char*)ptr)+5), \
*(((char*)ptr)+6),*(((char*)ptr)+7),*(((char*)ptr)+8), \
*(((char*)ptr)+9),*(((char*)ptr)+10),*(((char*)ptr)+11), \
*(((char*)ptr)+12),*(((char*)ptr)+13), \
*(((char*)ptr)+14),*(((char*)ptr)+15)); \
PRINT_##importance(header "%02x %02x %02x %02x  %02x %02x %02x %02x  " \
"%02x %02x %02x %02x  %02x %02x %02x %02x\n", \
*(((char*)ptr)+16),*(((char*)ptr)+17), \
*(((char*)ptr)+18),*(((char*)ptr)+19), \
*(((char*)ptr)+20),*(((char*)ptr)+21), \
*(((char*)ptr)+22),*(((char*)ptr)+23), \
*(((char*)ptr)+24),*(((char*)ptr)+25), \
*(((char*)ptr)+26),*(((char*)ptr)+27), \
*(((char*)ptr)+28),*(((char*)ptr)+29), \
*(((char*)ptr)+30),*(((char*)ptr)+31));
#define PRINTK_HEADER " iucv: "
static struct device *netiucv_dev;
static int netiucv_pm_prepare(struct device *);
static void netiucv_pm_complete(struct device *);
static int netiucv_pm_freeze(struct device *);
static int netiucv_pm_restore_thaw(struct device *);
static const struct dev_pm_ops netiucv_pm_ops = ;
static struct device_driver netiucv_driver = ;
static int netiucv_callback_connreq(struct iucv_path *,
u8 ipvmid[8], u8 ipuser[16]);
static void netiucv_callback_connack(struct iucv_path *, u8 ipuser[16]);
static void netiucv_callback_connrej(struct iucv_path *, u8 ipuser[16]);
static void netiucv_callback_connsusp(struct iucv_path *, u8 ipuser[16]);
static void netiucv_callback_connres(struct iucv_path *, u8 ipuser[16]);
static void netiucv_callback_rx(struct iucv_path *, struct iucv_message *);
static void netiucv_callback_txdone(struct iucv_path *, struct iucv_message *);
static struct iucv_handler netiucv_handler = ;
struct connection_profile ;
struct iucv_connection ;
static LIST_HEAD(iucv_connection_list);
static DEFINE_RWLOCK(iucv_connection_rwlock);
struct iucv_event ;
struct netiucv_priv ;
struct ll_header ;
#define NETIUCV_HDRLEN		 (sizeof(struct ll_header))
#define NETIUCV_BUFSIZE_MAX      32768
#define NETIUCV_BUFSIZE_DEFAULT  NETIUCV_BUFSIZE_MAX
#define NETIUCV_MTU_MAX          (NETIUCV_BUFSIZE_MAX - NETIUCV_HDRLEN)
#define NETIUCV_MTU_DEFAULT      9216
#define NETIUCV_QUEUELEN_DEFAULT 50
#define NETIUCV_TIMEOUT_5SEC     5000
static inline void netiucv_clear_busy(struct net_device *dev)
static inline int netiucv_test_and_set_busy(struct net_device *dev)
static u8 iucvMagic[16] = ;
static char *netiucv_printname(char *name)
enum dev_states ;
static const char *dev_state_names[] = ;
enum dev_events ;
static const char *dev_event_names[] = ;
enum conn_events ;
static const char *conn_event_names[] = ;
enum conn_states ;
static const char *conn_state_names[] = ;
static debug_info_t *iucv_dbf_setup = NULL;
static debug_info_t *iucv_dbf_data = NULL;
static debug_info_t *iucv_dbf_trace = NULL;
DEFINE_PER_CPU(char[256], iucv_dbf_txt_buf);
static void iucv_unregister_dbf_views(void)
static int iucv_register_dbf_views(void)
static void netiucv_callback_rx(struct iucv_path *path,
struct iucv_message *msg)
static void netiucv_callback_txdone(struct iucv_path *path,
struct iucv_message *msg)
static void netiucv_callback_connack(struct iucv_path *path, u8 ipuser[16])
static int netiucv_callback_connreq(struct iucv_path *path,
u8 ipvmid[8], u8 ipuser[16])
static void netiucv_callback_connrej(struct iucv_path *path, u8 ipuser[16])
static void netiucv_callback_connsusp(struct iucv_path *path, u8 ipuser[16])
static void netiucv_callback_connres(struct iucv_path *path, u8 ipuser[16])
static void netiucv_action_nop(fsm_instance *fi, int event, void *arg)
static void netiucv_unpack_skb(struct iucv_connection *conn,
struct sk_buff *pskb)
static void conn_action_rx(fsm_instance *fi, int event, void *arg)
static void conn_action_txdone(fsm_instance *fi, int event, void *arg)
static void conn_action_connaccept(fsm_instance *fi, int event, void *arg)
static void conn_action_connreject(fsm_instance *fi, int event, void *arg)
static void conn_action_connack(fsm_instance *fi, int event, void *arg)
static void conn_action_conntimsev(fsm_instance *fi, int event, void *arg)
static void conn_action_connsever(fsm_instance *fi, int event, void *arg)
static void conn_action_start(fsm_instance *fi, int event, void *arg)
static void netiucv_purge_skb_queue(struct sk_buff_head *q)
static void conn_action_stop(fsm_instance *fi, int event, void *arg)
static void conn_action_inval(fsm_instance *fi, int event, void *arg)
static const fsm_node conn_fsm[] = ;
static const int CONN_FSM_LEN = sizeof(conn_fsm) / sizeof(fsm_node);
static void dev_action_start(fsm_instance *fi, int event, void *arg)
static void
dev_action_stop(fsm_instance *fi, int event, void *arg)
static void
dev_action_connup(fsm_instance *fi, int event, void *arg)
static void
dev_action_conndown(fsm_instance *fi, int event, void *arg)
static const fsm_node dev_fsm[] = ;
static const int DEV_FSM_LEN = sizeof(dev_fsm) / sizeof(fsm_node);
static int netiucv_transmit_skb(struct iucv_connection *conn,
struct sk_buff *skb)
static int netiucv_open(struct net_device *dev)
static int netiucv_close(struct net_device *dev)
static int netiucv_pm_prepare(struct device *dev)
static void netiucv_pm_complete(struct device *dev)
static int netiucv_pm_freeze(struct device *dev)
static int netiucv_pm_restore_thaw(struct device *dev)
static int netiucv_tx(struct sk_buff *skb, struct net_device *dev)
static struct net_device_stats *netiucv_stats (struct net_device * dev)
static int netiucv_change_mtu(struct net_device * dev, int new_mtu)
static ssize_t user_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t user_write(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(user, 0644, user_show, user_write);
static ssize_t buffer_show (struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t buffer_write (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(buffer, 0644, buffer_show, buffer_write);
static ssize_t dev_fsm_show (struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(device_fsm_state, 0444, dev_fsm_show, NULL);
static ssize_t conn_fsm_show (struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(connection_fsm_state, 0444, conn_fsm_show, NULL);
static ssize_t maxmulti_show (struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t maxmulti_write (struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(max_tx_buffer_used, 0644, maxmulti_show, maxmulti_write);
static ssize_t maxcq_show (struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t maxcq_write (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(max_chained_skbs, 0644, maxcq_show, maxcq_write);
static ssize_t sdoio_show (struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t sdoio_write (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(tx_single_write_ops, 0644, sdoio_show, sdoio_write);
static ssize_t mdoio_show (struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t mdoio_write (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(tx_multi_write_ops, 0644, mdoio_show, mdoio_write);
static ssize_t txlen_show (struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t txlen_write (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(netto_bytes, 0644, txlen_show, txlen_write);
static ssize_t txtime_show (struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t txtime_write (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(max_tx_io_time, 0644, txtime_show, txtime_write);
static ssize_t txpend_show (struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t txpend_write (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(tx_pending, 0644, txpend_show, txpend_write);
static ssize_t txmpnd_show (struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t txmpnd_write (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(tx_max_pending, 0644, txmpnd_show, txmpnd_write);
static struct attribute *netiucv_attrs[] = ;
static struct attribute_group netiucv_attr_group = ;
static struct attribute *netiucv_stat_attrs[] = ;
static struct attribute_group netiucv_stat_attr_group = ;
static int netiucv_add_files(struct device *dev)
static void netiucv_remove_files(struct device *dev)
static int netiucv_register_device(struct net_device *ndev)
static void netiucv_unregister_device(struct device *dev)
static struct iucv_connection *netiucv_new_connection(struct net_device *dev,
char *username)
static void netiucv_remove_connection(struct iucv_connection *conn)
static void netiucv_free_netdevice(struct net_device *dev)
static const struct net_device_ops netiucv_netdev_ops = ;
static void netiucv_setup_netdevice(struct net_device *dev)
static struct net_device *netiucv_init_netdevice(char *username)
static ssize_t conn_write(struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(connection, 0200, NULL, conn_write);
static ssize_t remove_write (struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(remove, 0200, NULL, remove_write);
static struct attribute * netiucv_drv_attrs[] = ;
static struct attribute_group netiucv_drv_attr_group = ;
static const struct attribute_group *netiucv_drv_attr_groups[] = ;
static void netiucv_banner(void)
static void __exit netiucv_exit(void)
static int __init netiucv_init(void)
module_init(netiucv_init);
module_exit(netiucv_exit);
MODULE_LICENSE("GPL");
