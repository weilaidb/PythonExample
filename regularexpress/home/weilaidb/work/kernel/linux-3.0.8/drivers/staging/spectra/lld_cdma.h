#define _LLD_CDMA_
#define  DEBUG_SYNC    1
struct cdma_descriptor ;
struct memcpy_descriptor ;
struct pending_cmd ;
#if DEBUG_SYNC
extern u32 debug_sync_cnt;
#define     CMD_DMA_DESC_COMP   0x8000
#define     CMD_DMA_DESC_FAIL   0x4000
