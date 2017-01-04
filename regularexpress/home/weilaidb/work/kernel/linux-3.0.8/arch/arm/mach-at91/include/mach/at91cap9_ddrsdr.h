#define AT91CAP9_DDRSDR_H
#define AT91_DDRSDRC_MR		0x00
#define		AT91_DDRSDRC_MODE	(0xf << 0)
#define			AT91_DDRSDRC_MODE_NORMAL		0
#define			AT91_DDRSDRC_MODE_NOP		1
#define			AT91_DDRSDRC_MODE_PRECHARGE	2
#define			AT91_DDRSDRC_MODE_LMR		3
#define			AT91_DDRSDRC_MODE_REFRESH	4
#define			AT91_DDRSDRC_MODE_EXT_LMR	5
#define			AT91_DDRSDRC_MODE_DEEP		6
#define AT91_DDRSDRC_RTR	0x04
#define		AT91_DDRSDRC_COUNT	(0xfff << 0)
#define AT91_DDRSDRC_CR		0x08
#define		AT91_DDRSDRC_NC		(3 << 0)
#define			AT91_DDRSDRC_NC_SDR8	(0 << 0)
#define			AT91_DDRSDRC_NC_SDR9	(1 << 0)
#define			AT91_DDRSDRC_NC_SDR10	(2 << 0)
#define			AT91_DDRSDRC_NC_SDR11	(3 << 0)
#define			AT91_DDRSDRC_NC_DDR9	(0 << 0)
#define			AT91_DDRSDRC_NC_DDR10	(1 << 0)
#define			AT91_DDRSDRC_NC_DDR11	(2 << 0)
#define			AT91_DDRSDRC_NC_DDR12	(3 << 0)
#define		AT91_DDRSDRC_NR		(3 << 2)
#define			AT91_DDRSDRC_NR_11	(0 << 2)
#define			AT91_DDRSDRC_NR_12	(1 << 2)
#define			AT91_DDRSDRC_NR_13	(2 << 2)
#define		AT91_DDRSDRC_CAS	(7 << 4)
#define			AT91_DDRSDRC_CAS_2	(2 << 4)
#define			AT91_DDRSDRC_CAS_3	(3 << 4)
#define			AT91_DDRSDRC_CAS_25	(6 << 4)
#define		AT91_DDRSDRC_DLL	(1 << 7)
#define		AT91_DDRSDRC_DICDS	(1 << 8)
#define AT91_DDRSDRC_T0PR	0x0C
#define		AT91_DDRSDRC_TRAS	(0xf <<  0)
#define		AT91_DDRSDRC_TRCD	(0xf <<  4)
#define		AT91_DDRSDRC_TWR	(0xf <<  8)
#define		AT91_DDRSDRC_TRC	(0xf << 12)
#define		AT91_DDRSDRC_TRP	(0xf << 16)
#define		AT91_DDRSDRC_TRRD	(0xf << 20)
#define		AT91_DDRSDRC_TWTR	(1   << 24)
#define		AT91_DDRSDRC_TMRD	(0xf << 28)
#define AT91_DDRSDRC_T1PR	0x10
#define		AT91_DDRSDRC_TRFC	(0x1f << 0)
#define		AT91_DDRSDRC_TXSNR	(0xff << 8)
#define		AT91_DDRSDRC_TXSRD	(0xff << 16)
#define		AT91_DDRSDRC_TXP	(0xf  << 24)
#define AT91_DDRSDRC_LPR	0x18
#define		AT91_DDRSDRC_LPCB		(3 << 0)
#define			AT91_DDRSDRC_LPCB_DISABLE		0
#define			AT91_DDRSDRC_LPCB_SELF_REFRESH		1
#define			AT91_DDRSDRC_LPCB_POWER_DOWN		2
#define			AT91_DDRSDRC_LPCB_DEEP_POWER_DOWN	3
#define		AT91_DDRSDRC_CLKFR		(1 << 2)
#define		AT91_DDRSDRC_PASR		(7 << 4)
#define		AT91_DDRSDRC_TCSR		(3 << 8)
#define		AT91_DDRSDRC_DS			(3 << 10)
#define		AT91_DDRSDRC_TIMEOUT		(3 << 12)
#define			AT91_DDRSDRC_TIMEOUT_0_CLK_CYCLES	(0 << 12)
#define			AT91_DDRSDRC_TIMEOUT_64_CLK_CYCLES	(1 << 12)
#define			AT91_DDRSDRC_TIMEOUT_128_CLK_CYCLES	(2 << 12)
#define AT91_DDRSDRC_MDR	0x1C
#define		AT91_DDRSDRC_MD		(3 << 0)
#define			AT91_DDRSDRC_MD_SDR		0
#define			AT91_DDRSDRC_MD_LOW_POWER_SDR	1
#define			AT91_DDRSDRC_MD_DDR		2
#define			AT91_DDRSDRC_MD_LOW_POWER_DDR	3
#define AT91_DDRSDRC_DLLR	0x20
#define		AT91_DDRSDRC_MDINC	(1 << 0)
#define		AT91_DDRSDRC_MDDEC	(1 << 1)
#define		AT91_DDRSDRC_MDOVF	(1 << 2)
#define		AT91_DDRSDRC_SDCOVF	(1 << 3)
#define		AT91_DDRSDRC_SDCUDF	(1 << 4)
#define		AT91_DDRSDRC_SDERF	(1 << 5)
#define		AT91_DDRSDRC_MDVAL	(0xff <<  8)
#define		AT91_DDRSDRC_SDVAL	(0xff << 16)
#define		AT91_DDRSDRC_SDCVAL	(0xff << 24)
#define at91_ramc_read(num, reg) \
at91_sys_read(AT91_DDRSDRC##num + reg)
#define at91_ramc_write(num, reg, value) \
at91_sys_write(AT91_DDRSDRC##num + reg, value)
