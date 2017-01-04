enum ;
int mlx4_MAD_IFC(struct mlx4_ib_dev *dev, int ignore_mkey, int ignore_bkey,
int port, struct ib_wc *in_wc, struct ib_grh *in_grh,
void *in_mad, void *response_mad)
static void update_sm_ah(struct mlx4_ib_dev *dev, u8 port_num, u16 lid, u8 sl)
static void smp_snoop(struct ib_device *ibdev, u8 port_num, struct ib_mad *mad,
u16 prev_lid)
static void node_desc_override(struct ib_device *dev,
struct ib_mad *mad)
static void forward_trap(struct mlx4_ib_dev *dev, u8 port_num, struct ib_mad *mad)
int mlx4_ib_process_mad(struct ib_device *ibdev, int mad_flags,	u8 port_num,
struct ib_wc *in_wc, struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad)
static void send_handler(struct ib_mad_agent *agent,
struct ib_mad_send_wc *mad_send_wc)
int mlx4_ib_mad_init(struct mlx4_ib_dev *dev)
void mlx4_ib_mad_cleanup(struct mlx4_ib_dev *dev)
