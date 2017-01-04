void lmcConsoleLog(char *type, unsigned char *ucData, int iLen)
u32 lmcEventLogIndex;
u32 lmcEventLogBuf[LMC_EVENTLOGSIZE * LMC_EVENTLOGARGS];
void lmcEventLog(u32 EventNum, u32 arg2, u32 arg3)
void lmc_trace(struct net_device *dev, char *msg)
