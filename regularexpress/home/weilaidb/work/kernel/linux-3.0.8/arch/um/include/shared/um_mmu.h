#define __ARCH_UM_MMU_H
typedef struct mm_context  mm_context_t;
extern void __switch_mm(struct mm_id * mm_idp);
extern long init_new_ldt(struct mm_context *to_mm, struct mm_context *from_mm);
extern void free_ldt(struct mm_context *mm);
