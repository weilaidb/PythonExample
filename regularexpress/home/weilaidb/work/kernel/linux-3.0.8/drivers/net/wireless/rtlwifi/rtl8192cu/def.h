#define CHIP_8723			BIT(2)
#define CHIP_8723_DRV_REV		BIT(3)
#define NORMAL_CHIP			BIT(4)
#define CHIP_VENDOR_UMC			BIT(5)
#define CHIP_VENDOR_UMC_B_CUT		BIT(6)
#define IS_NORMAL_CHIP(version)		\
(((version) & NORMAL_CHIP) ? true : false)
#define IS_8723_SERIES(version)		\
(((version) & CHIP_8723) ? true : false)
#define IS_92C_1T2R(version)		\
(((version) & CHIP_92C) && ((version) & CHIP_92C_1T2R))
#define IS_VENDOR_UMC(version)		\
(((version) & CHIP_VENDOR_UMC) ? true : false)
#define IS_VENDOR_UMC_A_CUT(version)	\
(((version) & CHIP_VENDOR_UMC) ? (((version) & (BIT(6) | BIT(7))) ? \
false : true) : false)
#define IS_VENDOR_8723_A_CUT(version)	\
(((version) & CHIP_VENDOR_UMC) ? (((version) & (BIT(6))) ? \
false : true) : false)
#define CHIP_BONDING_92C_1T2R	0x1
#define CHIP_BONDING_IDENTIFIER(_value)	(((_value) >> 22) & 0x3)
