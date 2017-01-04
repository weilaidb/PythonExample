#define _ALPHA_TLBFLUSH_H
#define __EXTERN_INLINE extern inline
#define __MMU_EXTERN_INLINE
extern void __load_new_mm_context(struct mm_struct *);
__EXTERN_INLINE void
ev4_flush_tlb_current(struct mm_struct *mm)
__EXTERN_INLINE void
ev5_flush_tlb_current(struct mm_struct *mm)
__EXTERN_INLINE void
ev4_flush_tlb_current_page(struct mm_struct * mm,
struct vm_area_struct *vma,
unsigned long addr)
__EXTERN_INLINE void
ev5_flush_tlb_current_page(struct mm_struct * mm,
struct vm_area_struct *vma,
unsigned long addr)
# define flush_tlb_current		alpha_mv.mv_flush_tlb_current
# define flush_tlb_current_page		alpha_mv.mv_flush_tlb_current_page
# ifdef CONFIG_ALPHA_EV4
#  define flush_tlb_current		ev4_flush_tlb_current
#  define flush_tlb_current_page	ev4_flush_tlb_current_page
# else
#  define flush_tlb_current		ev5_flush_tlb_current
#  define flush_tlb_current_page	ev5_flush_tlb_current_page
# endif
#undef __EXTERN_INLINE
#undef __MMU_EXTERN_INLINE
static inline void
flush_tlb(void)
static inline void
flush_tlb_other(struct mm_struct *mm)
static inline void flush_tlb_all(void)
static inline void
flush_tlb_mm(struct mm_struct *mm)
static inline void
flush_tlb_page(struct vm_area_struct *vma, unsigned long addr)
static inline void
flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
extern void flush_tlb_all(void);
extern void flush_tlb_mm(struct mm_struct *);
extern void flush_tlb_page(struct vm_area_struct *, unsigned long);
extern void flush_tlb_range(struct vm_area_struct *, unsigned long,
unsigned long);
static inline void flush_tlb_kernel_range(unsigned long start,
unsigned long end)
