#define MLX4_H
#define DRV_NAME	"mlx4_core"
#define DRV_VERSION	"0.01"
#define DRV_RELDATE	"May 1, 2007"
enum ;
enum ;
enum ;
enum ;
enum ;
extern int mlx4_debug_level;
#define mlx4_debug_level	(0)
#define mlx4_dbg(mdev, format, arg...)					\
do  while (0)
#define mlx4_err(mdev, format, arg...) \
dev_err(&mdev->pdev->dev, format, ##arg)
#define mlx4_info(mdev, format, arg...) \
dev_info(&mdev->pdev->dev, format, ##arg)
#define mlx4_warn(mdev, format, arg...) \
dev_warn(&mdev->pdev->dev, format, ##arg)
struct mlx4_bitmap ;
struct mlx4_buddy ;
struct mlx4_icm;
struct mlx4_icm_table ;
struct mlx4_eq ;
struct mlx4_profile ;
struct mlx4_fw ;
#define MGM_QPN_MASK       0x00FFFFFF
#define MGM_BLCK_LB_BIT    30
struct mlx4_promisc_qp ;
struct mlx4_steer_index ;
struct mlx4_mgm ;
struct mlx4_cmd ;
struct mlx4_uar_table ;
struct mlx4_mr_table ;
struct mlx4_cq_table ;
struct mlx4_eq_table ;
struct mlx4_srq_table ;
struct mlx4_qp_table ;
struct mlx4_mcg_table ;
struct mlx4_catas_err ;
#define MLX4_MAX_MAC_NUM	128
#define MLX4_MAC_TABLE_SIZE	(MLX4_MAX_MAC_NUM << 3)
struct mlx4_mac_table ;
#define MLX4_MAX_VLAN_NUM	128
#define MLX4_VLAN_TABLE_SIZE	(MLX4_MAX_VLAN_NUM << 2)
struct mlx4_vlan_table ;
struct mlx4_mac_entry ;
struct mlx4_port_info ;
struct mlx4_sense ;
struct mlx4_msix_ctl ;
struct mlx4_steer ;
struct mlx4_priv ;
static inline struct mlx4_priv *mlx4_priv(struct mlx4_dev *dev)
#define MLX4_SENSE_RANGE	(HZ * 3)
extern struct workqueue_struct *mlx4_wq;
u32 mlx4_bitmap_alloc(struct mlx4_bitmap *bitmap);
void mlx4_bitmap_free(struct mlx4_bitmap *bitmap, u32 obj);
u32 mlx4_bitmap_alloc_range(struct mlx4_bitmap *bitmap, int cnt, int align);
void mlx4_bitmap_free_range(struct mlx4_bitmap *bitmap, u32 obj, int cnt);
u32 mlx4_bitmap_avail(struct mlx4_bitmap *bitmap);
int mlx4_bitmap_init(struct mlx4_bitmap *bitmap, u32 num, u32 mask,
u32 reserved_bot, u32 resetrved_top);
void mlx4_bitmap_cleanup(struct mlx4_bitmap *bitmap);
int mlx4_reset(struct mlx4_dev *dev);
int mlx4_alloc_eq_table(struct mlx4_dev *dev);
void mlx4_free_eq_table(struct mlx4_dev *dev);
int mlx4_init_pd_table(struct mlx4_dev *dev);
int mlx4_init_uar_table(struct mlx4_dev *dev);
int mlx4_init_mr_table(struct mlx4_dev *dev);
int mlx4_init_eq_table(struct mlx4_dev *dev);
int mlx4_init_cq_table(struct mlx4_dev *dev);
int mlx4_init_qp_table(struct mlx4_dev *dev);
int mlx4_init_srq_table(struct mlx4_dev *dev);
int mlx4_init_mcg_table(struct mlx4_dev *dev);
void mlx4_cleanup_pd_table(struct mlx4_dev *dev);
void mlx4_cleanup_uar_table(struct mlx4_dev *dev);
void mlx4_cleanup_mr_table(struct mlx4_dev *dev);
void mlx4_cleanup_eq_table(struct mlx4_dev *dev);
void mlx4_cleanup_cq_table(struct mlx4_dev *dev);
void mlx4_cleanup_qp_table(struct mlx4_dev *dev);
void mlx4_cleanup_srq_table(struct mlx4_dev *dev);
void mlx4_cleanup_mcg_table(struct mlx4_dev *dev);
void mlx4_start_catas_poll(struct mlx4_dev *dev);
void mlx4_stop_catas_poll(struct mlx4_dev *dev);
void mlx4_catas_init(void);
int mlx4_restart_one(struct pci_dev *pdev);
int mlx4_register_device(struct mlx4_dev *dev);
void mlx4_unregister_device(struct mlx4_dev *dev);
void mlx4_dispatch_event(struct mlx4_dev *dev, enum mlx4_dev_event type, int port);
struct mlx4_dev_cap;
struct mlx4_init_hca_param;
u64 mlx4_make_profile(struct mlx4_dev *dev,
struct mlx4_profile *request,
struct mlx4_dev_cap *dev_cap,
struct mlx4_init_hca_param *init_hca);
int mlx4_cmd_init(struct mlx4_dev *dev);
void mlx4_cmd_cleanup(struct mlx4_dev *dev);
void mlx4_cmd_event(struct mlx4_dev *dev, u16 token, u8 status, u64 out_param);
int mlx4_cmd_use_events(struct mlx4_dev *dev);
void mlx4_cmd_use_polling(struct mlx4_dev *dev);
void mlx4_cq_completion(struct mlx4_dev *dev, u32 cqn);
void mlx4_cq_event(struct mlx4_dev *dev, u32 cqn, int event_type);
void mlx4_qp_event(struct mlx4_dev *dev, u32 qpn, int event_type);
void mlx4_srq_event(struct mlx4_dev *dev, u32 srqn, int event_type);
void mlx4_handle_catas_err(struct mlx4_dev *dev);
int mlx4_SENSE_PORT(struct mlx4_dev *dev, int port,
enum mlx4_port_type *type);
void mlx4_do_sense_ports(struct mlx4_dev *dev,
enum mlx4_port_type *stype,
enum mlx4_port_type *defaults);
void mlx4_start_sense(struct mlx4_dev *dev);
void mlx4_stop_sense(struct mlx4_dev *dev);
void mlx4_sense_init(struct mlx4_dev *dev);
int mlx4_check_port_params(struct mlx4_dev *dev,
enum mlx4_port_type *port_type);
int mlx4_change_port_types(struct mlx4_dev *dev,
enum mlx4_port_type *port_types);
void mlx4_init_mac_table(struct mlx4_dev *dev, struct mlx4_mac_table *table);
void mlx4_init_vlan_table(struct mlx4_dev *dev, struct mlx4_vlan_table *table);
int mlx4_SET_PORT(struct mlx4_dev *dev, u8 port);
int mlx4_get_port_ib_caps(struct mlx4_dev *dev, u8 port, __be32 *caps);
int mlx4_qp_detach_common(struct mlx4_dev *dev, struct mlx4_qp *qp, u8 gid[16],
enum mlx4_protocol prot, enum mlx4_steer_type steer);
int mlx4_qp_attach_common(struct mlx4_dev *dev, struct mlx4_qp *qp, u8 gid[16],
int block_mcast_loopback, enum mlx4_protocol prot,
enum mlx4_steer_type steer);
