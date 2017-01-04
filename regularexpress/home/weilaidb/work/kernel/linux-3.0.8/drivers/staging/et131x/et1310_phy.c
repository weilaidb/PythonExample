static void et131x_xcvr_init(struct et131x_adapter *etdev);
int PhyMiRead(struct et131x_adapter *etdev, u8 xcvrAddr,
u8 xcvrReg, u16 *value)
int MiWrite(struct et131x_adapter *etdev, u8 xcvrReg, u16 value)
int et131x_xcvr_find(struct et131x_adapter *etdev)
void ET1310_PhyReset(struct et131x_adapter *etdev)
void ET1310_PhyPowerDown(struct et131x_adapter *etdev, bool down)
static void ET1310_PhyAutoNeg(struct et131x_adapter *etdev, bool enable)
static void ET1310_PhyDuplexMode(struct et131x_adapter *etdev, u16 duplex)
static void ET1310_PhySpeedSelect(struct et131x_adapter *etdev, u16 speed)
static void ET1310_PhyLinkStatus(struct et131x_adapter *etdev,
u8 *link_status,
u32 *autoneg,
u32 *linkspeed,
u32 *duplex_mode,
u32 *mdi_mdix,
u32 *masterslave, u32 *polarity)
static void ET1310_PhyAndOrReg(struct et131x_adapter *etdev,
u16 regnum, u16 andMask, u16 orMask)
void ET1310_PhyAccessMiBit(struct et131x_adapter *etdev, u16 action,
u16 regnum, u16 bitnum, u8 *value)
void ET1310_PhyAdvertise1000BaseT(struct et131x_adapter *etdev,
u16 duplex)
static void ET1310_PhyAdvertise100BaseT(struct et131x_adapter *etdev,
u16 duplex)
static void ET1310_PhyAdvertise10BaseT(struct et131x_adapter *etdev,
u16 duplex)
void et131x_setphy_normal(struct et131x_adapter *etdev)
static void et131x_xcvr_init(struct et131x_adapter *etdev)
void et131x_Mii_check(struct et131x_adapter *etdev,
MI_BMSR_t bmsr, MI_BMSR_t bmsr_ints)
static const u16 ConfigPhy[25][2] = ;
void ET1310_PhyInit(struct et131x_adapter *etdev)
