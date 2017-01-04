int RIOPCIinit(struct rio_info *p, int Mode);
static int RIOScrub(int, u8 __iomem *, int);
int RIOAssignAT(struct rio_info *p, int	Base, void __iomem *virtAddr, int mode)
static	u8	val[] = ;
#define	TEST_END sizeof(val)
int RIOBoardTest(unsigned long paddr, void __iomem *caddr, unsigned char type, int slot)
static int RIOScrub(int op, u8 __iomem *ram, int size)
int RIODefaultName(struct rio_info *p, struct Host *HostP, unsigned int	UnitId)
#define RIO_RELEASE	"Linux"
#define RELEASE_ID	"1.0"
static struct rioVersion	stVersion;
struct rioVersion *RIOVersid(void)
void RIOHostReset(unsigned int Type, struct DpRam __iomem *DpRamP, unsigned int Slot)
