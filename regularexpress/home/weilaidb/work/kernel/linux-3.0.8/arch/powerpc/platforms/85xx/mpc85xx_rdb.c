#undef DEBUG
#define DBG(fmt, args...) printk(KERN_ERR "%s: " fmt, __func__, ## args)
#define DBG(fmt, args...)
void __init mpc85xx_rdb_pic_init(void)
extern void __init mpc85xx_smp_init(void);
static void __init mpc85xx_rdb_setup_arch(void)
static struct of_device_id __initdata mpc85xxrdb_ids[] = ;
static int __init mpc85xxrdb_publish_devices(void)
machine_device_initcall(p2020_rdb, mpc85xxrdb_publish_devices);
machine_device_initcall(p1020_rdb, mpc85xxrdb_publish_devices);
static int __init p2020_rdb_probe(void)
static int __init p1020_rdb_probe(void)
define_machine(p2020_rdb) ;
define_machine(p1020_rdb) ;
