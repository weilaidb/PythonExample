static inline void dsp_save_state(u32 *state)
static inline void dsp_load_state(u32 *state)
static int dsp_do(struct notifier_block *self, unsigned long cmd, void *t)
static struct notifier_block dsp_notifier_block = ;
static int iwmmxt_do(struct notifier_block *self, unsigned long cmd, void *t)
static struct notifier_block iwmmxt_notifier_block = ;
static u32 __init xscale_cp_access_read(void)
static void __init xscale_cp_access_write(u32 value)
static int __init cpu_has_iwmmxt(void)
static int __init xscale_cp0_init(void)
late_initcall(xscale_cp0_init);
