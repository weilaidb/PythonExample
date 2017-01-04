#define NUM_CHUNKS(length, chunk_size) \
(((length) + (chunk_size - 1)) / (chunk_size))
#define MAX_RPAGES 512
#define EHCA_SECTSHIFT        SECTION_SIZE_BITS
#define EHCA_SECTSIZE          (1UL << EHCA_SECTSHIFT)
#define EHCA_HUGEPAGESHIFT     34
#define EHCA_HUGEPAGE_SIZE     (1UL << EHCA_HUGEPAGESHIFT)
#define EHCA_HUGEPAGE_PFN_MASK ((EHCA_HUGEPAGE_SIZE - 1) >> PAGE_SHIFT)
#define EHCA_INVAL_ADDR        0xFFFFFFFFFFFFFFFFULL
#define EHCA_DIR_INDEX_SHIFT 13
#define EHCA_TOP_INDEX_SHIFT (EHCA_DIR_INDEX_SHIFT * 2)
#define EHCA_MAP_ENTRIES (1 << EHCA_DIR_INDEX_SHIFT)
#define EHCA_TOP_MAP_SIZE (0x10000)
#define EHCA_DIR_MAP_SIZE (0x10000)
#define EHCA_ENT_MAP_SIZE (0x10000)
#define EHCA_INDEX_MASK (EHCA_MAP_ENTRIES - 1)
static unsigned long ehca_mr_len;
struct ehca_dir_bmap ;
struct ehca_top_bmap ;
struct ehca_bmap ;
static struct ehca_bmap *ehca_bmap;
static struct kmem_cache *mr_cache;
static struct kmem_cache *mw_cache;
enum ehca_mr_pgsize ;
#define EHCA_MR_PGSHIFT4K  12
#define EHCA_MR_PGSHIFT64K 16
#define EHCA_MR_PGSHIFT1M  20
#define EHCA_MR_PGSHIFT16M 24
static u64 ehca_map_vaddr(void *caddr);
static u32 ehca_encode_hwpage_size(u32 pgsize)
static u64 ehca_get_max_hwpage_size(struct ehca_shca *shca)
static struct ehca_mr *ehca_mr_new(void)
static void ehca_mr_delete(struct ehca_mr *me)
static struct ehca_mw *ehca_mw_new(void)
static void ehca_mw_delete(struct ehca_mw *me)
struct ib_mr *ehca_get_dma_mr(struct ib_pd *pd, int mr_access_flags)
struct ib_mr *ehca_reg_phys_mr(struct ib_pd *pd,
struct ib_phys_buf *phys_buf_array,
int num_phys_buf,
int mr_access_flags,
u64 *iova_start)
struct ib_mr *ehca_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt, int mr_access_flags,
struct ib_udata *udata)
int ehca_rereg_phys_mr(struct ib_mr *mr,
int mr_rereg_mask,
struct ib_pd *pd,
struct ib_phys_buf *phys_buf_array,
int num_phys_buf,
int mr_access_flags,
u64 *iova_start)
int ehca_query_mr(struct ib_mr *mr, struct ib_mr_attr *mr_attr)
int ehca_dereg_mr(struct ib_mr *mr)
struct ib_mw *ehca_alloc_mw(struct ib_pd *pd)
int ehca_bind_mw(struct ib_qp *qp,
struct ib_mw *mw,
struct ib_mw_bind *mw_bind)
int ehca_dealloc_mw(struct ib_mw *mw)
struct ib_fmr *ehca_alloc_fmr(struct ib_pd *pd,
int mr_access_flags,
struct ib_fmr_attr *fmr_attr)
int ehca_map_phys_fmr(struct ib_fmr *fmr,
u64 *page_list,
int list_len,
u64 iova)
int ehca_unmap_fmr(struct list_head *fmr_list)
int ehca_dealloc_fmr(struct ib_fmr *fmr)
static int ehca_reg_bmap_mr_rpages(struct ehca_shca *shca,
struct ehca_mr *e_mr,
struct ehca_mr_pginfo *pginfo);
int ehca_reg_mr(struct ehca_shca *shca,
struct ehca_mr *e_mr,
u64 *iova_start,
u64 size,
int acl,
struct ehca_pd *e_pd,
struct ehca_mr_pginfo *pginfo,
u32 *lkey,
u32 *rkey,
enum ehca_reg_type reg_type)
int ehca_reg_mr_rpages(struct ehca_shca *shca,
struct ehca_mr *e_mr,
struct ehca_mr_pginfo *pginfo)
inline int ehca_rereg_mr_rereg1(struct ehca_shca *shca,
struct ehca_mr *e_mr,
u64 *iova_start,
u64 size,
u32 acl,
struct ehca_pd *e_pd,
struct ehca_mr_pginfo *pginfo,
u32 *lkey,
u32 *rkey)
int ehca_rereg_mr(struct ehca_shca *shca,
struct ehca_mr *e_mr,
u64 *iova_start,
u64 size,
int acl,
struct ehca_pd *e_pd,
struct ehca_mr_pginfo *pginfo,
u32 *lkey,
u32 *rkey)
int ehca_unmap_one_fmr(struct ehca_shca *shca,
struct ehca_mr *e_fmr)
int ehca_reg_smr(struct ehca_shca *shca,
struct ehca_mr *e_origmr,
struct ehca_mr *e_newmr,
u64 *iova_start,
int acl,
struct ehca_pd *e_pd,
u32 *lkey,
u32 *rkey)
static inline void *ehca_calc_sectbase(int top, int dir, int idx)
#define ehca_bmap_valid(entry) \
((u64)entry != (u64)EHCA_INVAL_ADDR)
static u64 ehca_reg_mr_section(int top, int dir, int idx, u64 *kpage,
struct ehca_shca *shca, struct ehca_mr *mr,
struct ehca_mr_pginfo *pginfo)
static u64 ehca_reg_mr_sections(int top, int dir, u64 *kpage,
struct ehca_shca *shca, struct ehca_mr *mr,
struct ehca_mr_pginfo *pginfo)
static u64 ehca_reg_mr_dir_sections(int top, u64 *kpage, struct ehca_shca *shca,
struct ehca_mr *mr,
struct ehca_mr_pginfo *pginfo)
int ehca_reg_internal_maxmr(
struct ehca_shca *shca,
struct ehca_pd *e_pd,
struct ehca_mr **e_maxmr)
int ehca_reg_maxmr(struct ehca_shca *shca,
struct ehca_mr *e_newmr,
u64 *iova_start,
int acl,
struct ehca_pd *e_pd,
u32 *lkey,
u32 *rkey)
int ehca_dereg_internal_maxmr(struct ehca_shca *shca)
int ehca_mr_chk_buf_and_calc_size(struct ib_phys_buf *phys_buf_array,
int num_phys_buf,
u64 *iova_start,
u64 *size)
int ehca_fmr_check_page_list(struct ehca_mr *e_fmr,
u64 *page_list,
int list_len)
static int ehca_set_pagebuf_user1(struct ehca_mr_pginfo *pginfo,
u32 number,
u64 *kpage)
static int ehca_check_kpages_per_ate(struct scatterlist *page_list,
int start_idx, int end_idx,
u64 *prev_pgaddr)
static int ehca_set_pagebuf_user2(struct ehca_mr_pginfo *pginfo,
u32 number,
u64 *kpage)
static int ehca_set_pagebuf_phys(struct ehca_mr_pginfo *pginfo,
u32 number, u64 *kpage)
static int ehca_set_pagebuf_fmr(struct ehca_mr_pginfo *pginfo,
u32 number, u64 *kpage)
int ehca_set_pagebuf(struct ehca_mr_pginfo *pginfo,
u32 number,
u64 *kpage)
int ehca_mr_is_maxmr(u64 size,
u64 *iova_start)
void ehca_mrmw_map_acl(int ib_acl,
u32 *hipz_acl)
void ehca_mrmw_set_pgsize_hipz_acl(u32 pgsize, u32 *hipz_acl)
void ehca_mrmw_reverse_map_acl(const u32 *hipz_acl,
int *ib_acl)
void ehca_mr_deletenew(struct ehca_mr *mr)
int ehca_init_mrmw_cache(void)
void ehca_cleanup_mrmw_cache(void)
static inline int ehca_init_top_bmap(struct ehca_top_bmap *ehca_top_bmap,
int dir)
static inline int ehca_init_bmap(struct ehca_bmap *ehca_bmap, int top, int dir)
static inline int ehca_calc_index(unsigned long i, unsigned long s)
void ehca_destroy_busmap(void)
static int ehca_update_busmap(unsigned long pfn, unsigned long nr_pages)
static int ehca_is_hugepage(unsigned long pfn)
static int ehca_create_busmap_callback(unsigned long initial_pfn,
unsigned long total_nr_pages, void *arg)
int ehca_create_busmap(void)
static int ehca_reg_bmap_mr_rpages(struct ehca_shca *shca,
struct ehca_mr *e_mr,
struct ehca_mr_pginfo *pginfo)
static u64 ehca_map_vaddr(void *caddr)
static int ehca_dma_mapping_error(struct ib_device *dev, u64 dma_addr)
static u64 ehca_dma_map_single(struct ib_device *dev, void *cpu_addr,
size_t size, enum dma_data_direction direction)
static void ehca_dma_unmap_single(struct ib_device *dev, u64 addr, size_t size,
enum dma_data_direction direction)
static u64 ehca_dma_map_page(struct ib_device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction direction)
static void ehca_dma_unmap_page(struct ib_device *dev, u64 addr, size_t size,
enum dma_data_direction direction)
static int ehca_dma_map_sg(struct ib_device *dev, struct scatterlist *sgl,
int nents, enum dma_data_direction direction)
static void ehca_dma_unmap_sg(struct ib_device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction direction)
static u64 ehca_dma_address(struct ib_device *dev, struct scatterlist *sg)
static unsigned int ehca_dma_len(struct ib_device *dev, struct scatterlist *sg)
static void ehca_dma_sync_single_for_cpu(struct ib_device *dev, u64 addr,
size_t size,
enum dma_data_direction dir)
static void ehca_dma_sync_single_for_device(struct ib_device *dev, u64 addr,
size_t size,
enum dma_data_direction dir)
static void *ehca_dma_alloc_coherent(struct ib_device *dev, size_t size,
u64 *dma_handle, gfp_t flag)
static void ehca_dma_free_coherent(struct ib_device *dev, size_t size,
void *cpu_addr, u64 dma_handle)
struct ib_dma_mapping_ops ehca_dma_mapping_ops = ;
