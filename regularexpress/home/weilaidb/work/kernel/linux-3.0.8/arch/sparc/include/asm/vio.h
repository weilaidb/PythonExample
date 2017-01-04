#define _SPARC64_VIO_H
struct vio_msg_tag ;
struct vio_rdx ;
struct vio_ver_info ;
struct vio_dring_register ;
struct vio_dring_unregister ;
#define VIO_PKT_MODE		0x01
#define VIO_DESC_MODE		0x02
#define VIO_DRING_MODE		0x03
struct vio_dring_data ;
struct vio_dring_hdr ;
struct vio_disk_attr_info ;
struct vio_disk_desc ;
#define VIO_DISK_VNAME_LEN	8
#define VIO_DISK_ALABEL_LEN	128
#define VIO_DISK_NUM_PART	8
struct vio_disk_vtoc ;
struct vio_disk_geom ;
struct vio_disk_devid ;
struct vio_disk_efi ;
struct vio_net_attr_info ;
#define VNET_NUM_MCAST		7
struct vio_net_mcast_info ;
struct vio_net_desc ;
#define VIO_MAX_RING_COOKIES	24
struct vio_dring_state ;
static inline void *vio_dring_cur(struct vio_dring_state *dr)
static inline void *vio_dring_entry(struct vio_dring_state *dr,
unsigned int index)
static inline u32 vio_dring_avail(struct vio_dring_state *dr,
unsigned int ring_size)
#define VIO_MAX_TYPE_LEN	32
#define VIO_MAX_COMPAT_LEN	64
struct vio_dev ;
struct vio_driver ;
struct vio_version ;
struct vio_driver_state;
struct vio_driver_ops ;
struct vio_completion ;
struct vio_driver_state ;
#define viodbg(TYPE, f, a...) \
do  while (0)
extern int vio_register_driver(struct vio_driver *drv);
extern void vio_unregister_driver(struct vio_driver *drv);
static inline struct vio_driver *to_vio_driver(struct device_driver *drv)
static inline struct vio_dev *to_vio_dev(struct device *dev)
extern int vio_ldc_send(struct vio_driver_state *vio, void *data, int len);
extern void vio_link_state_change(struct vio_driver_state *vio, int event);
extern void vio_conn_reset(struct vio_driver_state *vio);
extern int vio_control_pkt_engine(struct vio_driver_state *vio, void *pkt);
extern int vio_validate_sid(struct vio_driver_state *vio,
struct vio_msg_tag *tp);
extern u32 vio_send_sid(struct vio_driver_state *vio);
extern int vio_ldc_alloc(struct vio_driver_state *vio,
struct ldc_channel_config *base_cfg, void *event_arg);
extern void vio_ldc_free(struct vio_driver_state *vio);
extern int vio_driver_init(struct vio_driver_state *vio, struct vio_dev *vdev,
u8 dev_class, struct vio_version *ver_table,
int ver_table_size, struct vio_driver_ops *ops,
char *name);
extern void vio_port_up(struct vio_driver_state *vio);
