#define _ASM_SCORE_TLBFLUSH_H
extern void local_flush_tlb_all(void);
extern void local_flush_tlb_mm(struct mm_struct *mm);
extern void local_flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end);
extern void local_flush_tlb_kernel_range(unsigned long start,
unsigned long end);
extern void local_flush_tlb_page(struct vm_area_struct *vma,
unsigned long page);
extern void local_flush_tlb_one(unsigned long vaddr);
#define flush_tlb_all()			local_flush_tlb_all()
#define flush_tlb_mm(mm)		local_flush_tlb_mm(mm)
#define flush_tlb_range(vma, vmaddr, end) \
local_flush_tlb_range(vma, vmaddr, end)
#define flush_tlb_kernel_range(vmaddr, end) \
local_flush_tlb_kernel_range(vmaddr, end)
#define flush_tlb_page(vma, page)	local_flush_tlb_page(vma, page)
#define flush_tlb_one(vaddr)		local_flush_tlb_one(vaddr)
static inline unsigned long pevn_get(void)
static inline void pevn_set(unsigned long val)
static inline void pectx_set(unsigned long val)
static inline unsigned long pectx_get(void)
static inline unsigned long tlblock_get(void)
static inline void tlblock_set(unsigned long val)
static inline void tlbpt_set(unsigned long val)
static inline long tlbpt_get(void)
static inline void peaddr_set(unsigned long val)
static inline void tlb_probe(void)
static inline void tlb_read(void)
static inline void tlb_write_indexed(void)
static inline void tlb_write_random(void)
