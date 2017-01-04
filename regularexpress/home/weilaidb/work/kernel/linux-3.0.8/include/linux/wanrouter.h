#define	_ROUTER_H
#define	ROUTER_NAME	"wanrouter"
#define	ROUTER_VERSION	1
#define	ROUTER_RELEASE	1
#define	ROUTER_IOCTL	'W'
#define	ROUTER_MAGIC	0x524D4157L
enum router_ioctls
;
#define PROC_DATA_PORT_0 0x8000
#define PROC_DATA_PORT_1 0x8001
#define	NLPID_IP	0xCC
#define	NLPID_SNAP	0x80
#define	NLPID_CLNP	0x81
#define	NLPID_ESIS	0x82
#define	NLPID_ISIS	0x83
#define	NLPID_Q933	0x08
#define	WAN_IFNAME_SZ	15
#define	WAN_DRVNAME_SZ	15
#define	WAN_ADDRESS_SZ	31
#define USED_BY_FIELD	8
#define UDP_PTPIPE_TYPE 	0x01
#define UDP_FPIPE_TYPE		0x02
#define UDP_CPIPE_TYPE		0x03
#define UDP_DRVSTATS_TYPE 	0x04
#define UDP_INVALID_TYPE  	0x05
#define CMD_OK		0
#define CMD_TIMEOUT	0xFF
#define UDP_PKT_FRM_STACK	0x00
#define UDP_PKT_FRM_NETWORK	0x01
#define MAX_INTR_TEST_COUNTER	100
#define CRITICAL_IN_ISR		0xA1
#define CRITICAL_INTR_HANDLED	0xB1
typedef struct wan_x25_conf
wan_x25_conf_t;
typedef struct wan_fr_conf
wan_fr_conf_t;
typedef struct wan_ppp_conf
wan_ppp_conf_t;
typedef struct wan_chdlc_conf
wan_chdlc_conf_t;
typedef struct wandev_conf
wandev_conf_t;
#define	WANCONFIG_X25	101
#define	WANCONFIG_FR	102
#define	WANCONFIG_PPP	103
#define WANCONFIG_CHDLC	104
#define WANCONFIG_BSC	105
#define WANCONFIG_HDLC	106
#define WANCONFIG_MPPP  107
#define	WANOPT_OFF	0
#define	WANOPT_ON	1
#define	WANOPT_NO	0
#define	WANOPT_YES	1
#define	WANOPT_RS232	0
#define	WANOPT_V35	1
#define	WANOPT_NRZ	0
#define	WANOPT_NRZI	1
#define	WANOPT_FM0	2
#define	WANOPT_FM1	3
#define	WANOPT_POINTTOPOINT	0
#define	WANOPT_MULTIDROP	1
#define	WANOPT_EXTERNAL	0
#define	WANOPT_INTERNAL	1
#define	WANOPT_DTE		0
#define	WANOPT_DCE		1
#define	WANOPT_CPE		0
#define	WANOPT_NODE		1
#define	WANOPT_SECONDARY	0
#define	WANOPT_PRIMARY		1
#define	WANOPT_PERMANENT	0
#define	WANOPT_SWITCHED		1
#define	WANOPT_ONDEMAND		2
#define	WANOPT_FR_ANSI		1
#define	WANOPT_FR_Q933		2
#define	WANOPT_FR_LMI		3
#define	WANOPT_PPP_STATIC	0
#define	WANOPT_PPP_HOST		1
#define	WANOPT_PPP_PEER		2
#define WANOPT_ONE 		1
#define WANOPT_TWO		2
#define WANOPT_ONE_AND_HALF	3
#define WANOPT_NONE	0
#define WANOPT_ODD      1
#define WANOPT_EVEN	2
#define WANOPT_PRI 0
#define WANOPT_SEC 1
#define	WANOPT_INTR	0
#define WANOPT_POLL	1
#define WANOPT_TTY_SYNC  0
#define WANOPT_TTY_ASYNC 1
typedef struct wandev_stat
wandev_stat_t;
enum wan_states
;
enum ;
#define	WAN_MODEM_CTS	0x0001
#define	WAN_MODEM_DCD	0x0002
#define	WAN_MODEM_DTR	0x0010
#define	WAN_MODEM_RTS	0x0020
typedef struct wanif_conf
wanif_conf_t;
struct wan_device ;
extern int register_wan_device(struct wan_device *wandev);
extern int unregister_wan_device(char *name);
extern int wanrouter_proc_init(void);
extern void wanrouter_proc_cleanup(void);
extern int wanrouter_proc_add(struct wan_device *wandev);
extern int wanrouter_proc_delete(struct wan_device *wandev);
extern long wanrouter_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
extern struct wan_device *wanrouter_router_devlist;
