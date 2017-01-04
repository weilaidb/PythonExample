#define __T3_ADAPTER_H__
struct vlan_group;
struct adapter;
struct sge_qset;
struct port_info;
enum mac_idx_types ;
struct iscsi_config ;
struct port_info ;
enum ;
struct fl_pg_chunk ;
struct rx_desc;
struct rx_sw_desc;
struct sge_fl ;
# define RX_BUNDLE_SIZE 8
struct rsp_desc;
struct sge_rspq ;
struct tx_desc;
struct tx_sw_desc;
struct sge_txq ;
enum ;
struct napi_gro_fraginfo;
struct sge_qset  ____cacheline_aligned;
struct sge ;
struct adapter ;
static inline u32 t3_read_reg(struct adapter *adapter, u32 reg_addr)
static inline void t3_write_reg(struct adapter *adapter, u32 reg_addr, u32 val)
static inline struct port_info *adap2pinfo(struct adapter *adap, int idx)
static inline int phy2portid(struct cphy *phy)
#define OFFLOAD_DEVMAP_BIT 15
#define tdev2adap(d) container_of(d, struct adapter, tdev)
static inline int offload_running(struct adapter *adapter)
int t3_offload_tx(struct t3cdev *tdev, struct sk_buff *skb);
void t3_os_ext_intr_handler(struct adapter *adapter);
void t3_os_link_changed(struct adapter *adapter, int port_id, int link_status,
int speed, int duplex, int fc);
void t3_os_phymod_changed(struct adapter *adap, int port_id);
void t3_os_link_fault(struct adapter *adapter, int port_id, int state);
void t3_os_link_fault_handler(struct adapter *adapter, int port_id);
void t3_sge_start(struct adapter *adap);
void t3_sge_stop(struct adapter *adap);
void t3_start_sge_timers(struct adapter *adap);
void t3_stop_sge_timers(struct adapter *adap);
void t3_free_sge_resources(struct adapter *adap);
void t3_sge_err_intr_handler(struct adapter *adapter);
irq_handler_t t3_intr_handler(struct adapter *adap, int polling);
netdev_tx_t t3_eth_xmit(struct sk_buff *skb, struct net_device *dev);
int t3_mgmt_tx(struct adapter *adap, struct sk_buff *skb);
void t3_update_qset_coalesce(struct sge_qset *qs, const struct qset_params *p);
int t3_sge_alloc_qset(struct adapter *adapter, unsigned int id, int nports,
int irq_vec_idx, const struct qset_params *p,
int ntxq, struct net_device *dev,
struct netdev_queue *netdevq);
extern struct workqueue_struct *cxgb3_wq;
int t3_get_edc_fw(struct cphy *phy, int edc_idx, int size);
