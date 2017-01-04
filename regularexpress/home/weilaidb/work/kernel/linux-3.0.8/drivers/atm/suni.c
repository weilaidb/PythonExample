#define PRIV(dev) ((struct suni_priv *) dev->phy_data)
#define PUT(val,reg) dev->ops->phy_put(dev,val,SUNI_##reg)
#define GET(reg) dev->ops->phy_get(dev,SUNI_##reg)
#define REG_CHANGE(mask,shift,value,reg) \
PUT((GET(reg) & ~(mask)) | ((value) << (shift)),reg)
static struct timer_list poll_timer;
static struct suni_priv *sunis = NULL;
static DEFINE_SPINLOCK(sunis_lock);
#define ADD_LIMITED(s,v) \
atomic_add((v),&stats->s); \
if (atomic_read(&stats->s) < 0) atomic_set(&stats->s,INT_MAX);
static void suni_hz(unsigned long from_timer)
#undef ADD_LIMITED
static int fetch_stats(struct atm_dev *dev,struct sonet_stats __user *arg,int zero)
#define HANDLE_FLAG(flag,reg,bit) \
if (todo & flag)
static int change_diag(struct atm_dev *dev,void __user *arg,int set)
#undef HANDLE_FLAG
static int get_diag(struct atm_dev *dev,void __user *arg)
static int set_loopback(struct atm_dev *dev,int mode)
static int set_sonet(struct atm_dev *dev)
static int set_sdh(struct atm_dev *dev)
static int get_framing(struct atm_dev *dev, void __user *arg)
static int set_framing(struct atm_dev *dev, void __user *arg)
static int suni_ioctl(struct atm_dev *dev,unsigned int cmd,void __user *arg)
static void poll_los(struct atm_dev *dev)
static void suni_int(struct atm_dev *dev)
static int suni_start(struct atm_dev *dev)
static int suni_stop(struct atm_dev *dev)
static const struct atmphy_ops suni_ops = ;
int suni_init(struct atm_dev *dev)
EXPORT_SYMBOL(suni_init);
MODULE_LICENSE("GPL");
