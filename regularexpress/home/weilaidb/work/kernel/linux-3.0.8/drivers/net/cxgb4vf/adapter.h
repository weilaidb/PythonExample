#define __CXGB4VF_ADAPTER_H__
enum ;
struct adapter;
struct sge_eth_rxq;
struct sge_rspq;
struct port_info ;
struct rx_sw_desc;
struct sge_fl ;
struct pkt_gl ;
typedef int (*rspq_handler_t)(struct sge_rspq *, const __be64 *,
const struct pkt_gl *);
struct sge_rspq ;
struct sge_eth_stats ;
struct sge_eth_rxq ;
struct tx_desc ;
struct tx_sw_desc;
struct sge_txq ;
struct sge_eth_txq ;
struct sge ;
#define EQ_IDX(s, abs_id) ((unsigned int)((abs_id) - (s)->egr_base))
#define IQ_IDX(s, abs_id) ((unsigned int)((abs_id) - (s)->ingr_base))
#define EQ_MAP(s, abs_id) ((s)->egr_map[EQ_IDX(s, abs_id)])
#define IQ_MAP(s, abs_id) ((s)->ingr_map[IQ_IDX(s, abs_id)])
#define for_each_ethrxq(sge, iter) \
for (iter = 0; iter < (sge)->ethqsets; iter++)
struct adapter ;
enum ;
static inline u32 t4_read_reg(struct adapter *adapter, u32 reg_addr)
static inline void t4_write_reg(struct adapter *adapter, u32 reg_addr, u32 val)
static inline u64 readq(const volatile void __iomem *addr)
static inline void writeq(u64 val, volatile void __iomem *addr)
static inline u64 t4_read_reg64(struct adapter *adapter, u32 reg_addr)
static inline void t4_write_reg64(struct adapter *adapter, u32 reg_addr,
u64 val)
static inline const char *port_name(struct adapter *adapter, int pidx)
static inline void t4_os_set_hw_addr(struct adapter *adapter, int pidx,
u8 hw_addr[])
static inline struct port_info *netdev2pinfo(const struct net_device *dev)
static inline struct port_info *adap2pinfo(struct adapter *adapter, int pidx)
static inline struct adapter *netdev2adap(const struct net_device *dev)
void t4vf_os_link_changed(struct adapter *, int, int);
int t4vf_sge_alloc_rxq(struct adapter *, struct sge_rspq *, bool,
struct net_device *, int,
struct sge_fl *, rspq_handler_t);
int t4vf_sge_alloc_eth_txq(struct adapter *, struct sge_eth_txq *,
struct net_device *, struct netdev_queue *,
unsigned int);
void t4vf_free_sge_resources(struct adapter *);
int t4vf_eth_xmit(struct sk_buff *, struct net_device *);
int t4vf_ethrx_handler(struct sge_rspq *, const __be64 *,
const struct pkt_gl *);
irq_handler_t t4vf_intr_handler(struct adapter *);
irqreturn_t t4vf_sge_intr_msix(int, void *);
int t4vf_sge_init(struct adapter *);
void t4vf_sge_start(struct adapter *);
void t4vf_sge_stop(struct adapter *);
