#define SDMA_DESCQ_SZ PAGE_SIZE
static void vl15_watchdog_enq(struct ipath_devdata *dd)
static void vl15_watchdog_deq(struct ipath_devdata *dd)
static void vl15_watchdog_timeout(unsigned long opaque)
static void unmap_desc(struct ipath_devdata *dd, unsigned head)
int ipath_sdma_make_progress(struct ipath_devdata *dd)
static void ipath_sdma_notify(struct ipath_devdata *dd, struct list_head *list)
static void sdma_notify_taskbody(struct ipath_devdata *dd)
static void sdma_notify_task(unsigned long opaque)
static void dump_sdma_state(struct ipath_devdata *dd)
static void sdma_abort_task(unsigned long opaque)
void ipath_sdma_intr(struct ipath_devdata *dd)
static int alloc_sdma(struct ipath_devdata *dd)
int setup_sdma(struct ipath_devdata *dd)
void teardown_sdma(struct ipath_devdata *dd)
void ipath_restart_sdma(struct ipath_devdata *dd)
static inline void make_sdma_desc(struct ipath_devdata *dd,
u64 *sdmadesc, u64 addr, u64 dwlen, u64 dwoffset)
int ipath_sdma_verbs_send(struct ipath_devdata *dd,
struct ipath_sge_state *ss, u32 dwords,
struct ipath_verbs_txreq *tx)
