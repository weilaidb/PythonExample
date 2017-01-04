struct mlx4_device_context ;
static LIST_HEAD(intf_list);
static LIST_HEAD(dev_list);
static DEFINE_MUTEX(intf_mutex);
static void mlx4_add_device(struct mlx4_interface *intf, struct mlx4_priv *priv)
static void mlx4_remove_device(struct mlx4_interface *intf, struct mlx4_priv *priv)
int mlx4_register_interface(struct mlx4_interface *intf)
EXPORT_SYMBOL_GPL(mlx4_register_interface);
void mlx4_unregister_interface(struct mlx4_interface *intf)
EXPORT_SYMBOL_GPL(mlx4_unregister_interface);
void mlx4_dispatch_event(struct mlx4_dev *dev, enum mlx4_dev_event type, int port)
int mlx4_register_device(struct mlx4_dev *dev)
void mlx4_unregister_device(struct mlx4_dev *dev)
void *mlx4_get_protocol_dev(struct mlx4_dev *dev, enum mlx4_protocol proto, int port)
EXPORT_SYMBOL_GPL(mlx4_get_protocol_dev);
