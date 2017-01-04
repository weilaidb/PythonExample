#define T4_ULPTX_MIN_IO 32
#define C4IW_MAX_INLINE_SIZE 96
static int write_adapter_mem(struct c4iw_rdev *rdev, u32 addr, u32 len,
void *data)
static int write_tpt_entry(struct c4iw_rdev *rdev, u32 reset_tpt_entry,
u32 *stag, u8 stag_state, u32 pdid,
enum fw_ri_stag_type type, enum fw_ri_mem_perms perm,
int bind_enabled, u32 zbva, u64 to,
u64 len, u8 page_size, u32 pbl_size, u32 pbl_addr)
static int write_pbl(struct c4iw_rdev *rdev, __be64 *pbl,
u32 pbl_addr, u32 pbl_size)
static int dereg_mem(struct c4iw_rdev *rdev, u32 stag, u32 pbl_size,
u32 pbl_addr)
static int allocate_window(struct c4iw_rdev *rdev, u32 * stag, u32 pdid)
static int deallocate_window(struct c4iw_rdev *rdev, u32 stag)
static int allocate_stag(struct c4iw_rdev *rdev, u32 *stag, u32 pdid,
u32 pbl_size, u32 pbl_addr)
static int finish_mem_reg(struct c4iw_mr *mhp, u32 stag)
static int register_mem(struct c4iw_dev *rhp, struct c4iw_pd *php,
struct c4iw_mr *mhp, int shift)
static int reregister_mem(struct c4iw_dev *rhp, struct c4iw_pd *php,
struct c4iw_mr *mhp, int shift, int npages)
static int alloc_pbl(struct c4iw_mr *mhp, int npages)
static int build_phys_page_list(struct ib_phys_buf *buffer_list,
int num_phys_buf, u64 *iova_start,
u64 *total_size, int *npages,
int *shift, __be64 **page_list)
int c4iw_reregister_phys_mem(struct ib_mr *mr, int mr_rereg_mask,
struct ib_pd *pd, struct ib_phys_buf *buffer_list,
int num_phys_buf, int acc, u64 *iova_start)
struct ib_mr *c4iw_register_phys_mem(struct ib_pd *pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf, int acc, u64 *iova_start)
struct ib_mr *c4iw_get_dma_mr(struct ib_pd *pd, int acc)
struct ib_mr *c4iw_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt, int acc, struct ib_udata *udata)
struct ib_mw *c4iw_alloc_mw(struct ib_pd *pd)
int c4iw_dealloc_mw(struct ib_mw *mw)
struct ib_mr *c4iw_alloc_fast_reg_mr(struct ib_pd *pd, int pbl_depth)
struct ib_fast_reg_page_list *c4iw_alloc_fastreg_pbl(struct ib_device *device,
int page_list_len)
void c4iw_free_fastreg_pbl(struct ib_fast_reg_page_list *ibpl)
int c4iw_dereg_mr(struct ib_mr *ib_mr)
