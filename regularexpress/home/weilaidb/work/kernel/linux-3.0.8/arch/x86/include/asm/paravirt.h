#define _ASM_X86_PARAVIRT_H
static inline int paravirt_enabled(void)
static inline void load_sp0(struct tss_struct *tss,
struct thread_struct *thread)
static inline void __cpuid(unsigned int *eax, unsigned int *ebx,
unsigned int *ecx, unsigned int *edx)
static inline unsigned long paravirt_get_debugreg(int reg)
#define get_debugreg(var, reg) var = paravirt_get_debugreg(reg)
static inline void set_debugreg(unsigned long val, int reg)
static inline void clts(void)
static inline unsigned long read_cr0(void)
static inline void write_cr0(unsigned long x)
static inline unsigned long read_cr2(void)
static inline void write_cr2(unsigned long x)
static inline unsigned long read_cr3(void)
static inline void write_cr3(unsigned long x)
static inline unsigned long read_cr4(void)
static inline unsigned long read_cr4_safe(void)
static inline void write_cr4(unsigned long x)
static inline unsigned long read_cr8(void)
static inline void write_cr8(unsigned long x)
static inline void arch_safe_halt(void)
static inline void halt(void)
static inline void wbinvd(void)
#define get_kernel_rpl()  (pv_info.kernel_rpl)
static inline u64 paravirt_read_msr(unsigned msr, int *err)
static inline int paravirt_rdmsr_regs(u32 *regs)
static inline int paravirt_write_msr(unsigned msr, unsigned low, unsigned high)
static inline int paravirt_wrmsr_regs(u32 *regs)
#define rdmsr(msr, val1, val2)			\
do  while (0)
#define wrmsr(msr, val1, val2)			\
do  while (0)
#define rdmsrl(msr, val)			\
do  while (0)
#define wrmsrl(msr, val)	wrmsr(msr, (u32)((u64)(val)), ((u64)(val))>>32)
#define wrmsr_safe(msr, a, b)	paravirt_write_msr(msr, a, b)
#define rdmsr_safe(msr, a, b)			\
()
#define rdmsr_safe_regs(regs)	paravirt_rdmsr_regs(regs)
#define wrmsr_safe_regs(regs)	paravirt_wrmsr_regs(regs)
static inline int rdmsrl_safe(unsigned msr, unsigned long long *p)
static inline int rdmsrl_amd_safe(unsigned msr, unsigned long long *p)
static inline int wrmsrl_amd_safe(unsigned msr, unsigned long long val)
static inline u64 paravirt_read_tsc(void)
#define rdtscl(low)				\
do  while (0)
#define rdtscll(val) (val = paravirt_read_tsc())
static inline unsigned long long paravirt_sched_clock(void)
static inline unsigned long long paravirt_read_pmc(int counter)
#define rdpmc(counter, low, high)		\
do  while (0)
static inline unsigned long long paravirt_rdtscp(unsigned int *aux)
#define rdtscp(low, high, aux)				\
do  while (0)
#define rdtscpll(val, aux)				\
do  while (0)
static inline void paravirt_alloc_ldt(struct desc_struct *ldt, unsigned entries)
static inline void paravirt_free_ldt(struct desc_struct *ldt, unsigned entries)
static inline void load_TR_desc(void)
static inline void load_gdt(const struct desc_ptr *dtr)
static inline void load_idt(const struct desc_ptr *dtr)
static inline void set_ldt(const void *addr, unsigned entries)
static inline void store_gdt(struct desc_ptr *dtr)
static inline void store_idt(struct desc_ptr *dtr)
static inline unsigned long paravirt_store_tr(void)
#define store_tr(tr)	((tr) = paravirt_store_tr())
static inline void load_TLS(struct thread_struct *t, unsigned cpu)
static inline void load_gs_index(unsigned int gs)
static inline void write_ldt_entry(struct desc_struct *dt, int entry,
const void *desc)
static inline void write_gdt_entry(struct desc_struct *dt, int entry,
void *desc, int type)
static inline void write_idt_entry(gate_desc *dt, int entry, const gate_desc *g)
static inline void set_iopl_mask(unsigned mask)
static inline void slow_down_io(void)
static inline void startup_ipi_hook(int phys_apicid, unsigned long start_eip,
unsigned long start_esp)
static inline void paravirt_activate_mm(struct mm_struct *prev,
struct mm_struct *next)
static inline void arch_dup_mmap(struct mm_struct *oldmm,
struct mm_struct *mm)
static inline void arch_exit_mmap(struct mm_struct *mm)
static inline void __flush_tlb(void)
static inline void __flush_tlb_global(void)
static inline void __flush_tlb_single(unsigned long addr)
static inline void flush_tlb_others(const struct cpumask *cpumask,
struct mm_struct *mm,
unsigned long va)
static inline int paravirt_pgd_alloc(struct mm_struct *mm)
static inline void paravirt_pgd_free(struct mm_struct *mm, pgd_t *pgd)
static inline void paravirt_alloc_pte(struct mm_struct *mm, unsigned long pfn)
static inline void paravirt_release_pte(unsigned long pfn)
static inline void paravirt_alloc_pmd(struct mm_struct *mm, unsigned long pfn)
static inline void paravirt_release_pmd(unsigned long pfn)
static inline void paravirt_alloc_pud(struct mm_struct *mm, unsigned long pfn)
static inline void paravirt_release_pud(unsigned long pfn)
static inline void pte_update(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static inline void pmd_update(struct mm_struct *mm, unsigned long addr,
pmd_t *pmdp)
static inline void pte_update_defer(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static inline void pmd_update_defer(struct mm_struct *mm, unsigned long addr,
pmd_t *pmdp)
static inline pte_t __pte(pteval_t val)
static inline pteval_t pte_val(pte_t pte)
static inline pgd_t __pgd(pgdval_t val)
static inline pgdval_t pgd_val(pgd_t pgd)
#define  __HAVE_ARCH_PTEP_MODIFY_PROT_TRANSACTION
static inline pte_t ptep_modify_prot_start(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static inline void ptep_modify_prot_commit(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte)
static inline void set_pte(pte_t *ptep, pte_t pte)
static inline void set_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte)
static inline void set_pmd_at(struct mm_struct *mm, unsigned long addr,
pmd_t *pmdp, pmd_t pmd)
static inline void set_pmd(pmd_t *pmdp, pmd_t pmd)
#if PAGETABLE_LEVELS >= 3
static inline pmd_t __pmd(pmdval_t val)
static inline pmdval_t pmd_val(pmd_t pmd)
static inline void set_pud(pud_t *pudp, pud_t pud)
#if PAGETABLE_LEVELS == 4
static inline pud_t __pud(pudval_t val)
static inline pudval_t pud_val(pud_t pud)
static inline void set_pgd(pgd_t *pgdp, pgd_t pgd)
static inline void pgd_clear(pgd_t *pgdp)
static inline void pud_clear(pud_t *pudp)
static inline void set_pte_atomic(pte_t *ptep, pte_t pte)
static inline void pte_clear(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static inline void pmd_clear(pmd_t *pmdp)
static inline void set_pte_atomic(pte_t *ptep, pte_t pte)
static inline void pte_clear(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static inline void pmd_clear(pmd_t *pmdp)
#define  __HAVE_ARCH_START_CONTEXT_SWITCH
static inline void arch_start_context_switch(struct task_struct *prev)
static inline void arch_end_context_switch(struct task_struct *next)
#define  __HAVE_ARCH_ENTER_LAZY_MMU_MODE
static inline void arch_enter_lazy_mmu_mode(void)
static inline void arch_leave_lazy_mmu_mode(void)
void arch_flush_lazy_mmu_mode(void);
static inline void __set_fixmap(unsigned idx,
phys_addr_t phys, pgprot_t flags)
#if defined(CONFIG_SMP) && defined(CONFIG_PARAVIRT_SPINLOCKS)
static inline int arch_spin_is_locked(struct arch_spinlock *lock)
static inline int arch_spin_is_contended(struct arch_spinlock *lock)
#define arch_spin_is_contended	arch_spin_is_contended
static __always_inline void arch_spin_lock(struct arch_spinlock *lock)
static __always_inline void arch_spin_lock_flags(struct arch_spinlock *lock,
unsigned long flags)
static __always_inline int arch_spin_trylock(struct arch_spinlock *lock)
static __always_inline void arch_spin_unlock(struct arch_spinlock *lock)
#define PV_SAVE_REGS "pushl %ecx; pushl %edx;"
#define PV_RESTORE_REGS "popl %edx; popl %ecx;"
#define PV_SAVE_ALL_CALLER_REGS		"pushl %ecx;"
#define PV_RESTORE_ALL_CALLER_REGS	"popl  %ecx;"
#define PV_FLAGS_ARG "0"
#define PV_EXTRA_CLOBBERS
#define PV_VEXTRA_CLOBBERS
#define PV_SAVE_ALL_CALLER_REGS						\
"push %rcx;"							\
"push %rdx;"							\
"push %rsi;"							\
"push %rdi;"							\
"push %r8;"							\
"push %r9;"							\
"push %r10;"							\
"push %r11;"
#define PV_RESTORE_ALL_CALLER_REGS					\
"pop %r11;"							\
"pop %r10;"							\
"pop %r9;"							\
"pop %r8;"							\
"pop %rdi;"							\
"pop %rsi;"							\
"pop %rdx;"							\
"pop %rcx;"
#define PV_SAVE_REGS "pushq %%rdi;"
#define PV_RESTORE_REGS "popq %%rdi;"
#define PV_EXTRA_CLOBBERS EXTRA_CLOBBERS, "rcx" , "rdx", "rsi"
#define PV_VEXTRA_CLOBBERS EXTRA_CLOBBERS, "rdi", "rcx" , "rdx", "rsi"
#define PV_FLAGS_ARG "D"
#define PV_CALLEE_SAVE_REGS_THUNK(func)					\
extern typeof(func) __raw_callee_save_##func;			\
static void *__##func##__ __used = func;			\
\
asm(".pushsection .text;"					\
"__raw_callee_save_" #func ": "				\
PV_SAVE_ALL_CALLER_REGS					\
"call " #func ";"						\
PV_RESTORE_ALL_CALLER_REGS					\
"ret;"							\
".popsection")
#define PV_CALLEE_SAVE(func)						\
((struct paravirt_callee_save) )
#define __PV_IS_CALLEE_SAVE(func)			\
((struct paravirt_callee_save) )
static inline notrace unsigned long arch_local_save_flags(void)
static inline notrace void arch_local_irq_restore(unsigned long f)
static inline notrace void arch_local_irq_disable(void)
static inline notrace void arch_local_irq_enable(void)
static inline notrace unsigned long arch_local_irq_save(void)
#undef PARAVIRT_CALL
#undef __PVOP_CALL
#undef __PVOP_VCALL
#undef PVOP_VCALL0
#undef PVOP_CALL0
#undef PVOP_VCALL1
#undef PVOP_CALL1
#undef PVOP_VCALL2
#undef PVOP_CALL2
#undef PVOP_VCALL3
#undef PVOP_CALL3
#undef PVOP_VCALL4
#undef PVOP_CALL4
extern void default_banner(void);
#define _PVSITE(ptype, clobbers, ops, word, algn)	\
771:;						\
ops;					\
772:;						\
.pushsection .parainstructions,"a";	\
.align	algn;				\
word 771b;				\
.byte ptype;				\
.byte 772b-771b;			\
.short clobbers;			\
.popsection
#define COND_PUSH(set, mask, reg)			\
.if ((~(set)) & mask); push %reg; .endif
#define COND_POP(set, mask, reg)			\
.if ((~(set)) & mask); pop %reg; .endif
#define PV_SAVE_REGS(set)			\
COND_PUSH(set, CLBR_RAX, rax);		\
COND_PUSH(set, CLBR_RCX, rcx);		\
COND_PUSH(set, CLBR_RDX, rdx);		\
COND_PUSH(set, CLBR_RSI, rsi);		\
COND_PUSH(set, CLBR_RDI, rdi);		\
COND_PUSH(set, CLBR_R8, r8);		\
COND_PUSH(set, CLBR_R9, r9);		\
COND_PUSH(set, CLBR_R10, r10);		\
COND_PUSH(set, CLBR_R11, r11)
#define PV_RESTORE_REGS(set)			\
COND_POP(set, CLBR_R11, r11);		\
COND_POP(set, CLBR_R10, r10);		\
COND_POP(set, CLBR_R9, r9);		\
COND_POP(set, CLBR_R8, r8);		\
COND_POP(set, CLBR_RDI, rdi);		\
COND_POP(set, CLBR_RSI, rsi);		\
COND_POP(set, CLBR_RDX, rdx);		\
COND_POP(set, CLBR_RCX, rcx);		\
COND_POP(set, CLBR_RAX, rax)
#define PARA_PATCH(struct, off)        ((PARAVIRT_PATCH_##struct + (off)) / 8)
#define PARA_SITE(ptype, clobbers, ops) _PVSITE(ptype, clobbers, ops, .quad, 8)
#define PARA_INDIRECT(addr)	*addr(%rip)
#define PV_SAVE_REGS(set)			\
COND_PUSH(set, CLBR_EAX, eax);		\
COND_PUSH(set, CLBR_EDI, edi);		\
COND_PUSH(set, CLBR_ECX, ecx);		\
COND_PUSH(set, CLBR_EDX, edx)
#define PV_RESTORE_REGS(set)			\
COND_POP(set, CLBR_EDX, edx);		\
COND_POP(set, CLBR_ECX, ecx);		\
COND_POP(set, CLBR_EDI, edi);		\
COND_POP(set, CLBR_EAX, eax)
#define PARA_PATCH(struct, off)        ((PARAVIRT_PATCH_##struct + (off)) / 4)
#define PARA_SITE(ptype, clobbers, ops) _PVSITE(ptype, clobbers, ops, .long, 4)
#define PARA_INDIRECT(addr)	*%cs:addr
#define INTERRUPT_RETURN						\
PARA_SITE(PARA_PATCH(pv_cpu_ops, PV_CPU_iret), CLBR_NONE,	\
jmp PARA_INDIRECT(pv_cpu_ops+PV_CPU_iret))
#define DISABLE_INTERRUPTS(clobbers)					\
PARA_SITE(PARA_PATCH(pv_irq_ops, PV_IRQ_irq_disable), clobbers, \
PV_SAVE_REGS(clobbers | CLBR_CALLEE_SAVE);		\
call PARA_INDIRECT(pv_irq_ops+PV_IRQ_irq_disable);	\
PV_RESTORE_REGS(clobbers | CLBR_CALLEE_SAVE);)
#define ENABLE_INTERRUPTS(clobbers)					\
PARA_SITE(PARA_PATCH(pv_irq_ops, PV_IRQ_irq_enable), clobbers,	\
PV_SAVE_REGS(clobbers | CLBR_CALLEE_SAVE);		\
call PARA_INDIRECT(pv_irq_ops+PV_IRQ_irq_enable);	\
PV_RESTORE_REGS(clobbers | CLBR_CALLEE_SAVE);)
#define USERGS_SYSRET32							\
PARA_SITE(PARA_PATCH(pv_cpu_ops, PV_CPU_usergs_sysret32),	\
CLBR_NONE,						\
jmp PARA_INDIRECT(pv_cpu_ops+PV_CPU_usergs_sysret32))
#define GET_CR0_INTO_EAX				\
push %ecx; push %edx;				\
call PARA_INDIRECT(pv_cpu_ops+PV_CPU_read_cr0);	\
pop %edx; pop %ecx
#define ENABLE_INTERRUPTS_SYSEXIT					\
PARA_SITE(PARA_PATCH(pv_cpu_ops, PV_CPU_irq_enable_sysexit),	\
CLBR_NONE,						\
jmp PARA_INDIRECT(pv_cpu_ops+PV_CPU_irq_enable_sysexit))
#define SWAPGS_UNSAFE_STACK						\
PARA_SITE(PARA_PATCH(pv_cpu_ops, PV_CPU_swapgs), CLBR_NONE,	\
swapgs)
#define SWAPGS								\
PARA_SITE(PARA_PATCH(pv_cpu_ops, PV_CPU_swapgs), CLBR_NONE,	\
call PARA_INDIRECT(pv_cpu_ops+PV_CPU_swapgs)		\
)
#define GET_CR2_INTO_RCX				\
call PARA_INDIRECT(pv_mmu_ops+PV_MMU_read_cr2);	\
movq %rax, %rcx;				\
xorq %rax, %rax;
#define PARAVIRT_ADJUST_EXCEPTION_FRAME					\
PARA_SITE(PARA_PATCH(pv_irq_ops, PV_IRQ_adjust_exception_frame), \
CLBR_NONE,						\
call PARA_INDIRECT(pv_irq_ops+PV_IRQ_adjust_exception_frame))
#define USERGS_SYSRET64							\
PARA_SITE(PARA_PATCH(pv_cpu_ops, PV_CPU_usergs_sysret64),	\
CLBR_NONE,						\
jmp PARA_INDIRECT(pv_cpu_ops+PV_CPU_usergs_sysret64))
#define ENABLE_INTERRUPTS_SYSEXIT32					\
PARA_SITE(PARA_PATCH(pv_cpu_ops, PV_CPU_irq_enable_sysexit),	\
CLBR_NONE,						\
jmp PARA_INDIRECT(pv_cpu_ops+PV_CPU_irq_enable_sysexit))
# define default_banner x86_init_noop
