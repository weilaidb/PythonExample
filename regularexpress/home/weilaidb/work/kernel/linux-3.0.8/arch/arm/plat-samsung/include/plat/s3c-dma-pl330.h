#define	__S3C_DMA_PL330_H_
#define S3C2410_DMAF_AUTOSTART		(1 << 0)
#define S3C2410_DMAF_CIRCULAR		(1 << 1)
enum dma_ch ;
static inline bool s3c_dma_has_circular(void)
