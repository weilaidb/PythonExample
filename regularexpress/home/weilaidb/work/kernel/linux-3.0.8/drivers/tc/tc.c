static struct tc_bus tc_bus = ;
static void __init tc_bus_add_devices(struct tc_bus *tbus)
static int __init tc_init(void)
subsys_initcall(tc_init);
