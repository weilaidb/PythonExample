#define HPSA_H
#define IO_OK		0
#define IO_ERROR	1
struct ctlr_info;
struct access_method ;
struct hpsa_scsi_dev_t ;
struct ctlr_info ;
#define HPSA_ABORT_MSG 0
#define HPSA_DEVICE_RESET_MSG 1
#define HPSA_RESET_TYPE_CONTROLLER 0x00
#define HPSA_RESET_TYPE_BUS 0x01
#define HPSA_RESET_TYPE_TARGET 0x03
#define HPSA_RESET_TYPE_LUN 0x04
#define HPSA_MSG_SEND_RETRY_LIMIT 10
#define HPSA_MSG_SEND_RETRY_INTERVAL_MSECS (10000)
#define HPSA_MAX_POLL_TIME_SECS (20)
#define HPSA_TUR_RETRY_LIMIT (20)
#define HPSA_MAX_WAIT_INTERVAL_SECS (30)
#define HPSA_BOARD_READY_WAIT_SECS (120)
#define HPSA_BOARD_NOT_READY_WAIT_SECS (100)
#define HPSA_BOARD_READY_POLL_INTERVAL_MSECS (100)
#define HPSA_BOARD_READY_POLL_INTERVAL \
((HPSA_BOARD_READY_POLL_INTERVAL_MSECS * HZ) / 1000)
#define HPSA_BOARD_READY_ITERATIONS \
((HPSA_BOARD_READY_WAIT_SECS * 1000) / \
HPSA_BOARD_READY_POLL_INTERVAL_MSECS)
#define HPSA_BOARD_NOT_READY_ITERATIONS \
((HPSA_BOARD_NOT_READY_WAIT_SECS * 1000) / \
HPSA_BOARD_READY_POLL_INTERVAL_MSECS)
#define HPSA_POST_RESET_PAUSE_MSECS (3000)
#define HPSA_POST_RESET_NOOP_RETRIES (12)
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
#define HPSA_FIRMWARE_READY	0xffff0000
#define HPSA_ERROR_BIT		0x02
#define SA5_PERF_INTR_PENDING   0x04
#define SA5_PERF_INTR_OFF       0x05
#define SA5_OUTDB_STATUS_PERF_BIT       0x01
#define SA5_OUTDB_CLEAR_PERF_BIT        0x01
#define SA5_OUTDB_CLEAR         0xA0
#define SA5_OUTDB_CLEAR_PERF_BIT        0x01
#define SA5_OUTDB_STATUS        0x9C
#define HPSA_INTR_ON 	1
#define HPSA_INTR_OFF	0
static void SA5_submit_command(struct ctlr_info *h,
struct CommandList *c)
static void SA5_intr_mask(struct ctlr_info *h, unsigned long val)
static void SA5_performant_intr_mask(struct ctlr_info *h, unsigned long val)
static unsigned long SA5_performant_completed(struct ctlr_info *h)
static unsigned long SA5_fifo_full(struct ctlr_info *h)
static unsigned long SA5_completed(struct ctlr_info *h)
static bool SA5_intr_pending(struct ctlr_info *h)
static bool SA5_performant_intr_pending(struct ctlr_info *h)
static struct access_method SA5_access = ;
static struct access_method SA5_performant_access = ;
struct board_type ;
