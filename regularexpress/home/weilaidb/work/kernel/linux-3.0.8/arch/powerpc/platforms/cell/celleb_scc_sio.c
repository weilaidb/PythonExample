static int txx9_serial_bitmap __initdata;
static struct  txx9_scc_tab[3] __initdata = ;
static int __init txx9_serial_init(void)
static int __init txx9_serial_config(char *ptr)
__setup("txx9_serial=", txx9_serial_config);
console_initcall(txx9_serial_init);
