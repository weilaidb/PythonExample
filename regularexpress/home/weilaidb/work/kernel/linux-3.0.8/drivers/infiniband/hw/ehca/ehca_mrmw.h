#define _EHCA_MRMW_H_
enum ehca_reg_type ;
int ehca_reg_mr(struct ehca_shca *shca,
struct ehca_mr *e_mr,
u64 *iova_start,
u64 size,
int acl,
struct ehca_pd *e_pd,
struct ehca_mr_pginfo *pginfo,
u32 *lkey,
u32 *rkey,
enum ehca_reg_type reg_type);
int ehca_reg_mr_rpages(struct ehca_shca *shca,
struct ehca_mr *e_mr,
struct ehca_mr_pginfo *pginfo);
int ehca_rereg_mr(struct ehca_shca *shca,
struct ehca_mr *e_mr,
u64 *iova_start,
u64 size,
int mr_access_flags,
struct ehca_pd *e_pd,
struct ehca_mr_pginfo *pginfo,
u32 *lkey,
u32 *rkey);
int ehca_unmap_one_fmr(struct ehca_shca *shca,
struct ehca_mr *e_fmr);
int ehca_reg_smr(struct ehca_shca *shca,
struct ehca_mr *e_origmr,
struct ehca_mr *e_newmr,
u64 *iova_start,
int acl,
struct ehca_pd *e_pd,
u32 *lkey,
u32 *rkey);
int ehca_reg_internal_maxmr(struct ehca_shca *shca,
struct ehca_pd *e_pd,
struct ehca_mr **maxmr);
int ehca_reg_maxmr(struct ehca_shca *shca,
struct ehca_mr *e_newmr,
u64 *iova_start,
int acl,
struct ehca_pd *e_pd,
u32 *lkey,
u32 *rkey);
int ehca_dereg_internal_maxmr(struct ehca_shca *shca);
int ehca_mr_chk_buf_and_calc_size(struct ib_phys_buf *phys_buf_array,
int num_phys_buf,
u64 *iova_start,
u64 *size);
int ehca_fmr_check_page_list(struct ehca_mr *e_fmr,
u64 *page_list,
int list_len);
int ehca_set_pagebuf(struct ehca_mr_pginfo *pginfo,
u32 number,
u64 *kpage);
int ehca_mr_is_maxmr(u64 size,
u64 *iova_start);
void ehca_mrmw_map_acl(int ib_acl,
u32 *hipz_acl);
void ehca_mrmw_set_pgsize_hipz_acl(u32 pgsize, u32 *hipz_acl);
void ehca_mrmw_reverse_map_acl(const u32 *hipz_acl,
int *ib_acl);
void ehca_mr_deletenew(struct ehca_mr *mr);
int ehca_create_busmap(void);
void ehca_destroy_busmap(void);
extern struct ib_dma_mapping_ops ehca_dma_mapping_ops;
