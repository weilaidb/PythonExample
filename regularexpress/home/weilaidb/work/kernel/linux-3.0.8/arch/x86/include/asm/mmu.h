#define _ASM_X86_MMU_H
typedef struct  mm_context_t;
void leave_mm(int cpu);
static inline void leave_mm(int cpu)
