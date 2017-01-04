#define _ASM_POWERPC_DMA_H
#define MAX_DMA_CHANNELS	8
#define MAX_DMA_ADDRESS		(~0UL)
#if !defined(CONFIG_PPC_ISERIES) || defined(CONFIG_PCI)
#define dma_outb	outb_p
#define dma_outb	outb
#define dma_inb		inb
#define IO_DMA1_BASE	0x00
#define IO_DMA2_BASE	0xC0
#define DMA1_CMD_REG		0x08
#define DMA1_STAT_REG		0x08
#define DMA1_REQ_REG		0x09
#define DMA1_MASK_REG		0x0A
#define DMA1_MODE_REG		0x0B
#define DMA1_CLEAR_FF_REG	0x0C
#define DMA1_TEMP_REG		0x0D
#define DMA1_RESET_REG		0x0D
#define DMA1_CLR_MASK_REG	0x0E
#define DMA1_MASK_ALL_REG	0x0F
#define DMA2_CMD_REG		0xD0
#define DMA2_STAT_REG		0xD0
#define DMA2_REQ_REG		0xD2
#define DMA2_MASK_REG		0xD4
#define DMA2_MODE_REG		0xD6
#define DMA2_CLEAR_FF_REG	0xD8
#define DMA2_TEMP_REG		0xDA
#define DMA2_RESET_REG		0xDA
#define DMA2_CLR_MASK_REG	0xDC
#define DMA2_MASK_ALL_REG	0xDE
#define DMA_ADDR_0		0x00
#define DMA_ADDR_1		0x02
#define DMA_ADDR_2		0x04
#define DMA_ADDR_3		0x06
#define DMA_ADDR_4		0xC0
#define DMA_ADDR_5		0xC4
#define DMA_ADDR_6		0xC8
#define DMA_ADDR_7		0xCC
#define DMA_CNT_0		0x01
#define DMA_CNT_1		0x03
#define DMA_CNT_2		0x05
#define DMA_CNT_3		0x07
#define DMA_CNT_4		0xC2
#define DMA_CNT_5		0xC6
#define DMA_CNT_6		0xCA
#define DMA_CNT_7		0xCE
#define DMA_LO_PAGE_0		0x87
#define DMA_LO_PAGE_1		0x83
#define DMA_LO_PAGE_2		0x81
#define DMA_LO_PAGE_3		0x82
#define DMA_LO_PAGE_5		0x8B
#define DMA_LO_PAGE_6		0x89
#define DMA_LO_PAGE_7		0x8A
#define DMA_HI_PAGE_0		0x487
#define DMA_HI_PAGE_1		0x483
#define DMA_HI_PAGE_2		0x481
#define DMA_HI_PAGE_3		0x482
#define DMA_HI_PAGE_5		0x48B
#define DMA_HI_PAGE_6		0x489
#define DMA_HI_PAGE_7		0x48A
#define DMA1_EXT_REG		0x40B
#define DMA2_EXT_REG		0x4D6
extern unsigned int DMA_MODE_WRITE;
extern unsigned int DMA_MODE_READ;
extern unsigned long ISA_DMA_THRESHOLD;
#define DMA_MODE_READ	0x44
#define DMA_MODE_WRITE	0x48
#define DMA_MODE_CASCADE	0xC0
#define DMA_AUTOINIT		0x10
extern spinlock_t dma_spin_lock;
static __inline__ unsigned long claim_dma_lock(void)
static __inline__ void release_dma_lock(unsigned long flags)
static __inline__ void enable_dma(unsigned int dmanr)
static __inline__ void disable_dma(unsigned int dmanr)
static __inline__ void clear_dma_ff(unsigned int dmanr)
static __inline__ void set_dma_mode(unsigned int dmanr, char mode)
static __inline__ void set_dma_page(unsigned int dmanr, int pagenr)
static __inline__ void set_dma_addr(unsigned int dmanr, unsigned int phys)
static __inline__ void set_dma_count(unsigned int dmanr, unsigned int count)
static __inline__ int get_dma_residue(unsigned int dmanr)
extern int request_dma(unsigned int dmanr, const char *device_id);
extern void free_dma(unsigned int dmanr);
extern int isa_dma_bridge_buggy;
#define isa_dma_bridge_buggy	(0)
