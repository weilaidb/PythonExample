#define __ASM_ARCH_DMA_H __FILE__
#define MAX_DMA_TRANSFER_SIZE   0x100000
enum dma_ch ;
#define DMACH_LOW_LEVEL	(1<<28)
#if !defined(CONFIG_CPU_S3C2443) && !defined(CONFIG_CPU_S3C2416)
#define S3C_DMA_CHANNELS		(4)
#define S3C_DMA_CHANNELS		(6)
enum s3c2410_dma_state ;
enum s3c2410_dma_loadst ;
#define S3C2410_DMAF_SLOW         (1<<0)
#define S3C2410_DMAF_AUTOSTART    (1<<1)
#define S3C2410_DMAF_CIRCULAR	(1 << 2)
struct s3c2410_dma_buf;
struct s3c2410_dma_buf ;
struct s3c2410_dma_stats ;
struct s3c2410_dma_map;
struct s3c2410_dma_chan ;
typedef unsigned long dma_device_t;
static inline bool s3c_dma_has_circular(void)
