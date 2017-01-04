#define _SCSI_GENERIC_H
extern int sg_big_buff;
typedef struct sg_iovec
sg_iovec_t;
typedef struct sg_io_hdr
sg_io_hdr_t;
#define SG_INTERFACE_ID_ORIG 'S'
#define SG_DXFER_NONE (-1)
#define SG_DXFER_TO_DEV (-2)
#define SG_DXFER_FROM_DEV (-3)
#define SG_DXFER_TO_FROM_DEV (-4)
#define SG_DXFER_UNKNOWN (-5)
#define SG_FLAG_DIRECT_IO 1
#define SG_FLAG_UNUSED_LUN_INHIBIT 2
#define SG_FLAG_MMAP_IO 4
#define SG_FLAG_NO_DXFER 0x10000
#define SG_INFO_OK_MASK 0x1
#define SG_INFO_OK 0x0
#define SG_INFO_CHECK 0x1
#define SG_INFO_DIRECT_IO_MASK 0x6
#define SG_INFO_INDIRECT_IO 0x0
#define SG_INFO_DIRECT_IO 0x2
#define SG_INFO_MIXED_IO 0x4
typedef struct sg_scsi_id  sg_scsi_id_t;
typedef struct sg_req_info  sg_req_info_t;
#define SG_EMULATED_HOST 0x2203
#define SG_SET_TRANSFORM 0x2204
#define SG_GET_TRANSFORM 0x2205
#define SG_SET_RESERVED_SIZE 0x2275
#define SG_GET_RESERVED_SIZE 0x2272
#define SG_GET_SCSI_ID 0x2276
#define SG_SET_FORCE_LOW_DMA 0x2279
#define SG_GET_LOW_DMA 0x227a
#define SG_SET_FORCE_PACK_ID 0x227b
#define SG_GET_PACK_ID 0x227c
#define SG_GET_NUM_WAITING 0x227d
#define SG_GET_SG_TABLESIZE 0x227F
#define SG_GET_VERSION_NUM 0x2282
#define SG_SCSI_RESET 0x2284
#define		SG_SCSI_RESET_NOTHING	0
#define		SG_SCSI_RESET_DEVICE	1
#define		SG_SCSI_RESET_BUS	2
#define		SG_SCSI_RESET_HOST	3
#define		SG_SCSI_RESET_TARGET	4
#define SG_IO 0x2285
#define SG_GET_REQUEST_TABLE 0x2286
#define SG_SET_KEEP_ORPHAN 0x2287
#define SG_GET_KEEP_ORPHAN 0x2288
#define SG_GET_ACCESS_COUNT 0x2289
#define SG_SCATTER_SZ (8 * 4096)
#define SG_DEFAULT_RETRIES 0
#define SG_DEF_FORCE_LOW_DMA 0
#define SG_DEF_FORCE_PACK_ID 0
#define SG_DEF_KEEP_ORPHAN 0
#define SG_DEF_RESERVED_SIZE SG_SCATTER_SZ
#define SG_MAX_QUEUE 16
#define SG_BIG_BUFF SG_DEF_RESERVED_SIZE
typedef struct sg_io_hdr Sg_io_hdr;
typedef struct sg_io_vec Sg_io_vec;
typedef struct sg_scsi_id Sg_scsi_id;
typedef struct sg_req_info Sg_req_info;
#define SG_MAX_SENSE 16
struct sg_header
;
#define SG_SET_TIMEOUT 0x2201
#define SG_GET_TIMEOUT 0x2202
#define SG_GET_COMMAND_Q 0x2270
#define SG_SET_COMMAND_Q 0x2271
#define SG_SET_DEBUG 0x227e
#define SG_NEXT_CMD_LEN 0x2283
#define SG_DEFAULT_TIMEOUT_USER	(60*USER_HZ)
#define SG_DEFAULT_TIMEOUT	(60*HZ)
#define SG_DEF_COMMAND_Q 0
#define SG_DEF_UNDERRUN_FLAG 0
