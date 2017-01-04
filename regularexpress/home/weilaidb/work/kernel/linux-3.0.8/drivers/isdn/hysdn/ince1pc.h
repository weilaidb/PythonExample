#define __INCE1PC_H__
#define CHAN_SYSTEM     0x0001
#define CHAN_ERRLOG     0x0005
#define CHAN_CAPI       0x0064
#define CHAN_NDIS_DATA  0x1001
#define RDY_MAGIC       0x52535953UL
#define RDY_MAGIC_SIZE  4
#define MAX_N_TOK_BYTES 255
#define MIN_RDY_MSG_SIZE    RDY_MAGIC_SIZE
#define MAX_RDY_MSG_SIZE    (RDY_MAGIC_SIZE+MAX_N_TOK_BYTES)
#define SYSR_TOK_END            0
#define SYSR_TOK_B_CHAN         1
#define SYSR_TOK_FAX_CHAN       2
#define SYSR_TOK_MAC_ADDR       3
#define SYSR_TOK_ESC            255
#define SYSR_TOK_B_CHAN_DEF     2
#define SYSR_TOK_FAX_CHAN_DEF   1
#define ERRLOG_CMD_REQ          "ERRLOG ON"
#define ERRLOG_CMD_REQ_SIZE     10
#define ERRLOG_CMD_STOP         "ERRLOG OFF"
#define ERRLOG_CMD_STOP_SIZE    11
#define ERRLOG_ENTRY_SIZE       64
#define ERRLOG_TEXT_SIZE    (ERRLOG_ENTRY_SIZE-2*4-1)
typedef struct ErrLogEntry_tag  tErrLogEntry;
#if defined(__TURBOC__)
#if sizeof(tErrLogEntry) != ERRLOG_ENTRY_SIZE
#error size of tErrLogEntry != ERRLOG_ENTRY_SIZE
#define DPRAM_SPOOLER_DATA_SIZE 0x20
typedef struct DpramBootSpooler_tag  tDpramBootSpooler;
#define DPRAM_SPOOLER_MIN_SIZE  5
#define DPRAM_SPOOLER_DEF_SIZE  0x23
#define SIZE_RSV_SOFT_UART  0x1B0
