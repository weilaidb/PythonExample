#define __ASM_BFIN_DMA_H__
#define DMAEN			0x0001
#define WNR				0x0002
#define WDSIZE_8		0x0000
#define WDSIZE_16		0x0004
#define WDSIZE_32		0x0008
#define DMA2D			0x0010
#define RESTART			0x0020
#define DI_SEL			0x0040
#define DI_EN			0x0080
#define NDSIZE_0		0x0000
#define NDSIZE_1		0x0100
#define NDSIZE_2		0x0200
#define NDSIZE_3		0x0300
#define NDSIZE_4		0x0400
#define NDSIZE_5		0x0500
#define NDSIZE_6		0x0600
#define NDSIZE_7		0x0700
#define NDSIZE_8		0x0800
#define NDSIZE_9		0x0900
#define NDSIZE			0x0f00
#define DMAFLOW			0x7000
#define DMAFLOW_STOP	0x0000
#define DMAFLOW_AUTO	0x1000
#define DMAFLOW_ARRAY	0x4000
#define DMAFLOW_SMALL	0x6000
#define DMAFLOW_LARGE	0x7000
#define DMA_DONE		0x0001
#define DMA_ERR			0x0002
#define DFETCH			0x0004
#define DMA_RUN			0x0008
#define __BFP(m) u16 m; u16 __pad_##m
struct bfin_dma_regs ;
struct bfin_hmdma_regs ;
#undef __BFP
