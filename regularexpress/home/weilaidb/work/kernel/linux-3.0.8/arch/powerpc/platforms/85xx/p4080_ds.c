static int primary_phb_addr;
static int __init p4080_ds_probe(void)
define_machine(p4080_ds) ;
machine_device_initcall(p4080_ds, corenet_ds_publish_devices);
machine_arch_initcall(p4080_ds, swiotlb_setup_bus_notifier);
