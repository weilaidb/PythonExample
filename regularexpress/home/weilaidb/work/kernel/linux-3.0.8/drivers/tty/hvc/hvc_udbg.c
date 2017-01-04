struct hvc_struct *hvc_udbg_dev;
static int hvc_udbg_put(uint32_t vtermno, const char *buf, int count)
static int hvc_udbg_get(uint32_t vtermno, char *buf, int count)
static const struct hv_ops hvc_udbg_ops = ;
static int __init hvc_udbg_init(void)
module_init(hvc_udbg_init);
static void __exit hvc_udbg_exit(void)
module_exit(hvc_udbg_exit);
static int __init hvc_udbg_console_init(void)
console_initcall(hvc_udbg_console_init);
