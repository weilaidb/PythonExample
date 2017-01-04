#if PAGE_SHIFT >= 16
# define FL_PG_ORDER 0
# define FL_PG_ORDER (16 - PAGE_SHIFT)
#define RX_COPY_THRES    256
#define RX_PULL_LEN      128
#define RX_PKT_SKB_LEN   512
#define RX_PKT_PAD 2
#define MAX_TX_RECLAIM 16
#define MAX_RX_REFILL 16U
#define RX_QCHECK_PERIOD (HZ / 2)
#define TX_QCHECK_PERIOD (HZ / 2)
#define MAX_TIMER_TX_RECLAIM 100
#define NOMEM_TMR_IDX (SGE_NTIMERS - 1)
#define FL_STARVE_THRES 4
#define ETHTXQ_STOP_THRES \
(1 + DIV_ROUND_UP((3 * MAX_SKB_FRAGS) / 2 + (MAX_SKB_FRAGS & 1), 8))
#define TXQ_STOP_THRES (SGE_MAX_WR_LEN / sizeof(struct tx_desc))
#define MAX_IMM_TX_PKT_LEN 128
#define MAX_CTRL_WR_LEN SGE_MAX_WR_LEN
enum ;
struct tx_sw_desc ;
struct rx_sw_desc ;
enum ;
static inline dma_addr_t get_buf_addr(const struct rx_sw_desc *d)
static inline bool is_buf_mapped(const struct rx_sw_desc *d)
static inline unsigned int txq_avail(const struct sge_txq *q)
static inline unsigned int fl_cap(const struct sge_fl *fl)
static inline bool fl_starving(const struct sge_fl *fl)
static int map_skb(struct device *dev, const struct sk_buff *skb,
dma_addr_t *addr)
static void unmap_skb(struct device *dev, const struct sk_buff *skb,
const dma_addr_t *addr)
static void deferred_unmap_destructor(struct sk_buff *skb)
static void unmap_sgl(struct device *dev, const struct sk_buff *skb,
const struct ulptx_sgl *sgl, const struct sge_txq *q)
static void free_tx_desc(struct adapter *adap, struct sge_txq *q,
unsigned int n, bool unmap)
static inline int reclaimable(const struct sge_txq *q)
static inline void reclaim_completed_tx(struct adapter *adap, struct sge_txq *q,
bool unmap)
static inline int get_buf_size(const struct rx_sw_desc *d)
static void free_rx_bufs(struct adapter *adap, struct sge_fl *q, int n)
static void unmap_rx_buf(struct adapter *adap, struct sge_fl *q)
static inline void ring_fl_db(struct adapter *adap, struct sge_fl *q)
static inline void set_rx_sw_desc(struct rx_sw_desc *sd, struct page *pg,
dma_addr_t mapping)
static unsigned int refill_fl(struct adapter *adap, struct sge_fl *q, int n,
gfp_t gfp)
static inline void __refill_fl(struct adapter *adap, struct sge_fl *fl)
static void *alloc_ring(struct device *dev, size_t nelem, size_t elem_size,
size_t sw_size, dma_addr_t *phys, void *metadata,
size_t stat_size, int node)
static inline unsigned int sgl_len(unsigned int n)
static inline unsigned int flits_to_desc(unsigned int n)
static inline int is_eth_imm(const struct sk_buff *skb)
static inline unsigned int calc_tx_flits(const struct sk_buff *skb)
static inline unsigned int calc_tx_descs(const struct sk_buff *skb)
static void write_sgl(const struct sk_buff *skb, struct sge_txq *q,
struct ulptx_sgl *sgl, u64 *end, unsigned int start,
const dma_addr_t *addr)
static inline void ring_tx_db(struct adapter *adap, struct sge_txq *q, int n)
static void inline_tx_skb(const struct sk_buff *skb, const struct sge_txq *q,
void *pos)
static u64 hwcsum(const struct sk_buff *skb)
static void eth_txq_stop(struct sge_eth_txq *q)
static inline void txq_advance(struct sge_txq *q, unsigned int n)
netdev_tx_t t4_eth_xmit(struct sk_buff *skb, struct net_device *dev)
static inline void reclaim_completed_tx_imm(struct sge_txq *q)
static inline int is_imm(const struct sk_buff *skb)
static void ctrlq_check_stop(struct sge_ctrl_txq *q, struct fw_wr_hdr *wr)
static int ctrl_xmit(struct sge_ctrl_txq *q, struct sk_buff *skb)
static void restart_ctrlq(unsigned long data)
int t4_mgmt_tx(struct adapter *adap, struct sk_buff *skb)
static inline int is_ofld_imm(const struct sk_buff *skb)
static inline unsigned int calc_tx_flits_ofld(const struct sk_buff *skb)
static void txq_stop_maperr(struct sge_ofld_txq *q)
static void ofldtxq_stop(struct sge_ofld_txq *q, struct sk_buff *skb)
static void service_ofldq(struct sge_ofld_txq *q)
static int ofld_xmit(struct sge_ofld_txq *q, struct sk_buff *skb)
static void restart_ofldq(unsigned long data)
static inline unsigned int skb_txq(const struct sk_buff *skb)
static inline unsigned int is_ctrl_pkt(const struct sk_buff *skb)
static inline int ofld_send(struct adapter *adap, struct sk_buff *skb)
int t4_ofld_send(struct adapter *adap, struct sk_buff *skb)
int cxgb4_ofld_send(struct net_device *dev, struct sk_buff *skb)
EXPORT_SYMBOL(cxgb4_ofld_send);
static inline void copy_frags(struct skb_shared_info *ssi,
const struct pkt_gl *gl, unsigned int offset)
struct sk_buff *cxgb4_pktgl_to_skb(const struct pkt_gl *gl,
unsigned int skb_len, unsigned int pull_len)
EXPORT_SYMBOL(cxgb4_pktgl_to_skb);
static void t4_pktgl_free(const struct pkt_gl *gl)
static noinline int handle_trace_pkt(struct adapter *adap,
const struct pkt_gl *gl)
static void do_gro(struct sge_eth_rxq *rxq, const struct pkt_gl *gl,
const struct cpl_rx_pkt *pkt)
int t4_ethrx_handler(struct sge_rspq *q, const __be64 *rsp,
const struct pkt_gl *si)
static void restore_rx_bufs(const struct pkt_gl *si, struct sge_fl *q,
int frags)
static inline bool is_new_response(const struct rsp_ctrl *r,
const struct sge_rspq *q)
static inline void rspq_next(struct sge_rspq *q)
static int process_responses(struct sge_rspq *q, int budget)
static int napi_rx_handler(struct napi_struct *napi, int budget)
irqreturn_t t4_sge_intr_msix(int irq, void *cookie)
static unsigned int process_intrq(struct adapter *adap)
static irqreturn_t t4_intr_msi(int irq, void *cookie)
static irqreturn_t t4_intr_intx(int irq, void *cookie)
irq_handler_t t4_intr_handler(struct adapter *adap)
static void sge_rx_timer_cb(unsigned long data)
static void sge_tx_timer_cb(unsigned long data)
int t4_sge_alloc_rxq(struct adapter *adap, struct sge_rspq *iq, bool fwevtq,
struct net_device *dev, int intr_idx,
struct sge_fl *fl, rspq_handler_t hnd)
static void init_txq(struct adapter *adap, struct sge_txq *q, unsigned int id)
int t4_sge_alloc_eth_txq(struct adapter *adap, struct sge_eth_txq *txq,
struct net_device *dev, struct netdev_queue *netdevq,
unsigned int iqid)
int t4_sge_alloc_ctrl_txq(struct adapter *adap, struct sge_ctrl_txq *txq,
struct net_device *dev, unsigned int iqid,
unsigned int cmplqid)
int t4_sge_alloc_ofld_txq(struct adapter *adap, struct sge_ofld_txq *txq,
struct net_device *dev, unsigned int iqid)
static void free_txq(struct adapter *adap, struct sge_txq *q)
static void free_rspq_fl(struct adapter *adap, struct sge_rspq *rq,
struct sge_fl *fl)
void t4_free_sge_resources(struct adapter *adap)
void t4_sge_start(struct adapter *adap)
void t4_sge_stop(struct adapter *adap)
void t4_sge_init(struct adapter *adap)
