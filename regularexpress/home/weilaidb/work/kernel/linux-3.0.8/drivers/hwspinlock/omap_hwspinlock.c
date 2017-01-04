#define SYSSTATUS_OFFSET		0x0014
#define LOCK_BASE_OFFSET		0x0800
#define SPINLOCK_NUMLOCKS_BIT_OFFSET	(24)
#define SPINLOCK_NOTTAKEN		(0)
#define SPINLOCK_TAKEN			(1)
#define to_omap_hwspinlock(lock)	\
container_of(lock, struct omap_hwspinlock, lock)
struct omap_hwspinlock ;
struct omap_hwspinlock_state ;
static int omap_hwspinlock_trylock(struct hwspinlock *lock)
static void omap_hwspinlock_unlock(struct hwspinlock *lock)
static void omap_hwspinlock_relax(struct hwspinlock *lock)
static const struct hwspinlock_ops omap_hwspinlock_ops = ;
static int __devinit omap_hwspinlock_probe(struct platform_device *pdev)
static int omap_hwspinlock_remove(struct platform_device *pdev)
static struct platform_driver omap_hwspinlock_driver = ;
static int __init omap_hwspinlock_init(void)
postcore_initcall(omap_hwspinlock_init);
static void __exit omap_hwspinlock_exit(void)
module_exit(omap_hwspinlock_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Hardware spinlock driver for OMAP");
MODULE_AUTHOR("Simon Que <sque@ti.com>");
MODULE_AUTHOR("Hari Kanigeri <h-kanigeri2@ti.com>");
MODULE_AUTHOR("Ohad Ben-Cohen <ohad@wizery.com>");
