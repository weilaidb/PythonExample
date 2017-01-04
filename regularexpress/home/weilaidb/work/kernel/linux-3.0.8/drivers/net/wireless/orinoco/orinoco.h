#define _ORINOCO_H
#define DRIVER_VERSION "0.15"
#define WIRELESS_SPY
#define MAX_SCAN_LEN		4096
#define ORINOCO_SEQ_LEN		8
#define ORINOCO_MAX_KEY_SIZE	14
#define ORINOCO_MAX_KEYS	4
struct orinoco_key  __packed;
#define TKIP_KEYLEN	16
#define MIC_KEYLEN	8
struct orinoco_tkip_key ;
enum orinoco_alg ;
typedef enum  fwtype_t;
struct firmware;
struct orinoco_private ;
extern int orinoco_debug;
#define DEBUG(n, args...) do  while (0)
#define DEBUG(n, args...) do  while (0)
extern struct orinoco_private *alloc_orinocodev(
int sizeof_card, struct device *device,
int (*hard_reset)(struct orinoco_private *),
int (*stop_fw)(struct orinoco_private *, int));
extern void free_orinocodev(struct orinoco_private *priv);
extern int orinoco_init(struct orinoco_private *priv);
extern int orinoco_if_add(struct orinoco_private *priv,
unsigned long base_addr,
unsigned int irq,
const struct net_device_ops *ops);
extern void orinoco_if_del(struct orinoco_private *priv);
extern int orinoco_up(struct orinoco_private *priv);
extern void orinoco_down(struct orinoco_private *priv);
extern irqreturn_t orinoco_interrupt(int irq, void *dev_id);
extern void __orinoco_ev_info(struct net_device *dev, hermes_t *hw);
extern void __orinoco_ev_rx(struct net_device *dev, hermes_t *hw);
int orinoco_process_xmit_skb(struct sk_buff *skb,
struct net_device *dev,
struct orinoco_private *priv,
int *tx_control,
u8 *mic);
int orinoco_open(struct net_device *dev);
int orinoco_stop(struct net_device *dev);
struct net_device_stats *orinoco_get_stats(struct net_device *dev);
void orinoco_set_multicast_list(struct net_device *dev);
int orinoco_change_mtu(struct net_device *dev, int new_mtu);
void orinoco_tx_timeout(struct net_device *dev);
static inline int orinoco_lock(struct orinoco_private *priv,
unsigned long *flags)
static inline void orinoco_unlock(struct orinoco_private *priv,
unsigned long *flags)
static inline void orinoco_lock_irq(struct orinoco_private *priv)
static inline void orinoco_unlock_irq(struct orinoco_private *priv)
static inline struct orinoco_private *ndev_priv(struct net_device *dev)
