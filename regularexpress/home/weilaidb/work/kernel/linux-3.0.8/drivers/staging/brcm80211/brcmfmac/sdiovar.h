#define _sdiovar_h_
typedef struct sdreg  sdreg_t;
#define SDH_ERROR_VAL		0x0001
#define SDH_TRACE_VAL		0x0002
#define SDH_INFO_VAL		0x0004
#define SDH_DEBUG_VAL		0x0008
#define SDH_DATA_VAL		0x0010
#define SDH_CTRL_VAL		0x0020
#define SDH_LOG_VAL		0x0040
#define SDH_DMA_VAL		0x0080
#define NUM_PREV_TRANSACTIONS	16
