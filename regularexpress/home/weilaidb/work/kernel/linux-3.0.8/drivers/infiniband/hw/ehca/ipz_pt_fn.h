#define __IPZ_PT_FN_H__
#define EHCA_PAGESHIFT   12
#define EHCA_PAGESIZE   4096UL
#define EHCA_PAGEMASK   (~(EHCA_PAGESIZE-1))
#define EHCA_PT_ENTRIES 512UL
struct ehca_pd;
struct ipz_small_queue_page;
extern struct kmem_cache *small_qp_cache;
struct ipz_page ;
#define IPZ_SPAGE_PER_KPAGE (PAGE_SIZE / 512)
struct ipz_small_queue_page ;
struct ipz_queue ;
static inline void *ipz_qeit_calc(struct ipz_queue *queue, u64 q_offset)
static inline void *ipz_qeit_get(struct ipz_queue *queue)
void *ipz_qpageit_get_inc(struct ipz_queue *queue);
static inline void *ipz_qeit_get_inc(struct ipz_queue *queue)
static inline int ipz_qeit_is_valid(struct ipz_queue *queue)
static inline void *ipz_qeit_get_inc_valid(struct ipz_queue *queue)
static inline void *ipz_qeit_reset(struct ipz_queue *queue)
int ipz_queue_abs_to_offset(struct ipz_queue *queue, u64 addr, u64 *q_offset);
static inline u64 ipz_queue_advance_offset(struct ipz_queue *queue, u64 offset)
struct ipz_pt ;
struct ipz_qpt ;
int ipz_queue_ctor(struct ehca_pd *pd, struct ipz_queue *queue,
const u32 nr_of_pages, const u32 pagesize,
const u32 qe_size, const u32 nr_of_sg,
int is_small);
int ipz_queue_dtor(struct ehca_pd *pd, struct ipz_queue *queue);
void ipz_qpt_ctor(struct ipz_qpt *qpt,
const u32 nr_of_qes,
const u32 pagesize,
const u32 qe_size,
const u8 lowbyte, const u8 toggle,
u32 * act_nr_of_QEs, u32 * act_nr_of_pages);
void *ipz_qeit_eq_get_inc(struct ipz_queue *queue);
static inline void *ipz_eqit_eq_get_inc_valid(struct ipz_queue *queue)
static inline void *ipz_eqit_eq_peek_valid(struct ipz_queue *queue)
static inline u64 ipz_qpt_get_firstpage(struct ipz_qpt *qpt)
static inline void *ipz_qpt_get_qpt(struct ipz_qpt *qpt)
