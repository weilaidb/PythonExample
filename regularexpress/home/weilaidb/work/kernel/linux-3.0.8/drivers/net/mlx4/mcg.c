#define MGM_QPN_MASK       0x00FFFFFF
#define MGM_BLCK_LB_BIT    30
static const u8 zero_gid[16];
static int mlx4_READ_ENTRY(struct mlx4_dev *dev, int index,
struct mlx4_cmd_mailbox *mailbox)
static int mlx4_WRITE_ENTRY(struct mlx4_dev *dev, int index,
struct mlx4_cmd_mailbox *mailbox)
static int mlx4_WRITE_PROMISC(struct mlx4_dev *dev, u8 vep_num, u8 port, u8 steer,
struct mlx4_cmd_mailbox *mailbox)
static int mlx4_GID_HASH(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
u16 *hash, u8 op_mod)
static struct mlx4_promisc_qp *get_promisc_qp(struct mlx4_dev *dev, u8 pf_num,
enum mlx4_steer_type steer,
u32 qpn)
static int new_steering_entry(struct mlx4_dev *dev, u8 vep_num, u8 port,
enum mlx4_steer_type steer,
unsigned int index, u32 qpn)
static int existing_steering_entry(struct mlx4_dev *dev, u8 vep_num, u8 port,
enum mlx4_steer_type steer,
unsigned int index, u32 qpn)
static bool check_duplicate_entry(struct mlx4_dev *dev, u8 vep_num, u8 port,
enum mlx4_steer_type steer,
unsigned int index, u32 qpn)
static bool can_remove_steering_entry(struct mlx4_dev *dev, u8 vep_num, u8 port,
enum mlx4_steer_type steer,
unsigned int index, u32 tqpn)
static int add_promisc_qp(struct mlx4_dev *dev, u8 vep_num, u8 port,
enum mlx4_steer_type steer, u32 qpn)
static int remove_promisc_qp(struct mlx4_dev *dev, u8 vep_num, u8 port,
enum mlx4_steer_type steer, u32 qpn)
static int find_entry(struct mlx4_dev *dev, u8 port,
u8 *gid, enum mlx4_protocol prot,
enum mlx4_steer_type steer,
struct mlx4_cmd_mailbox *mgm_mailbox,
u16 *hash, int *prev, int *index)
int mlx4_qp_attach_common(struct mlx4_dev *dev, struct mlx4_qp *qp, u8 gid[16],
int block_mcast_loopback, enum mlx4_protocol prot,
enum mlx4_steer_type steer)
int mlx4_qp_detach_common(struct mlx4_dev *dev, struct mlx4_qp *qp, u8 gid[16],
enum mlx4_protocol prot, enum mlx4_steer_type steer)
int mlx4_multicast_attach(struct mlx4_dev *dev, struct mlx4_qp *qp, u8 gid[16],
int block_mcast_loopback, enum mlx4_protocol prot)
EXPORT_SYMBOL_GPL(mlx4_multicast_attach);
int mlx4_multicast_detach(struct mlx4_dev *dev, struct mlx4_qp *qp, u8 gid[16],
enum mlx4_protocol prot)
EXPORT_SYMBOL_GPL(mlx4_multicast_detach);
int mlx4_multicast_promisc_add(struct mlx4_dev *dev, u32 qpn, u8 port)
EXPORT_SYMBOL_GPL(mlx4_multicast_promisc_add);
int mlx4_multicast_promisc_remove(struct mlx4_dev *dev, u32 qpn, u8 port)
EXPORT_SYMBOL_GPL(mlx4_multicast_promisc_remove);
int mlx4_unicast_promisc_add(struct mlx4_dev *dev, u32 qpn, u8 port)
EXPORT_SYMBOL_GPL(mlx4_unicast_promisc_add);
int mlx4_unicast_promisc_remove(struct mlx4_dev *dev, u32 qpn, u8 port)
EXPORT_SYMBOL_GPL(mlx4_unicast_promisc_remove);
int mlx4_init_mcg_table(struct mlx4_dev *dev)
void mlx4_cleanup_mcg_table(struct mlx4_dev *dev)
