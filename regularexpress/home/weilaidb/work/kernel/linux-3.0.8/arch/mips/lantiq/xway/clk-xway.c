static unsigned int ltq_ram_clocks[] = ;
#define DDR_HZ ltq_ram_clocks[ltq_cgu_r32(LTQ_CGU_SYS) & 0x3]
#define BASIC_FREQUENCY_1	35328000
#define BASIC_FREQUENCY_2	36000000
#define BASIS_REQUENCY_USB	12000000
#define GET_BITS(x, msb, lsb) \
(((x) & ((1 << ((msb) + 1)) - 1)) >> (lsb))
#define LTQ_CGU_PLL0_CFG	0x0004
#define LTQ_CGU_PLL1_CFG	0x0008
#define LTQ_CGU_PLL2_CFG	0x000C
#define LTQ_CGU_SYS		0x0010
#define LTQ_CGU_UPDATE		0x0014
#define LTQ_CGU_IF_CLK		0x0018
#define LTQ_CGU_OSC_CON		0x001C
#define LTQ_CGU_SMD		0x0020
#define LTQ_CGU_CT1SR		0x0028
#define LTQ_CGU_CT2SR		0x002C
#define LTQ_CGU_PCMCR		0x0030
#define LTQ_CGU_PCI_CR		0x0034
#define LTQ_CGU_PD_PC		0x0038
#define LTQ_CGU_FMR		0x003C
#define CGU_PLL0_PHASE_DIVIDER_ENABLE	\
(ltq_cgu_r32(LTQ_CGU_PLL0_CFG) & (1 << 31))
#define CGU_PLL0_BYPASS			\
(ltq_cgu_r32(LTQ_CGU_PLL0_CFG) & (1 << 30))
#define CGU_PLL0_CFG_DSMSEL		\
(ltq_cgu_r32(LTQ_CGU_PLL0_CFG) & (1 << 28))
#define CGU_PLL0_CFG_FRAC_EN		\
(ltq_cgu_r32(LTQ_CGU_PLL0_CFG) & (1 << 27))
#define CGU_PLL1_SRC			\
(ltq_cgu_r32(LTQ_CGU_PLL1_CFG) & (1 << 31))
#define CGU_PLL2_PHASE_DIVIDER_ENABLE	\
(ltq_cgu_r32(LTQ_CGU_PLL2_CFG) & (1 << 20))
#define CGU_SYS_FPI_SEL			(1 << 6)
#define CGU_SYS_DDR_SEL			0x3
#define CGU_PLL0_SRC			(1 << 29)
#define CGU_PLL0_CFG_PLLK	GET_BITS(ltq_cgu_r32(LTQ_CGU_PLL0_CFG), 26, 17)
#define CGU_PLL0_CFG_PLLN	GET_BITS(ltq_cgu_r32(LTQ_CGU_PLL0_CFG), 12, 6)
#define CGU_PLL0_CFG_PLLM	GET_BITS(ltq_cgu_r32(LTQ_CGU_PLL0_CFG), 5, 2)
#define CGU_PLL2_SRC		GET_BITS(ltq_cgu_r32(LTQ_CGU_PLL2_CFG), 18, 17)
#define CGU_PLL2_CFG_INPUT_DIV	GET_BITS(ltq_cgu_r32(LTQ_CGU_PLL2_CFG), 16, 13)
static unsigned int ltq_get_pll0_fdiv(void);
static inline unsigned int get_input_clock(int pll)
static inline unsigned int cal_dsm(int pll, unsigned int num, unsigned int den)
static inline unsigned int mash_dsm(int pll, unsigned int M, unsigned int N,
unsigned int K)
static inline unsigned int ssff_dsm_1(int pll, unsigned int M, unsigned int N,
unsigned int K)
static inline unsigned int ssff_dsm_2(int pll, unsigned int M, unsigned int N,
unsigned int K)
static inline unsigned int dsm(int pll, unsigned int M, unsigned int N,
unsigned int K, unsigned int dsmsel, unsigned int phase_div_en)
static inline unsigned int ltq_get_pll0_fosc(void)
static unsigned int ltq_get_pll0_fdiv(void)
unsigned int ltq_get_io_region_clock(void)
EXPORT_SYMBOL(ltq_get_io_region_clock);
unsigned int ltq_get_fpi_bus_clock(int fpi)
EXPORT_SYMBOL(ltq_get_fpi_bus_clock);
unsigned int ltq_get_cpu_hz(void)
EXPORT_SYMBOL(ltq_get_cpu_hz);
unsigned int ltq_get_fpi_hz(void)
EXPORT_SYMBOL(ltq_get_fpi_hz);
