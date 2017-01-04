#define _FRAD_H_
struct dlci_add
;
#define DLCI_GET_CONF	(SIOCDEVPRIVATE + 2)
#define DLCI_SET_CONF	(SIOCDEVPRIVATE + 3)
struct dlci_conf ;
#define DLCI_GET_SLAVE	(SIOCDEVPRIVATE + 4)
#define DLCI_IGNORE_CIR_OUT	0x0001
#define DLCI_ACCOUNT_CIR_IN	0x0002
#define DLCI_BUFFER_IF		0x0008
#define DLCI_VALID_FLAGS	0x000B
#define FRAD_GET_CONF	(SIOCDEVPRIVATE)
#define FRAD_SET_CONF	(SIOCDEVPRIVATE + 1)
#define FRAD_LAST_IOCTL	FRAD_SET_CONF
struct frad_conf
;
#define FRAD_STATION_CPE	0x0000
#define FRAD_STATION_NODE	0x0001
#define FRAD_TX_IGNORE_CIR	0x0001
#define FRAD_RX_ACCOUNT_CIR	0x0002
#define FRAD_DROP_ABORTED	0x0004
#define FRAD_BUFFERIF		0x0008
#define FRAD_STATS		0x0010
#define FRAD_MCI		0x0100
#define FRAD_AUTODLCI		0x8000
#define FRAD_VALID_FLAGS	0x811F
#define FRAD_CLOCK_INT		0x0001
#define FRAD_CLOCK_EXT		0x0000
#if defined(CONFIG_DLCI) || defined(CONFIG_DLCI_MODULE)
struct frhdr
__packed;
#define FRAD_I_UI		0x03
#define FRAD_P_PADDING		0x00
#define FRAD_P_Q933		0x08
#define FRAD_P_SNAP		0x80
#define FRAD_P_CLNP		0x81
#define FRAD_P_IP		0xCC
struct dlci_local
;
struct frad_local
;
extern void dlci_ioctl_set(int (*hook)(unsigned int, void __user *));
