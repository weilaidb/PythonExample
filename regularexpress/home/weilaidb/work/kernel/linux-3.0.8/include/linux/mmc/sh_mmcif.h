#define __SH_MMCIF_H__
struct sh_mmcif_dma ;
struct sh_mmcif_plat_data ;
#define MMCIF_CE_CMD_SET	0x00000000
#define MMCIF_CE_ARG		0x00000008
#define MMCIF_CE_ARG_CMD12	0x0000000C
#define MMCIF_CE_CMD_CTRL	0x00000010
#define MMCIF_CE_BLOCK_SET	0x00000014
#define MMCIF_CE_CLK_CTRL	0x00000018
#define MMCIF_CE_BUF_ACC	0x0000001C
#define MMCIF_CE_RESP3		0x00000020
#define MMCIF_CE_RESP2		0x00000024
#define MMCIF_CE_RESP1		0x00000028
#define MMCIF_CE_RESP0		0x0000002C
#define MMCIF_CE_RESP_CMD12	0x00000030
#define MMCIF_CE_DATA		0x00000034
#define MMCIF_CE_INT		0x00000040
#define MMCIF_CE_INT_MASK	0x00000044
#define MMCIF_CE_HOST_STS1	0x00000048
#define MMCIF_CE_HOST_STS2	0x0000004C
#define MMCIF_CE_VERSION	0x0000007C
#define BUF_ACC_DMAWEN		(1 << 25)
#define BUF_ACC_DMAREN		(1 << 24)
#define BUF_ACC_BUSW_32		(0 << 17)
#define BUF_ACC_BUSW_16		(1 << 17)
#define BUF_ACC_ATYP		(1 << 16)
#define CLK_ENABLE		(1 << 24)
#define CLK_CLEAR		((1 << 19) | (1 << 18) | (1 << 17) | (1 << 16))
#define CLK_SUP_PCLK		((1 << 19) | (1 << 18) | (1 << 17) | (1 << 16))
#define CLKDIV_4		(1<<16)
#define CLKDIV_256		(7<<16)
#define SRSPTO_256		((1 << 13) | (0 << 12))
#define SRBSYTO_29		((1 << 11) | (1 << 10) |	\
(1 << 9) | (1 << 8))
#define SRWDTO_29		((1 << 7) | (1 << 6) |		\
(1 << 5) | (1 << 4))
#define SCCSTO_29		((1 << 3) | (1 << 2) |		\
(1 << 1) | (1 << 0))
#define SOFT_RST_ON		(1 << 31)
#define SOFT_RST_OFF		0
static inline u32 sh_mmcif_readl(void __iomem *addr, int reg)
static inline void sh_mmcif_writel(void __iomem *addr, int reg, u32 val)
#define SH_MMCIF_BBS 512
static inline void sh_mmcif_boot_cmd_send(void __iomem *base,
unsigned long cmd, unsigned long arg)
static inline int sh_mmcif_boot_cmd_poll(void __iomem *base, unsigned long mask)
static inline int sh_mmcif_boot_cmd(void __iomem *base,
unsigned long cmd, unsigned long arg)
static inline int sh_mmcif_boot_do_read_single(void __iomem *base,
unsigned int block_nr,
unsigned long *buf)
static inline int sh_mmcif_boot_do_read(void __iomem *base,
unsigned long first_block,
unsigned long nr_blocks,
void *buf)
static inline void sh_mmcif_boot_init(void __iomem *base)
