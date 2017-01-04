#define IPATH_USER_SDMA_MIN_HEADER_LENGTH	64
#define IPATH_USER_SDMA_EXP_HEADER_LENGTH	64
#define IPATH_PBC_LENGTH_MASK			((1 << 11) - 1)
struct ipath_user_sdma_pkt ;
struct ipath_user_sdma_queue ;
struct ipath_user_sdma_queue *
ipath_user_sdma_queue_create(struct device *dev, int unit, int port, int sport)
static void ipath_user_sdma_init_frag(struct ipath_user_sdma_pkt *pkt,
int i, size_t offset, size_t len,
int put_page, int dma_mapped,
struct page *page,
void *kvaddr, dma_addr_t dma_addr)
static void ipath_user_sdma_init_header(struct ipath_user_sdma_pkt *pkt,
u32 counter, size_t offset,
size_t len, int dma_mapped,
struct page *page,
void *kvaddr, dma_addr_t dma_addr)
static int ipath_user_sdma_coalesce(const struct ipath_devdata *dd,
struct ipath_user_sdma_pkt *pkt,
const struct iovec *iov,
unsigned long niov)
static int ipath_user_sdma_num_pages(const struct iovec *iov)
static int ipath_user_sdma_page_length(unsigned long addr, unsigned long len)
static void ipath_user_sdma_free_pkt_frag(struct device *dev,
struct ipath_user_sdma_queue *pq,
struct ipath_user_sdma_pkt *pkt,
int frag)
static int ipath_user_sdma_pin_pages(const struct ipath_devdata *dd,
struct ipath_user_sdma_pkt *pkt,
unsigned long addr, int tlen, int npages)
static int ipath_user_sdma_pin_pkt(const struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq,
struct ipath_user_sdma_pkt *pkt,
const struct iovec *iov,
unsigned long niov)
static int ipath_user_sdma_init_payload(const struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq,
struct ipath_user_sdma_pkt *pkt,
const struct iovec *iov,
unsigned long niov, int npages)
static void ipath_user_sdma_free_pkt_list(struct device *dev,
struct ipath_user_sdma_queue *pq,
struct list_head *list)
static int ipath_user_sdma_queue_pkts(const struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq,
struct list_head *list,
const struct iovec *iov,
unsigned long niov,
int maxpkts)
static void ipath_user_sdma_set_complete_counter(struct ipath_user_sdma_queue *pq,
u32 c)
static int ipath_user_sdma_queue_clean(const struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq)
void ipath_user_sdma_queue_destroy(struct ipath_user_sdma_queue *pq)
static int ipath_user_sdma_hwqueue_clean(struct ipath_devdata *dd)
void ipath_user_sdma_queue_drain(struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq)
static inline __le64 ipath_sdma_make_desc0(struct ipath_devdata *dd,
u64 addr, u64 dwlen, u64 dwoffset)
static inline __le64 ipath_sdma_make_first_desc0(__le64 descq)
static inline __le64 ipath_sdma_make_last_desc0(__le64 descq)
static inline __le64 ipath_sdma_make_desc1(u64 addr)
static void ipath_user_sdma_send_frag(struct ipath_devdata *dd,
struct ipath_user_sdma_pkt *pkt, int idx,
unsigned ofs, u16 tail)
static int ipath_user_sdma_push_pkts(struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq,
struct list_head *pktlist)
int ipath_user_sdma_writev(struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq,
const struct iovec *iov,
unsigned long dim)
int ipath_user_sdma_make_progress(struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq)
u32 ipath_user_sdma_complete_counter(const struct ipath_user_sdma_queue *pq)
u32 ipath_user_sdma_inflight_counter(struct ipath_user_sdma_queue *pq)
