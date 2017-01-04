static unsigned int arm_sleep_save[ARM_SLEEP_SAVE_SIZE];
static unsigned short dsp_sleep_save[DSP_SLEEP_SAVE_SIZE];
static unsigned short ulpd_sleep_save[ULPD_SLEEP_SAVE_SIZE];
static unsigned int mpui7xx_sleep_save[MPUI7XX_SLEEP_SAVE_SIZE];
static unsigned int mpui1510_sleep_save[MPUI1510_SLEEP_SAVE_SIZE];
static unsigned int mpui1610_sleep_save[MPUI1610_SLEEP_SAVE_SIZE];
static unsigned short enable_dyn_sleep = 1;
static ssize_t idle_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t idle_store(struct kobject *kobj, struct kobj_attribute *attr,
const char * buf, size_t n)
static struct kobj_attribute sleep_while_idle_attr =
__ATTR(sleep_while_idle, 0644, idle_show, idle_store);
static void (*omap_sram_suspend)(unsigned long r0, unsigned long r1) = NULL;
void omap1_pm_idle(void)
static void omap_pm_wakeup_setup(void)
#define EN_DSPCK	13
#define EN_APICK	6
#define DSP_EN		1
void omap1_pm_suspend(void)
#if defined(DEBUG) && defined(CONFIG_PROC_FS)
static int g_read_completed;
static int omap_pm_read_proc(
char *page_buffer,
char **my_first_byte,
off_t virtual_start,
int length,
int *eof,
void *data)
static void omap_pm_init_proc(void)
static void (*saved_idle)(void) = NULL;
static int omap_pm_prepare(void)
static int omap_pm_enter(suspend_state_t state)
static void omap_pm_finish(void)
static irqreturn_t omap_wakeup_interrupt(int irq, void *dev)
static struct irqaction omap_wakeup_irq = ;
static const struct platform_suspend_ops omap_pm_ops = ;
static int __init omap_pm_init(void)
__initcall(omap_pm_init);
