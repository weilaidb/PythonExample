#define __GRUTABLES_H__
extern struct gru_stats_s gru_stats;
extern struct gru_blade_state *gru_base[];
extern unsigned long gru_start_paddr, gru_end_paddr;
extern void *gru_start_vaddr;
extern unsigned int gru_max_gids;
#define GRU_MAX_BLADES		MAX_NUMNODES
#define GRU_MAX_GRUS		(GRU_MAX_BLADES * GRU_CHIPLETS_PER_BLADE)
#define GRU_DRIVER_ID_STR	"SGI GRU Device Driver"
#define GRU_DRIVER_VERSION_STR	"0.85"
struct gru_stats_s ;
enum mcs_op ;
struct mcs_op_statistic ;
extern struct mcs_op_statistic mcs_op_statistics[mcsop_last];
#define OPT_DPRINT		1
#define OPT_STATS		2
#define IRQ_GRU			110
#define GRU_ASSIGN_DELAY	((HZ * 20) / 1000)
#define GRU_STEAL_DELAY		((HZ * 200) / 1000)
#define STAT(id)	do  while (0)
#define gru_dbg(dev, fmt, x...)						\
do  while (0)
#define gru_dbg(x...)
#define MAX_ASID	0xfffff0
#define MIN_ASID	8
#define ASID_INC	8
#define VADDR_HI_BIT		64
#define GRUREGION(addr)		((addr) >> (VADDR_HI_BIT - 3) & 3)
#define GRUASID(asid, addr)	((asid) + GRUREGION(addr))
struct gru_state;
struct gru_mm_tracker  __attribute__ ((packed));
struct gru_mm_struct ;
struct gru_vma_data ;
struct gru_thread_state ;
#define TSID(a, v)		(((a) - (v)->vm_start) / GRU_GSEG_PAGESIZE)
#define UGRUADDR(gts)		((gts)->ts_vma->vm_start +		\
(gts)->ts_tsid * GRU_GSEG_PAGESIZE)
#define NULLCTX			(-1)
struct gru_state ;
struct gru_blade_state ;
#define get_tfm_for_cpu(g, c)						\
((struct gru_tlb_fault_map *)get_tfm((g)->gs_gru_base_vaddr, (c)))
#define get_tfh_by_index(g, i)						\
((struct gru_tlb_fault_handle *)get_tfh((g)->gs_gru_base_vaddr, (i)))
#define get_tgh_by_index(g, i)						\
((struct gru_tlb_global_handle *)get_tgh((g)->gs_gru_base_vaddr, (i)))
#define get_cbe_by_index(g, i)						\
((struct gru_control_block_extended *)get_cbe((g)->gs_gru_base_vaddr,\
(i)))
#define get_gru(b, c)		(&gru_base[b]->bs_grus[c])
#define DSR_BYTES(dsr)		((dsr) * GRU_DSR_AU_BYTES)
#define CBR_BYTES(cbr)		((cbr) * GRU_HANDLE_BYTES * GRU_CBR_AU_SIZE * 2)
#define thread_cbr_number(gts, n) ((gts)->ts_cbr_idx[(n) / GRU_CBR_AU_SIZE] \
* GRU_CBR_AU_SIZE + (n) % GRU_CBR_AU_SIZE)
#define GID_TO_GRU(gid)							\
(gru_base[(gid) / GRU_CHIPLETS_PER_BLADE] ?			\
(&gru_base[(gid) / GRU_CHIPLETS_PER_BLADE]->		\
bs_grus[(gid) % GRU_CHIPLETS_PER_BLADE]) :	\
NULL)
#define for_each_gru_in_bitmap(gid, map)				\
for_each_set_bit((gid), (map), GRU_MAX_GRUS)
#define for_each_gru_on_blade(gru, nid, i)				\
for ((gru) = gru_base[nid]->bs_grus, (i) = 0;			\
(i) < GRU_CHIPLETS_PER_BLADE;			\
(i)++, (gru)++)
#define foreach_gid(gid)						\
for ((gid) = 0; (gid) < gru_max_gids; (gid)++)
#define for_each_gts_on_gru(gts, gru, ctxnum)				\
for ((ctxnum) = 0; (ctxnum) < GRU_NUM_CCH; (ctxnum)++)		\
if (((gts) = (gru)->gs_gts[ctxnum]))
#define for_each_cbr_in_tfm(i, map)					\
for_each_set_bit((i), (map), GRU_NUM_CBE)
#define for_each_cbr_in_allocation_map(i, map, k)			\
for_each_set_bit((k), (map), GRU_CBR_AU)			\
for ((i) = (k)*GRU_CBR_AU_SIZE;				\
(i) < ((k) + 1) * GRU_CBR_AU_SIZE; (i)++)
#define for_each_dsr_in_allocation_map(i, map, k)			\
for_each_set_bit((k), (const unsigned long *)(map), GRU_DSR_AU)	\
for ((i) = (k) * GRU_DSR_AU_CL;				\
(i) < ((k) + 1) * GRU_DSR_AU_CL; (i)++)
#define gseg_physical_address(gru, ctxnum)				\
((gru)->gs_gru_base_paddr + ctxnum * GRU_GSEG_STRIDE)
#define gseg_virtual_address(gru, ctxnum)				\
((gru)->gs_gru_base_vaddr + ctxnum * GRU_GSEG_STRIDE)
static inline int __trylock_handle(void *h)
static inline void __lock_handle(void *h)
static inline void __unlock_handle(void *h)
static inline int trylock_cch_handle(struct gru_context_configuration_handle *cch)
static inline void lock_cch_handle(struct gru_context_configuration_handle *cch)
static inline void unlock_cch_handle(struct gru_context_configuration_handle
*cch)
static inline void lock_tgh_handle(struct gru_tlb_global_handle *tgh)
static inline void unlock_tgh_handle(struct gru_tlb_global_handle *tgh)
static inline int is_kernel_context(struct gru_thread_state *gts)
#define UV_MAX_INT_CORES		8
#define uv_cpu_socket_number(p)		((cpu_physical_id(p) >> 5) & 1)
#define uv_cpu_ht_number(p)		(cpu_physical_id(p) & 1)
#define uv_cpu_core_number(p)		(((cpu_physical_id(p) >> 2) & 4) |	\
((cpu_physical_id(p) >> 1) & 3))
struct gru_unload_context_req;
extern const struct vm_operations_struct gru_vm_ops;
extern struct device *grudev;
extern struct gru_vma_data *gru_alloc_vma_data(struct vm_area_struct *vma,
int tsid);
extern struct gru_thread_state *gru_find_thread_state(struct vm_area_struct
*vma, int tsid);
extern struct gru_thread_state *gru_alloc_thread_state(struct vm_area_struct
*vma, int tsid);
extern struct gru_state *gru_assign_gru_context(struct gru_thread_state *gts);
extern void gru_load_context(struct gru_thread_state *gts);
extern void gru_steal_context(struct gru_thread_state *gts);
extern void gru_unload_context(struct gru_thread_state *gts, int savestate);
extern int gru_update_cch(struct gru_thread_state *gts);
extern void gts_drop(struct gru_thread_state *gts);
extern void gru_tgh_flush_init(struct gru_state *gru);
extern int gru_kservices_init(void);
extern void gru_kservices_exit(void);
extern irqreturn_t gru0_intr(int irq, void *dev_id);
extern irqreturn_t gru1_intr(int irq, void *dev_id);
extern irqreturn_t gru_intr_mblade(int irq, void *dev_id);
extern int gru_dump_chiplet_request(unsigned long arg);
extern long gru_get_gseg_statistics(unsigned long arg);
extern int gru_handle_user_call_os(unsigned long address);
extern int gru_user_flush_tlb(unsigned long arg);
extern int gru_user_unload_context(unsigned long arg);
extern int gru_get_exception_detail(unsigned long arg);
extern int gru_set_context_option(unsigned long address);
extern void gru_check_context_placement(struct gru_thread_state *gts);
extern int gru_cpu_fault_map_id(void);
extern struct vm_area_struct *gru_find_vma(unsigned long vaddr);
extern void gru_flush_all_tlb(struct gru_state *gru);
extern int gru_proc_init(void);
extern void gru_proc_exit(void);
extern struct gru_thread_state *gru_alloc_gts(struct vm_area_struct *vma,
int cbr_au_count, int dsr_au_count,
unsigned char tlb_preload_count, int options, int tsid);
extern unsigned long gru_reserve_cb_resources(struct gru_state *gru,
int cbr_au_count, char *cbmap);
extern unsigned long gru_reserve_ds_resources(struct gru_state *gru,
int dsr_au_count, char *dsmap);
extern int gru_fault(struct vm_area_struct *, struct vm_fault *vmf);
extern struct gru_mm_struct *gru_register_mmu_notifier(void);
extern void gru_drop_mmu_notifier(struct gru_mm_struct *gms);
extern int gru_ktest(unsigned long arg);
extern void gru_flush_tlb_range(struct gru_mm_struct *gms, unsigned long start,
unsigned long len);
extern unsigned long gru_options;
