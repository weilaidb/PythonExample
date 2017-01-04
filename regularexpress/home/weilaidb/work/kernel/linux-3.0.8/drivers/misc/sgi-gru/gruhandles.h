#define __GRUHANDLES_H__
#define GRU_GSEG0_BASE		0
#define GRU_MCS_BASE		(64 * 1024 * 1024)
#define GRU_SIZE		(128UL * 1024 * 1024)
#define GRU_NUM_CB		128
#define GRU_NUM_DSR_BYTES	(32 * 1024)
#define GRU_NUM_TFM		16
#define GRU_NUM_TGH		24
#define GRU_NUM_CBE		128
#define GRU_NUM_TFH		128
#define GRU_NUM_CCH		16
#define GRU_NUM_USER_CBR	GRU_NUM_CBE
#define GRU_NUM_USER_DSR_BYTES	GRU_NUM_DSR_BYTES
#define GRU_HANDLE_BYTES	64
#define GRU_HANDLE_STRIDE	256
#define GRU_TFM_BASE		(GRU_MCS_BASE + 0x00000)
#define GRU_TGH_BASE		(GRU_MCS_BASE + 0x08000)
#define GRU_CBE_BASE		(GRU_MCS_BASE + 0x10000)
#define GRU_TFH_BASE		(GRU_MCS_BASE + 0x18000)
#define GRU_CCH_BASE		(GRU_MCS_BASE + 0x20000)
#define GRU_GSEG_STRIDE		(4 * 1024 * 1024)
#define GSEG_BASE(a)		((a) & ~(GRU_GSEG_PAGESIZE - 1))
#define GRU_DSR_AU_BYTES	1024
#define GRU_DSR_CL		(GRU_NUM_DSR_BYTES / GRU_CACHE_LINE_BYTES)
#define GRU_DSR_AU_CL		(GRU_DSR_AU_BYTES / GRU_CACHE_LINE_BYTES)
#define GRU_DSR_AU		(GRU_NUM_DSR_BYTES / GRU_DSR_AU_BYTES)
#define GRU_CBR_AU_SIZE		2
#define GRU_CBR_AU		(GRU_NUM_CBE / GRU_CBR_AU_SIZE)
#define GRU_DS_BYTES_TO_AU(n)	DIV_ROUND_UP(n, GRU_DSR_AU_BYTES)
#define GRU_CB_COUNT_TO_AU(n)	DIV_ROUND_UP(n, GRU_CBR_AU_SIZE)
#define GRU_CHIPLETS_PER_HUB	2
#define GRU_HUBS_PER_BLADE	1
#define GRU_CHIPLETS_PER_BLADE	(GRU_HUBS_PER_BLADE * GRU_CHIPLETS_PER_HUB)
#define GRU_CB_BASE		0
#define GRU_CB_LIMIT		(GRU_CB_BASE + GRU_HANDLE_STRIDE * GRU_NUM_CBE)
#define GRU_DS_BASE		0x20000
#define GRU_DS_LIMIT		(GRU_DS_BASE + GRU_NUM_DSR_BYTES)
#define GSEGPOFF(h) 		((h) & (GRU_SIZE - 1))
#define GRUBASE(h)		((void *)((unsigned long)(h) & ~(GRU_SIZE - 1)))
#define TYPE_IS(hn, h)		((h) >= GRU_##hn##_BASE && (h) <	\
GRU_##hn##_BASE + GRU_NUM_##hn * GRU_HANDLE_STRIDE &&   \
(((h) & (GRU_HANDLE_STRIDE - 1)) == 0))
static inline void *get_gseg_base_address(void *base, int ctxnum)
static inline void *get_gseg_base_address_cb(void *base, int ctxnum, int line)
static inline void *get_gseg_base_address_ds(void *base, int ctxnum, int line)
static inline struct gru_tlb_fault_map *get_tfm(void *base, int ctxnum)
static inline struct gru_tlb_global_handle *get_tgh(void *base, int ctxnum)
static inline struct gru_control_block_extended *get_cbe(void *base, int ctxnum)
static inline struct gru_tlb_fault_handle *get_tfh(void *base, int ctxnum)
static inline struct gru_context_configuration_handle *get_cch(void *base,
int ctxnum)
static inline unsigned long get_cb_number(void *cb)
static inline unsigned long gru_chiplet_paddr(unsigned long paddr, int pnode,
int chiplet)
static inline void *gru_chiplet_vaddr(void *vaddr, int pnode, int chiplet)
static inline struct gru_control_block_extended *gru_tfh_to_cbe(
struct gru_tlb_fault_handle *tfh)
struct gru_tlb_fault_map ;
struct gru_tlb_global_handle ;
enum gru_tgh_cmd ;
enum gru_tgh_opc ;
enum gru_tgh_status ;
enum gru_tgh_state ;
enum gru_tgh_cause ;
struct gru_tlb_fault_handle ;
enum gru_tfh_opc ;
enum tfh_status ;
enum tfh_state ;
enum tfh_cause ;
#define GAA_RAM				0x0
#define GAA_NCRAM			0x2
#define GAA_MMIO			0x1
#define GAA_REGISTER			0x3
#define GRU_PADDR_SHIFT			12
struct gru_context_configuration_handle  __attribute__ ((packed));
enum gru_cch_opc ;
enum gru_cch_status ;
enum gru_cch_state ;
enum gru_cch_cause ;
struct gru_control_block_extended ;
#define cbe_baddr0	idef1upd
#define cbe_baddr1	idef3upd
#define cbe_src_cl	idef6cpy
#define cbe_nelemcur	idef5upd
enum gru_cbr_state ;
#define GRU_PAGESIZE(sh)	((((sh) > 20 ? (sh) + 2 : (sh)) >> 1) - 6)
#define GRU_SIZEAVAIL(sh)	(1UL << GRU_PAGESIZE(sh))
#define GRUMAXINVAL		1024UL
int cch_allocate(struct gru_context_configuration_handle *cch);
int cch_start(struct gru_context_configuration_handle *cch);
int cch_interrupt(struct gru_context_configuration_handle *cch);
int cch_deallocate(struct gru_context_configuration_handle *cch);
int cch_interrupt_sync(struct gru_context_configuration_handle *cch);
int tgh_invalidate(struct gru_tlb_global_handle *tgh, unsigned long vaddr,
unsigned long vaddrmask, int asid, int pagesize, int global, int n,
unsigned short ctxbitmap);
int tfh_write_only(struct gru_tlb_fault_handle *tfh, unsigned long paddr,
int gaa, unsigned long vaddr, int asid, int dirty, int pagesize);
void tfh_write_restart(struct gru_tlb_fault_handle *tfh, unsigned long paddr,
int gaa, unsigned long vaddr, int asid, int dirty, int pagesize);
void tfh_restart(struct gru_tlb_fault_handle *tfh);
void tfh_user_polling_mode(struct gru_tlb_fault_handle *tfh);
void tfh_exception(struct gru_tlb_fault_handle *tfh);
