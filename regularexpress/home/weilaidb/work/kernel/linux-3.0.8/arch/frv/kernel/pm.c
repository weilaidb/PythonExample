#define DEBUG
int pm_do_suspend(void)
static unsigned long __irq_mask;
static void __default_power_switch_setup(void)
static void __default_power_switch_cleanup(void)
static int __default_power_switch_check(void)
void (*__power_switch_wake_setup)(void) = __default_power_switch_setup;
int  (*__power_switch_wake_check)(void) = __default_power_switch_check;
void (*__power_switch_wake_cleanup)(void) = __default_power_switch_cleanup;
int pm_do_bus_sleep(void)
unsigned long sleep_phys_sp(void *sp)
#define CTL_PM_SUSPEND 1
#define CTL_PM_CMODE 2
#define CTL_PM_P0 4
#define CTL_PM_CM 5
static int user_atoi(char __user *ubuf, size_t len)
static int sysctl_pm_do_suspend(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *fpos)
static int try_set_cmode(int new_cmode)
static int cmode_procctl(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *fpos)
static int try_set_p0(int new_p0)
static int try_set_cm(int new_cm)
static int p0_procctl(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *fpos)
static int cm_procctl(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *fpos)
static struct ctl_table pm_table[] =
;
static struct ctl_table pm_dir_table[] =
;
static int __init pm_init(void)
__initcall(pm_init);
