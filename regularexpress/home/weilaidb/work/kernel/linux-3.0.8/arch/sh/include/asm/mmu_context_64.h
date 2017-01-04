#define __ASM_SH_MMU_CONTEXT_64_H
#define SR_ASID_MASK		0xffffffffff00ffffULL
#define SR_ASID_SHIFT		16
static inline void destroy_context(struct mm_struct *mm)
static inline unsigned long get_asid(void)
static inline void set_asid(unsigned long asid)
extern unsigned long switch_and_save_asid(unsigned long new_asid);
extern pgd_t *mmu_pdtp_cache;
#define set_TTB(pgd)	(mmu_pdtp_cache = (pgd))
#define get_TTB()	(mmu_pdtp_cache)
