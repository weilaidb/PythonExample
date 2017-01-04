#define DRV_MODULE_NAME		"sunvdc"
#define PFX DRV_MODULE_NAME	": "
#define DRV_MODULE_VERSION	"1.0"
#define DRV_MODULE_RELDATE	"June 25, 2007"
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_DESCRIPTION("Sun LDOM virtual disk client driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
#define VDC_TX_RING_SIZE	256
#define WAITING_FOR_LINK_UP	0x01
#define WAITING_FOR_TX_SPACE	0x02
#define WAITING_FOR_GEN_CMD	0x04
#define WAITING_FOR_ANY		-1
struct vdc_req_entry ;
struct vdc_port ;
static inline struct vdc_port *to_vdc_port(struct vio_driver_state *vio)
static struct vio_version vdc_versions[] = ;
#define VDCBLK_NAME	"vdisk"
static int vdc_major;
#define PARTITION_SHIFT	3
static inline u32 vdc_tx_dring_avail(struct vio_dring_state *dr)
static int vdc_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static const struct block_device_operations vdc_fops = ;
static void vdc_finish(struct vio_driver_state *vio, int err, int waiting_for)
static void vdc_handshake_complete(struct vio_driver_state *vio)
static int vdc_handle_unknown(struct vdc_port *port, void *arg)
static int vdc_send_attr(struct vio_driver_state *vio)
static int vdc_handle_attr(struct vio_driver_state *vio, void *arg)
static void vdc_end_special(struct vdc_port *port, struct vio_disk_desc *desc)
static void vdc_end_one(struct vdc_port *port, struct vio_dring_state *dr,
unsigned int index)
static int vdc_ack(struct vdc_port *port, void *msgbuf)
static int vdc_nack(struct vdc_port *port, void *msgbuf)
static void vdc_event(void *arg, int event)
static int __vdc_tx_trigger(struct vdc_port *port)
static int __send_request(struct request *req)
static void do_vdc_request(struct request_queue *q)
static int generic_request(struct vdc_port *port, u8 op, void *buf, int len)
static int __devinit vdc_alloc_tx_ring(struct vdc_port *port)
static void vdc_free_tx_ring(struct vdc_port *port)
static int probe_disk(struct vdc_port *port)
static struct ldc_channel_config vdc_ldc_cfg = ;
static struct vio_driver_ops vdc_vio_ops = ;
static void __devinit print_version(void)
static int __devinit vdc_port_probe(struct vio_dev *vdev,
const struct vio_device_id *id)
static int vdc_port_remove(struct vio_dev *vdev)
static const struct vio_device_id vdc_port_match[] = ;
MODULE_DEVICE_TABLE(vio, vdc_port_match);
static struct vio_driver vdc_port_driver = ;
static int __init vdc_init(void)
static void __exit vdc_exit(void)
module_init(vdc_init);
module_exit(vdc_exit);
