#define __SUNGEM_PHY_H__
struct mii_phy;
struct mii_phy_ops
;
struct mii_phy_def
;
enum ;
struct mii_phy
;
extern int mii_phy_probe(struct mii_phy *phy, int mii_id);
#define BMCR_SPD2	0x0040
#define LPA_PAUSE	0x0400
#define MII_BCM5201_INTERRUPT			0x1A
#define MII_BCM5201_INTERRUPT_INTENABLE		0x4000
#define MII_BCM5201_AUXMODE2			0x1B
#define MII_BCM5201_AUXMODE2_LOWPOWER		0x0008
#define MII_BCM5201_MULTIPHY                    0x1E
#define MII_BCM5201_MULTIPHY_SERIALMODE         0x0002
#define MII_BCM5201_MULTIPHY_SUPERISOLATE       0x0008
#define MII_BCM5221_TEST			0x1f
#define MII_BCM5221_TEST_ENABLE_SHADOWS		0x0080
#define MII_BCM5221_SHDOW_AUX_STAT2		0x1b
#define MII_BCM5221_SHDOW_AUX_STAT2_APD		0x0020
#define MII_BCM5221_SHDOW_AUX_MODE4		0x1a
#define MII_BCM5221_SHDOW_AUX_MODE4_IDDQMODE	0x0001
#define MII_BCM5221_SHDOW_AUX_MODE4_CLKLOPWR	0x0004
#define MII_BCM5241_SHDOW_AUX_MODE4_STANDBYPWR	0x0008
#define MII_BCM5400_GB_CONTROL			0x09
#define MII_BCM5400_GB_CONTROL_FULLDUPLEXCAP	0x0200
#define MII_BCM5400_AUXCONTROL                  0x18
#define MII_BCM5400_AUXCONTROL_PWR10BASET       0x0004
#define MII_BCM5400_AUXSTATUS                   0x19
#define MII_BCM5400_AUXSTATUS_LINKMODE_MASK     0x0700
#define MII_BCM5400_AUXSTATUS_LINKMODE_SHIFT    8
#define MII_1000BASETCONTROL			0x09
#define MII_1000BASETCONTROL_FULLDUPLEXCAP	0x0200
#define MII_1000BASETCONTROL_HALFDUPLEXCAP	0x0100
#define MII_M1011_PHY_SPEC_CONTROL		0x10
#define MII_M1011_PHY_SPEC_CONTROL_MANUAL_MDIX	0x20
#define MII_M1011_PHY_SPEC_CONTROL_AUTO_MDIX	0x40
#define MII_M1011_PHY_SPEC_STATUS		0x11
#define MII_M1011_PHY_SPEC_STATUS_1000		0x8000
#define MII_M1011_PHY_SPEC_STATUS_100		0x4000
#define MII_M1011_PHY_SPEC_STATUS_SPD_MASK	0xc000
#define MII_M1011_PHY_SPEC_STATUS_FULLDUPLEX	0x2000
#define MII_M1011_PHY_SPEC_STATUS_RESOLVED	0x0800
#define MII_M1011_PHY_SPEC_STATUS_TX_PAUSE	0x0008
#define MII_M1011_PHY_SPEC_STATUS_RX_PAUSE	0x0004