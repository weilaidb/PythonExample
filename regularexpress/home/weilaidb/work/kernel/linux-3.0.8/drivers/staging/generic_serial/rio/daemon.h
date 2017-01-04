#define	__rio_daemon_h__
struct Error ;
struct DownLoad ;
#define	MAX_VERSION_LEN	256
#define	MAX_XP_CTRL_LEN 16
struct PortSetup ;
struct LpbReq ;
struct RupReq ;
struct PortReq ;
struct StreamInfo ;
struct HostReq ;
struct HostDpRam ;
struct DebugCtrl ;
struct MapInfo ;
struct MapIn ;
struct SendPack ;
struct SpecialRupCmd ;
struct IdentifyRta ;
struct KillNeighbour ;
struct rioVersion ;
#define	RIOC	('R'<<8)|('i'<<16)|('o'<<24)
#define	RIO_GET_TABLE     (RIOC | 100)
#define RIO_PUT_TABLE     (RIOC | 101)
#define RIO_ASSIGN_RTA    (RIOC | 102)
#define RIO_DELETE_RTA    (RIOC | 103)
#define	RIO_HOST_FOAD	  (RIOC | 104)
#define	RIO_QUICK_CHECK	  (RIOC | 105)
#define RIO_SIGNALS_ON    (RIOC | 106)
#define RIO_SIGNALS_OFF   (RIOC | 107)
#define	RIO_CHANGE_NAME   (RIOC | 108)
#define RIO_DOWNLOAD      (RIOC | 109)
#define	RIO_GET_LOG	  (RIOC | 110)
#define	RIO_SETUP_PORTS   (RIOC | 111)
#define RIO_ALL_MODEM     (RIOC | 112)
#define	RIO_NUM_HOSTS	  (RIOC | 120)
#define	RIO_HOST_LPB	  (RIOC | 121)
#define	RIO_HOST_RUP	  (RIOC | 122)
#define	RIO_HOST_PORT	  (RIOC | 123)
#define	RIO_PARMS 	  (RIOC | 124)
#define RIO_HOST_REQ	  (RIOC | 125)
#define	RIO_READ_CONFIG	  (RIOC | 126)
#define	RIO_SET_CONFIG	  (RIOC | 127)
#define	RIO_VERSID	  (RIOC | 128)
#define	RIO_FLAGS	  (RIOC | 129)
#define	RIO_SETDEBUG	  (RIOC | 130)
#define	RIO_GETDEBUG	  (RIOC | 131)
#define	RIO_READ_LEVELS   (RIOC | 132)
#define	RIO_SET_FAST_BUS  (RIOC | 133)
#define	RIO_SET_SLOW_BUS  (RIOC | 134)
#define	RIO_SET_BYTE_MODE (RIOC | 135)
#define	RIO_SET_WORD_MODE (RIOC | 136)
#define RIO_STREAM_INFO   (RIOC | 137)
#define	RIO_START_POLLER  (RIOC | 138)
#define	RIO_STOP_POLLER   (RIOC | 139)
#define	RIO_LAST_ERROR    (RIOC | 140)
#define	RIO_TICK	  (RIOC | 141)
#define	RIO_TOCK	  (RIOC | 241)
#define	RIO_SEND_PACKET   (RIOC | 142)
#define	RIO_SET_BUSY	  (RIOC | 143)
#define	SPECIAL_RUP_CMD   (RIOC | 144)
#define	RIO_FOAD_RTA      (RIOC | 145)
#define	RIO_ZOMBIE_RTA    (RIOC | 146)
#define RIO_IDENTIFY_RTA  (RIOC | 147)
#define RIO_KILL_NEIGHBOUR (RIOC | 148)
#define RIO_DEBUG_MEM     (RIOC | 149)
#define RIO_GET_PORT_SETUP (RIOC | 168)
#define RIO_RESUME        (RIOC | 169)
#define	RIO_MESG	(RIOC | 170)
#define	RIO_NO_MESG	(RIOC | 171)
#define	RIO_WHAT_MESG	(RIOC | 172)
#define RIO_HOST_DPRAM	(RIOC | 173)
#define RIO_MAP_B50_TO_50	(RIOC | 174)
#define RIO_MAP_B50_TO_57600	(RIOC | 175)
#define RIO_MAP_B110_TO_110	(RIOC | 176)
#define RIO_MAP_B110_TO_115200	(RIOC | 177)
#define RIO_GET_PORT_PARAMS	(RIOC | 178)
#define RIO_SET_PORT_PARAMS	(RIOC | 179)
#define RIO_GET_PORT_TTY	(RIOC | 180)
#define RIO_SET_PORT_TTY	(RIOC | 181)
#define RIO_SYSLOG_ONLY	(RIOC | 182)
#define RIO_SYSLOG_CONS	(RIOC | 183)
#define RIO_CONS_ONLY	(RIOC | 184)
#define RIO_BLOCK_OPENS	(RIOC | 185)
#define RIO_MEM_DUMP	(RIOC | 189)
#define RIO_READ_REGISTER	(RIOC | 190)
#define RIO_GET_MODTYPE	(RIOC | 191)
#define RIO_SET_TIMER	(RIOC | 192)
#define RIO_READ_CHECK	(RIOC | 196)
#define RIO_WAITING_FOR_RESTART	(RIOC | 197)
#define RIO_BIND_RTA	(RIOC | 198)
#define RIO_GET_BINDINGS	(RIOC | 199)
#define RIO_PUT_BINDINGS	(RIOC | 200)
#define	RIO_MAKE_DEV		(RIOC | 201)
#define	RIO_MINOR		(RIOC | 202)
#define	RIO_IDENTIFY_DRIVER	(RIOC | 203)
#define	RIO_DISPLAY_HOST_CFG	(RIOC | 204)
#define	RIO_DEV_DIRECT		0x0000
#define	RIO_DEV_MODEM		0x0200
#define	RIO_DEV_XPRINT		0x0400
#define	RIO_DEV_MASK		0x0600
#define	rIOCN(N)	(RIOC|(N))
#define	rIOCR(N,T)	(RIOC|(N))
#define	rIOCW(N,T)	(RIOC|(N))
#define	RIO_GET_XP_ON     rIOCR(150,char[16])
#define	RIO_SET_XP_ON     rIOCW(151,char[16])
#define	RIO_GET_XP_OFF    rIOCR(152,char[16])
#define	RIO_SET_XP_OFF    rIOCW(153,char[16])
#define	RIO_GET_XP_CPS    rIOCR(154,int)
#define	RIO_SET_XP_CPS    rIOCW(155,int)
#define RIO_GET_IXANY     rIOCR(156,int)
#define RIO_SET_IXANY     rIOCW(157,int)
#define RIO_SET_IXANY_ON  rIOCN(158)
#define RIO_SET_IXANY_OFF rIOCN(159)
#define RIO_GET_MODEM     rIOCR(160,int)
#define RIO_SET_MODEM     rIOCW(161,int)
#define RIO_SET_MODEM_ON  rIOCN(162)
#define RIO_SET_MODEM_OFF rIOCN(163)
#define RIO_GET_IXON      rIOCR(164,int)
#define RIO_SET_IXON      rIOCW(165,int)
#define RIO_SET_IXON_ON   rIOCN(166)
#define RIO_SET_IXON_OFF  rIOCN(167)
#define RIO_GET_SIVIEW	  ((('s')<<8) | 106)
#define	RIO_IOCTL_UNKNOWN	-2
