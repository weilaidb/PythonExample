static int __init p5020_ds_probe(void)
define_machine(p5020_ds) ;
machine_device_initcall(p5020_ds, corenet_ds_publish_devices);
machine_arch_initcall(p5020_ds, swiotlb_setup_bus_notifier);
