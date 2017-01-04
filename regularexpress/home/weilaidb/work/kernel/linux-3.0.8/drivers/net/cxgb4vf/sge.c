static u32 FL_PG_ORDER;
static u32 STAT_LEN;
static u32 PKTSHIFT;
static u32 FL_ALIGN;
enum ;
struct tx_sw_desc ;
struct rx_sw_desc ;
enum ;
static inline dma_addr_t get_buf_addr(const struct rx_sw_desc *sdesc)
static inline bool is_buf_mapped(const struct rx_sw_desc *sdesc)
static inline int need_skb_unmap(void)
static inline unsigned int txq_avail(const struct sge_txq *tq)
static inline unsigned int fl_cap(const struct sge_fl *fl)
static inline bool fl_starving(const struct sge_fl *fl)
static int map_skb(struct device *dev, const struct sk_buff *skb,
dma_addr_t *addr)
static void unmap_sgl(struct device *dev, const struct sk_buff *skb,
const struct ulptx_sgl *sgl, const struct sge_txq *tq)
static void free_tx_desc(struct adapter *adapter, struct sge_txq *tq,
unsigned int n, bool unmap)
static inline int reclaimable(const struct sge_txq *tq)
static inline void reclaim_completed_tx(struct adapter *adapter,
struct sge_txq *tq,
bool unmap)
static inline int get_buf_size(const struct rx_sw_desc *sdesc)
static void free_rx_bufs(struct adapter *adapter, struct sge_fl *fl, int n)
static void unmap_rx_buf(struct adapter *adapter, struct sge_fl *fl)
static inline void ring_fl_db(struct adapter *adapter, struct sge_fl *fl)
static inline void set_rx_sw_desc(struct rx_sw_desc *sdesc, struct page *page,
dma_addr_t dma_addr)
#define POISON_BUF_VAL -1
static inline void poison_buf(struct page *page, size_t sz)
static unsigned int refill_fl(struct adapter *adapter, struct sge_fl *fl,
int n, gfp_t gfp)
static inline void __refill_fl(struct adapter *adapter, struct sge_fl *fl)
static void *alloc_ring(struct device *dev, size_t nelem, size_t hwsize,
size_t swsize, dma_addr_t *busaddrp, void *swringp,
size_t stat_size)
static inline unsigned int sgl_len(unsigned int n)
static inline unsigned int flits_to_desc(unsigned int flits)
static inline int is_eth_imm(const struct sk_buff *skb)
static inline unsigned int calc_tx_flits(const struct sk_buff *skb)
static void write_sgl(const struct sk_buff *skb, struct sge_txq *tq,
struct ulptx_sgl *sgl, u64 *end, unsigned int start,
const dma_addr_t *addr)
static inline void ring_tx_db(struct adapter *adapter, struct sge_txq *tq,
int n)
static void inline_tx_skb(const struct sk_buff *skb, const struct sge_txq *tq,
void *pos)
static u64 hwcsum(const struct sk_buff *skb)
static void txq_stop(struct sge_eth_txq *txq)
static inline void txq_advance(struct sge_txq *tq, unsigned int n)
int t4vf_eth_xmit(struct sk_buff *skb, struct net_device *dev)
struct sk_buff *t4vf_pktgl_to_skb(const struct pkt_gl *gl,
unsigned int skb_len, unsigned int pull_len)
void t4vf_pktgl_free(const struct pkt_gl *gl)
static inline void copy_frags(struct skb_shared_info *si,
const struct pkt_gl *gl,
unsigned int offset)
static void do_gro(struct sge_eth_rxq *rxq, const struct pkt_gl *gl,
const struct cpl_rx_pkt *pkt)
int t4vf_ethrx_handler(struct sge_rspq *rspq, const __be64 *rsp,
const struct pkt_gl *gl)
static inline bool is_new_response(const struct rsp_ctrl *rc,
const struct sge_rspq *rspq)
static void restore_rx_bufs(const struct pkt_gl *gl, struct sge_fl *fl,
int frags)
static inline void rspq_next(struct sge_rspq *rspq)
int process_responses(struct sge_rspq *rspq, int budget)
static int napi_rx_handler(struct napi_struct *napi, int budget)
irqreturn_t t4vf_sge_intr_msix(int irq, void *cookie)
static unsigned int process_intrq(struct adapter *adapter)
irqreturn_t t4vf_intr_msi(int irq, void *cookie)
irq_handler_t t4vf_intr_handler(struct adapter *adapter)
static void sge_rx_timer_cb(unsigned long data)
static void sge_tx_timer_cb(unsigned long data)
int t4vf_sge_alloc_rxq(struct adapter *adapter, struct sge_rspq *rspq,
bool iqasynch, struct net_device *dev,
int intr_dest,
struct sge_fl *fl, rspq_handler_t hnd)
int t4vf_sge_alloc_eth_txq(struct adapter *adapter, struct sge_eth_txq *txq,
struct net_device *dev, struct netdev_queue *devq,
unsigned int iqid)
static void free_txq(struct adapter *adapter, struct sge_txq *tq)
static void free_rspq_fl(struct adapter *adapter, struct sge_rspq *rspq,
struct sge_fl *fl)
void t4vf_free_sge_resources(struct adapter *adapter)
void t4vf_sge_start(struct adapter *adapter)
void t4vf_sge_stop(struct adapter *adapter)
int t4vf_sge_init(struct adapter *adapter)
