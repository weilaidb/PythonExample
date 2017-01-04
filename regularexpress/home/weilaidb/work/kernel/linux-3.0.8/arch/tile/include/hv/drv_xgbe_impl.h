#define __DRV_XGBE_IMPL_H__
#define LOG2_NUM_GROUPS (12)
#define NUM_GROUPS (1 << LOG2_NUM_GROUPS)
#define EPP_REQS_PER_TILE (32)
#define EDMA_WDS_NO_CSUM      8
#define EDMA_WDS_CSUM        10
#define EDMA_WDS_TOTAL      128
#define SIZE_SMALL (1)
#define SIZE_LARGE (2)
#define SIZE_JUMBO (0)
#define NETIO_NUM_SIZES 3
#define NETIO_DEFAULT_SMALL_PACKETS 2750
#define NETIO_DEFAULT_LARGE_PACKETS 2500
#define NETIO_DEFAULT_JUMBO_PACKETS 250
#define NETIO_ARENA_SHIFT      24
#define NETIO_ARENA_SIZE       (1 << NETIO_ARENA_SHIFT)
typedef struct
__netio_packet_queue_t;
typedef struct
__netio_buffer_queue_t;
typedef struct __netio_queue_impl_t
netio_queue_impl_t;
typedef struct __netio_queue_user_impl_t
netio_queue_user_impl_t;
#define NETIO_GROUP_CHUNK_SIZE   64
#define NETIO_BUCKET_CHUNK_SIZE  64
typedef struct
__netio_send_cmd_t;
#define __NETIO_SEND_FLG_ACK    0x1
#define __NETIO_SEND_FLG_CSUM   0x2
#define __NETIO_SEND_FLG_COMPLETION 0x4
#define __NETIO_SEND_FLG_XSEG_SHIFT 3
#define __NETIO_SEND_FLG_XSEG_WIDTH 2
