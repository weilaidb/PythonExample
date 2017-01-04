#define _ASMARM_TLBFLUSH_H
#define TLB_V3_PAGE	(1 << 0)
#define TLB_V4_U_PAGE	(1 << 1)
#define TLB_V4_D_PAGE	(1 << 2)
#define TLB_V4_I_PAGE	(1 << 3)
#define TLB_V6_U_PAGE	(1 << 4)
#define TLB_V6_D_PAGE	(1 << 5)
#define TLB_V6_I_PAGE	(1 << 6)
#define TLB_V3_FULL	(1 << 8)
#define TLB_V4_U_FULL	(1 << 9)
#define TLB_V4_D_FULL	(1 << 10)
#define TLB_V4_I_FULL	(1 << 11)
#define TLB_V6_U_FULL	(1 << 12)
#define TLB_V6_D_FULL	(1 << 13)
#define TLB_V6_I_FULL	(1 << 14)
#define TLB_V6_U_ASID	(1 << 16)
#define TLB_V6_D_ASID	(1 << 17)
#define TLB_V6_I_ASID	(1 << 18)
#define TLB_BTB		(1 << 28)
#define TLB_V7_UIS_PAGE	(1 << 19)
#define TLB_V7_UIS_FULL (1 << 20)
#define TLB_V7_UIS_ASID (1 << 21)
#define TLB_V7_IS_BTB	(1 << 22)
#define TLB_L2CLEAN_FR	(1 << 29)
#define TLB_DCLEAN	(1 << 30)
#define TLB_WB		(1 << 31)
#undef _TLB
#undef MULTI_TLB
#define MULTI_TLB 1
#define v3_tlb_flags	(TLB_V3_FULL | TLB_V3_PAGE)
# define v3_possible_flags	v3_tlb_flags
# define v3_always_flags	v3_tlb_flags
# ifdef _TLB
#  define MULTI_TLB 1
# else
#  define _TLB v3
# endif
# define v3_possible_flags	0
# define v3_always_flags	(-1UL)
#define v4_tlb_flags	(TLB_V4_U_FULL | TLB_V4_U_PAGE)
# define v4_possible_flags	v4_tlb_flags
# define v4_always_flags	v4_tlb_flags
# ifdef _TLB
#  define MULTI_TLB 1
# else
#  define _TLB v4
# endif
# define v4_possible_flags	0
# define v4_always_flags	(-1UL)
#define fa_tlb_flags	(TLB_WB | TLB_BTB | TLB_DCLEAN | \
TLB_V4_U_FULL | TLB_V4_U_PAGE)
# define fa_possible_flags	fa_tlb_flags
# define fa_always_flags	fa_tlb_flags
# ifdef _TLB
#  define MULTI_TLB 1
# else
#  define _TLB fa
# endif
# define fa_possible_flags	0
# define fa_always_flags	(-1UL)
#define v4wbi_tlb_flags	(TLB_WB | TLB_DCLEAN | \
TLB_V4_I_FULL | TLB_V4_D_FULL | \
TLB_V4_I_PAGE | TLB_V4_D_PAGE)
# define v4wbi_possible_flags	v4wbi_tlb_flags
# define v4wbi_always_flags	v4wbi_tlb_flags
# ifdef _TLB
#  define MULTI_TLB 1
# else
#  define _TLB v4wbi
# endif
# define v4wbi_possible_flags	0
# define v4wbi_always_flags	(-1UL)
#define fr_tlb_flags	(TLB_WB | TLB_DCLEAN | TLB_L2CLEAN_FR | \
TLB_V4_I_FULL | TLB_V4_D_FULL | \
TLB_V4_I_PAGE | TLB_V4_D_PAGE)
# define fr_possible_flags	fr_tlb_flags
# define fr_always_flags	fr_tlb_flags
# ifdef _TLB
#  define MULTI_TLB 1
# else
#  define _TLB v4wbi
# endif
# define fr_possible_flags	0
# define fr_always_flags	(-1UL)
#define v4wb_tlb_flags	(TLB_WB | TLB_DCLEAN | \
TLB_V4_I_FULL | TLB_V4_D_FULL | \
TLB_V4_D_PAGE)
# define v4wb_possible_flags	v4wb_tlb_flags
# define v4wb_always_flags	v4wb_tlb_flags
# ifdef _TLB
#  define MULTI_TLB 1
# else
#  define _TLB v4wb
# endif
# define v4wb_possible_flags	0
# define v4wb_always_flags	(-1UL)
#define v6wbi_tlb_flags (TLB_WB | TLB_DCLEAN | TLB_BTB | \
TLB_V6_I_FULL | TLB_V6_D_FULL | \
TLB_V6_I_PAGE | TLB_V6_D_PAGE | \
TLB_V6_I_ASID | TLB_V6_D_ASID)
# define v6wbi_possible_flags	v6wbi_tlb_flags
# define v6wbi_always_flags	v6wbi_tlb_flags
# ifdef _TLB
#  define MULTI_TLB 1
# else
#  define _TLB v6wbi
# endif
# define v6wbi_possible_flags	0
# define v6wbi_always_flags	(-1UL)
#define v7wbi_tlb_flags_smp	(TLB_WB | TLB_DCLEAN | TLB_V7_IS_BTB | \
TLB_V7_UIS_FULL | TLB_V7_UIS_PAGE | TLB_V7_UIS_ASID)
#define v7wbi_tlb_flags_up	(TLB_WB | TLB_DCLEAN | TLB_BTB | \
TLB_V6_U_FULL | TLB_V6_U_PAGE | TLB_V6_U_ASID)
# ifdef CONFIG_SMP_ON_UP
#  define v7wbi_possible_flags	(v7wbi_tlb_flags_smp | v7wbi_tlb_flags_up)
#  define v7wbi_always_flags	(v7wbi_tlb_flags_smp & v7wbi_tlb_flags_up)
# elif defined(CONFIG_SMP)
#  define v7wbi_possible_flags	v7wbi_tlb_flags_smp
#  define v7wbi_always_flags	v7wbi_tlb_flags_smp
# else
#  define v7wbi_possible_flags	v7wbi_tlb_flags_up
#  define v7wbi_always_flags	v7wbi_tlb_flags_up
# endif
# ifdef _TLB
#  define MULTI_TLB 1
# else
#  define _TLB v7wbi
# endif
# define v7wbi_possible_flags	0
# define v7wbi_always_flags	(-1UL)
#error Unknown TLB model
struct cpu_tlb_fns ;
#define __cpu_flush_user_tlb_range	cpu_tlb.flush_user_range
#define __cpu_flush_kern_tlb_range	cpu_tlb.flush_kern_range
#define __cpu_flush_user_tlb_range	__glue(_TLB,_flush_user_tlb_range)
#define __cpu_flush_kern_tlb_range	__glue(_TLB,_flush_kern_tlb_range)
extern void __cpu_flush_user_tlb_range(unsigned long, unsigned long, struct vm_area_struct *);
extern void __cpu_flush_kern_tlb_range(unsigned long, unsigned long);
extern struct cpu_tlb_fns cpu_tlb;
#define __cpu_tlb_flags			cpu_tlb.tlb_flags
#define possible_tlb_flags	(v3_possible_flags | \
v4_possible_flags | \
v4wbi_possible_flags | \
fr_possible_flags | \
v4wb_possible_flags | \
fa_possible_flags | \
v6wbi_possible_flags | \
v7wbi_possible_flags)
#define always_tlb_flags	(v3_always_flags & \
v4_always_flags & \
v4wbi_always_flags & \
fr_always_flags & \
v4wb_always_flags & \
fa_always_flags & \
v6wbi_always_flags & \
v7wbi_always_flags)
#define tlb_flag(f)	((always_tlb_flags & (f)) || (__tlb_flag & possible_tlb_flags & (f)))
static inline void local_flush_tlb_all(void)
static inline void local_flush_tlb_mm(struct mm_struct *mm)
static inline void
local_flush_tlb_page(struct vm_area_struct *vma, unsigned long uaddr)
static inline void local_flush_tlb_kernel_page(unsigned long kaddr)
static inline void flush_pmd_entry(pmd_t *pmd)
static inline void clean_pmd_entry(pmd_t *pmd)
#undef tlb_flag
#undef always_tlb_flags
#undef possible_tlb_flags
#define local_flush_tlb_range(vma,start,end)	__cpu_flush_user_tlb_range(start,end,vma)
#define local_flush_tlb_kernel_range(s,e)	__cpu_flush_kern_tlb_range(s,e)
#define flush_tlb_all		local_flush_tlb_all
#define flush_tlb_mm		local_flush_tlb_mm
#define flush_tlb_page		local_flush_tlb_page
#define flush_tlb_kernel_page	local_flush_tlb_kernel_page
#define flush_tlb_range		local_flush_tlb_range
#define flush_tlb_kernel_range	local_flush_tlb_kernel_range
extern void flush_tlb_all(void);
extern void flush_tlb_mm(struct mm_struct *mm);
extern void flush_tlb_page(struct vm_area_struct *vma, unsigned long uaddr);
extern void flush_tlb_kernel_page(unsigned long kaddr);
extern void flush_tlb_range(struct vm_area_struct *vma, unsigned long start, unsigned long end);
extern void flush_tlb_kernel_range(unsigned long start, unsigned long end);
#if __LINUX_ARM_ARCH__ < 6
extern void update_mmu_cache(struct vm_area_struct *vma, unsigned long addr,
pte_t *ptep);
static inline void update_mmu_cache(struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep)
