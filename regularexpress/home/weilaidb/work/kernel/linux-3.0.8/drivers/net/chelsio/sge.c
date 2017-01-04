#define ETH_P_CPL5 0xf
#define SGE_CMDQ_N		2
#define SGE_FREELQ_N		2
#define SGE_CMDQ0_E_N		1024
#define SGE_CMDQ1_E_N		128
#define SGE_FREEL_SIZE		4096
#define SGE_JUMBO_FREEL_SIZE	512
#define SGE_FREEL_REFILL_THRESH	16
#define SGE_RESPQ_E_N		1024
#define SGE_INTRTIMER_NRES	1000
#define SGE_RX_SM_BUF_SIZE	1536
#define SGE_TX_DESC_MAX_PLEN	16384
#define SGE_RESPQ_REPLENISH_THRES (SGE_RESPQ_E_N / 4)
#define TX_RECLAIM_PERIOD (HZ / 4)
#define M_CMD_LEN       0x7fffffff
#define V_CMD_LEN(v)    (v)
#define G_CMD_LEN(v)    ((v) & M_CMD_LEN)
#define V_CMD_GEN1(v)   ((v) << 31)
#define V_CMD_GEN2(v)   (v)
#define F_CMD_DATAVALID (1 << 1)
#define F_CMD_SOP       (1 << 2)
#define V_CMD_EOP(v)    ((v) << 3)
#if defined(__BIG_ENDIAN_BITFIELD)
struct cmdQ_e ;
struct freelQ_e ;
struct respQ_e ;
#elif defined(__LITTLE_ENDIAN_BITFIELD)
struct cmdQ_e ;
struct freelQ_e ;
struct respQ_e  ;
struct cmdQ_ce ;
struct freelQ_ce ;
struct cmdQ ;
struct freelQ ;
struct respQ ;
enum ;
struct sched_port ;
struct sched ;
static void restart_sched(unsigned long);
struct sge ;
static const u8 ch_mac_addr[ETH_ALEN] = ;
static void tx_sched_stop(struct sge *sge)
unsigned int t1_sched_update_parms(struct sge *sge, unsigned int port,
unsigned int mtu, unsigned int speed)
static inline ktime_t get_clock(void)
static int tx_sched_init(struct sge *sge)
static inline int sched_update_avail(struct sge *sge)
static struct sk_buff *sched_skb(struct sge *sge, struct sk_buff *skb,
unsigned int credits)
static inline void doorbell_pio(struct adapter *adapter, u32 val)
static void free_freelQ_buffers(struct pci_dev *pdev, struct freelQ *q)
static void free_rx_resources(struct sge *sge)
static int alloc_rx_resources(struct sge *sge, struct sge_params *p)
static void free_cmdQ_buffers(struct sge *sge, struct cmdQ *q, unsigned int n)
static void free_tx_resources(struct sge *sge)
static int alloc_tx_resources(struct sge *sge, struct sge_params *p)
static inline void setup_ring_params(struct adapter *adapter, u64 addr,
u32 size, int base_reg_lo,
int base_reg_hi, int size_reg)
void t1_set_vlan_accel(struct adapter *adapter, int on_off)
static void configure_sge(struct sge *sge, struct sge_params *p)
static inline unsigned int jumbo_payload_capacity(const struct sge *sge)
void t1_sge_destroy(struct sge *sge)
static void refill_free_list(struct sge *sge, struct freelQ *q)
static void freelQs_empty(struct sge *sge)
#define SGE_PL_INTR_MASK (F_PL_INTR_SGE_ERR | F_PL_INTR_SGE_DATA)
#define SGE_INT_FATAL (F_RESPQ_OVERFLOW | F_PACKET_TOO_BIG | F_PACKET_MISMATCH)
#define SGE_INT_ENABLE (F_RESPQ_EXHAUSTED | F_RESPQ_OVERFLOW | \
F_FL_EXHAUSTED | F_PACKET_TOO_BIG | F_PACKET_MISMATCH)
void t1_sge_intr_disable(struct sge *sge)
void t1_sge_intr_enable(struct sge *sge)
void t1_sge_intr_clear(struct sge *sge)
int t1_sge_intr_error_handler(struct sge *sge)
const struct sge_intr_counts *t1_sge_get_intr_counts(const struct sge *sge)
void t1_sge_get_port_stats(const struct sge *sge, int port,
struct sge_port_stats *ss)
static void recycle_fl_buf(struct freelQ *fl, int idx)
static int copybreak __read_mostly = 256;
module_param(copybreak, int, 0);
MODULE_PARM_DESC(copybreak, "Receive copy threshold");
static inline struct sk_buff *get_packet(struct pci_dev *pdev,
struct freelQ *fl, unsigned int len)
static void unexpected_offload(struct adapter *adapter, struct freelQ *fl)
static inline unsigned int compute_large_page_tx_descs(struct sk_buff *skb)
static inline void write_tx_desc(struct cmdQ_e *e, dma_addr_t mapping,
unsigned int len, unsigned int gen,
unsigned int eop)
static inline unsigned int write_large_page_tx_descs(unsigned int pidx,
struct cmdQ_e **e,
struct cmdQ_ce **ce,
unsigned int *gen,
dma_addr_t *desc_mapping,
unsigned int *desc_len,
unsigned int nfrags,
struct cmdQ *q)
static inline void write_tx_descs(struct adapter *adapter, struct sk_buff *skb,
unsigned int pidx, unsigned int gen,
struct cmdQ *q)
static inline void reclaim_completed_tx(struct sge *sge, struct cmdQ *q)
static void restart_sched(unsigned long arg)
static void sge_rx(struct sge *sge, struct freelQ *fl, unsigned int len)
static inline int enough_free_Tx_descs(const struct cmdQ *q)
static void restart_tx_queues(struct sge *sge)
static unsigned int update_tx_info(struct adapter *adapter,
unsigned int flags,
unsigned int pr0)
static int process_responses(struct adapter *adapter, int budget)
static inline int responses_pending(const struct adapter *adapter)
static int process_pure_responses(struct adapter *adapter)
int t1_poll(struct napi_struct *napi, int budget)
irqreturn_t t1_interrupt(int irq, void *data)
static int t1_sge_tx(struct sk_buff *skb, struct adapter *adapter,
unsigned int qid, struct net_device *dev)
#define MK_ETH_TYPE_MSS(type, mss) (((mss) & 0x3FFF) | ((type) << 14))
static inline int eth_hdr_len(const void *data)
netdev_tx_t t1_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void sge_tx_reclaim_cb(unsigned long data)
int t1_sge_set_coalesce_params(struct sge *sge, struct sge_params *p)
int t1_sge_configure(struct sge *sge, struct sge_params *p)
void t1_sge_stop(struct sge *sge)
void t1_sge_start(struct sge *sge)
static void espibug_workaround_t204(unsigned long data)
static void espibug_workaround(unsigned long data)
struct sge * __devinit t1_sge_create(struct adapter *adapter,
struct sge_params *p)
