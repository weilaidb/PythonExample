#define __MACH_MXS_H__
#define cpu_is_mx23()		(					\
machine_is_mx23evk() ||					\
0)
#define cpu_is_mx28()		(					\
machine_is_mx28evk() ||					\
machine_is_tx28() ||					\
0)
#define MXS_IO_BASE_ADDR		0x80000000
#define MXS_IO_SIZE			SZ_1M
#define MXS_ICOLL_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x000000)
#define MXS_APBH_DMA_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x004000)
#define MXS_BCH_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x00a000)
#define MXS_GPMI_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x00c000)
#define MXS_PINCTRL_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x018000)
#define MXS_DIGCTL_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x01c000)
#define MXS_APBX_DMA_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x024000)
#define MXS_DCP_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x028000)
#define MXS_PXP_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x02a000)
#define MXS_OCOTP_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x02c000)
#define MXS_AXI_AHB0_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x02e000)
#define MXS_LCDIF_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x030000)
#define MXS_CLKCTRL_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x040000)
#define MXS_SAIF0_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x042000)
#define MXS_POWER_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x044000)
#define MXS_SAIF1_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x046000)
#define MXS_LRADC_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x050000)
#define MXS_SPDIF_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x054000)
#define MXS_I2C0_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x058000)
#define MXS_PWM_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x064000)
#define MXS_TIMROT_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x068000)
#define MXS_AUART1_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x06c000)
#define MXS_AUART2_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x06e000)
#define MXS_DRAM_BASE_ADDR		(MXS_IO_BASE_ADDR + 0x0e0000)
#define MXS_IO_P2V(x)	(0xf4000000 +					\
(((x) & 0x80000000) >> 7) +			\
(((x) & 0x000fffff)))
#define MXS_IO_ADDRESS(x)	IOMEM(MXS_IO_P2V(x))
#define mxs_map_entry(soc, name, _type)
#define MXS_SET_ADDR		0x4
#define MXS_CLR_ADDR		0x8
#define MXS_TOG_ADDR		0xc
static inline void __mxs_setl(u32 mask, void __iomem *reg)
static inline void __mxs_clrl(u32 mask, void __iomem *reg)
static inline void __mxs_togl(u32 mask, void __iomem *reg)
