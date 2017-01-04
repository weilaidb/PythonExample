#define APM_CRITICAL		10
#define APM_LOW			30
static void pmu_apm_get_power_status(struct apm_power_info *info)
static int __init apm_emu_init(void)
static void __exit apm_emu_exit(void)
module_init(apm_emu_init);
module_exit(apm_emu_exit);
MODULE_AUTHOR("Benjamin Herrenschmidt");
MODULE_DESCRIPTION("APM emulation for PowerMac");
MODULE_LICENSE("GPL");
