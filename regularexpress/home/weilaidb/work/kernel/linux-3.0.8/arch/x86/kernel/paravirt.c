void _paravirt_nop(void)
u32 _paravirt_ident_32(u32 x)
u64 _paravirt_ident_64(u64 x)
void __init default_banner(void)
#define DEF_NATIVE(ops, name, code)					\
extern const char start_##ops##_##name[], end_##ops##_##name[];	\
asm("start_" #ops "_" #name ": " code "; end_" #ops "_" #name ":")
static const unsigned char ud2a[] = ;
unsigned paravirt_patch_nop(void)
unsigned paravirt_patch_ignore(unsigned len)
struct branch  __attribute__((packed));
unsigned paravirt_patch_call(void *insnbuf,
const void *target, u16 tgt_clobbers,
unsigned long addr, u16 site_clobbers,
unsigned len)
unsigned paravirt_patch_jmp(void *insnbuf, const void *target,
unsigned long addr, unsigned len)
static void *get_call_destination(u8 type)
unsigned paravirt_patch_default(u8 type, u16 clobbers, void *insnbuf,
unsigned long addr, unsigned len)
unsigned paravirt_patch_insns(void *insnbuf, unsigned len,
const char *start, const char *end)
static void native_flush_tlb(void)
static void native_flush_tlb_global(void)
static void native_flush_tlb_single(unsigned long addr)
extern void native_iret(void);
extern void native_irq_enable_sysexit(void);
extern void native_usergs_sysret32(void);
extern void native_usergs_sysret64(void);
static struct resource reserve_ioports = ;
int paravirt_disable_iospace(void)
static DEFINE_PER_CPU(enum paravirt_lazy_mode, paravirt_lazy_mode) = PARAVIRT_LAZY_NONE;
static inline void enter_lazy(enum paravirt_lazy_mode mode)
static void leave_lazy(enum paravirt_lazy_mode mode)
void paravirt_enter_lazy_mmu(void)
void paravirt_leave_lazy_mmu(void)
void paravirt_start_context_switch(struct task_struct *prev)
void paravirt_end_context_switch(struct task_struct *next)
enum paravirt_lazy_mode paravirt_get_lazy_mode(void)
void arch_flush_lazy_mmu_mode(void)
struct pv_info pv_info = ;
struct pv_init_ops pv_init_ops = ;
struct pv_time_ops pv_time_ops = ;
struct pv_irq_ops pv_irq_ops = ;
struct pv_cpu_ops pv_cpu_ops = ;
struct pv_apic_ops pv_apic_ops = ;
#if defined(CONFIG_X86_32) && !defined(CONFIG_X86_PAE)
#define PTE_IDENT	__PV_IS_CALLEE_SAVE(_paravirt_ident_32)
#define PTE_IDENT	__PV_IS_CALLEE_SAVE(_paravirt_ident_64)
struct pv_mmu_ops pv_mmu_ops = ;
EXPORT_SYMBOL_GPL(pv_time_ops);
EXPORT_SYMBOL    (pv_cpu_ops);
EXPORT_SYMBOL    (pv_mmu_ops);
EXPORT_SYMBOL_GPL(pv_apic_ops);
EXPORT_SYMBOL_GPL(pv_info);
EXPORT_SYMBOL    (pv_irq_ops);
