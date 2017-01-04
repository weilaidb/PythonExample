#define _VMXNET3_DEFS_H_
enum ;
enum ;
#define VMXNET3_PT_REG_SIZE     4096
#define VMXNET3_VD_REG_SIZE     4096
#define VMXNET3_REG_ALIGN       8
#define VMXNET3_REG_ALIGN_MASK  0x7
#define VMXNET3_IO_TYPE_PT              0
#define VMXNET3_IO_TYPE_VD              1
#define VMXNET3_IO_ADDR(type, reg)      (((type) << 24) | ((reg) & 0xFFFFFF))
#define VMXNET3_IO_TYPE(addr)           ((addr) >> 24)
#define VMXNET3_IO_REG(addr)            ((addr) & 0xFFFFFF)
enum ;
struct Vmxnet3_TxDesc ;
#define VMXNET3_OM_NONE		0
#define VMXNET3_OM_CSUM		2
#define VMXNET3_OM_TSO		3
#define VMXNET3_TXD_EOP_SHIFT	12
#define VMXNET3_TXD_CQ_SHIFT	13
#define VMXNET3_TXD_GEN_SHIFT	14
#define VMXNET3_TXD_EOP_DWORD_SHIFT 3
#define VMXNET3_TXD_GEN_DWORD_SHIFT 2
#define VMXNET3_TXD_CQ		(1 << VMXNET3_TXD_CQ_SHIFT)
#define VMXNET3_TXD_EOP		(1 << VMXNET3_TXD_EOP_SHIFT)
#define VMXNET3_TXD_GEN		(1 << VMXNET3_TXD_GEN_SHIFT)
#define VMXNET3_HDR_COPY_SIZE   128
struct Vmxnet3_TxDataDesc ;
#define VMXNET3_TCD_GEN_SHIFT	31
#define VMXNET3_TCD_GEN_SIZE	1
#define VMXNET3_TCD_TXIDX_SHIFT	0
#define VMXNET3_TCD_TXIDX_SIZE	12
#define VMXNET3_TCD_GEN_DWORD_SHIFT	3
struct Vmxnet3_TxCompDesc ;
struct Vmxnet3_RxDesc ;
#define VMXNET3_RXD_BTYPE_HEAD   0
#define VMXNET3_RXD_BTYPE_BODY   1
#define VMXNET3_RXD_BTYPE_SHIFT  14
#define VMXNET3_RXD_GEN_SHIFT    31
struct Vmxnet3_RxCompDesc ;
#define VMXNET3_RCD_TUC_SHIFT	16
#define VMXNET3_RCD_IPC_SHIFT	19
#define VMXNET3_RCD_TYPE_SHIFT	56
#define VMXNET3_RCD_GEN_SHIFT	63
#define VMXNET3_RCD_CSUM_OK (1 << VMXNET3_RCD_TUC_SHIFT | \
1 << VMXNET3_RCD_IPC_SHIFT)
#define VMXNET3_TXD_GEN_SIZE 1
#define VMXNET3_TXD_EOP_SIZE 1
enum ;
union Vmxnet3_GenericDesc ;
#define VMXNET3_INIT_GEN       1
#define VMXNET3_MAX_TX_BUF_SIZE  (1 << 14)
#define VMXNET3_TXD_NEEDED(size) (((size) + VMXNET3_MAX_TX_BUF_SIZE - 1) / \
VMXNET3_MAX_TX_BUF_SIZE)
#define VMXNET3_MAX_TXD_PER_PKT 16
#define VMXNET3_MAX_RX_BUF_SIZE  ((1 << 14) - 1)
#define VMXNET3_MIN_T0_BUF_SIZE  128
#define VMXNET3_MAX_CSUM_OFFSET  1024
#define VMXNET3_RING_BA_ALIGN   512
#define VMXNET3_RING_BA_MASK    (VMXNET3_RING_BA_ALIGN - 1)
#define VMXNET3_RING_SIZE_ALIGN 32
#define VMXNET3_RING_SIZE_MASK  (VMXNET3_RING_SIZE_ALIGN - 1)
#define VMXNET3_TX_RING_MAX_SIZE   4096
#define VMXNET3_TC_RING_MAX_SIZE   4096
#define VMXNET3_RX_RING_MAX_SIZE   4096
#define VMXNET3_RC_RING_MAX_SIZE   8192
enum ;
#define VMXNET3_CDTYPE_TXCOMP      0
#define VMXNET3_CDTYPE_RXCOMP      3
enum ;
#define VMXNET3_GOS_TYPE_LINUX	1
struct Vmxnet3_GOSInfo ;
struct Vmxnet3_DriverInfo ;
#define VMXNET3_REV1_MAGIC  0xbabefee1
#define VMXNET3_QUEUE_DESC_ALIGN  128
struct Vmxnet3_MiscConf ;
struct Vmxnet3_TxQueueConf ;
struct Vmxnet3_RxQueueConf ;
enum vmxnet3_intr_mask_mode ;
enum vmxnet3_intr_type ;
#define VMXNET3_MAX_TX_QUEUES  8
#define VMXNET3_MAX_RX_QUEUES  16
#define VMXNET3_MAX_INTRS      25
#define VMXNET3_IC_DISABLE_ALL  0x1
struct Vmxnet3_IntrConf ;
#define VMXNET3_VFT_SIZE  (4096 / (sizeof(u32) * 8))
struct Vmxnet3_QueueStatus ;
struct Vmxnet3_TxQueueCtrl ;
struct Vmxnet3_RxQueueCtrl ;
enum ;
struct Vmxnet3_RxFilterConf ;
#define VMXNET3_PM_MAX_FILTERS        6
#define VMXNET3_PM_MAX_PATTERN_SIZE   128
#define VMXNET3_PM_MAX_MASK_SIZE      (VMXNET3_PM_MAX_PATTERN_SIZE / 8)
#define VMXNET3_PM_WAKEUP_MAGIC       cpu_to_le16(0x01)
#define VMXNET3_PM_WAKEUP_FILTER      cpu_to_le16(0x02)
struct Vmxnet3_PM_PktFilter ;
struct Vmxnet3_PMConf ;
struct Vmxnet3_VariableLenConfDesc ;
struct Vmxnet3_TxQueueDesc ;
struct Vmxnet3_RxQueueDesc ;
struct Vmxnet3_DSDevRead ;
struct Vmxnet3_DriverShared ;
#define VMXNET3_ECR_RQERR       (1 << 0)
#define VMXNET3_ECR_TQERR       (1 << 1)
#define VMXNET3_ECR_LINK        (1 << 2)
#define VMXNET3_ECR_DIC         (1 << 3)
#define VMXNET3_ECR_DEBUG       (1 << 4)
#define VMXNET3_FLIP_RING_GEN(gen) ((gen) = (gen) ^ 0x1)
#define VMXNET3_INC_RING_IDX_ONLY(idx, ring_size) \
do  while (0)
#define VMXNET3_SET_VFTABLE_ENTRY(vfTable, vid) \
(vfTable[vid >> 5] |= (1 << (vid & 31)))
#define VMXNET3_CLEAR_VFTABLE_ENTRY(vfTable, vid) \
(vfTable[vid >> 5] &= ~(1 << (vid & 31)))
#define VMXNET3_VFTABLE_ENTRY_IS_SET(vfTable, vid) \
((vfTable[vid >> 5] & (1 << (vid & 31))) != 0)
#define VMXNET3_MAX_MTU     9000
#define VMXNET3_MIN_MTU     60
#define VMXNET3_LINK_UP         (10000 << 16 | 1)
#define VMXNET3_LINK_DOWN       0
