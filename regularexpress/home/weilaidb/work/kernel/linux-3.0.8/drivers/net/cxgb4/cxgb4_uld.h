#define __CXGB4_OFLD_H
enum ;
#define INIT_TP_WR(w, tid) do  while (0)
#define INIT_TP_WR_CPL(w, cpl, tid) do  while (0)
#define INIT_ULPTX_WR(w, wrlen, atomic, tid) do  while (0)
#define CXGB4_MSG_AN ((void *)1)
struct serv_entry ;
union aopen_entry ;
struct tid_info ;
static inline void *lookup_tid(const struct tid_info *t, unsigned int tid)
static inline void *lookup_atid(const struct tid_info *t, unsigned int atid)
static inline void *lookup_stid(const struct tid_info *t, unsigned int stid)
static inline void cxgb4_insert_tid(struct tid_info *t, void *data,
unsigned int tid)
int cxgb4_alloc_atid(struct tid_info *t, void *data);
int cxgb4_alloc_stid(struct tid_info *t, int family, void *data);
void cxgb4_free_atid(struct tid_info *t, unsigned int atid);
void cxgb4_free_stid(struct tid_info *t, unsigned int stid, int family);
void cxgb4_remove_tid(struct tid_info *t, unsigned int qid, unsigned int tid);
struct in6_addr;
int cxgb4_create_server(const struct net_device *dev, unsigned int stid,
__be32 sip, __be16 sport, unsigned int queue);
static inline void set_wr_txq(struct sk_buff *skb, int prio, int queue)
enum cxgb4_uld ;
enum cxgb4_state ;
struct pci_dev;
struct l2t_data;
struct net_device;
struct pkt_gl;
struct tp_tcp_stats;
struct cxgb4_range ;
struct cxgb4_virt_res ;
#define OCQ_WIN_OFFSET(pdev, vres) \
(pci_resource_len((pdev), 2) - roundup_pow_of_two((vres)->ocq.size))
struct cxgb4_lld_info ;
struct cxgb4_uld_info ;
int cxgb4_register_uld(enum cxgb4_uld type, const struct cxgb4_uld_info *p);
int cxgb4_unregister_uld(enum cxgb4_uld type);
int cxgb4_ofld_send(struct net_device *dev, struct sk_buff *skb);
unsigned int cxgb4_port_chan(const struct net_device *dev);
unsigned int cxgb4_port_viid(const struct net_device *dev);
unsigned int cxgb4_port_idx(const struct net_device *dev);
unsigned int cxgb4_best_mtu(const unsigned short *mtus, unsigned short mtu,
unsigned int *idx);
void cxgb4_get_tcp_stats(struct pci_dev *pdev, struct tp_tcp_stats *v4,
struct tp_tcp_stats *v6);
void cxgb4_iscsi_init(struct net_device *dev, unsigned int tag_mask,
const unsigned int *pgsz_order);
struct sk_buff *cxgb4_pktgl_to_skb(const struct pkt_gl *gl,
unsigned int skb_len, unsigned int pull_len);
