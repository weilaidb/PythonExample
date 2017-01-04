int mlx4_SENSE_PORT(struct mlx4_dev *dev, int port,
enum mlx4_port_type *type)
void mlx4_do_sense_ports(struct mlx4_dev *dev,
enum mlx4_port_type *stype,
enum mlx4_port_type *defaults)
static void mlx4_sense_port(struct work_struct *work)
void mlx4_start_sense(struct mlx4_dev *dev)
void mlx4_stop_sense(struct mlx4_dev *dev)
void  mlx4_sense_init(struct mlx4_dev *dev)
