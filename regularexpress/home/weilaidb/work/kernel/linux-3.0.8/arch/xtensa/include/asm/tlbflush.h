#define _XTENSA_TLBFLUSH_H
#define DTLB_WAY_PGD	7
#define ITLB_ARF_WAYS	4
#define DTLB_ARF_WAYS	4
#define ITLB_HIT_BIT	3
#define DTLB_HIT_BIT	4
extern void flush_tlb_all(void);
extern void flush_tlb_mm(struct mm_struct*);
extern void flush_tlb_page(struct vm_area_struct*,unsigned long);
extern void flush_tlb_range(struct vm_area_struct*,unsigned long,unsigned long);
#define flush_tlb_kernel_range(start,end) flush_tlb_all()
static inline unsigned long itlb_probe(unsigned long addr)
static inline unsigned long dtlb_probe(unsigned long addr)
static inline void invalidate_itlb_entry (unsigned long probe)
static inline void invalidate_dtlb_entry (unsigned long probe)
static inline void invalidate_itlb_entry_no_isync (unsigned entry)
static inline void invalidate_dtlb_entry_no_isync (unsigned entry)
static inline void set_itlbcfg_register (unsigned long val)
static inline void set_dtlbcfg_register (unsigned long val)
static inline void set_ptevaddr_register (unsigned long val)
static inline unsigned long read_ptevaddr_register (void)
static inline void write_dtlb_entry (pte_t entry, int way)
static inline void write_itlb_entry (pte_t entry, int way)
static inline void invalidate_page_directory (void)
static inline void invalidate_itlb_mapping (unsigned address)
static inline void invalidate_dtlb_mapping (unsigned address)
#define check_pgt_cache()	do  while (0)
static inline unsigned long read_dtlb_virtual (int way)
static inline unsigned long read_dtlb_translation (int way)
static inline unsigned long read_itlb_virtual (int way)
static inline unsigned long read_itlb_translation (int way)
