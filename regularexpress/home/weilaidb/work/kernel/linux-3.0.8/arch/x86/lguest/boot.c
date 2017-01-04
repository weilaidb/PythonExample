struct lguest_data lguest_data = ;
static void async_hcall(unsigned long call, unsigned long arg1,
unsigned long arg2, unsigned long arg3,
unsigned long arg4)
static void lazy_hcall1(unsigned long call, unsigned long arg1)
static void lazy_hcall2(unsigned long call,
unsigned long arg1,
unsigned long arg2)
static void lazy_hcall3(unsigned long call,
unsigned long arg1,
unsigned long arg2,
unsigned long arg3)
static void lazy_hcall4(unsigned long call,
unsigned long arg1,
unsigned long arg2,
unsigned long arg3,
unsigned long arg4)
static void lguest_leave_lazy_mmu_mode(void)
static void lguest_end_context_switch(struct task_struct *next)
static unsigned long save_fl(void)
static void irq_disable(void)
PV_CALLEE_SAVE_REGS_THUNK(save_fl);
PV_CALLEE_SAVE_REGS_THUNK(irq_disable);
extern void lg_irq_enable(void);
extern void lg_restore_fl(unsigned long flags);
static void lguest_write_idt_entry(gate_desc *dt,
int entrynum, const gate_desc *g)
static void lguest_load_idt(const struct desc_ptr *desc)
static void lguest_load_gdt(const struct desc_ptr *desc)
static void lguest_write_gdt_entry(struct desc_struct *dt, int entrynum,
const void *desc, int type)
static void lguest_load_tls(struct thread_struct *t, unsigned int cpu)
static void lguest_set_ldt(const void *addr, unsigned entries)
static void lguest_load_tr_desc(void)
static void lguest_cpuid(unsigned int *ax, unsigned int *bx,
unsigned int *cx, unsigned int *dx)
static unsigned long current_cr0;
static void lguest_write_cr0(unsigned long val)
static unsigned long lguest_read_cr0(void)
static void lguest_clts(void)
static unsigned long lguest_read_cr2(void)
static bool cr3_changed = false;
static void lguest_write_cr3(unsigned long cr3)
static unsigned long lguest_read_cr3(void)
static unsigned long lguest_read_cr4(void)
static void lguest_write_cr4(unsigned long val)
static void lguest_pte_update(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static void lguest_set_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pteval)
static void lguest_set_pud(pud_t *pudp, pud_t pudval)
static void lguest_set_pmd(pmd_t *pmdp, pmd_t pmdval)
static void lguest_set_pmd(pmd_t *pmdp, pmd_t pmdval)
static void lguest_set_pte(pte_t *ptep, pte_t pteval)
static void lguest_set_pte_atomic(pte_t *ptep, pte_t pte)
static void lguest_pte_clear(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static void lguest_pmd_clear(pmd_t *pmdp)
static void lguest_flush_tlb_single(unsigned long addr)
static void lguest_flush_tlb_user(void)
static void lguest_flush_tlb_kernel(void)
static void disable_lguest_irq(struct irq_data *data)
static void enable_lguest_irq(struct irq_data *data)
static struct irq_chip lguest_irq_controller = ;
static void __init lguest_init_IRQ(void)
void lguest_setup_irq(unsigned int irq)
static unsigned long lguest_get_wallclock(void)
static unsigned long lguest_tsc_khz(void)
static cycle_t lguest_clock_read(struct clocksource *cs)
static struct clocksource lguest_clock = ;
static int lguest_clockevent_set_next_event(unsigned long delta,
struct clock_event_device *evt)
static void lguest_clockevent_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device lguest_clockevent = ;
static void lguest_time_irq(unsigned int irq, struct irq_desc *desc)
static void lguest_time_init(void)
static void lguest_load_sp0(struct tss_struct *tss,
struct thread_struct *thread)
static void lguest_set_debugreg(int regno, unsigned long value)
static void lguest_wbinvd(void)
static void lguest_apic_write(u32 reg, u32 v)
static u32 lguest_apic_read(u32 reg)
static u64 lguest_apic_icr_read(void)
static void lguest_apic_icr_write(u32 low, u32 id)
static void lguest_apic_wait_icr_idle(void)
static u32 lguest_apic_safe_wait_icr_idle(void)
static void set_lguest_basic_apic_ops(void)
;
static void lguest_safe_halt(void)
static void lguest_power_off(void)
static int lguest_panic(struct notifier_block *nb, unsigned long l, void *p)
static struct notifier_block paniced = ;
static __init char *lguest_memory_setup(void)
static __init int early_put_chars(u32 vtermno, const char *buf, int count)
static void lguest_restart(char *reason)
static const struct lguest_insns
lguest_insns[] = ;
static unsigned lguest_patch(u8 type, u16 clobber, void *ibuf,
unsigned long addr, unsigned len)
__init void lguest_init(void)
