#define MLX4_DRIVER_H
struct mlx4_dev;
enum mlx4_dev_event ;
struct mlx4_interface ;
int mlx4_register_interface(struct mlx4_interface *intf);
void mlx4_unregister_interface(struct mlx4_interface *intf);
void *mlx4_get_protocol_dev(struct mlx4_dev *dev, enum mlx4_protocol proto, int port);
