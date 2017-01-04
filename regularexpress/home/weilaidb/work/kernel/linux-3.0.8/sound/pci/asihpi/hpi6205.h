#define _HPI6205_H_
#define H620_HIF_RESET          0
#define H620_HIF_IDLE           1
#define H620_HIF_GET_RESP       2
#define H620_HIF_DATA_DONE      3
#define H620_HIF_DATA_MASK      0x10
#define H620_HIF_SEND_DATA      0x14
#define H620_HIF_GET_DATA       0x15
#define H620_HIF_UNKNOWN                0x0000ffff
#define H620_MAX_ISTREAMS 32
#define H620_MAX_OSTREAMS 32
#define HPI_NMIXER_CONTROLS 2048
struct controlcache_6205 ;
struct async_event_buffer_6205 ;
#define HPI6205_SIZEOF_DATA (16*1024)
struct bus_master_interface ;
