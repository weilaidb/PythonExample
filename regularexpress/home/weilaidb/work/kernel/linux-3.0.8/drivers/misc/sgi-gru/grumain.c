unsigned long gru_options __read_mostly;
static struct device_driver gru_driver = ;
static struct device gru_device = ;
struct device *grudev = &gru_device;
int gru_cpu_fault_map_id(void)
static int gru_wrap_asid(struct gru_state *gru)
static int gru_reset_asid_limit(struct gru_state *gru, int asid)
static int gru_assign_asid(struct gru_state *gru)
static unsigned long reserve_resources(unsigned long *p, int n, int mmax,
char *idx)
unsigned long gru_reserve_cb_resources(struct gru_state *gru, int cbr_au_count,
char *cbmap)
unsigned long gru_reserve_ds_resources(struct gru_state *gru, int dsr_au_count,
char *dsmap)
static void reserve_gru_resources(struct gru_state *gru,
struct gru_thread_state *gts)
static void free_gru_resources(struct gru_state *gru,
struct gru_thread_state *gts)
static int check_gru_resources(struct gru_state *gru, int cbr_au_count,
int dsr_au_count, int max_active_contexts)
static int gru_load_mm_tracker(struct gru_state *gru,
struct gru_thread_state *gts)
static void gru_unload_mm_tracker(struct gru_state *gru,
struct gru_thread_state *gts)
void gts_drop(struct gru_thread_state *gts)
static struct gru_thread_state *gru_find_current_gts_nolock(struct gru_vma_data
*vdata, int tsid)
struct gru_thread_state *gru_alloc_gts(struct vm_area_struct *vma,
int cbr_au_count, int dsr_au_count,
unsigned char tlb_preload_count, int options, int tsid)
struct gru_vma_data *gru_alloc_vma_data(struct vm_area_struct *vma, int tsid)
struct gru_thread_state *gru_find_thread_state(struct vm_area_struct *vma,
int tsid)
struct gru_thread_state *gru_alloc_thread_state(struct vm_area_struct *vma,
int tsid)
static void gru_free_gru_context(struct gru_thread_state *gts)
static void prefetch_data(void *p, int num, int stride)
static inline long gru_copy_handle(void *d, void *s)
static void gru_prefetch_context(void *gseg, void *cb, void *cbe,
unsigned long cbrmap, unsigned long length)
static void gru_load_context_data(void *save, void *grubase, int ctxnum,
unsigned long cbrmap, unsigned long dsrmap,
int data_valid)
static void gru_unload_context_data(void *save, void *grubase, int ctxnum,
unsigned long cbrmap, unsigned long dsrmap)
void gru_unload_context(struct gru_thread_state *gts, int savestate)
void gru_load_context(struct gru_thread_state *gts)
int gru_update_cch(struct gru_thread_state *gts)
static int gru_retarget_intr(struct gru_thread_state *gts)
static int gru_check_chiplet_assignment(struct gru_state *gru,
struct gru_thread_state *gts)
void gru_check_context_placement(struct gru_thread_state *gts)
#define next_ctxnum(n)	((n) <  GRU_NUM_CCH - 2 ? (n) + 1 : 0)
#define next_gru(b, g)	(((g) < &(b)->bs_grus[GRU_CHIPLETS_PER_BLADE - 1]) ?  \
((g)+1) : &(b)->bs_grus[0])
static int is_gts_stealable(struct gru_thread_state *gts,
struct gru_blade_state *bs)
static void gts_stolen(struct gru_thread_state *gts,
struct gru_blade_state *bs)
void gru_steal_context(struct gru_thread_state *gts)
static int gru_assign_context_number(struct gru_state *gru)
struct gru_state *gru_assign_gru_context(struct gru_thread_state *gts)
int gru_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
