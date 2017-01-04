#define CCISS_H
#define NWD_SHIFT	4
#define MAX_PART	(1 << NWD_SHIFT)
#define IO_OK		0
#define IO_ERROR	1
#define IO_NEEDS_RETRY  3
#define VENDOR_LEN	8
#define MODEL_LEN	16
#define REV_LEN		4
struct ctlr_info;
typedef struct ctlr_info ctlr_info_t;
struct access_method ;
typedef struct _drive_info_struct
drive_info_struct;
struct ctlr_info
;
#define SA5_DOORBELL	0x20
#define SA5_REQUEST_PORT_OFFSET	0x40
#define SA5_REPLY_INTR_MASK_OFFSET	0x34
#define SA5_REPLY_PORT_OFFSET		0x44
#define SA5_INTR_STATUS		0x30
#define SA5_SCRATCHPAD_OFFSET	0xB0
#define SA5_CTCFG_OFFSET	0xB4
#define SA5_CTMEM_OFFSET	0xB8
#define SA5_INTR_OFF		0x08
#define SA5B_INTR_OFF		0x04
#define SA5_INTR_PENDING	0x08
#define SA5B_INTR_PENDING	0x04
#define FIFO_EMPTY		0xffffffff
#define CCISS_FIRMWARE_READY	0xffff0000
#define SA5_PERF_INTR_PENDING	0x04
#define SA5_PERF_INTR_OFF	0x05
#define SA5_OUTDB_STATUS_PERF_BIT	0x01
#define SA5_OUTDB_CLEAR_PERF_BIT	0x01
#define SA5_OUTDB_CLEAR         0xA0
#define SA5_OUTDB_CLEAR_PERF_BIT        0x01
#define SA5_OUTDB_STATUS        0x9C
#define  CISS_ERROR_BIT		0x02
#define CCISS_INTR_ON 	1
#define CCISS_INTR_OFF	0
#define CCISS_BOARD_READY_WAIT_SECS (120)
#define CCISS_BOARD_NOT_READY_WAIT_SECS (100)
#define CCISS_BOARD_READY_POLL_INTERVAL_MSECS (100)
#define CCISS_BOARD_READY_ITERATIONS \
((CCISS_BOARD_READY_WAIT_SECS * 1000) / \
CCISS_BOARD_READY_POLL_INTERVAL_MSECS)
#define CCISS_BOARD_NOT_READY_ITERATIONS \
((CCISS_BOARD_NOT_READY_WAIT_SECS * 1000) / \
CCISS_BOARD_READY_POLL_INTERVAL_MSECS)
#define CCISS_POST_RESET_PAUSE_MSECS (3000)
#define CCISS_POST_RESET_NOOP_INTERVAL_MSECS (4000)
#define CCISS_POST_RESET_NOOP_RETRIES (12)
#define CCISS_POST_RESET_NOOP_TIMEOUT_MSECS (10000)
static void SA5_submit_command( ctlr_info_t *h, CommandList_struct *c)
static void SA5_intr_mask(ctlr_info_t *h, unsigned long val)
static void SA5B_intr_mask(ctlr_info_t *h, unsigned long val)
static void SA5_performant_intr_mask(ctlr_info_t *h, unsigned long val)
static unsigned long SA5_fifo_full(ctlr_info_t *h)
static unsigned long SA5_completed(ctlr_info_t *h)
static unsigned long SA5_performant_completed(ctlr_info_t *h)
static bool SA5_intr_pending(ctlr_info_t *h)
static bool SA5B_intr_pending(ctlr_info_t *h)
static bool SA5_performant_intr_pending(ctlr_info_t *h)
static struct access_method SA5_access = ;
static struct access_method SA5B_access = ;
static struct access_method SA5_performant_access = ;
struct board_type ;
