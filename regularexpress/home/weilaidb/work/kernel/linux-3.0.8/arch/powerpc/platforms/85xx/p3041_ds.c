static int __init p3041_ds_probe(void)
define_machine(p3041_ds) ;
machine_device_initcall(p3041_ds, corenet_ds_publish_devices);
machine_arch_initcall(p3041_ds, swiotlb_setup_bus_notifier);
