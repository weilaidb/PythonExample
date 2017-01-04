#define SCSI_NETLINK_FC_H
#define FC_NL_ASYNC_EVENT			0x0100
#define FC_NL_MSGALIGN(len)		(((len) + 7) & ~7)
struct fc_nl_event  __attribute__((aligned(sizeof(uint64_t))));
