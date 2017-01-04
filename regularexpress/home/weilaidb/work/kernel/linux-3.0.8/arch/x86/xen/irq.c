void xen_force_evtchn_callback(void)
static unsigned long xen_save_fl(void)
PV_CALLEE_SAVE_REGS_THUNK(xen_save_fl);
static void xen_restore_fl(unsigned long flags)
PV_CALLEE_SAVE_REGS_THUNK(xen_restore_fl);
static void xen_irq_disable(void)
PV_CALLEE_SAVE_REGS_THUNK(xen_irq_disable);
static void xen_irq_enable(void)
PV_CALLEE_SAVE_REGS_THUNK(xen_irq_enable);
static void xen_safe_halt(void)
static void xen_halt(void)
static const struct pv_irq_ops xen_irq_ops __initconst = ;
void __init xen_init_irq_ops(void)
