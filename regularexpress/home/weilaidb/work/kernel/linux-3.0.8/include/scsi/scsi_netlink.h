#define SCSI_NETLINK_H
#define SCSI_TRANSPORT_MSG		NLMSG_MIN_TYPE + 1
#define SCSI_NL_GRP_FC_EVENTS		(1<<2)
#define SCSI_NL_GRP_CNT			3
struct scsi_nl_hdr  __attribute__((aligned(sizeof(uint64_t))));
#define SCSI_NL_VERSION				1
#define SCSI_NL_MAGIC				0xA1B2
#define SCSI_NL_TRANSPORT			0
#define SCSI_NL_TRANSPORT_FC			1
#define SCSI_NL_MAX_TRANSPORTS			2
#define SCSI_NL_SHOST_VENDOR			0x0001
#define SCSI_NL_MSGALIGN(len)		(((len) + 7) & ~7)
struct scsi_nl_host_vendor_msg  __attribute__((aligned(sizeof(uint64_t))));
#define SCSI_NL_VID_TYPE_SHIFT		56
#define SCSI_NL_VID_TYPE_MASK		((__u64)0xFF << SCSI_NL_VID_TYPE_SHIFT)
#define SCSI_NL_VID_TYPE_PCI		((__u64)0x01 << SCSI_NL_VID_TYPE_SHIFT)
#define SCSI_NL_VID_ID_MASK		(~ SCSI_NL_VID_TYPE_MASK)
#define INIT_SCSI_NL_HDR(hdr, t, mtype, mlen)			\
int scsi_nl_add_transport(u8 tport,
int (*msg_handler)(struct sk_buff *),
void (*event_handler)(struct notifier_block *, unsigned long, void *));
void scsi_nl_remove_transport(u8 tport);
int scsi_nl_add_driver(u64 vendor_id, struct scsi_host_template *hostt,
int (*nlmsg_handler)(struct Scsi_Host *shost, void *payload,
u32 len, u32 pid),
void (*nlevt_handler)(struct notifier_block *nb,
unsigned long event, void *notify_ptr));
void scsi_nl_remove_driver(u64 vendor_id);
void scsi_nl_send_transport_msg(u32 pid, struct scsi_nl_hdr *hdr);
int scsi_nl_send_vendor_msg(u32 pid, unsigned short host_no, u64 vendor_id,
char *data_buf, u32 data_len);
