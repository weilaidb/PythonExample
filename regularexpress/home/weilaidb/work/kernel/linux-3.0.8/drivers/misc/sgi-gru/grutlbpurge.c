#define gru_random()	get_cycles()
static inline int get_off_blade_tgh(struct gru_state *gru)
static inline int get_on_blade_tgh(struct gru_state *gru)
static struct gru_tlb_global_handle *get_lock_tgh_handle(struct gru_state
*gru)
static void get_unlock_tgh_handle(struct gru_tlb_global_handle *tgh)
void gru_flush_tlb_range(struct gru_mm_struct *gms, unsigned long start,
unsigned long len)
void gru_flush_all_tlb(struct gru_state *gru)
static void gru_invalidate_range_start(struct mmu_notifier *mn,
struct mm_struct *mm,
unsigned long start, unsigned long end)
static void gru_invalidate_range_end(struct mmu_notifier *mn,
struct mm_struct *mm, unsigned long start,
unsigned long end)
static void gru_invalidate_page(struct mmu_notifier *mn, struct mm_struct *mm,
unsigned long address)
static void gru_release(struct mmu_notifier *mn, struct mm_struct *mm)
static const struct mmu_notifier_ops gru_mmuops = ;
static struct mmu_notifier *mmu_find_ops(struct mm_struct *mm,
const struct mmu_notifier_ops *ops)
struct gru_mm_struct *gru_register_mmu_notifier(void)
void gru_drop_mmu_notifier(struct gru_mm_struct *gms)
#define MAX_LOCAL_TGH	16
void gru_tgh_flush_init(struct gru_state *gru)
