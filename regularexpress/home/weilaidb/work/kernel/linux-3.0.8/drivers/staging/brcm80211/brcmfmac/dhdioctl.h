#define	_dhdioctl_h_
typedef struct dhd_ioctl  dhd_ioctl_t;
#define DHD_IOCTL_MAGIC		0x00444944
#define DHD_IOCTL_VERSION	1
#define	DHD_IOCTL_MAXLEN	8192
#define	DHD_IOCTL_SMLEN	256
#define DHD_GET_MAGIC				0
#define DHD_GET_VERSION				1
#define DHD_GET_VAR				2
#define DHD_SET_VAR				3
#define DHD_ERROR_VAL	0x0001
#define DHD_TRACE_VAL	0x0002
#define DHD_INFO_VAL	0x0004
#define DHD_DATA_VAL	0x0008
#define DHD_CTL_VAL	0x0010
#define DHD_TIMER_VAL	0x0020
#define DHD_HDRS_VAL	0x0040
#define DHD_BYTES_VAL	0x0080
#define DHD_INTR_VAL	0x0100
#define DHD_LOG_VAL	0x0200
#define DHD_GLOM_VAL	0x0400
#define DHD_EVENT_VAL	0x0800
#define DHD_BTA_VAL	0x1000
#define DHD_ISCAN_VAL 0x2000
typedef struct dhd_pktgen  dhd_pktgen_t;
#define DHD_PKTGEN_VERSION 2
#define DHD_PKTGEN_ECHO		1
#define DHD_PKTGEN_SEND		2
#define DHD_PKTGEN_RXBURST	3
#define DHD_PKTGEN_RECV		4
#define DHD_IDLE_IMMEDIATE	(-1)
#define DHD_IDLE_ACTIVE	0
#define DHD_IDLE_STOP   (-1)
