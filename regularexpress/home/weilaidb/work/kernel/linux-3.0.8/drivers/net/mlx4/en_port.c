int mlx4_SET_MCAST_FLTR(struct mlx4_dev *dev, u8 port,
u64 mac, u64 clear, u8 mode)
int mlx4_SET_VLAN_FLTR(struct mlx4_dev *dev, u8 port, struct vlan_group *grp)
int mlx4_SET_PORT_general(struct mlx4_dev *dev, u8 port, int mtu,
u8 pptx, u8 pfctx, u8 pprx, u8 pfcrx)
int mlx4_SET_PORT_qpn_calc(struct mlx4_dev *dev, u8 port, u32 base_qpn,
u8 promisc)
int mlx4_en_QUERY_PORT(struct mlx4_en_dev *mdev, u8 port)
int mlx4_en_DUMP_ETH_STATS(struct mlx4_en_dev *mdev, u8 port, u8 reset)
