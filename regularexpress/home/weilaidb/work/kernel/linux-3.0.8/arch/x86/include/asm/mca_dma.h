#define _ASM_X86_MCA_DMA_H
#define MCA_DMA_REG_FN  0x18
#define MCA_DMA_REG_EXE 0x1A
#define MCA_DMA_FN_SET_IO       0x00
#define MCA_DMA_FN_SET_ADDR     0x20
#define MCA_DMA_FN_GET_ADDR     0x30
#define MCA_DMA_FN_SET_COUNT    0x40
#define MCA_DMA_FN_GET_COUNT    0x50
#define MCA_DMA_FN_GET_STATUS   0x60
#define MCA_DMA_FN_SET_MODE     0x70
#define MCA_DMA_FN_SET_ARBUS    0x80
#define MCA_DMA_FN_MASK         0x90
#define MCA_DMA_FN_RESET_MASK   0xA0
#define MCA_DMA_FN_MASTER_CLEAR 0xD0
#define MCA_DMA_MODE_XFER  0x04
#define MCA_DMA_MODE_READ  0x04
#define MCA_DMA_MODE_WRITE 0x08
#define MCA_DMA_MODE_IO    0x01
#define MCA_DMA_MODE_16    0x40
static inline void mca_enable_dma(unsigned int dmanr)
static inline void mca_disable_dma(unsigned int dmanr)
static inline void mca_set_dma_addr(unsigned int dmanr, unsigned int a)
static inline unsigned int mca_get_dma_addr(unsigned int dmanr)
static inline void mca_set_dma_count(unsigned int dmanr, unsigned int count)
static inline unsigned int mca_get_dma_residue(unsigned int dmanr)
static inline void mca_set_dma_io(unsigned int dmanr, unsigned int io_addr)
static inline void mca_set_dma_mode(unsigned int dmanr, unsigned int mode)
