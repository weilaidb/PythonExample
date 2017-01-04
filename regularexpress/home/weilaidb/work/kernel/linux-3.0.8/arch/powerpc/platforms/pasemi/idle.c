#undef DEBUG
struct sleep_mode ;
static struct sleep_mode modes[] = ;
static int current_mode = 0;
static int pasemi_system_reset_exception(struct pt_regs *regs)
static int __init pasemi_idle_init(void)
machine_late_initcall(pasemi, pasemi_idle_init);
static int __init idle_param(char *p)
early_param("idle", idle_param);
