#define USE_GTS 0
#define SGE_RX_SM_BUF_SIZE 1536
#define SGE_RX_COPY_THRES  256
#define SGE_RX_PULL_LEN    128
#define SGE_PG_RSVD SMP_CACHE_BYTES
#define FL0_PG_CHUNK_SIZE  2048
#define FL0_PG_ORDER 0
#define FL0_PG_ALLOC_SIZE (PAGE_SIZE << FL0_PG_ORDER)
#define FL1_PG_CHUNK_SIZE (PAGE_SIZE > 8192 ? 16384 : 8192)
#define FL1_PG_ORDER (PAGE_SIZE > 8192 ? 0 : 1)
#define FL1_PG_ALLOC_SIZE (PAGE_SIZE << FL1_PG_ORDER)
#define SGE_RX_DROP_THRES 16
#define RX_RECLAIM_PERIOD (HZ/4)
#define MAX_RX_REFILL 16U
#define TX_RECLAIM_PERIOD (HZ / 4)
#define TX_RECLAIM_TIMER_CHUNK 64U
#define TX_RECLAIM_CHUNK 16U
#define WR_LEN (WR_FLITS * 8)
enum ;
enum ;
struct tx_desc ;
struct rx_desc ;
struct tx_sw_desc ;
struct rx_sw_desc ;
struct rsp_desc ;
struct deferred_unmap_info ;
static u8 flit_desc_map[] = ;
static inline struct sge_qset *fl_to_qset(const struct sge_fl *q, int qidx)
static inline struct sge_qset *rspq_to_qset(const struct sge_rspq *q)
static inline struct sge_qset *txq_to_qset(const struct sge_txq *q, int qidx)
static inline void refill_rspq(struct adapter *adapter,
const struct sge_rspq *q, unsigned int credits)
static inline int need_skb_unmap(void)
static inline void unmap_skb(struct sk_buff *skb, struct sge_txq *q,
unsigned int cidx, struct pci_dev *pdev)
static void free_tx_desc(struct adapter *adapter, struct sge_txq *q,
unsigned int n)
static inline unsigned int reclaim_completed_tx(struct adapter *adapter,
struct sge_txq *q,
unsigned int chunk)
static inline int should_restart_tx(const struct sge_txq *q)
static void clear_rx_desc(struct pci_dev *pdev, const struct sge_fl *q,
struct rx_sw_desc *d)
static void free_rx_bufs(struct pci_dev *pdev, struct sge_fl *q)
static inline int add_one_rx_buf(void *va, unsigned int len,
struct rx_desc *d, struct rx_sw_desc *sd,
unsigned int gen, struct pci_dev *pdev)
static inline int add_one_rx_chunk(dma_addr_t mapping, struct rx_desc *d,
unsigned int gen)
static int alloc_pg_chunk(struct adapter *adapter, struct sge_fl *q,
struct rx_sw_desc *sd, gfp_t gfp,
unsigned int order)
static inline void ring_fl_db(struct adapter *adap, struct sge_fl *q)
static int refill_fl(struct adapter *adap, struct sge_fl *q, int n, gfp_t gfp)
static inline void __refill_fl(struct adapter *adap, struct sge_fl *fl)
static void recycle_rx_buf(struct adapter *adap, struct sge_fl *q,
unsigned int idx)
static void *alloc_ring(struct pci_dev *pdev, size_t nelem, size_t elem_size,
size_t sw_size, dma_addr_t * phys, void *metadata)
static void t3_reset_qset(struct sge_qset *q)
static void t3_free_qset(struct adapter *adapter, struct sge_qset *q)
static void init_qset_cntxt(struct sge_qset *qs, unsigned int id)
static inline unsigned int sgl_len(unsigned int n)
static inline unsigned int flits_to_desc(unsigned int n)
static struct sk_buff *get_packet(struct adapter *adap, struct sge_fl *fl,
unsigned int len, unsigned int drop_thres)
static struct sk_buff *get_packet_pg(struct adapter *adap, struct sge_fl *fl,
struct sge_rspq *q, unsigned int len,
unsigned int drop_thres)
static inline struct sk_buff *get_imm_packet(const struct rsp_desc *resp)
static inline unsigned int calc_tx_descs(const struct sk_buff *skb)
static inline unsigned int make_sgl(const struct sk_buff *skb,
struct sg_ent *sgp, unsigned char *start,
unsigned int len, struct pci_dev *pdev)
static inline void check_ring_tx_db(struct adapter *adap, struct sge_txq *q)
static inline void wr_gen2(struct tx_desc *d, unsigned int gen)
static void write_wr_hdr_sgl(unsigned int ndesc, struct sk_buff *skb,
struct tx_desc *d, unsigned int pidx,
const struct sge_txq *q,
const struct sg_ent *sgl,
unsigned int flits, unsigned int sgl_flits,
unsigned int gen, __be32 wr_hi,
__be32 wr_lo)
static void write_tx_pkt_wr(struct adapter *adap, struct sk_buff *skb,
const struct port_info *pi,
unsigned int pidx, unsigned int gen,
struct sge_txq *q, unsigned int ndesc,
unsigned int compl)
static inline void t3_stop_tx_queue(struct netdev_queue *txq,
struct sge_qset *qs, struct sge_txq *q)
netdev_tx_t t3_eth_xmit(struct sk_buff *skb, struct net_device *dev)
static inline void write_imm(struct tx_desc *d, struct sk_buff *skb,
unsigned int len, unsigned int gen)
static inline int check_desc_avail(struct adapter *adap, struct sge_txq *q,
struct sk_buff *skb, unsigned int ndesc,
unsigned int qid)
static inline void reclaim_completed_tx_imm(struct sge_txq *q)
static inline int immediate(const struct sk_buff *skb)
static int ctrl_xmit(struct adapter *adap, struct sge_txq *q,
struct sk_buff *skb)
static void restart_ctrlq(unsigned long data)
int t3_mgmt_tx(struct adapter *adap, struct sk_buff *skb)
static void deferred_unmap_destructor(struct sk_buff *skb)
static void setup_deferred_unmapping(struct sk_buff *skb, struct pci_dev *pdev,
const struct sg_ent *sgl, int sgl_flits)
static void write_ofld_wr(struct adapter *adap, struct sk_buff *skb,
struct sge_txq *q, unsigned int pidx,
unsigned int gen, unsigned int ndesc)
static inline unsigned int calc_tx_descs_ofld(const struct sk_buff *skb)
static int ofld_xmit(struct adapter *adap, struct sge_txq *q,
struct sk_buff *skb)
static void restart_offloadq(unsigned long data)
static inline int queue_set(const struct sk_buff *skb)
static inline int is_ctrl_pkt(const struct sk_buff *skb)
int t3_offload_tx(struct t3cdev *tdev, struct sk_buff *skb)
static inline void offload_enqueue(struct sge_rspq *q, struct sk_buff *skb)
static inline void deliver_partial_bundle(struct t3cdev *tdev,
struct sge_rspq *q,
struct sk_buff *skbs[], int n)
static int ofld_poll(struct napi_struct *napi, int budget)
static inline int rx_offload(struct t3cdev *tdev, struct sge_rspq *rq,
struct sk_buff *skb, struct sk_buff *rx_gather[],
unsigned int gather_idx)
static void restart_tx(struct sge_qset *qs)
static void cxgb3_arp_process(struct port_info *pi, struct sk_buff *skb)
static inline int is_arp(struct sk_buff *skb)
static void cxgb3_process_iscsi_prov_pack(struct port_info *pi,
struct sk_buff *skb)
static void rx_eth(struct adapter *adap, struct sge_rspq *rq,
struct sk_buff *skb, int pad, int lro)
static inline int is_eth_tcp(u32 rss)
static void lro_add_page(struct adapter *adap, struct sge_qset *qs,
struct sge_fl *fl, int len, int complete)
static inline void handle_rsp_cntrl_info(struct sge_qset *qs, u32 flags)
static void check_ring_db(struct adapter *adap, struct sge_qset *qs,
unsigned int sleeping)
static inline int is_new_response(const struct rsp_desc *r,
const struct sge_rspq *q)
static inline void clear_rspq_bufstate(struct sge_rspq * const q)
#define RSPD_GTS_MASK  (F_RSPD_TXQ0_GTS | F_RSPD_TXQ1_GTS)
#define RSPD_CTRL_MASK (RSPD_GTS_MASK | \
V_RSPD_TXQ0_CR(M_RSPD_TXQ0_CR) | \
V_RSPD_TXQ1_CR(M_RSPD_TXQ1_CR) | \
V_RSPD_TXQ2_CR(M_RSPD_TXQ2_CR))
#define NOMEM_INTR_DELAY 2500
static int process_responses(struct adapter *adap, struct sge_qset *qs,
int budget)
static inline int is_pure_response(const struct rsp_desc *r)
static int napi_rx_handler(struct napi_struct *napi, int budget)
static inline int napi_is_scheduled(struct napi_struct *napi)
static int process_pure_responses(struct adapter *adap, struct sge_qset *qs,
struct rsp_desc *r)
static inline int handle_responses(struct adapter *adap, struct sge_rspq *q)
static irqreturn_t t3_sge_intr_msix(int irq, void *cookie)
static irqreturn_t t3_sge_intr_msix_napi(int irq, void *cookie)
static irqreturn_t t3_intr_msi(int irq, void *cookie)
static int rspq_check_napi(struct sge_qset *qs)
static irqreturn_t t3_intr_msi_napi(int irq, void *cookie)
static inline int process_responses_gts(struct adapter *adap,
struct sge_rspq *rq)
static irqreturn_t t3_intr(int irq, void *cookie)
static irqreturn_t t3b_intr(int irq, void *cookie)
static irqreturn_t t3b_intr_napi(int irq, void *cookie)
irq_handler_t t3_intr_handler(struct adapter *adap, int polling)
#define SGE_PARERR (F_CPPARITYERROR | F_OCPARITYERROR | F_RCPARITYERROR | \
F_IRPARITYERROR | V_ITPARITYERROR(M_ITPARITYERROR) | \
V_FLPARITYERROR(M_FLPARITYERROR) | F_LODRBPARITYERROR | \
F_HIDRBPARITYERROR | F_LORCQPARITYERROR | \
F_HIRCQPARITYERROR)
#define SGE_FRAMINGERR (F_UC_REQ_FRAMINGERROR | F_R_REQ_FRAMINGERROR)
#define SGE_FATALERR (SGE_PARERR | SGE_FRAMINGERR | F_RSPQCREDITOVERFOW | \
F_RSPQDISABLED)
void t3_sge_err_intr_handler(struct adapter *adapter)
static void sge_timer_tx(unsigned long data)
static void sge_timer_rx(unsigned long data)
void t3_update_qset_coalesce(struct sge_qset *qs, const struct qset_params *p)
int t3_sge_alloc_qset(struct adapter *adapter, unsigned int id, int nports,
int irq_vec_idx, const struct qset_params *p,
int ntxq, struct net_device *dev,
struct netdev_queue *netdevq)
void t3_start_sge_timers(struct adapter *adap)
void t3_stop_sge_timers(struct adapter *adap)
void t3_free_sge_resources(struct adapter *adap)
void t3_sge_start(struct adapter *adap)
void t3_sge_stop(struct adapter *adap)
void t3_sge_init(struct adapter *adap, struct sge_params *p)
void t3_sge_prep(struct adapter *adap, struct sge_params *p)
