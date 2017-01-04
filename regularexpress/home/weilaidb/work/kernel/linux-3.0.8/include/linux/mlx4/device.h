#define MLX4_DEVICE_H
#define MAX_MSIX_P_PORT		17
#define MAX_MSIX		64
#define MSIX_LEGACY_SZ		4
#define MIN_MSIX_P_PORT		5
enum ;
enum ;
enum ;
enum ;
enum ;
enum mlx4_event ;
enum ;
enum ;
enum ;
enum ;
enum mlx4_protocol ;
enum ;
enum mlx4_qp_region ;
enum mlx4_port_type ;
enum mlx4_special_vlan_idx ;
enum mlx4_steer_type ;
enum ;
enum ;
static inline u64 mlx4_fw_ver(u64 major, u64 minor, u64 subminor)
struct mlx4_caps ;
struct mlx4_buf_list ;
struct mlx4_buf ;
struct mlx4_mtt ;
enum ;
struct mlx4_db_pgdir ;
struct mlx4_ib_user_db_page;
struct mlx4_db ;
struct mlx4_hwq_resources ;
struct mlx4_mr ;
struct mlx4_fmr ;
struct mlx4_uar ;
struct mlx4_bf ;
struct mlx4_cq ;
struct mlx4_qp ;
struct mlx4_srq ;
struct mlx4_av ;
struct mlx4_eth_av ;
union mlx4_ext_av ;
struct mlx4_dev ;
struct mlx4_init_port_param ;
#define mlx4_foreach_port(port, dev, type)				\
for ((port) = 1; (port) <= (dev)->caps.num_ports; (port)++)	\
if (((type) == MLX4_PORT_TYPE_IB ? (dev)->caps.port_mask : \
~(dev)->caps.port_mask) & 1 << ((port) - 1))
#define mlx4_foreach_ib_transport_port(port, dev)			\
for ((port) = 1; (port) <= (dev)->caps.num_ports; (port)++)	\
if (((dev)->caps.port_mask & 1 << ((port) - 1)) ||	\
((dev)->caps.flags & MLX4_DEV_CAP_FLAG_IBOE))
int mlx4_buf_alloc(struct mlx4_dev *dev, int size, int max_direct,
struct mlx4_buf *buf);
void mlx4_buf_free(struct mlx4_dev *dev, int size, struct mlx4_buf *buf);
static inline void *mlx4_buf_offset(struct mlx4_buf *buf, int offset)
int mlx4_pd_alloc(struct mlx4_dev *dev, u32 *pdn);
void mlx4_pd_free(struct mlx4_dev *dev, u32 pdn);
int mlx4_uar_alloc(struct mlx4_dev *dev, struct mlx4_uar *uar);
void mlx4_uar_free(struct mlx4_dev *dev, struct mlx4_uar *uar);
int mlx4_bf_alloc(struct mlx4_dev *dev, struct mlx4_bf *bf);
void mlx4_bf_free(struct mlx4_dev *dev, struct mlx4_bf *bf);
int mlx4_mtt_init(struct mlx4_dev *dev, int npages, int page_shift,
struct mlx4_mtt *mtt);
void mlx4_mtt_cleanup(struct mlx4_dev *dev, struct mlx4_mtt *mtt);
u64 mlx4_mtt_addr(struct mlx4_dev *dev, struct mlx4_mtt *mtt);
int mlx4_mr_alloc(struct mlx4_dev *dev, u32 pd, u64 iova, u64 size, u32 access,
int npages, int page_shift, struct mlx4_mr *mr);
void mlx4_mr_free(struct mlx4_dev *dev, struct mlx4_mr *mr);
int mlx4_mr_enable(struct mlx4_dev *dev, struct mlx4_mr *mr);
int mlx4_write_mtt(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
int start_index, int npages, u64 *page_list);
int mlx4_buf_write_mtt(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
struct mlx4_buf *buf);
int mlx4_db_alloc(struct mlx4_dev *dev, struct mlx4_db *db, int order);
void mlx4_db_free(struct mlx4_dev *dev, struct mlx4_db *db);
int mlx4_alloc_hwq_res(struct mlx4_dev *dev, struct mlx4_hwq_resources *wqres,
int size, int max_direct);
void mlx4_free_hwq_res(struct mlx4_dev *mdev, struct mlx4_hwq_resources *wqres,
int size);
int mlx4_cq_alloc(struct mlx4_dev *dev, int nent, struct mlx4_mtt *mtt,
struct mlx4_uar *uar, u64 db_rec, struct mlx4_cq *cq,
unsigned vector, int collapsed);
void mlx4_cq_free(struct mlx4_dev *dev, struct mlx4_cq *cq);
int mlx4_qp_reserve_range(struct mlx4_dev *dev, int cnt, int align, int *base);
void mlx4_qp_release_range(struct mlx4_dev *dev, int base_qpn, int cnt);
int mlx4_qp_alloc(struct mlx4_dev *dev, int qpn, struct mlx4_qp *qp);
void mlx4_qp_free(struct mlx4_dev *dev, struct mlx4_qp *qp);
int mlx4_srq_alloc(struct mlx4_dev *dev, u32 pdn, struct mlx4_mtt *mtt,
u64 db_rec, struct mlx4_srq *srq);
void mlx4_srq_free(struct mlx4_dev *dev, struct mlx4_srq *srq);
int mlx4_srq_arm(struct mlx4_dev *dev, struct mlx4_srq *srq, int limit_watermark);
int mlx4_srq_query(struct mlx4_dev *dev, struct mlx4_srq *srq, int *limit_watermark);
int mlx4_INIT_PORT(struct mlx4_dev *dev, int port);
int mlx4_CLOSE_PORT(struct mlx4_dev *dev, int port);
int mlx4_multicast_attach(struct mlx4_dev *dev, struct mlx4_qp *qp, u8 gid[16],
int block_mcast_loopback, enum mlx4_protocol protocol);
int mlx4_multicast_detach(struct mlx4_dev *dev, struct mlx4_qp *qp, u8 gid[16],
enum mlx4_protocol protocol);
int mlx4_multicast_promisc_add(struct mlx4_dev *dev, u32 qpn, u8 port);
int mlx4_multicast_promisc_remove(struct mlx4_dev *dev, u32 qpn, u8 port);
int mlx4_unicast_promisc_add(struct mlx4_dev *dev, u32 qpn, u8 port);
int mlx4_unicast_promisc_remove(struct mlx4_dev *dev, u32 qpn, u8 port);
int mlx4_SET_MCAST_FLTR(struct mlx4_dev *dev, u8 port, u64 mac, u64 clear, u8 mode);
int mlx4_register_mac(struct mlx4_dev *dev, u8 port, u64 mac, int *qpn, u8 wrap);
void mlx4_unregister_mac(struct mlx4_dev *dev, u8 port, int qpn);
int mlx4_replace_mac(struct mlx4_dev *dev, u8 port, int qpn, u64 new_mac, u8 wrap);
int mlx4_find_cached_vlan(struct mlx4_dev *dev, u8 port, u16 vid, int *idx);
int mlx4_register_vlan(struct mlx4_dev *dev, u8 port, u16 vlan, int *index);
void mlx4_unregister_vlan(struct mlx4_dev *dev, u8 port, int index);
int mlx4_map_phys_fmr(struct mlx4_dev *dev, struct mlx4_fmr *fmr, u64 *page_list,
int npages, u64 iova, u32 *lkey, u32 *rkey);
int mlx4_fmr_alloc(struct mlx4_dev *dev, u32 pd, u32 access, int max_pages,
int max_maps, u8 page_shift, struct mlx4_fmr *fmr);
int mlx4_fmr_enable(struct mlx4_dev *dev, struct mlx4_fmr *fmr);
void mlx4_fmr_unmap(struct mlx4_dev *dev, struct mlx4_fmr *fmr,
u32 *lkey, u32 *rkey);
int mlx4_fmr_free(struct mlx4_dev *dev, struct mlx4_fmr *fmr);
int mlx4_SYNC_TPT(struct mlx4_dev *dev);
int mlx4_test_interrupts(struct mlx4_dev *dev);
int mlx4_assign_eq(struct mlx4_dev *dev, char* name , int* vector);
void mlx4_release_eq(struct mlx4_dev *dev, int vec);
int mlx4_wol_read(struct mlx4_dev *dev, u64 *config, int port);
int mlx4_wol_write(struct mlx4_dev *dev, u64 config, int port);
