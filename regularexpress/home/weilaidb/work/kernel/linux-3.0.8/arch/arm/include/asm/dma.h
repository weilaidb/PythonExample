#define __ASM_ARM_DMA_H
#define MAX_DMA_ADDRESS	0xffffffff
#define MAX_DMA_ADDRESS	(PAGE_OFFSET + ARM_DMA_ZONE_SIZE)
#define DMA_MODE_MASK	 0xcc
#define DMA_MODE_READ	 0x44
#define DMA_MODE_WRITE	 0x48
#define DMA_MODE_CASCADE 0xc0
#define DMA_AUTOINIT	 0x10
extern spinlock_t  dma_spin_lock;
static inline unsigned long claim_dma_lock(void)
static inline void release_dma_lock(unsigned long flags)
#define clear_dma_ff(chan)
extern void set_dma_page(unsigned int chan, char pagenr);
extern int  request_dma(unsigned int chan, const char * device_id);
extern void free_dma(unsigned int chan);
extern void enable_dma(unsigned int chan);
extern void disable_dma(unsigned int chan);
extern int dma_channel_active(unsigned int chan);
extern void set_dma_sg(unsigned int chan, struct scatterlist *sg, int nr_sg);
extern void __set_dma_addr(unsigned int chan, void *addr);
#define set_dma_addr(chan, addr)				\
__set_dma_addr(chan, bus_to_virt(addr))
extern void set_dma_count(unsigned int chan, unsigned long count);
extern void set_dma_mode(unsigned int chan, unsigned int mode);
extern void set_dma_speed(unsigned int chan, int cycle_ns);
extern int  get_dma_residue(unsigned int chan);
#define NO_DMA	255
extern int isa_dma_bridge_buggy;
#define isa_dma_bridge_buggy    (0)
