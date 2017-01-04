#define _ASM_DMA_H
#define dma_outb	outb
#define dma_inb		inb
#define DMA_CHUNK_SIZE	(BITS_PER_LONG*PAGE_SIZE)
#define MAX_DMA_ADDRESS (~0UL)
#define MAX_DMA_CHANNELS 8
#define DMA_MODE_READ	0x44
#define DMA_MODE_WRITE	0x48
#define DMA_MODE_CASCADE 0xC0
#define DMA_AUTOINIT	0x10
#define IO_DMA1_BASE	0x00
#define IO_DMA2_BASE	0xC0
#define DMA1_CMD_REG		0x08
#define DMA1_STAT_REG		0x08
#define DMA1_REQ_REG            0x09
#define DMA1_MASK_REG		0x0A
#define DMA1_MODE_REG		0x0B
#define DMA1_CLEAR_FF_REG	0x0C
#define DMA1_TEMP_REG           0x0D
#define DMA1_RESET_REG		0x0D
#define DMA1_CLR_MASK_REG       0x0E
#define DMA1_MASK_ALL_REG       0x0F
#define DMA1_EXT_MODE_REG	(0x400 | DMA1_MODE_REG)
#define DMA2_CMD_REG		0xD0
#define DMA2_STAT_REG		0xD0
#define DMA2_REQ_REG            0xD2
#define DMA2_MASK_REG		0xD4
#define DMA2_MODE_REG		0xD6
#define DMA2_CLEAR_FF_REG	0xD8
#define DMA2_TEMP_REG           0xDA
#define DMA2_RESET_REG		0xDA
#define DMA2_CLR_MASK_REG       0xDC
#define DMA2_MASK_ALL_REG       0xDE
#define DMA2_EXT_MODE_REG	(0x400 | DMA2_MODE_REG)
static __inline__ unsigned long claim_dma_lock(void)
static __inline__ void release_dma_lock(unsigned long flags)
static __inline__ int get_dma_residue(unsigned int dmanr)
static __inline__ void enable_dma(unsigned int dmanr)
static __inline__ void disable_dma(unsigned int dmanr)
#define request_dma(dmanr, device_id)	(0)
static __inline__ void clear_dma_ff(unsigned int dmanr)
static __inline__ void set_dma_mode(unsigned int dmanr, char mode)
static __inline__ void set_dma_page(unsigned int dmanr, char pagenr)
static __inline__ void set_dma_addr(unsigned int dmanr, unsigned int a)
static __inline__ void set_dma_count(unsigned int dmanr, unsigned int count)
#define free_dma(dmanr)
extern int isa_dma_bridge_buggy;
#define isa_dma_bridge_buggy 	(0)
