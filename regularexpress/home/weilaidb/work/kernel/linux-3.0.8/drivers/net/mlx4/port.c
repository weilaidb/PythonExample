#define MLX4_MAC_VALID		(1ull << 63)
#define MLX4_MAC_MASK		0xffffffffffffULL
#define MLX4_VLAN_VALID		(1u << 31)
#define MLX4_VLAN_MASK		0xfff
void mlx4_init_mac_table(struct mlx4_dev *dev, struct mlx4_mac_table *table)
void mlx4_init_vlan_table(struct mlx4_dev *dev, struct mlx4_vlan_table *table)
static int mlx4_set_port_mac_table(struct mlx4_dev *dev, u8 port,
__be64 *entries)
static int mlx4_uc_steer_add(struct mlx4_dev *dev, u8 port,
u64 mac, int *qpn, u8 reserve)
static void mlx4_uc_steer_release(struct mlx4_dev *dev, u8 port,
u64 mac, int qpn, u8 free)
int mlx4_register_mac(struct mlx4_dev *dev, u8 port, u64 mac, int *qpn, u8 wrap)
EXPORT_SYMBOL_GPL(mlx4_register_mac);
static int validate_index(struct mlx4_dev *dev,
struct mlx4_mac_table *table, int index)
static int find_index(struct mlx4_dev *dev,
struct mlx4_mac_table *table, u64 mac)
void mlx4_unregister_mac(struct mlx4_dev *dev, u8 port, int qpn)
EXPORT_SYMBOL_GPL(mlx4_unregister_mac);
int mlx4_replace_mac(struct mlx4_dev *dev, u8 port, int qpn, u64 new_mac, u8 wrap)
EXPORT_SYMBOL_GPL(mlx4_replace_mac);
static int mlx4_set_port_vlan_table(struct mlx4_dev *dev, u8 port,
__be32 *entries)
int mlx4_find_cached_vlan(struct mlx4_dev *dev, u8 port, u16 vid, int *idx)
EXPORT_SYMBOL_GPL(mlx4_find_cached_vlan);
int mlx4_register_vlan(struct mlx4_dev *dev, u8 port, u16 vlan, int *index)
EXPORT_SYMBOL_GPL(mlx4_register_vlan);
void mlx4_unregister_vlan(struct mlx4_dev *dev, u8 port, int index)
EXPORT_SYMBOL_GPL(mlx4_unregister_vlan);
int mlx4_get_port_ib_caps(struct mlx4_dev *dev, u8 port, __be32 *caps)
int mlx4_SET_PORT(struct mlx4_dev *dev, u8 port)
