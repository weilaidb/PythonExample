static void RIOReceive(struct rio_info *, struct Port *);
static char *firstchars(char *p, int nch)
#define	INCR( P, I )	((P) = (((P)+(I)) & p->RIOBufferMask))
void RIOTxEnable(char *en)
static int RupIntr;
static int RxIntr;
static int TxIntr;
void RIOServiceHost(struct rio_info *p, struct Host *HostP)
static void RIOReceive(struct rio_info *p, struct Port *PortP)
