#define SDRAM_CFG_0   0x49A1
#define SDRAM_CFG_1   0xA732
#define SDRAM_CFG_2   0x31
#define SDRAM_ARB_CFG 0xA0
#define SDRAM_REFRESH 0x20
#define PMX2_SOFTRESET_DAC_RST		0x0001
#define PMX2_SOFTRESET_C1_RST		0x0004
#define PMX2_SOFTRESET_C2_RST		0x0008
#define PMX2_SOFTRESET_3D_RST		0x0010
#define PMX2_SOFTRESET_VIDIN_RST	0x0020
#define PMX2_SOFTRESET_TLB_RST		0x0040
#define PMX2_SOFTRESET_SD_RST		0x0080
#define PMX2_SOFTRESET_VGA_RST		0x0100
#define PMX2_SOFTRESET_ROM_RST		0x0200
#define PMX2_SOFTRESET_TA_RST		0x0400
#define PMX2_SOFTRESET_REG_RST		0x4000
#define PMX2_SOFTRESET_ALL		0x7fff
#define CORE_PLL_FREQ 1000000
#define REF_FREQ 14318
static u16 CorePllControl = 0x70;
#define	PCI_CONFIG_SUBSYS_ID	0x2e
#define CORE_PLL_MODE_REG_0_7      3
#define CORE_PLL_MODE_REG_8_15     2
#define CORE_PLL_MODE_CONFIG_REG   1
#define DAC_PLL_CONFIG_REG         0
#define STG_MAX_VCO 500000
#define STG_MIN_VCO 100000
#define    STG4K3_PLL_SCALER      8
#define    STG4K3_PLL_MIN_R       2
#define    STG4K3_PLL_MAX_R       33
#define    STG4K3_PLL_MIN_F       2
#define    STG4K3_PLL_MAX_F       513
#define    STG4K3_PLL_MIN_OD      0
#define    STG4K3_PLL_MAX_OD      2
#define    STG4K3_PLL_MIN_VCO_SC  (100000000 >> STG4K3_PLL_SCALER)
#define    STG4K3_PLL_MAX_VCO_SC  (500000000 >> STG4K3_PLL_SCALER)
#define    STG4K3_PLL_MINR_VCO_SC (100000000 >> STG4K3_PLL_SCALER)
#define    STG4K3_PLL_MAXR_VCO_SC (500000000 >> STG4K3_PLL_SCALER)
#define    STG4K3_PLL_MINR_VCO    100000000
#define    STG4K3_PLL_MAX_VCO     500000000
#define    STG4K3_PLL_MAXR_VCO    500000000
#define OS_DELAY(X) \
static u32 InitSDRAMRegisters(volatile STG4000REG __iomem *pSTGReg,
u32 dwSubSysID, u32 dwRevID)
u32 ProgramClock(u32 refClock,
u32 coreClock,
u32 * FOut, u32 * ROut, u32 * POut)
int SetCoreClockPLL(volatile STG4000REG __iomem *pSTGReg, struct pci_dev *pDev)
