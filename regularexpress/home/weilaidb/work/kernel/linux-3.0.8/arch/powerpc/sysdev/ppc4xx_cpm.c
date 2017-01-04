#define CPM_ER	0
#define CPM_FR	1
#define CPM_SR	2
#define CPM_IDLE_WAIT	0
#define CPM_IDLE_DOZE	1
struct cpm ;
static struct cpm cpm;
struct cpm_idle_mode ;
static struct cpm_idle_mode idle_mode[] = ;
static unsigned int cpm_set(unsigned int cpm_reg, unsigned int mask)
static void cpm_idle_wait(void)
static void cpm_idle_sleep(unsigned int mask)
static void cpm_idle_doze(void)
static void cpm_idle_config(int mode)
static ssize_t cpm_idle_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t cpm_idle_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t n)
static struct kobj_attribute cpm_idle_attr =
__ATTR(idle, 0644, cpm_idle_show, cpm_idle_store);
static void cpm_idle_config_sysfs(void)
static void cpm_idle(void)
static int cpm_suspend_valid(suspend_state_t state)
static void cpm_suspend_standby(unsigned int mask)
static int cpm_suspend_enter(suspend_state_t state)
static struct platform_suspend_ops cpm_suspend_ops = ;
static int cpm_get_uint_property(struct device_node *np,
const char *name)
static int __init cpm_init(void)
late_initcall(cpm_init);
static int __init cpm_powersave_off(char *arg)
__setup("powersave=off", cpm_powersave_off);
