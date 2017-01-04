int vio_ldc_send(struct vio_driver_state *vio, void *data, int len)
EXPORT_SYMBOL(vio_ldc_send);
static int send_ctrl(struct vio_driver_state *vio,
struct vio_msg_tag *tag, int len)
static void init_tag(struct vio_msg_tag *tag, u8 type, u8 stype, u16 stype_env)
static int send_version(struct vio_driver_state *vio, u16 major, u16 minor)
static int start_handshake(struct vio_driver_state *vio)
static void flush_rx_dring(struct vio_driver_state *vio)
void vio_link_state_change(struct vio_driver_state *vio, int event)
EXPORT_SYMBOL(vio_link_state_change);
static int handshake_failure(struct vio_driver_state *vio)
static int process_unknown(struct vio_driver_state *vio, void *arg)
static int send_dreg(struct vio_driver_state *vio)
static int send_rdx(struct vio_driver_state *vio)
static int send_attr(struct vio_driver_state *vio)
static struct vio_version *find_by_major(struct vio_driver_state *vio,
u16 major)
static int process_ver_info(struct vio_driver_state *vio,
struct vio_ver_info *pkt)
static int process_ver_ack(struct vio_driver_state *vio,
struct vio_ver_info *pkt)
static int process_ver_nack(struct vio_driver_state *vio,
struct vio_ver_info *pkt)
static int process_ver(struct vio_driver_state *vio, struct vio_ver_info *pkt)
static int process_attr(struct vio_driver_state *vio, void *pkt)
static int all_drings_registered(struct vio_driver_state *vio)
static int process_dreg_info(struct vio_driver_state *vio,
struct vio_dring_register *pkt)
static int process_dreg_ack(struct vio_driver_state *vio,
struct vio_dring_register *pkt)
static int process_dreg_nack(struct vio_driver_state *vio,
struct vio_dring_register *pkt)
static int process_dreg(struct vio_driver_state *vio,
struct vio_dring_register *pkt)
static int process_dunreg(struct vio_driver_state *vio,
struct vio_dring_unregister *pkt)
static int process_rdx_info(struct vio_driver_state *vio, struct vio_rdx *pkt)
static int process_rdx_ack(struct vio_driver_state *vio, struct vio_rdx *pkt)
static int process_rdx_nack(struct vio_driver_state *vio, struct vio_rdx *pkt)
static int process_rdx(struct vio_driver_state *vio, struct vio_rdx *pkt)
int vio_control_pkt_engine(struct vio_driver_state *vio, void *pkt)
EXPORT_SYMBOL(vio_control_pkt_engine);
void vio_conn_reset(struct vio_driver_state *vio)
EXPORT_SYMBOL(vio_conn_reset);
int vio_validate_sid(struct vio_driver_state *vio, struct vio_msg_tag *tp)
EXPORT_SYMBOL(vio_validate_sid);
u32 vio_send_sid(struct vio_driver_state *vio)
EXPORT_SYMBOL(vio_send_sid);
int vio_ldc_alloc(struct vio_driver_state *vio,
struct ldc_channel_config *base_cfg,
void *event_arg)
EXPORT_SYMBOL(vio_ldc_alloc);
void vio_ldc_free(struct vio_driver_state *vio)
EXPORT_SYMBOL(vio_ldc_free);
void vio_port_up(struct vio_driver_state *vio)
EXPORT_SYMBOL(vio_port_up);
static void vio_port_timer(unsigned long _arg)
int vio_driver_init(struct vio_driver_state *vio, struct vio_dev *vdev,
u8 dev_class, struct vio_version *ver_table,
int ver_table_size, struct vio_driver_ops *ops,
char *name)
EXPORT_SYMBOL(vio_driver_init);
