extern struct sysdev_class dma_sysclass;
extern struct s3c2410_dma_chan s3c2410_chans[S3C_DMA_CHANNELS];
#define DMA_CH_VALID		(1<<31)
#define DMA_CH_NEVER		(1<<30)
struct s3c24xx_dma_addr ;
struct s3c24xx_dma_map ;
struct s3c24xx_dma_selection ;
extern int s3c24xx_dma_init_map(struct s3c24xx_dma_selection *sel);
struct s3c24xx_dma_order_ch ;
struct s3c24xx_dma_order ;
extern int s3c24xx_dma_order_set(struct s3c24xx_dma_order *map);
extern int s3c2410_dma_init(void);
extern int s3c24xx_dma_init(unsigned int channels, unsigned int irq,
unsigned int stride);
