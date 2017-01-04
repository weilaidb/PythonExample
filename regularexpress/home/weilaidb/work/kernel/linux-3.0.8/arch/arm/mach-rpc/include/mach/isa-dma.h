#define __ASM_ARCH_DMA_H
#define MAX_DMA_CHANNELS	8
#define DMA_0			0
#define DMA_1			1
#define DMA_2			2
#define DMA_3			3
#define DMA_S0			4
#define DMA_S1			5
#define DMA_VIRTUAL_FLOPPY	6
#define DMA_VIRTUAL_SOUND	7
#define DMA_FLOPPY		DMA_VIRTUAL_FLOPPY
#define IOMD_DMA_BOUNDARY	(PAGE_SIZE - 1)
