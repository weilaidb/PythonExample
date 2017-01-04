enum lw_bits ;
static unsigned long linkwatch_flags;
static unsigned long linkwatch_nextevent;
static void linkwatch_event(struct work_struct *dummy);
static DECLARE_DELAYED_WORK(linkwatch_work, linkwatch_event);
static LIST_HEAD(lweventlist);
static DEFINE_SPINLOCK(lweventlist_lock);
static unsigned char default_operstate(const struct net_device *dev)
static void rfc2863_policy(struct net_device *dev)
static bool linkwatch_urgent_event(struct net_device *dev)
static void linkwatch_add_event(struct net_device *dev)
static void linkwatch_schedule_work(int urgent)
static void linkwatch_do_dev(struct net_device *dev)
static void __linkwatch_run_queue(int urgent_only)
void linkwatch_forget_dev(struct net_device *dev)
void linkwatch_run_queue(void)
static void linkwatch_event(struct work_struct *dummy)
void linkwatch_fire_event(struct net_device *dev)
EXPORT_SYMBOL(linkwatch_fire_event);
