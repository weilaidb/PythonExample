struct urb *pickup_urb_and_free_priv(struct vhci_device *vdev, __u32 seqnum)
static void vhci_recv_ret_submit(struct vhci_device *vdev,
struct usbip_header *pdu)
static struct vhci_unlink *dequeue_pending_unlink(struct vhci_device *vdev,
struct usbip_header *pdu)
static void vhci_recv_ret_unlink(struct vhci_device *vdev,
struct usbip_header *pdu)
static int vhci_priv_tx_empty(struct vhci_device *vdev)
static void vhci_rx_pdu(struct usbip_device *ud)
int vhci_rx_loop(void *data)
