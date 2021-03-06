#define _LMC_DEBUG_H_
#define LMC_CONSOLE_LOG(x,y,z) lmcConsoleLog((x), (y), (z))
#define LMC_CONSOLE_LOG(x,y,z)
#define LMC_CONSOLE_LOG(x,y,z)
#define LMC_EVENTLOGSIZE 1024
#define LMC_EVENTLOGARGS 4
#define LMC_EVENT_XMT           1
#define LMC_EVENT_XMTEND        2
#define LMC_EVENT_XMTINT        3
#define LMC_EVENT_RCVINT        4
#define LMC_EVENT_RCVEND        5
#define LMC_EVENT_INT           6
#define LMC_EVENT_XMTINTTMO     7
#define LMC_EVENT_XMTPRCTMO     8
#define LMC_EVENT_INTEND        9
#define LMC_EVENT_RESET1       10
#define LMC_EVENT_RESET2       11
#define LMC_EVENT_FORCEDRESET  12
#define LMC_EVENT_WATCHDOG     13
#define LMC_EVENT_BADPKTSURGE  14
#define LMC_EVENT_TBUSY0       15
#define LMC_EVENT_TBUSY1       16
extern u32 lmcEventLogIndex;
extern u32 lmcEventLogBuf[LMC_EVENTLOGSIZE * LMC_EVENTLOGARGS];
#define LMC_EVENT_LOG(x, y, z) lmcEventLog((x), (y), (z))
#define LMC_EVENT_LOG(x,y,z)
void lmcConsoleLog(char *type, unsigned char *ucData, int iLen);
void lmcEventLog(u32 EventNum, u32 arg2, u32 arg3);
void lmc_trace(struct net_device *dev, char *msg);
