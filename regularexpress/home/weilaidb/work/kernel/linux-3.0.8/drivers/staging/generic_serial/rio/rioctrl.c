static struct LpbReq LpbReq;
static struct RupReq RupReq;
static struct PortReq PortReq;
static struct HostReq HostReq;
static struct HostDpRam HostDpRam;
static struct DebugCtrl DebugCtrl;
static struct Map MapEnt;
static struct PortSetup PortSetup;
static struct DownLoad DownLoad;
static struct SendPack SendPack;
static struct SpecialRupCmd SpecialRupCmd;
static struct PortParams PortParams;
static struct portStats portStats;
static struct SubCmdStruct  SubCmd;
struct PortTty ;
static struct PortTty PortTty;
typedef struct ttystatics TERMIO;
static int
(*RIOBootTable[MAX_PRODUCT]) (struct rio_info *, struct DownLoad *) = ;
#define drv_makedev(maj, min) ((((uint) maj & 0xff) << 8) | ((uint) min & 0xff))
static int copy_from_io(void __user *to, void __iomem *from, size_t size)
int riocontrol(struct rio_info *p, dev_t dev, int cmd, unsigned long arg, int su)
int RIOPreemptiveCmd(struct rio_info *p, struct Port *PortP, u8 Cmd)
