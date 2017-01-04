#define VDMA_ALIGNMENT	PAGE_SIZE
#define VDMA_XFERSIZE	16
#define VDMA_INIT	0
#define VDMA_START	1
#define VDMA_END	2
extern void memc_write(unsigned int reg, unsigned long val);
#define video_set_dma(start,end,offset)				\
do  while (0)
