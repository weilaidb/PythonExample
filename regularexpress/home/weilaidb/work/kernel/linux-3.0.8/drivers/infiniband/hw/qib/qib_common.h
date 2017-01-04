#define _QIB_COMMON_H
#define QIB_SRC_OUI_1 0x00
#define QIB_SRC_OUI_2 0x11
#define QIB_SRC_OUI_3 0x75
#define IPS_PROTO_VERSION 2
#define QIB_KD_QP 0x656b78
#define QIB_STATUS_INITTED       0x1
#define QIB_STATUS_CHIP_PRESENT 0x20
#define QIB_STATUS_IB_READY     0x40
#define QIB_STATUS_IB_CONF      0x80
#define QIB_STATUS_HWERROR     0x200
enum qib_ureg ;
#define QIB_RUNTIME_PCIE                0x0002
#define QIB_RUNTIME_FORCE_WC_ORDER      0x0004
#define QIB_RUNTIME_RCVHDR_COPY         0x0008
#define QIB_RUNTIME_MASTER              0x0010
#define QIB_RUNTIME_RCHK                0x0020
#define QIB_RUNTIME_NODMA_RTAIL         0x0080
#define QIB_RUNTIME_SPECIAL_TRIGGER     0x0100
#define QIB_RUNTIME_SDMA                0x0200
#define QIB_RUNTIME_FORCE_PIOAVAIL      0x0400
#define QIB_RUNTIME_PIO_REGSWAPPED      0x0800
#define QIB_RUNTIME_CTXT_MSB_IN_QP      0x1000
#define QIB_RUNTIME_CTXT_REDIRECT       0x2000
#define QIB_RUNTIME_HDRSUPP             0x4000
struct qib_base_info  __attribute__ ((aligned(8)));
#define QIB_USER_SWMAJOR 1
#define QIB_USER_SWMINOR 11
#define QIB_USER_SWVERSION ((QIB_USER_SWMAJOR << 16) | QIB_USER_SWMINOR)
#define QIB_KERN_TYPE 0
#define QIB_IDSTR "QLogic kernel.org driver"
#define QIB_KERN_SWVERSION ((QIB_KERN_TYPE << 31) | QIB_USER_SWVERSION)
#define QIB_PORT_ALG_ACROSS 0
#define QIB_PORT_ALG_WITHIN 1
#define QIB_PORT_ALG_COUNT 2
struct qib_user_info  __attribute__ ((aligned(8)));
#define QIB_CMD_CTXT_INFO       17
#define QIB_CMD_RECV_CTRL       18
#define QIB_CMD_TID_UPDATE      19
#define QIB_CMD_TID_FREE        20
#define QIB_CMD_SET_PART_KEY    21
#define QIB_CMD_ASSIGN_CTXT     23
#define QIB_CMD_USER_INIT       24
#define QIB_CMD_UNUSED_1        25
#define QIB_CMD_UNUSED_2        26
#define QIB_CMD_PIOAVAILUPD     27
#define QIB_CMD_POLL_TYPE       28
#define QIB_CMD_ARMLAUNCH_CTRL  29
#define QIB_CMD_SDMA_INFLIGHT   31
#define QIB_CMD_SDMA_COMPLETE   32
#define QIB_CMD_DISARM_BUFS     34
#define QIB_CMD_ACK_EVENT       35
#define QIB_CMD_CPUS_LIST       36
#define _QIB_EVENT_DISARM_BUFS_BIT	0
#define _QIB_EVENT_LINKDOWN_BIT		1
#define _QIB_EVENT_LID_CHANGE_BIT	2
#define _QIB_EVENT_LMC_CHANGE_BIT	3
#define _QIB_EVENT_SL2VL_CHANGE_BIT	4
#define _QIB_MAX_EVENT_BIT _QIB_EVENT_SL2VL_CHANGE_BIT
#define QIB_EVENT_DISARM_BUFS_BIT	(1UL << _QIB_EVENT_DISARM_BUFS_BIT)
#define QIB_EVENT_LINKDOWN_BIT		(1UL << _QIB_EVENT_LINKDOWN_BIT)
#define QIB_EVENT_LID_CHANGE_BIT	(1UL << _QIB_EVENT_LID_CHANGE_BIT)
#define QIB_EVENT_LMC_CHANGE_BIT	(1UL << _QIB_EVENT_LMC_CHANGE_BIT)
#define QIB_EVENT_SL2VL_CHANGE_BIT	(1UL << _QIB_EVENT_SL2VL_CHANGE_BIT)
#define QIB_POLL_TYPE_ANYRCV     0x0
#define QIB_POLL_TYPE_URGENT     0x1
struct qib_ctxt_info ;
struct qib_tid_info ;
struct qib_cmd ;
struct qib_iovec ;
struct __qib_sendpkt ;
#define _DIAG_XPKT_VERS 3
struct qib_diag_xpkt ;
#define QIB_FLASH_VERSION 2
struct qib_flash ;
struct qlogic_ib_counters ;
#define QLOGIC_IB_RHF_LENGTH_MASK 0x7FF
#define QLOGIC_IB_RHF_LENGTH_SHIFT 0
#define QLOGIC_IB_RHF_RCVTYPE_MASK 0x7
#define QLOGIC_IB_RHF_RCVTYPE_SHIFT 11
#define QLOGIC_IB_RHF_EGRINDEX_MASK 0xFFF
#define QLOGIC_IB_RHF_EGRINDEX_SHIFT 16
#define QLOGIC_IB_RHF_SEQ_MASK 0xF
#define QLOGIC_IB_RHF_SEQ_SHIFT 0
#define QLOGIC_IB_RHF_HDRQ_OFFSET_MASK 0x7FF
#define QLOGIC_IB_RHF_HDRQ_OFFSET_SHIFT 4
#define QLOGIC_IB_RHF_H_ICRCERR   0x80000000
#define QLOGIC_IB_RHF_H_VCRCERR   0x40000000
#define QLOGIC_IB_RHF_H_PARITYERR 0x20000000
#define QLOGIC_IB_RHF_H_LENERR    0x10000000
#define QLOGIC_IB_RHF_H_MTUERR    0x08000000
#define QLOGIC_IB_RHF_H_IHDRERR   0x04000000
#define QLOGIC_IB_RHF_H_TIDERR    0x02000000
#define QLOGIC_IB_RHF_H_MKERR     0x01000000
#define QLOGIC_IB_RHF_H_IBERR     0x00800000
#define QLOGIC_IB_RHF_H_ERR_MASK  0xFF800000
#define QLOGIC_IB_RHF_L_USE_EGR   0x80000000
#define QLOGIC_IB_RHF_L_SWA       0x00008000
#define QLOGIC_IB_RHF_L_SWB       0x00004000
#define QLOGIC_IB_I_VERS_MASK 0xF
#define QLOGIC_IB_I_VERS_SHIFT 28
#define QLOGIC_IB_I_CTXT_MASK 0xF
#define QLOGIC_IB_I_CTXT_SHIFT 24
#define QLOGIC_IB_I_TID_MASK 0x7FF
#define QLOGIC_IB_I_TID_SHIFT 13
#define QLOGIC_IB_I_OFFSET_MASK 0x1FFF
#define QLOGIC_IB_I_OFFSET_SHIFT 0
#define QLOGIC_IB_KPF_INTR 0x1
#define QLOGIC_IB_KPF_SUBCTXT_MASK 0x3
#define QLOGIC_IB_KPF_SUBCTXT_SHIFT 1
#define QLOGIC_IB_MAX_SUBCTXT   4
#define QLOGIC_IB_SP_TEST    0x40
#define QLOGIC_IB_SP_TESTEBP 0x20
#define QLOGIC_IB_SP_TRIGGER_SHIFT  15
#define QLOGIC_IB_SENDPIOAVAIL_BUSY_SHIFT 1
#define QLOGIC_IB_SENDPIOAVAIL_CHECK_SHIFT 0
struct qib_header ;
struct qib_message_header ;
#define QIB_LRH_GRH 0x0003
#define QIB_LRH_BTH 0x0002
#define SIZE_OF_CRC 1
#define QIB_DEFAULT_P_KEY 0xFFFF
#define QIB_PERMISSIVE_LID 0xFFFF
#define QIB_AETH_CREDIT_SHIFT 24
#define QIB_AETH_CREDIT_MASK 0x1F
#define QIB_AETH_CREDIT_INVAL 0x1F
#define QIB_PSN_MASK 0xFFFFFF
#define QIB_MSN_MASK 0xFFFFFF
#define QIB_QPN_MASK 0xFFFFFF
#define QIB_MULTICAST_LID_BASE 0xC000
#define QIB_EAGER_TID_ID QLOGIC_IB_I_TID_MASK
#define QIB_MULTICAST_QPN 0xFFFFFF
#define RCVHQ_RCV_TYPE_EXPECTED  0
#define RCVHQ_RCV_TYPE_EAGER     1
#define RCVHQ_RCV_TYPE_NON_KD    2
#define RCVHQ_RCV_TYPE_ERROR     3
#define QIB_HEADER_QUEUE_WORDS 9
static inline __u32 qib_hdrget_err_flags(const __le32 *rbuf)
static inline __u32 qib_hdrget_rcv_type(const __le32 *rbuf)
static inline __u32 qib_hdrget_length_in_bytes(const __le32 *rbuf)
static inline __u32 qib_hdrget_index(const __le32 *rbuf)
static inline __u32 qib_hdrget_seq(const __le32 *rbuf)
static inline __u32 qib_hdrget_offset(const __le32 *rbuf)
static inline __u32 qib_hdrget_use_egr_buf(const __le32 *rbuf)
static inline __u32 qib_hdrget_qib_ver(__le32 hdrword)
