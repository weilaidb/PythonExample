static struct  dst_garbage = ;
static void dst_gc_task(struct work_struct *work);
static void ___dst_free(struct dst_entry *dst);
static DECLARE_DELAYED_WORK(dst_gc_work, dst_gc_task);
static DEFINE_MUTEX(dst_gc_mutex);
static struct dst_entry         *dst_busy_list;
static void dst_gc_task(struct work_struct *work)
int dst_discard(struct sk_buff *skb)
EXPORT_SYMBOL(dst_discard);
const u32 dst_default_metrics[RTAX_MAX];
void *dst_alloc(struct dst_ops *ops, struct net_device *dev,
int initial_ref, int initial_obsolete, int flags)
EXPORT_SYMBOL(dst_alloc);
static void ___dst_free(struct dst_entry *dst)
void __dst_free(struct dst_entry *dst)
EXPORT_SYMBOL(__dst_free);
struct dst_entry *dst_destroy(struct dst_entry * dst)
EXPORT_SYMBOL(dst_destroy);
void dst_release(struct dst_entry *dst)
EXPORT_SYMBOL(dst_release);
u32 *dst_cow_metrics_generic(struct dst_entry *dst, unsigned long old)
EXPORT_SYMBOL(dst_cow_metrics_generic);
void __dst_destroy_metrics_generic(struct dst_entry *dst, unsigned long old)
EXPORT_SYMBOL(__dst_destroy_metrics_generic);
void skb_dst_set_noref(struct sk_buff *skb, struct dst_entry *dst)
EXPORT_SYMBOL(skb_dst_set_noref);
static void dst_ifdown(struct dst_entry *dst, struct net_device *dev,
int unregister)
static int dst_dev_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block dst_dev_notifier = ;
void __init dst_init(void)
