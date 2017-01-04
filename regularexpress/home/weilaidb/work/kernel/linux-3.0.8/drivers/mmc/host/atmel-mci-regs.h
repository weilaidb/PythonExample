#define __DRIVERS_MMC_ATMEL_MCI_H__
#define MCI_CR			0x0000
# define MCI_CR_MCIEN		(  1 <<  0)
# define MCI_CR_MCIDIS		(  1 <<  1)
# define MCI_CR_PWSEN		(  1 <<  2)
# define MCI_CR_PWSDIS		(  1 <<  3)
# define MCI_CR_SWRST		(  1 <<  7)
#define MCI_MR			0x0004
# define MCI_MR_CLKDIV(x)	((x) <<  0)
# define MCI_MR_PWSDIV(x)	((x) <<  8)
# define MCI_MR_RDPROOF		(  1 << 11)
# define MCI_MR_WRPROOF		(  1 << 12)
# define MCI_MR_PDCFBYTE	(  1 << 13)
# define MCI_MR_PDCPADV		(  1 << 14)
# define MCI_MR_PDCMODE		(  1 << 15)
#define MCI_DTOR		0x0008
# define MCI_DTOCYC(x)		((x) <<  0)
# define MCI_DTOMUL(x)		((x) <<  4)
#define MCI_SDCR		0x000c
# define MCI_SDCSEL_SLOT_A	(  0 <<  0)
# define MCI_SDCSEL_SLOT_B	(  1 <<  0)
# define MCI_SDCSEL_MASK	(  3 <<  0)
# define MCI_SDCBUS_1BIT	(  0 <<  6)
# define MCI_SDCBUS_4BIT	(  2 <<  6)
# define MCI_SDCBUS_8BIT	(  3 <<  6)
# define MCI_SDCBUS_MASK	(  3 <<  6)
#define MCI_ARGR		0x0010
#define MCI_CMDR		0x0014
# define MCI_CMDR_CMDNB(x)	((x) <<  0)
# define MCI_CMDR_RSPTYP_NONE	(  0 <<  6)
# define MCI_CMDR_RSPTYP_48BIT	(  1 <<  6)
# define MCI_CMDR_RSPTYP_136BIT	(  2 <<  6)
# define MCI_CMDR_SPCMD_INIT	(  1 <<  8)
# define MCI_CMDR_SPCMD_SYNC	(  2 <<  8)
# define MCI_CMDR_SPCMD_INT	(  4 <<  8)
# define MCI_CMDR_SPCMD_INTRESP	(  5 <<  8)
# define MCI_CMDR_OPDCMD	(  1 << 11)
# define MCI_CMDR_MAXLAT_5CYC	(  0 << 12)
# define MCI_CMDR_MAXLAT_64CYC	(  1 << 12)
# define MCI_CMDR_START_XFER	(  1 << 16)
# define MCI_CMDR_STOP_XFER	(  2 << 16)
# define MCI_CMDR_TRDIR_WRITE	(  0 << 18)
# define MCI_CMDR_TRDIR_READ	(  1 << 18)
# define MCI_CMDR_BLOCK		(  0 << 19)
# define MCI_CMDR_MULTI_BLOCK	(  1 << 19)
# define MCI_CMDR_STREAM	(  2 << 19)
# define MCI_CMDR_SDIO_BYTE	(  4 << 19)
# define MCI_CMDR_SDIO_BLOCK	(  5 << 19)
# define MCI_CMDR_SDIO_SUSPEND	(  1 << 24)
# define MCI_CMDR_SDIO_RESUME	(  2 << 24)
#define MCI_BLKR		0x0018
# define MCI_BCNT(x)		((x) <<  0)
# define MCI_BLKLEN(x)		((x) << 16)
#define MCI_CSTOR		0x001c
# define MCI_CSTOCYC(x)		((x) <<  0)
# define MCI_CSTOMUL(x)		((x) <<  4)
#define MCI_RSPR		0x0020
#define MCI_RSPR1		0x0024
#define MCI_RSPR2		0x0028
#define MCI_RSPR3		0x002c
#define MCI_RDR			0x0030
#define MCI_TDR			0x0034
#define MCI_SR			0x0040
#define MCI_IER			0x0044
#define MCI_IDR			0x0048
#define MCI_IMR			0x004c
# define MCI_CMDRDY		(  1 <<   0)
# define MCI_RXRDY		(  1 <<   1)
# define MCI_TXRDY		(  1 <<   2)
# define MCI_BLKE		(  1 <<   3)
# define MCI_DTIP		(  1 <<   4)
# define MCI_NOTBUSY		(  1 <<   5)
# define MCI_SDIOIRQA		(  1 <<   8)
# define MCI_SDIOIRQB		(  1 <<   9)
# define MCI_RINDE		(  1 <<  16)
# define MCI_RDIRE		(  1 <<  17)
# define MCI_RCRCE		(  1 <<  18)
# define MCI_RENDE		(  1 <<  19)
# define MCI_RTOE		(  1 <<  20)
# define MCI_DCRCE		(  1 <<  21)
# define MCI_DTOE		(  1 <<  22)
# define MCI_OVRE		(  1 <<  30)
# define MCI_UNRE		(  1 <<  31)
#define MCI_DMA			0x0050
# define MCI_DMA_OFFSET(x)	((x) <<  0)
# define MCI_DMA_CHKSIZE(x)	((x) <<  4)
# define MCI_DMAEN		(  1 <<  8)
#define MCI_CFG			0x0054
# define MCI_CFG_FIFOMODE_1DATA	(  1 <<  0)
# define MCI_CFG_FERRCTRL_COR	(  1 <<  4)
# define MCI_CFG_HSMODE		(  1 <<  8)
# define MCI_CFG_LSYNC		(  1 << 12)
#define MCI_WPMR		0x00e4
# define MCI_WP_EN		(  1 <<  0)
# define MCI_WP_KEY		(0x4d4349 << 8)
#define MCI_WPSR		0x00e8
# define MCI_GET_WP_VS(x)	((x) & 0x0f)
# define MCI_GET_WP_VSRC(x)	(((x) >> 8) & 0xffff)
#define MCI_FIFO_APERTURE	0x0200
#define MCI_REGS_SIZE		0x100
#define mci_readl(port,reg)				\
__raw_readl((port)->regs + MCI_##reg)
#define mci_writel(port,reg,value)			\
__raw_writel((value), (port)->regs + MCI_##reg)
