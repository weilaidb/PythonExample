#define _ASM_TILE_MMU_H
struct mm_context ;
typedef struct mm_context mm_context_t;
void leave_mm(int cpu);
