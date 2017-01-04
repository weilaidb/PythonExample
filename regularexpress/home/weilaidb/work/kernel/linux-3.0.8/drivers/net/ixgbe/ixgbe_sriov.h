#define _IXGBE_SRIOV_H_
void ixgbe_restore_vf_multicasts(struct ixgbe_adapter *adapter);
void ixgbe_msg_task(struct ixgbe_adapter *adapter);
int ixgbe_vf_configuration(struct pci_dev *pdev, unsigned int event_mask);
void ixgbe_disable_tx_rx(struct ixgbe_adapter *adapter);
void ixgbe_ping_all_vfs(struct ixgbe_adapter *adapter);
void ixgbe_dump_registers(struct ixgbe_adapter *adapter);
int ixgbe_ndo_set_vf_mac(struct net_device *netdev, int queue, u8 *mac);
int ixgbe_ndo_set_vf_vlan(struct net_device *netdev, int queue, u16 vlan,
u8 qos);
int ixgbe_ndo_set_vf_bw(struct net_device *netdev, int vf, int tx_rate);
int ixgbe_ndo_get_vf_config(struct net_device *netdev,
int vf, struct ifla_vf_info *ivi);
void ixgbe_check_vf_rate_limit(struct ixgbe_adapter *adapter);
