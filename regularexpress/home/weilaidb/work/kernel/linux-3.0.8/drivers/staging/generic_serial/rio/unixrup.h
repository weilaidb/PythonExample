#define __rio_unixrup_h__
struct UnixRup {
struct CmdBlk *CmdsWaitingP;
struct CmdBlk *CmdPendingP;
struct RUP __iomem *RupP;
unsigned int Id;
unsigned int BaseSysPort;
unsigned int ModTypes;
spinlock_t RupLock;
