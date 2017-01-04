static int bat_get_settings(struct net_device *dev, struct ethtool_cmd *cmd);
static void bat_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info);
static u32 bat_get_msglevel(struct net_device *dev);
static void bat_set_msglevel(struct net_device *dev, u32 value);
static u32 bat_get_link(struct net_device *dev);
static const struct ethtool_ops bat_ethtool_ops = ;
int my_skb_head_push(struct sk_buff *skb, unsigned int len)
static void softif_neigh_free_ref(struct softif_neigh *softif_neigh)
static void softif_neigh_vid_free_rcu(struct rcu_head *rcu)
static void softif_neigh_vid_free_ref(struct softif_neigh_vid *softif_neigh_vid)
static struct softif_neigh_vid *softif_neigh_vid_get(struct bat_priv *bat_priv,
short vid)
static struct softif_neigh *softif_neigh_get(struct bat_priv *bat_priv,
uint8_t *addr, short vid)
static struct softif_neigh *softif_neigh_get_selected(
struct softif_neigh_vid *softif_neigh_vid)
static struct softif_neigh *softif_neigh_vid_get_selected(
struct bat_priv *bat_priv,
short vid)
static void softif_neigh_vid_select(struct bat_priv *bat_priv,
struct softif_neigh *new_neigh,
short vid)
static void softif_neigh_vid_deselect(struct bat_priv *bat_priv,
struct softif_neigh_vid *softif_neigh_vid)
int softif_neigh_seq_print_text(struct seq_file *seq, void *offset)
void softif_neigh_purge(struct bat_priv *bat_priv)
static void softif_batman_recv(struct sk_buff *skb, struct net_device *dev,
short vid)
static int interface_open(struct net_device *dev)
static int interface_release(struct net_device *dev)
static struct net_device_stats *interface_stats(struct net_device *dev)
static int interface_set_mac_addr(struct net_device *dev, void *p)
static int interface_change_mtu(struct net_device *dev, int new_mtu)
int interface_tx(struct sk_buff *skb, struct net_device *soft_iface)
void interface_rx(struct net_device *soft_iface,
struct sk_buff *skb, struct hard_iface *recv_if,
int hdr_size)
static const struct net_device_ops bat_netdev_ops = ;
static void interface_setup(struct net_device *dev)
struct net_device *softif_create(char *name)
void softif_destroy(struct net_device *soft_iface)
int softif_is_valid(struct net_device *net_dev)
static int bat_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void bat_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 bat_get_msglevel(struct net_device *dev)
static void bat_set_msglevel(struct net_device *dev, u32 value)
static u32 bat_get_link(struct net_device *dev)
