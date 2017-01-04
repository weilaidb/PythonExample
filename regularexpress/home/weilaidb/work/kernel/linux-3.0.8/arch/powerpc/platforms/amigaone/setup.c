extern void __flush_disable_L1(void);
void amigaone_show_cpuinfo(struct seq_file *m)
static int __init amigaone_add_bridge(struct device_node *dev)
void __init amigaone_setup_arch(void)
void __init amigaone_init_IRQ(void)
static int __init request_isa_regions(void)
machine_device_initcall(amigaone, request_isa_regions);
void amigaone_restart(char *cmd)
static int __init amigaone_probe(void)
define_machine(amigaone) ;
