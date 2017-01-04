#define _BT878_H_
#define BT878_VERSION_CODE 0x000000
#define BT878_AINT_STAT		0x100
#define BT878_ARISCS		(0xf<<28)
#define BT878_ARISC_EN		(1<<27)
#define BT878_ASCERR		(1<<19)
#define BT878_AOCERR		(1<<18)
#define BT878_APABORT		(1<<17)
#define BT878_ARIPERR		(1<<16)
#define BT878_APPERR		(1<<15)
#define BT878_AFDSR		(1<<14)
#define BT878_AFTRGT		(1<<13)
#define BT878_AFBUS		(1<<12)
#define BT878_ARISCI		(1<<11)
#define BT878_AOFLOW		(1<<3)
#define BT878_AINT_MASK		0x104
#define BT878_AGPIO_DMA_CTL	0x10c
#define BT878_A_GAIN		(0xf<<28)
#define BT878_A_G2X		(1<<27)
#define BT878_A_PWRDN		(1<<26)
#define BT878_A_SEL		(3<<24)
#define BT878_DA_SCE		(1<<23)
#define BT878_DA_LRI		(1<<22)
#define BT878_DA_MLB		(1<<21)
#define BT878_DA_LRD		(0x1f<<16)
#define BT878_DA_DPM		(1<<15)
#define BT878_DA_SBR		(1<<14)
#define BT878_DA_ES2		(1<<13)
#define BT878_DA_LMT		(1<<12)
#define BT878_DA_SDR		(0xf<<8)
#define BT878_DA_IOM		(3<<6)
#define BT878_DA_APP		(1<<5)
#define BT878_ACAP_EN		(1<<4)
#define BT878_PKTP		(3<<2)
#define BT878_RISC_EN		(1<<1)
#define BT878_FIFO_EN		1
#define BT878_APACK_LEN		0x110
#define BT878_AFP_LEN		(0xff<<16)
#define BT878_ALP_LEN		0xfff
#define BT878_ARISC_START	0x114
#define BT878_ARISC_PC		0x120
#define BT878_GPIO_DMA_CTL	0x10c
#define BT878_INT_STAT		0x100
#define BT878_INT_MASK		0x104
#define BT878_I2CRACK		(1<<25)
#define BT878_I2CDONE		(1<<8)
#define BT878_MAX 4
#define BT878_RISC_SYNC_MASK	(1 << 15)
#define BTTV_BOARD_UNKNOWN                 0x00
#define BTTV_BOARD_PINNACLESAT             0x5e
#define BTTV_BOARD_NEBULA_DIGITV           0x68
#define BTTV_BOARD_PC_HDTV                 0x70
#define BTTV_BOARD_TWINHAN_DST             0x71
#define BTTV_BOARD_AVDVBT_771              0x7b
#define BTTV_BOARD_AVDVBT_761              0x7c
#define BTTV_BOARD_DVICO_DVBT_LITE         0x80
#define BTTV_BOARD_DVICO_FUSIONHDTV_5_LITE 0x87
extern int bt878_num;
struct bt878 ;
extern struct bt878 bt878[BT878_MAX];
void bt878_start(struct bt878 *bt, u32 controlreg, u32 op_sync_orin,
u32 irq_err_ignore);
void bt878_stop(struct bt878 *bt);
#if defined(__powerpc__)
static inline void io_st_le32(volatile unsigned __iomem *addr, unsigned val)
#define bmtwrite(dat,adr)  io_st_le32((adr),(dat))
#define bmtread(adr)       ld_le32((adr))
#define bmtwrite(dat,adr)  writel((dat), (adr))
#define bmtread(adr)       readl(adr)
