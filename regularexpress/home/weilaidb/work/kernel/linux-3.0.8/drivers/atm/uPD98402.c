struct uPD98402_priv ;
#define PRIV(dev) ((struct uPD98402_priv *) dev->phy_data)
#define PUT(val,reg) dev->ops->phy_put(dev,val,uPD98402_##reg)
#define GET(reg) dev->ops->phy_get(dev,uPD98402_##reg)
static int fetch_stats(struct atm_dev *dev,struct sonet_stats __user *arg,int zero)
static int set_framing(struct atm_dev *dev,unsigned char framing)
static int get_sense(struct atm_dev *dev,u8 __user *arg)
static int set_loopback(struct atm_dev *dev,int mode)
static int uPD98402_ioctl(struct atm_dev *dev,unsigned int cmd,void __user *arg)
#define ADD_LIMITED(s,v) \
static void stat_event(struct atm_dev *dev)
#undef ADD_LIMITED
static void uPD98402_int(struct atm_dev *dev)
static int uPD98402_start(struct atm_dev *dev)
static int uPD98402_stop(struct atm_dev *dev)
static const struct atmphy_ops uPD98402_ops = ;
int uPD98402_init(struct atm_dev *dev)
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(uPD98402_init);
static __init int uPD98402_module_init(void)
module_init(uPD98402_module_init);
