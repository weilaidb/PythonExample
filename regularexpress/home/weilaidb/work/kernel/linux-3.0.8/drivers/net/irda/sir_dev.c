static struct workqueue_struct *irda_sir_wq;
static int sirdev_tx_complete_fsm(struct sir_dev *dev)
static void sirdev_config_fsm(struct work_struct *work)
int sirdev_schedule_request(struct sir_dev *dev, int initial_state, unsigned param)
void sirdev_enable_rx(struct sir_dev *dev)
static int sirdev_is_receiving(struct sir_dev *dev)
int sirdev_set_dongle(struct sir_dev *dev, IRDA_DONGLE type)
EXPORT_SYMBOL(sirdev_set_dongle);
int sirdev_raw_write(struct sir_dev *dev, const char *buf, int len)
EXPORT_SYMBOL(sirdev_raw_write);
int sirdev_raw_read(struct sir_dev *dev, char *buf, int len)
EXPORT_SYMBOL(sirdev_raw_read);
int sirdev_set_dtr_rts(struct sir_dev *dev, int dtr, int rts)
EXPORT_SYMBOL(sirdev_set_dtr_rts);
void sirdev_write_complete(struct sir_dev *dev)
EXPORT_SYMBOL(sirdev_write_complete);
int sirdev_receive(struct sir_dev *dev, const unsigned char *cp, size_t count)
EXPORT_SYMBOL(sirdev_receive);
static netdev_tx_t sirdev_hard_xmit(struct sk_buff *skb,
struct net_device *ndev)
static int sirdev_ioctl(struct net_device *ndev, struct ifreq *rq, int cmd)
#define SIRBUF_ALLOCSIZE 4269
static int sirdev_alloc_buffers(struct sir_dev *dev)
;
static void sirdev_free_buffers(struct sir_dev *dev)
static int sirdev_open(struct net_device *ndev)
static int sirdev_close(struct net_device *ndev)
static const struct net_device_ops sirdev_ops = ;
struct sir_dev * sirdev_get_instance(const struct sir_driver *drv, const char *name)
EXPORT_SYMBOL(sirdev_get_instance);
int sirdev_put_instance(struct sir_dev *dev)
EXPORT_SYMBOL(sirdev_put_instance);
static int __init sir_wq_init(void)
static void __exit sir_wq_exit(void)
module_init(sir_wq_init);
module_exit(sir_wq_exit);
MODULE_AUTHOR("Martin Diehl <info@mdiehl.de>");
MODULE_DESCRIPTION("IrDA SIR core");
MODULE_LICENSE("GPL");
