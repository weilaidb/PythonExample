#undef GENERAL_DEBUG
#define DPRINTK(format,args...) printk(KERN_DEBUG format,##args)
#define DPRINTK(format,args...)
struct idt77105_priv ;
static DEFINE_SPINLOCK(idt77105_priv_lock);
#define PRIV(dev) ((struct idt77105_priv *) dev->phy_data)
#define PUT(val,reg) dev->ops->phy_put(dev,val,IDT77105_##reg)
#define GET(reg) dev->ops->phy_get(dev,IDT77105_##reg)
static void idt77105_stats_timer_func(unsigned long);
static void idt77105_restart_timer_func(unsigned long);
static DEFINE_TIMER(stats_timer, idt77105_stats_timer_func, 0, 0);
static DEFINE_TIMER(restart_timer, idt77105_restart_timer_func, 0, 0);
static int start_timer = 1;
static struct idt77105_priv *idt77105_all = NULL;
static u16 get_counter(struct atm_dev *dev, int counter)
static void idt77105_stats_timer_func(unsigned long dummy)
static void idt77105_restart_timer_func(unsigned long dummy)
static int fetch_stats(struct atm_dev *dev,struct idt77105_stats __user *arg,int zero)
static int set_loopback(struct atm_dev *dev,int mode)
static int idt77105_ioctl(struct atm_dev *dev,unsigned int cmd,void __user *arg)
static void idt77105_int(struct atm_dev *dev)
static int idt77105_start(struct atm_dev *dev)
static int idt77105_stop(struct atm_dev *dev)
static const struct atmphy_ops idt77105_ops = ;
int idt77105_init(struct atm_dev *dev)
EXPORT_SYMBOL(idt77105_init);
static void __exit idt77105_exit(void)
module_exit(idt77105_exit);
MODULE_LICENSE("GPL");
