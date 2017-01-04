#define cpu_should_die()	cpu_is_offline(smp_processor_id())
#define cpu_should_die()	0
static int __init powersave_off(char *arg)
__setup("powersave=off", powersave_off);
void cpu_idle(void)
int powersave_nap;
static ctl_table powersave_nap_ctl_table[]=;
static ctl_table powersave_nap_sysctl_root[] = ;
static int __init
register_powersave_nap_sysctl(void)
__initcall(register_powersave_nap_sysctl);
