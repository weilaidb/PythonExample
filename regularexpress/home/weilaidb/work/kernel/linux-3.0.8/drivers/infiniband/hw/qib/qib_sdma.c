static ushort sdma_descq_cnt = 256;
module_param_named(sdma_descq_cnt, sdma_descq_cnt, ushort, S_IRUGO);
MODULE_PARM_DESC(sdma_descq_cnt, "Number of SDMA descq entries");
#define SDMA_DESC_LAST          (1ULL << 11)
#define SDMA_DESC_FIRST         (1ULL << 12)
#define SDMA_DESC_DMA_HEAD      (1ULL << 13)
#define SDMA_DESC_USE_LARGE_BUF (1ULL << 14)
#define SDMA_DESC_INTR          (1ULL << 15)
#define SDMA_DESC_COUNT_LSB     16
#define SDMA_DESC_GEN_LSB       30
char *qib_sdma_state_names[] = ;
char *qib_sdma_event_names[] = ;
static int alloc_sdma(struct qib_pportdata *);
static void sdma_complete(struct kref *);
static void sdma_finalput(struct qib_sdma_state *);
static void sdma_get(struct qib_sdma_state *);
static void sdma_put(struct qib_sdma_state *);
static void sdma_set_state(struct qib_pportdata *, enum qib_sdma_states);
static void sdma_start_sw_clean_up(struct qib_pportdata *);
static void sdma_sw_clean_up_task(unsigned long);
static void unmap_desc(struct qib_pportdata *, unsigned);
static void sdma_get(struct qib_sdma_state *ss)
static void sdma_complete(struct kref *kref)
static void sdma_put(struct qib_sdma_state *ss)
static void sdma_finalput(struct qib_sdma_state *ss)
static void clear_sdma_activelist(struct qib_pportdata *ppd)
static void sdma_sw_clean_up_task(unsigned long opaque)
static void sdma_hw_start_up(struct qib_pportdata *ppd)
static void sdma_sw_tear_down(struct qib_pportdata *ppd)
static void sdma_start_sw_clean_up(struct qib_pportdata *ppd)
static void sdma_set_state(struct qib_pportdata *ppd,
enum qib_sdma_states next_state)
static void unmap_desc(struct qib_pportdata *ppd, unsigned head)
static int alloc_sdma(struct qib_pportdata *ppd)
static void free_sdma(struct qib_pportdata *ppd)
static inline void make_sdma_desc(struct qib_pportdata *ppd,
u64 *sdmadesc, u64 addr, u64 dwlen,
u64 dwoffset)
int qib_sdma_make_progress(struct qib_pportdata *ppd)
void qib_sdma_intr(struct qib_pportdata *ppd)
void __qib_sdma_intr(struct qib_pportdata *ppd)
int qib_setup_sdma(struct qib_pportdata *ppd)
void qib_teardown_sdma(struct qib_pportdata *ppd)
int qib_sdma_running(struct qib_pportdata *ppd)
static void complete_sdma_err_req(struct qib_pportdata *ppd,
struct qib_verbs_txreq *tx)
int qib_sdma_verbs_send(struct qib_pportdata *ppd,
struct qib_sge_state *ss, u32 dwords,
struct qib_verbs_txreq *tx)
void qib_sdma_process_event(struct qib_pportdata *ppd,
enum qib_sdma_events event)
void __qib_sdma_process_event(struct qib_pportdata *ppd,
enum qib_sdma_events event)
