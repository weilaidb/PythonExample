#if defined CONFIG_PCI && defined CONFIG_PARAVIRT
static unsigned long vsmp_save_fl(void)
PV_CALLEE_SAVE_REGS_THUNK(vsmp_save_fl);
static void vsmp_restore_fl(unsigned long flags)
PV_CALLEE_SAVE_REGS_THUNK(vsmp_restore_fl);
static void vsmp_irq_disable(void)
PV_CALLEE_SAVE_REGS_THUNK(vsmp_irq_disable);
static void vsmp_irq_enable(void)
PV_CALLEE_SAVE_REGS_THUNK(vsmp_irq_enable);
static unsigned __init_or_module vsmp_patch(u8 type, u16 clobbers, void *ibuf,
unsigned long addr, unsigned len)
static void __init set_vsmp_pv_ops(void)
static void __init set_vsmp_pv_ops(void)
static int is_vsmp = -1;
static void __init detect_vsmp_box(void)
int is_vsmp_box(void)
static void __init detect_vsmp_box(void)
int is_vsmp_box(void)
void __init vsmp_init(void)
