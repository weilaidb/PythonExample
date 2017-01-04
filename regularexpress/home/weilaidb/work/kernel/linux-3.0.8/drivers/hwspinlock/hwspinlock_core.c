#define pr_fmt(fmt)    "%s: " fmt, __func__
#define HWSPINLOCK_UNUSED	(0)
static RADIX_TREE(hwspinlock_tree, GFP_KERNEL);
static DEFINE_SPINLOCK(hwspinlock_tree_lock);
int __hwspin_trylock(struct hwspinlock *hwlock, int mode, unsigned long *flags)
EXPORT_SYMBOL_GPL(__hwspin_trylock);
int __hwspin_lock_timeout(struct hwspinlock *hwlock, unsigned int to,
int mode, unsigned long *flags)
EXPORT_SYMBOL_GPL(__hwspin_lock_timeout);
void __hwspin_unlock(struct hwspinlock *hwlock, int mode, unsigned long *flags)
EXPORT_SYMBOL_GPL(__hwspin_unlock);
int hwspin_lock_register(struct hwspinlock *hwlock)
EXPORT_SYMBOL_GPL(hwspin_lock_register);
struct hwspinlock *hwspin_lock_unregister(unsigned int id)
EXPORT_SYMBOL_GPL(hwspin_lock_unregister);
static int __hwspin_lock_request(struct hwspinlock *hwlock)
int hwspin_lock_get_id(struct hwspinlock *hwlock)
EXPORT_SYMBOL_GPL(hwspin_lock_get_id);
struct hwspinlock *hwspin_lock_request(void)
EXPORT_SYMBOL_GPL(hwspin_lock_request);
struct hwspinlock *hwspin_lock_request_specific(unsigned int id)
EXPORT_SYMBOL_GPL(hwspin_lock_request_specific);
int hwspin_lock_free(struct hwspinlock *hwlock)
EXPORT_SYMBOL_GPL(hwspin_lock_free);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Hardware spinlock interface");
MODULE_AUTHOR("Ohad Ben-Cohen <ohad@wizery.com>");
