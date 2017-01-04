void __init mpc8536_ds_pic_init(void)
static void __init mpc8536_ds_setup_arch(void)
static struct of_device_id __initdata mpc8536_ds_ids[] = ;
static int __init mpc8536_ds_publish_devices(void)
machine_device_initcall(mpc8536_ds, mpc8536_ds_publish_devices);
machine_arch_initcall(mpc8536_ds, swiotlb_setup_bus_notifier);
static int __init mpc8536_ds_probe(void)
define_machine(mpc8536_ds) ;
