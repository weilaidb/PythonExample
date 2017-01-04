#define _CXGB_SGE_H_
struct sge_intr_counts ;
struct sge_port_stats ;
struct sk_buff;
struct net_device;
struct adapter;
struct sge_params;
struct sge;
struct sge *t1_sge_create(struct adapter *, struct sge_params *);
int t1_sge_configure(struct sge *, struct sge_params *);
int t1_sge_set_coalesce_params(struct sge *, struct sge_params *);
void t1_sge_destroy(struct sge *);
irqreturn_t t1_interrupt(int irq, void *cookie);
int t1_poll(struct napi_struct *, int);
netdev_tx_t t1_start_xmit(struct sk_buff *skb, struct net_device *dev);
void t1_set_vlan_accel(struct adapter *adapter, int on_off);
void t1_sge_start(struct sge *);
void t1_sge_stop(struct sge *);
int t1_sge_intr_error_handler(struct sge *);
void t1_sge_intr_enable(struct sge *);
void t1_sge_intr_disable(struct sge *);
void t1_sge_intr_clear(struct sge *);
const struct sge_intr_counts *t1_sge_get_intr_counts(const struct sge *sge);
void t1_sge_get_port_stats(const struct sge *sge, int port, struct sge_port_stats *);
unsigned int t1_sched_update_parms(struct sge *, unsigned int, unsigned int,
unsigned int);
