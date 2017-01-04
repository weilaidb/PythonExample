#define QIB_USER_SDMA_MIN_HEADER_LENGTH 64
#define QIB_USER_SDMA_EXP_HEADER_LENGTH 64
#define QIB_USER_SDMA_DRAIN_TIMEOUT 500
struct qib_user_sdma_pkt ;
struct qib_user_sdma_queue ;
struct qib_user_sdma_queue *
qib_user_sdma_queue_create(struct device *dev, int unit, int ctxt, int sctxt)
static void qib_user_sdma_init_frag(struct qib_user_sdma_pkt *pkt,
int i, size_t offset, size_t len,
int put_page, int dma_mapped,
struct page *page,
void *kvaddr, dma_addr_t dma_addr)
static void qib_user_sdma_init_header(struct qib_user_sdma_pkt *pkt,
u32 counter, size_t offset,
size_t len, int dma_mapped,
struct page *page,
void *kvaddr, dma_addr_t dma_addr)
static int qib_user_sdma_coalesce(const struct qib_devdata *dd,
struct qib_user_sdma_pkt *pkt,
const struct iovec *iov,
unsigned long niov)
static int qib_user_sdma_num_pages(const struct iovec *iov)
static int qib_user_sdma_page_length(unsigned long addr, unsigned long len)
static void qib_user_sdma_free_pkt_frag(struct device *dev,
struct qib_user_sdma_queue *pq,
struct qib_user_sdma_pkt *pkt,
int frag)
static int qib_user_sdma_pin_pages(const struct qib_devdata *dd,
struct qib_user_sdma_pkt *pkt,
unsigned long addr, int tlen, int npages)
static int qib_user_sdma_pin_pkt(const struct qib_devdata *dd,
struct qib_user_sdma_queue *pq,
struct qib_user_sdma_pkt *pkt,
const struct iovec *iov,
unsigned long niov)
static int qib_user_sdma_init_payload(const struct qib_devdata *dd,
struct qib_user_sdma_queue *pq,
struct qib_user_sdma_pkt *pkt,
const struct iovec *iov,
unsigned long niov, int npages)
static void qib_user_sdma_free_pkt_list(struct device *dev,
struct qib_user_sdma_queue *pq,
struct list_head *list)
static int qib_user_sdma_queue_pkts(const struct qib_devdata *dd,
struct qib_user_sdma_queue *pq,
struct list_head *list,
const struct iovec *iov,
unsigned long niov,
int maxpkts)
static void qib_user_sdma_set_complete_counter(struct qib_user_sdma_queue *pq,
u32 c)
static int qib_user_sdma_queue_clean(struct qib_pportdata *ppd,
struct qib_user_sdma_queue *pq)
void qib_user_sdma_queue_destroy(struct qib_user_sdma_queue *pq)
static int qib_user_sdma_hwqueue_clean(struct qib_pportdata *ppd)
void qib_user_sdma_queue_drain(struct qib_pportdata *ppd,
struct qib_user_sdma_queue *pq)
static inline __le64 qib_sdma_make_desc0(struct qib_pportdata *ppd,
u64 addr, u64 dwlen, u64 dwoffset)
static inline __le64 qib_sdma_make_first_desc0(__le64 descq)
static inline __le64 qib_sdma_make_last_desc0(__le64 descq)
static inline __le64 qib_sdma_make_desc1(u64 addr)
static void qib_user_sdma_send_frag(struct qib_pportdata *ppd,
struct qib_user_sdma_pkt *pkt, int idx,
unsigned ofs, u16 tail)
static int qib_user_sdma_push_pkts(struct qib_pportdata *ppd,
struct qib_user_sdma_queue *pq,
struct list_head *pktlist)
int qib_user_sdma_writev(struct qib_ctxtdata *rcd,
struct qib_user_sdma_queue *pq,
const struct iovec *iov,
unsigned long dim)
int qib_user_sdma_make_progress(struct qib_pportdata *ppd,
struct qib_user_sdma_queue *pq)
u32 qib_user_sdma_complete_counter(const struct qib_user_sdma_queue *pq)
u32 qib_user_sdma_inflight_counter(struct qib_user_sdma_queue *pq)
