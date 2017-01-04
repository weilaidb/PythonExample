static void do_poweroff(struct work_struct *dummy)
static DECLARE_WORK(poweroff_work, do_poweroff);
static void handle_poweroff(int key)
static struct sysrq_key_op	sysrq_poweroff_op = ;
static int pm_sysrq_init(void)
subsys_initcall(pm_sysrq_init);
