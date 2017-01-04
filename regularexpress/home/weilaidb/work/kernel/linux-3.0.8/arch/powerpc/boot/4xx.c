static unsigned long chip_11_errata(unsigned long memsize)
void ibm4xx_sdram_fixup_memsize(void)
#define DCRN_MQ0_B0BAS		0x40
#define DCRN_MQ0_B1BAS		0x41
#define DCRN_MQ0_B2BAS		0x42
#define DCRN_MQ0_B3BAS		0x43
static u64 ibm440spe_decode_bas(u32 bas)
void ibm440spe_fixup_memsize(void)
#define DDR0_02			2
#define DDR0_08			8
#define DDR0_10			10
#define DDR0_14			14
#define DDR0_42			42
#define DDR0_43			43
#define DDR_START		0x1
#define DDR_START_SHIFT		0
#define DDR_MAX_CS_REG		0x3
#define DDR_MAX_CS_REG_SHIFT	24
#define DDR_MAX_COL_REG		0xf
#define DDR_MAX_COL_REG_SHIFT	16
#define DDR_MAX_ROW_REG		0xf
#define DDR_MAX_ROW_REG_SHIFT	8
#define DDR_DDR2_MODE		0x1
#define DDR_DDR2_MODE_SHIFT	0
#define DDR_CS_MAP		0x3
#define DDR_CS_MAP_SHIFT	8
#define DDR_REDUC		0x1
#define DDR_REDUC_SHIFT		16
#define DDR_APIN		0x7
#define DDR_APIN_SHIFT		24
#define DDR_COL_SZ		0x7
#define DDR_COL_SZ_SHIFT	8
#define DDR_BANK8		0x1
#define DDR_BANK8_SHIFT		0
#define DDR_GET_VAL(val, mask, shift)	(((val) >> (shift)) & (mask))
static inline u32 ibm4xx_denali_get_cs(void)
void ibm4xx_denali_fixup_memsize(void)
#define SPRN_DBCR0_40X 0x3F2
#define SPRN_DBCR0_44X 0x134
#define DBCR0_RST_SYSTEM 0x30000000
void ibm44x_dbcr_reset(void)
void ibm40x_dbcr_reset(void)
#define EMAC_RESET 0x20000000
void ibm4xx_quiesce_eth(u32 *emac0, u32 *emac1)
void ibm4xx_fixup_ebc_ranges(const char *ebc)
void ibm440gp_fixup_clocks(unsigned int sys_clk, unsigned int ser_clk)
#define SPRN_CCR1 0x378
static inline u32 __fix_zero(u32 v, u32 def)
static unsigned int __ibm440eplike_fixup_clocks(unsigned int sys_clk,
unsigned int tmr_clk,
int per_clk_from_opb)
static void eplike_fixup_uart_clk(int index, const char *path,
unsigned int ser_clk,
unsigned int plb_clk)
void ibm440ep_fixup_clocks(unsigned int sys_clk,
unsigned int ser_clk,
unsigned int tmr_clk)
void ibm440gx_fixup_clocks(unsigned int sys_clk,
unsigned int ser_clk,
unsigned int tmr_clk)
void ibm440spe_fixup_clocks(unsigned int sys_clk,
unsigned int ser_clk,
unsigned int tmr_clk)
void ibm405gp_fixup_clocks(unsigned int sys_clk, unsigned int ser_clk)
void ibm405ep_fixup_clocks(unsigned int sys_clk)
static u8 ibm405ex_fwdv_multi_bits[] = ;
u32 ibm405ex_get_fwdva(unsigned long cpr_fwdv)
static u8 ibm405ex_fbdv_multi_bits[] = ;
u32 ibm405ex_get_fbdv(unsigned long cpr_fbdv)
void ibm405ex_fixup_clocks(unsigned int sys_clk, unsigned int uart_clk)
