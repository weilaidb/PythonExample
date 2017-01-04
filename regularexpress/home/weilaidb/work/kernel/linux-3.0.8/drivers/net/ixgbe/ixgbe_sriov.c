static int ixgbe_set_vf_multicasts(struct ixgbe_adapter *adapter,
int entries, u16 *hash_list, u32 vf)
static void ixgbe_restore_vf_macvlans(struct ixgbe_adapter *adapter)
void ixgbe_restore_vf_multicasts(struct ixgbe_adapter *adapter)
static int ixgbe_set_vf_vlan(struct ixgbe_adapter *adapter, int add, int vid,
u32 vf)
static void ixgbe_set_vf_lpe(struct ixgbe_adapter *adapter, u32 *msgbuf)
static void ixgbe_set_vmolr(struct ixgbe_hw *hw, u32 vf, bool aupe)
static void ixgbe_set_vmvir(struct ixgbe_adapter *adapter, u32 vid, u32 vf)
static inline void ixgbe_vf_reset_event(struct ixgbe_adapter *adapter, u32 vf)
static int ixgbe_set_vf_mac(struct ixgbe_adapter *adapter,
int vf, unsigned char *mac_addr)
static int ixgbe_set_vf_macvlan(struct ixgbe_adapter *adapter,
int vf, int index, unsigned char *mac_addr)
int ixgbe_vf_configuration(struct pci_dev *pdev, unsigned int event_mask)
static inline void ixgbe_vf_reset_msg(struct ixgbe_adapter *adapter, u32 vf)
static int ixgbe_rcv_msg_from_vf(struct ixgbe_adapter *adapter, u32 vf)
static void ixgbe_rcv_ack_from_vf(struct ixgbe_adapter *adapter, u32 vf)
void ixgbe_msg_task(struct ixgbe_adapter *adapter)
void ixgbe_disable_tx_rx(struct ixgbe_adapter *adapter)
void ixgbe_ping_all_vfs(struct ixgbe_adapter *adapter)
int ixgbe_ndo_set_vf_mac(struct net_device *netdev, int vf, u8 *mac)
int ixgbe_ndo_set_vf_vlan(struct net_device *netdev, int vf, u16 vlan, u8 qos)
static int ixgbe_link_mbps(int internal_link_speed)
static void ixgbe_set_vf_rate_limit(struct ixgbe_hw *hw, int vf, int tx_rate,
int link_speed)
void ixgbe_check_vf_rate_limit(struct ixgbe_adapter *adapter)
int ixgbe_ndo_set_vf_bw(struct net_device *netdev, int vf, int tx_rate)
int ixgbe_ndo_get_vf_config(struct net_device *netdev,
int vf, struct ifla_vf_info *ivi)
