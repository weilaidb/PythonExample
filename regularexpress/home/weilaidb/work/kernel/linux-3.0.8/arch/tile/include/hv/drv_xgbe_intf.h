#define __DRV_XGBE_INTF_H__
typedef struct
netio_ipp_address_t;
typedef enum
netio_hv_offset_t;
#define NETIO_BASE_OFFSET(off)    ((off) & 0xFF00000000000000ULL)
#define NETIO_LOCAL_OFFSET(off)   ((off) & 0x00FFFFFFFFFFFFFFULL)
typedef union
__netio_getset_offset_t;
typedef enum
netio_fastio_index_t;
typedef struct
netio_fastio_rv3_t;
int __netio_fastio0(uint32_t fastio_index);
int __netio_fastio1(uint32_t fastio_index, uint32_t arg0);
netio_fastio_rv3_t __netio_fastio3_rv3(uint32_t fastio_index, uint32_t arg0,
uint32_t arg1, uint32_t arg2);
int __netio_fastio4(uint32_t fastio_index, uint32_t arg0, uint32_t arg1,
uint32_t arg2, uint32_t arg3);
int __netio_fastio6(uint32_t fastio_index, uint32_t arg0, uint32_t arg1,
uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
int __netio_fastio9(uint32_t fastio_index, uint32_t arg0, uint32_t arg1,
uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5,
uint32_t arg6, uint32_t arg7, uint32_t arg8);
#define __netio_fastio_allocate(fastio_index, size) \
__netio_fastio1((fastio_index) + NETIO_FASTIO_ALLOCATE, size)
#define __netio_fastio_free_buffer(fastio_index, handle) \
__netio_fastio1((fastio_index) + NETIO_FASTIO_FREE_BUFFER, handle)
#define __netio_fastio_return_credits(fastio_index, credits) \
__netio_fastio1((fastio_index) + NETIO_FASTIO_RETURN_CREDITS, credits)
#define __netio_fastio_send_pkt_nock(fastio_index, ackflag, size, va, handle) \
__netio_fastio4((fastio_index) + NETIO_FASTIO_SEND_PKT_NOCK, ackflag, \
size, va, handle)
#define __netio_fastio_send_pkt_ck(fastio_index, ackflag, size, va, handle, \
csum0, csum1) \
__netio_fastio6((fastio_index) + NETIO_FASTIO_SEND_PKT_CK, ackflag, \
size, va, handle, csum0, csum1)
typedef union
__netio_checksum_header_t;
#define __netio_fastio_sendv_pkt_1_2(fastio_index, flags, confno, csum0, \
va_F, va_L, len_F_L) \
__netio_fastio6((fastio_index) + NETIO_FASTIO_SENDV_PKT, flags, confno, \
csum0, va_F, va_L, len_F_L)
#define __netio_fastio_send_pcie_pkt(fastio_index, flags, confno, csum0, \
va_F, va_L, len_F_L) \
__netio_fastio6((fastio_index) + PCIE_FASTIO_SENDV_PKT, flags, confno, \
csum0, va_F, va_L, len_F_L)
#define __netio_fastio_sendv_pkt_3_4(fastio_index, flags, confno, csum0, va_F, \
va_L, len_F_L, va_M0, va_M1, len_M0_M1) \
__netio_fastio9((fastio_index) + NETIO_FASTIO_SENDV_PKT, flags, confno, \
csum0, va_F, va_L, len_F_L, va_M0, va_M1, len_M0_M1)
#define __netio_fastio_send_pkt_vec(fastio_index, seqno, nentries, va) \
__netio_fastio3_rv3((fastio_index) + NETIO_FASTIO_SEND_PKT_VEC, seqno, \
nentries, va)
typedef struct
lepp_cmd_t;
typedef struct
lepp_frag_t;
typedef struct
lepp_tso_cmd_t;
typedef void* lepp_comp_t;
#define LEPP_MAX_FRAGS (65536 / HV_PAGE_SIZE_SMALL + 2 + 1)
#define LEPP_TSO_CMD_SIZE(num_frags, header_size) \
(sizeof(lepp_tso_cmd_t) + \
(num_frags) * sizeof(lepp_frag_t) + \
(((header_size) + 3) & -4))
#define LEPP_CMD_QUEUE_BYTES \
(((CHIP_L2_CACHE_SIZE() - 2 * CHIP_L2_LINE_SIZE()) / \
(sizeof(lepp_cmd_t) + sizeof(lepp_comp_t))) * sizeof(lepp_cmd_t))
#define LEPP_MAX_CMD_SIZE LEPP_TSO_CMD_SIZE(LEPP_MAX_FRAGS, 128)
#define LEPP_CMD_LIMIT \
(LEPP_CMD_QUEUE_BYTES - LEPP_MAX_CMD_SIZE)
#define LEPP_COMP_QUEUE_SIZE \
((LEPP_CMD_LIMIT + sizeof(lepp_cmd_t) - 1) / sizeof(lepp_cmd_t))
#define LEPP_QINC(var) \
(var = __insn_mnz(var - (LEPP_COMP_QUEUE_SIZE - 1), var + 1))
typedef struct
lepp_queue_t;
static inline unsigned int
_lepp_num_free_slots(unsigned int head, unsigned int tail)
static inline unsigned int
lepp_num_free_comp_slots(const lepp_queue_t* q)
static inline int
lepp_qsub(int v1, int v2)
#define LIPP_VERSION 1
#define LIPP_PACKET_PADDING 2
#define LIPP_SMALL_PACKET_SIZE 128
#define LIPP_SMALL_BUFFERS 6785
#define LIPP_LARGE_BUFFERS 6785
