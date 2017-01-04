typedef struct peidx_table  peidx_table_t;
#define peidx_head(p)   (((p)->info))
#define peidx_mid(p)    (((p)->id))
#define peidx_bottom(p) (((p)->regs))
#define peidx_psp(p)           (&(peidx_head(p)->proc_state_parameter))
#define peidx_field_valid(p)   (&(peidx_head(p)->valid))
#define peidx_minstate_area(p) (&(peidx_bottom(p)->min_state_area))
#define peidx_cache_check_num(p)    (peidx_head(p)->valid.num_cache_check)
#define peidx_tlb_check_num(p)      (peidx_head(p)->valid.num_tlb_check)
#define peidx_bus_check_num(p)      (peidx_head(p)->valid.num_bus_check)
#define peidx_reg_file_check_num(p) (peidx_head(p)->valid.num_reg_file_check)
#define peidx_ms_check_num(p)       (peidx_head(p)->valid.num_ms_check)
#define peidx_cache_check_idx(p, n)    (n)
#define peidx_tlb_check_idx(p, n)      (peidx_cache_check_idx(p, peidx_cache_check_num(p)) + n)
#define peidx_bus_check_idx(p, n)      (peidx_tlb_check_idx(p, peidx_tlb_check_num(p)) + n)
#define peidx_reg_file_check_idx(p, n) (peidx_bus_check_idx(p, peidx_bus_check_num(p)) + n)
#define peidx_ms_check_idx(p, n)       (peidx_reg_file_check_idx(p, peidx_reg_file_check_num(p)) + n)
#define peidx_mod_error_info(p, name, n) \
()
#define peidx_cache_check(p, n)    peidx_mod_error_info(p, cache_check, n)
#define peidx_tlb_check(p, n)      peidx_mod_error_info(p, tlb_check, n)
#define peidx_bus_check(p, n)      peidx_mod_error_info(p, bus_check, n)
#define peidx_reg_file_check(p, n) peidx_mod_error_info(p, reg_file_check, n)
#define peidx_ms_check(p, n)       peidx_mod_error_info(p, ms_check, n)
#define peidx_check_info(proc, name, n) \
()
typedef struct slidx_list  slidx_list_t;
typedef struct slidx_table  slidx_table_t;
#define slidx_foreach_entry(pos, head) \
list_for_each_entry(pos, head, list)
#define slidx_first_entry(head) \
(((head)->next != (head)) ? list_entry((head)->next, typeof(slidx_list_t), list) : NULL)
#define slidx_count(slidx, sec) \
()
struct mca_table_entry ;
extern const struct mca_table_entry *search_mca_tables (unsigned long addr);
extern int mca_recover_range(unsigned long);
extern void ia64_mlogbuf_dump(void);
