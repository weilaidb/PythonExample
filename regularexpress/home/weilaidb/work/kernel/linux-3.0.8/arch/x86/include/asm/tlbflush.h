#define _ASM_X86_TLBFLUSH_H
#define __flush_tlb() __native_flush_tlb()
#define __flush_tlb_global() __native_flush_tlb_global()
#define __flush_tlb_single(addr) __native_flush_tlb_single(addr)
static inline void __native_flush_tlb(void)
static inline void __native_flush_tlb_global(void)
static inline void __native_flush_tlb_single(unsigned long addr)
static inline void __flush_tlb_all(void)
static inline void __flush_tlb_one(unsigned long addr)
# define TLB_FLUSH_ALL	0xffffffff
# define TLB_FLUSH_ALL	-1ULL
#define flush_tlb() __flush_tlb()
#define flush_tlb_all() __flush_tlb_all()
#define local_flush_tlb() __flush_tlb()
static inline void flush_tlb_mm(struct mm_struct *mm)
static inline void flush_tlb_page(struct vm_area_struct *vma,
unsigned long addr)
static inline void flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static inline void native_flush_tlb_others(const struct cpumask *cpumask,
struct mm_struct *mm,
unsigned long va)
static inline void reset_lazy_tlbstate(void)
#define local_flush_tlb() __flush_tlb()
extern void flush_tlb_all(void);
extern void flush_tlb_current_task(void);
extern void flush_tlb_mm(struct mm_struct *);
extern void flush_tlb_page(struct vm_area_struct *, unsigned long);
#define flush_tlb()	flush_tlb_current_task()
static inline void flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
void native_flush_tlb_others(const struct cpumask *cpumask,
struct mm_struct *mm, unsigned long va);
#define TLBSTATE_OK	1
#define TLBSTATE_LAZY	2
struct tlb_state ;
DECLARE_PER_CPU_SHARED_ALIGNED(struct tlb_state, cpu_tlbstate);
static inline void reset_lazy_tlbstate(void)
#define flush_tlb_others(mask, mm, va)	native_flush_tlb_others(mask, mm, va)
static inline void flush_tlb_kernel_range(unsigned long start,
unsigned long end)
