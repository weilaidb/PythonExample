struct sock *scsi_nl_sock = NULL;
EXPORT_SYMBOL_GPL(scsi_nl_sock);
static DEFINE_SPINLOCK(scsi_nl_lock);
static struct list_head scsi_nl_drivers;
static u32	scsi_nl_state;
#define STATE_EHANDLER_BSY		0x00000001
struct scsi_nl_transport ;
#define HANDLER_DELETING		0x1
static struct scsi_nl_transport transports[SCSI_NL_MAX_TRANSPORTS] =
;
struct scsi_nl_drvr ;
static void
scsi_nl_rcv_msg(struct sk_buff *skb)
static int
scsi_nl_rcv_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block scsi_netlink_notifier = ;
static int
scsi_generic_msg_handler(struct sk_buff *skb)
int
scsi_nl_add_transport(u8 tport,
int (*msg_handler)(struct sk_buff *),
void (*event_handler)(struct notifier_block *, unsigned long, void *))
EXPORT_SYMBOL_GPL(scsi_nl_add_transport);
void
scsi_nl_remove_transport(u8 tport)
EXPORT_SYMBOL_GPL(scsi_nl_remove_transport);
int
scsi_nl_add_driver(u64 vendor_id, struct scsi_host_template *hostt,
int (*nlmsg_handler)(struct Scsi_Host *shost, void *payload,
u32 len, u32 pid),
void (*nlevt_handler)(struct notifier_block *nb,
unsigned long event, void *notify_ptr))
EXPORT_SYMBOL_GPL(scsi_nl_add_driver);
void
scsi_nl_remove_driver(u64 vendor_id)
EXPORT_SYMBOL_GPL(scsi_nl_remove_driver);
void
scsi_netlink_init(void)
void
scsi_netlink_exit(void)
void
scsi_nl_send_transport_msg(u32 pid, struct scsi_nl_hdr *hdr)
EXPORT_SYMBOL_GPL(scsi_nl_send_transport_msg);
int
scsi_nl_send_vendor_msg(u32 pid, unsigned short host_no, u64 vendor_id,
char *data_buf, u32 data_len)
EXPORT_SYMBOL(scsi_nl_send_vendor_msg);
