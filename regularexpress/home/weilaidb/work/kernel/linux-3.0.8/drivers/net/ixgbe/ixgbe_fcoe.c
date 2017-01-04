static inline bool ixgbe_rx_is_fcoe(union ixgbe_adv_rx_desc *rx_desc)
static inline void ixgbe_fcoe_clear_ddp(struct ixgbe_fcoe_ddp *ddp)
int ixgbe_fcoe_ddp_put(struct net_device *netdev, u16 xid)
static int ixgbe_fcoe_ddp_setup(struct net_device *netdev, u16 xid,
struct scatterlist *sgl, unsigned int sgc,
int target_mode)
int ixgbe_fcoe_ddp_get(struct net_device *netdev, u16 xid,
struct scatterlist *sgl, unsigned int sgc)
int ixgbe_fcoe_ddp_target(struct net_device *netdev, u16 xid,
struct scatterlist *sgl, unsigned int sgc)
int ixgbe_fcoe_ddp(struct ixgbe_adapter *adapter,
union ixgbe_adv_rx_desc *rx_desc,
struct sk_buff *skb)
int ixgbe_fso(struct ixgbe_adapter *adapter,
struct ixgbe_ring *tx_ring, struct sk_buff *skb,
u32 tx_flags, u8 *hdr_len)
void ixgbe_configure_fcoe(struct ixgbe_adapter *adapter)
void ixgbe_cleanup_fcoe(struct ixgbe_adapter *adapter)
int ixgbe_fcoe_enable(struct net_device *netdev)
int ixgbe_fcoe_disable(struct net_device *netdev)
u8 ixgbe_fcoe_setapp(struct ixgbe_adapter *adapter, u8 up)
int ixgbe_fcoe_get_wwn(struct net_device *netdev, u64 *wwn, int type)
