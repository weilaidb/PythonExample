#define _ENIC_DEV_H_
int enic_dev_fw_info(struct enic *enic, struct vnic_devcmd_fw_info **fw_info);
int enic_dev_stats_dump(struct enic *enic, struct vnic_stats **vstats);
int enic_dev_add_station_addr(struct enic *enic);
int enic_dev_del_station_addr(struct enic *enic);
int enic_dev_packet_filter(struct enic *enic, int directed, int multicast,
int broadcast, int promisc, int allmulti);
int enic_dev_add_addr(struct enic *enic, u8 *addr);
int enic_dev_del_addr(struct enic *enic, u8 *addr);
void enic_vlan_rx_add_vid(struct net_device *netdev, u16 vid);
void enic_vlan_rx_kill_vid(struct net_device *netdev, u16 vid);
int enic_dev_notify_unset(struct enic *enic);
int enic_dev_hang_notify(struct enic *enic);
int enic_dev_set_ig_vlan_rewrite_mode(struct enic *enic);
int enic_dev_enable(struct enic *enic);
int enic_dev_disable(struct enic *enic);
int enic_vnic_dev_deinit(struct enic *enic);
int enic_dev_init_prov2(struct enic *enic, struct vic_provinfo *vp);
int enic_dev_deinit_done(struct enic *enic, int *status);
int enic_dev_enable2(struct enic *enic, int arg);
int enic_dev_enable2_done(struct enic *enic, int *status);
int enic_dev_status_to_errno(int devcmd_status);
