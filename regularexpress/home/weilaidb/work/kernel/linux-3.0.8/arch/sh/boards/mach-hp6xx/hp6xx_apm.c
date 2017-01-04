#define APM_CRITICAL			10
#define APM_LOW				30
#define HP680_BATTERY_MAX		898
#define HP680_BATTERY_MIN		486
#define HP680_BATTERY_AC_ON		1023
#define MODNAME "hp6x0_apm"
#define PGDR	0xa400012c
static void hp6x0_apm_get_power_status(struct apm_power_info *info)
static irqreturn_t hp6x0_apm_interrupt(int irq, void *dev)
static int __init hp6x0_apm_init(void)
static void __exit hp6x0_apm_exit(void)
module_init(hp6x0_apm_init);
module_exit(hp6x0_apm_exit);
MODULE_AUTHOR("Adriy Skulysh");
MODULE_DESCRIPTION("hp6xx Advanced Power Management");
MODULE_LICENSE("GPL");
