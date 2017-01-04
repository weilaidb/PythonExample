#define _M68K_DMA_H 1
#if defined(CONFIG_M5249) || defined(CONFIG_M5307) || defined(CONFIG_M5407) || \
defined(CONFIG_M523x) || defined(CONFIG_M527x) || defined(CONFIG_M528x)
#define MAX_M68K_DMA_CHANNELS 4
#elif defined(CONFIG_M5272)
#define MAX_M68K_DMA_CHANNELS 1
#elif defined(CONFIG_M532x)
#define MAX_M68K_DMA_CHANNELS 0
#define MAX_M68K_DMA_CHANNELS 2
extern unsigned int dma_base_addr[MAX_M68K_DMA_CHANNELS];
extern unsigned int dma_device_address[MAX_M68K_DMA_CHANNELS];
#if !defined(CONFIG_M5272)
#define DMA_MODE_WRITE_BIT  0x01
#define DMA_MODE_WORD_BIT   0x02
#define DMA_MODE_LONG_BIT   0x04
#define DMA_MODE_SINGLE_BIT 0x08
#define DMA_MODE_READ	            0
#define DMA_MODE_WRITE	            1
#define DMA_MODE_READ_WORD          2
#define DMA_MODE_WRITE_WORD         3
#define DMA_MODE_READ_LONG          4
#define DMA_MODE_WRITE_LONG         5
#define DMA_MODE_READ_SINGLE        8
#define DMA_MODE_WRITE_SINGLE       9
#define DMA_MODE_READ_WORD_SINGLE  10
#define DMA_MODE_WRITE_WORD_SINGLE 11
#define DMA_MODE_READ_LONG_SINGLE  12
#define DMA_MODE_WRITE_LONG_SINGLE 13
#define DMA_MODE_SRC_SA_BIT 0x01
#define DMA_MODE_SSIZE_MASK 0x06
#define DMA_MODE_SSIZE_OFF  0x01
#define DMA_MODE_DES_SA_BIT 0x10
#define DMA_MODE_DSIZE_MASK 0x60
#define DMA_MODE_DSIZE_OFF  0x05
#define DMA_MODE_SIZE_LONG  0x00
#define DMA_MODE_SIZE_BYTE  0x01
#define DMA_MODE_SIZE_WORD  0x02
#define DMA_MODE_SIZE_LINE  0x03
#define DMA_MODE_READ	              ((DMA_MODE_SIZE_BYTE << DMA_MODE_DSIZE_OFF) | (DMA_MODE_SIZE_BYTE << DMA_MODE_SSIZE_OFF) | DMA_SRC_SA_BIT)
#define DMA_MODE_WRITE	            ((DMA_MODE_SIZE_BYTE << DMA_MODE_DSIZE_OFF) | (DMA_MODE_SIZE_BYTE << DMA_MODE_SSIZE_OFF) | DMA_DES_SA_BIT)
#define DMA_MODE_READ_WORD	        ((DMA_MODE_SIZE_WORD << DMA_MODE_DSIZE_OFF) | (DMA_MODE_SIZE_WORD << DMA_MODE_SSIZE_OFF) | DMA_SRC_SA_BIT)
#define DMA_MODE_WRITE_WORD         ((DMA_MODE_SIZE_WORD << DMA_MODE_DSIZE_OFF) | (DMA_MODE_SIZE_WORD << DMA_MODE_SSIZE_OFF) | DMA_DES_SA_BIT)
#define DMA_MODE_READ_LONG	        ((DMA_MODE_SIZE_LONG << DMA_MODE_DSIZE_OFF) | (DMA_MODE_SIZE_LONG << DMA_MODE_SSIZE_OFF) | DMA_SRC_SA_BIT)
#define DMA_MODE_WRITE_LONG         ((DMA_MODE_SIZE_LONG << DMA_MODE_DSIZE_OFF) | (DMA_MODE_SIZE_LONG << DMA_MODE_SSIZE_OFF) | DMA_DES_SA_BIT)
#if !defined(CONFIG_M5272)
static __inline__ void enable_dma(unsigned int dmanr)
static __inline__ void disable_dma(unsigned int dmanr)
static __inline__ void clear_dma_ff(unsigned int dmanr)
static __inline__ void set_dma_mode(unsigned int dmanr, char mode)
static __inline__ void set_dma_addr(unsigned int dmanr, unsigned int a)
static __inline__ void set_dma_device_addr(unsigned int dmanr, unsigned int a)
static __inline__ void set_dma_count(unsigned int dmanr, unsigned int count)
static __inline__ int get_dma_residue(unsigned int dmanr)
static __inline__ void enable_dma(unsigned int dmanr)
static __inline__ void disable_dma(unsigned int dmanr)
static __inline__ void clear_dma_ff(unsigned int dmanr)
static __inline__ void set_dma_mode(unsigned int dmanr, char mode)
static __inline__ void set_dma_addr(unsigned int dmanr, unsigned int a)
static __inline__ void set_dma_device_addr(unsigned int dmanr, unsigned int a)
static __inline__ void set_dma_count(unsigned int dmanr, unsigned int count)
static __inline__ int get_dma_residue(unsigned int dmanr)
#define MAX_DMA_ADDRESS PAGE_OFFSET
#define MAX_DMA_CHANNELS 8
extern int request_dma(unsigned int dmanr, const char * device_id);
extern void free_dma(unsigned int dmanr);
#define isa_dma_bridge_buggy    (0)
