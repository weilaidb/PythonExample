#define _ASM_DMA_H
#undef MAX_DMA_CHANNELS
#define MAX_DMA_ADDRESS		0xbfffffff
extern spinlock_t dma_spin_lock;
static inline unsigned long claim_dma_lock(void)
static inline void release_dma_lock(unsigned long flags)
static inline void enable_dma(unsigned int dmanr)
static inline void disable_dma(unsigned int dmanr)
static inline void clear_dma_ff(unsigned int dmanr)
static inline void set_dma_mode(unsigned int dmanr, char mode)
static inline void set_dma_page(unsigned int dmanr, char pagenr)
static inline void set_dma_addr(unsigned int dmanr, unsigned int a)
static inline void set_dma_count(unsigned int dmanr, unsigned int count)
static inline int get_dma_residue(unsigned int dmanr)
extern int request_dma(unsigned int dmanr, const char *device_id);
extern void free_dma(unsigned int dmanr);
extern int isa_dma_bridge_buggy;
#define isa_dma_bridge_buggy 	(0)
