#define D(x)
struct mm_struct *page_id_map[NUM_PAGEID];
static int map_replace_ptr = 1;
static inline void
alloc_context(struct mm_struct *mm)
void
get_mmu_context(struct mm_struct *mm)
void
destroy_context(struct mm_struct *mm)
void __init
tlb_init(void)
