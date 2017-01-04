#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct ehea_bmap *ehea_bmap = NULL;
static void *hw_qpageit_get_inc(struct hw_queue *queue)
static int hw_queue_ctor(struct hw_queue *queue, const u32 nr_of_pages,
const u32 pagesize, const u32 qe_size)
static void hw_queue_dtor(struct hw_queue *queue)
struct ehea_cq *ehea_create_cq(struct ehea_adapter *adapter,
int nr_of_cqe, u64 eq_handle, u32 cq_token)
u64 ehea_destroy_cq_res(struct ehea_cq *cq, u64 force)
int ehea_destroy_cq(struct ehea_cq *cq)
struct ehea_eq *ehea_create_eq(struct ehea_adapter *adapter,
const enum ehea_eq_type type,
const u32 max_nr_of_eqes, const u8 eqe_gen)
struct ehea_eqe *ehea_poll_eq(struct ehea_eq *eq)
u64 ehea_destroy_eq_res(struct ehea_eq *eq, u64 force)
int ehea_destroy_eq(struct ehea_eq *eq)
int ehea_qp_alloc_register(struct ehea_qp *qp, struct hw_queue *hw_queue,
int nr_pages, int wqe_size, int act_nr_sges,
struct ehea_adapter *adapter, int h_call_q_selector)
static inline u32 map_wqe_size(u8 wqe_enc_size)
struct ehea_qp *ehea_create_qp(struct ehea_adapter *adapter,
u32 pd, struct ehea_qp_init_attr *init_attr)
u64 ehea_destroy_qp_res(struct ehea_qp *qp, u64 force)
int ehea_destroy_qp(struct ehea_qp *qp)
static inline int ehea_calc_index(unsigned long i, unsigned long s)
static inline int ehea_init_top_bmap(struct ehea_top_bmap *ehea_top_bmap,
int dir)
static inline int ehea_init_bmap(struct ehea_bmap *ehea_bmap, int top, int dir)
static DEFINE_MUTEX(ehea_busmap_mutex);
static unsigned long ehea_mr_len;
#define EHEA_BUSMAP_ADD_SECT 1
#define EHEA_BUSMAP_REM_SECT 0
static void ehea_rebuild_busmap(void)
static int ehea_update_busmap(unsigned long pfn, unsigned long nr_pages, int add)
int ehea_add_sect_bmap(unsigned long pfn, unsigned long nr_pages)
int ehea_rem_sect_bmap(unsigned long pfn, unsigned long nr_pages)
static int ehea_is_hugepage(unsigned long pfn)
static int ehea_create_busmap_callback(unsigned long initial_pfn,
unsigned long total_nr_pages, void *arg)
int ehea_create_busmap(void)
void ehea_destroy_busmap(void)
u64 ehea_map_vaddr(void *caddr)
static inline void *ehea_calc_sectbase(int top, int dir, int idx)
static u64 ehea_reg_mr_section(int top, int dir, int idx, u64 *pt,
struct ehea_adapter *adapter,
struct ehea_mr *mr)
static u64 ehea_reg_mr_sections(int top, int dir, u64 *pt,
struct ehea_adapter *adapter,
struct ehea_mr *mr)
static u64 ehea_reg_mr_dir_sections(int top, u64 *pt,
struct ehea_adapter *adapter,
struct ehea_mr *mr)
int ehea_reg_kernel_mr(struct ehea_adapter *adapter, struct ehea_mr *mr)
int ehea_rem_mr(struct ehea_mr *mr)
int ehea_gen_smr(struct ehea_adapter *adapter, struct ehea_mr *old_mr,
struct ehea_mr *shared_mr)
void print_error_data(u64 *data)
u64 ehea_error_data(struct ehea_adapter *adapter, u64 res_handle,
u64 *aer, u64 *aerr)
