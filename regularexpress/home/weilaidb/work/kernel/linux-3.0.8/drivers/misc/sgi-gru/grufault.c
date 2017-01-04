#define VTOP_SUCCESS               0
#define VTOP_INVALID               -1
#define VTOP_RETRY                 -2
static inline int is_gru_paddr(unsigned long paddr)
struct vm_area_struct *gru_find_vma(unsigned long vaddr)
static struct gru_thread_state *gru_find_lock_gts(unsigned long vaddr)
static struct gru_thread_state *gru_alloc_locked_gts(unsigned long vaddr)
static void gru_unlock_gts(struct gru_thread_state *gts)
static void gru_cb_set_istatus_active(struct gru_instruction_bits *cbk)
static void get_clear_fault_map(struct gru_state *gru,
struct gru_tlb_fault_map *imap,
struct gru_tlb_fault_map *dmap)
static int non_atomic_pte_lookup(struct vm_area_struct *vma,
unsigned long vaddr, int write,
unsigned long *paddr, int *pageshift)
static int atomic_pte_lookup(struct vm_area_struct *vma, unsigned long vaddr,
int write, unsigned long *paddr, int *pageshift)
static int gru_vtop(struct gru_thread_state *gts, unsigned long vaddr,
int write, int atomic, unsigned long *gpa, int *pageshift)
static void gru_flush_cache_cbe(struct gru_control_block_extended *cbe)
static void gru_preload_tlb(struct gru_state *gru,
struct gru_thread_state *gts, int atomic,
unsigned long fault_vaddr, int asid, int write,
unsigned char tlb_preload_count,
struct gru_tlb_fault_handle *tfh,
struct gru_control_block_extended *cbe)
static int gru_try_dropin(struct gru_state *gru,
struct gru_thread_state *gts,
struct gru_tlb_fault_handle *tfh,
struct gru_instruction_bits *cbk)
static irqreturn_t gru_intr(int chiplet, int blade)
irqreturn_t gru0_intr(int irq, void *dev_id)
irqreturn_t gru1_intr(int irq, void *dev_id)
irqreturn_t gru_intr_mblade(int irq, void *dev_id)
static int gru_user_dropin(struct gru_thread_state *gts,
struct gru_tlb_fault_handle *tfh,
void *cb)
int gru_handle_user_call_os(unsigned long cb)
int gru_get_exception_detail(unsigned long arg)
static int gru_unload_all_contexts(void)
int gru_user_unload_context(unsigned long arg)
int gru_user_flush_tlb(unsigned long arg)
long gru_get_gseg_statistics(unsigned long arg)
int gru_set_context_option(unsigned long arg)
