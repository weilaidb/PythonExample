#define __ET131X_ADAPTER_H__
#define NUM_DESC_PER_RING_TX         512
#define NUM_TCB                      64
#define NUM_TRAFFIC_CLASSES          1
#define TX_ERROR_PERIOD             1000
#define LO_MARK_PERCENT_FOR_PSR     15
#define LO_MARK_PERCENT_FOR_RX      15
struct rfd ;
#define FLOW_BOTH	0
#define FLOW_TXONLY	1
#define FLOW_RXONLY	2
#define FLOW_NONE	3
typedef struct _ce_stats_t  CE_STATS_t, *PCE_STATS_t;
struct et131x_adapter ;
