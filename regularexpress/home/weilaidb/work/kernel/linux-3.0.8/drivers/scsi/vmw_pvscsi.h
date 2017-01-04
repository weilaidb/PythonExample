#define _VMW_PVSCSI_H_
#define PVSCSI_DRIVER_VERSION_STRING   "1.0.1.0-k"
#define PVSCSI_MAX_NUM_SG_ENTRIES_PER_SEGMENT 128
#define MASK(n)        ((1 << (n)) - 1)
#define PCI_VENDOR_ID_VMWARE		0x15AD
#define PCI_DEVICE_ID_VMWARE_PVSCSI	0x07C0
enum HostBusAdapterStatus ;
enum PVSCSIRegOffset ;
enum PVSCSICommands ;
struct PVSCSICmdDescResetDevice  __packed;
struct PVSCSICmdDescAbortCmd  __packed;
#define PVSCSI_SETUP_RINGS_MAX_NUM_PAGES        32
struct PVSCSICmdDescSetupRings  __packed;
#define PVSCSI_SETUP_MSG_RING_MAX_NUM_PAGES  16
struct PVSCSICmdDescSetupMsgRing  __packed;
enum PVSCSIMsgType ;
struct PVSCSIRingMsgDesc  __packed;
struct PVSCSIMsgDescDevStatusChanged  __packed;
struct PVSCSIRingsState  __packed;
#define PVSCSI_FLAG_CMD_WITH_SG_LIST        (1 << 0)
#define PVSCSI_FLAG_CMD_OUT_OF_BAND_CDB     (1 << 1)
#define PVSCSI_FLAG_CMD_DIR_NONE            (1 << 2)
#define PVSCSI_FLAG_CMD_DIR_TOHOST          (1 << 3)
#define PVSCSI_FLAG_CMD_DIR_TODEVICE        (1 << 4)
struct PVSCSIRingReqDesc  __packed;
struct PVSCSISGElement  __packed;
struct PVSCSIRingCmpDesc  __packed;
#define PVSCSI_INTR_CMPL_0                 (1 << 0)
#define PVSCSI_INTR_CMPL_1                 (1 << 1)
#define PVSCSI_INTR_CMPL_MASK              MASK(2)
#define PVSCSI_INTR_MSG_0                  (1 << 2)
#define PVSCSI_INTR_MSG_1                  (1 << 3)
#define PVSCSI_INTR_MSG_MASK               (MASK(2) << 2)
#define PVSCSI_INTR_ALL_SUPPORTED          MASK(4)
#define PVSCSI_MAX_INTRS        24
#define PVSCSI_VECTOR_COMPLETION   0
#define PVSCSI_MAX_NUM_PAGES_REQ_RING   PVSCSI_SETUP_RINGS_MAX_NUM_PAGES
#define PVSCSI_MAX_NUM_PAGES_CMP_RING   PVSCSI_SETUP_RINGS_MAX_NUM_PAGES
#define PVSCSI_MAX_NUM_PAGES_MSG_RING   PVSCSI_SETUP_MSG_RING_MAX_NUM_PAGES
#define PVSCSI_MAX_NUM_REQ_ENTRIES_PER_PAGE \
(PAGE_SIZE / sizeof(struct PVSCSIRingReqDesc))
#define PVSCSI_MAX_REQ_QUEUE_DEPTH \
(PVSCSI_MAX_NUM_PAGES_REQ_RING * PVSCSI_MAX_NUM_REQ_ENTRIES_PER_PAGE)
#define PVSCSI_MEM_SPACE_COMMAND_NUM_PAGES     1
#define PVSCSI_MEM_SPACE_INTR_STATUS_NUM_PAGES 1
#define PVSCSI_MEM_SPACE_MISC_NUM_PAGES        2
#define PVSCSI_MEM_SPACE_KICK_IO_NUM_PAGES     2
#define PVSCSI_MEM_SPACE_MSIX_NUM_PAGES        2
enum PVSCSIMemSpace ;
#define PVSCSI_MEM_SPACE_NUM_PAGES \
(PVSCSI_MEM_SPACE_COMMAND_NUM_PAGES +       \
PVSCSI_MEM_SPACE_INTR_STATUS_NUM_PAGES +   \
PVSCSI_MEM_SPACE_MISC_NUM_PAGES +          \
PVSCSI_MEM_SPACE_KICK_IO_NUM_PAGES +       \
PVSCSI_MEM_SPACE_MSIX_NUM_PAGES)
#define PVSCSI_MEM_SPACE_SIZE        (PVSCSI_MEM_SPACE_NUM_PAGES * PAGE_SIZE)
