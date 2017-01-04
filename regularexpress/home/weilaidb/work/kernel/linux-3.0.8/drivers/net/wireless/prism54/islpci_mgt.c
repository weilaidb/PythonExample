int pc_debug = VERBOSE;
module_param(pc_debug, int, 0);
#if VERBOSE > SHOW_ERROR_MESSAGES
void
display_buffer(char *buffer, int length)
static void
pimfor_encode_header(int operation, u32 oid, u32 length, pimfor_header_t *h)
static pimfor_header_t *
pimfor_decode_header(void *data, int len)
int
islpci_mgmt_rx_fill(struct net_device *ndev)
static int
islpci_mgt_transmit(struct net_device *ndev, int operation, unsigned long oid,
void *data, int length)
int
islpci_mgt_receive(struct net_device *ndev)
void
islpci_mgt_cleanup_transmit(struct net_device *ndev)
int
islpci_mgt_transaction(struct net_device *ndev,
int operation, unsigned long oid,
void *senddata, int sendlen,
struct islpci_mgmtframe **recvframe)
