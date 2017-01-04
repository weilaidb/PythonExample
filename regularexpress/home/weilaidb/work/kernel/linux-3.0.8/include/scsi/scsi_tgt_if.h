#define __SCSI_TARGET_IF_H
#define	TGT_UEVENT_CMD_RSP		0x0001
#define	TGT_UEVENT_IT_NEXUS_RSP		0x0002
#define	TGT_UEVENT_TSK_MGMT_RSP		0x0003
#define	TGT_KEVENT_CMD_REQ		0x1001
#define	TGT_KEVENT_CMD_DONE		0x1002
#define	TGT_KEVENT_IT_NEXUS_REQ		0x1003
#define	TGT_KEVENT_TSK_MGMT_REQ		0x1004
struct tgt_event_hdr  __attribute__ ((aligned (sizeof(uint64_t))));
struct tgt_event  __attribute__ ((aligned (sizeof(uint64_t))));
#define TGT_RING_SIZE (1UL << 16)
