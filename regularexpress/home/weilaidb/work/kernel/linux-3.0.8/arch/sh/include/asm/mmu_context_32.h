#define __ASM_SH_MMU_CONTEXT_32_H
static inline void destroy_context(struct mm_struct *mm)
static inline void set_asid(unsigned long asid)
static inline unsigned long get_asid(void)
static inline void set_asid(unsigned long asid)
static inline unsigned long get_asid(void)
static inline void set_TTB(pgd_t *pgd)
static inline pgd_t *get_TTB(void)
