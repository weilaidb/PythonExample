static void stub_free_priv_and_urb(struct stub_priv *priv)
void stub_enqueue_ret_unlink(struct stub_device *sdev, __u32 seqnum,
__u32 status)
void stub_complete(struct urb *urb)
static inline void setup_base_pdu(struct usbip_header_basic *base,
__u32 command, __u32 seqnum)
static void setup_ret_submit_pdu(struct usbip_header *rpdu, struct urb *urb)
static void setup_ret_unlink_pdu(struct usbip_header *rpdu,
struct stub_unlink *unlink)
static struct stub_priv *dequeue_from_priv_tx(struct stub_device *sdev)
static int stub_send_ret_submit(struct stub_device *sdev)
static struct stub_unlink *dequeue_from_unlink_tx(struct stub_device *sdev)
static int stub_send_ret_unlink(struct stub_device *sdev)
int stub_tx_loop(void *data)
