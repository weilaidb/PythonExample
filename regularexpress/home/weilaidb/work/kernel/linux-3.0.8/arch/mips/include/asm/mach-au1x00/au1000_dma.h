#define __ASM_AU1000_DMA_H
#define NUM_AU1000_DMA_CHANNELS	8
#define DMA_MODE_SET		0x00000000
#define DMA_MODE_READ		DMA_MODE_SET
#define DMA_MODE_CLEAR		0x00000004
#define DMA_DAH_MASK		(0x0f << 20)
#define DMA_DID_BIT		16
#define DMA_DID_MASK		(0x0f << DMA_DID_BIT)
#define DMA_DS			(1 << 15)
#define DMA_BE			(1 << 13)
#define DMA_DR			(1 << 12)
#define DMA_TS8 		(1 << 11)
#define DMA_DW_BIT		9
#define DMA_DW_MASK		(0x03 << DMA_DW_BIT)
#define DMA_DW8			(0 << DMA_DW_BIT)
#define DMA_DW16		(1 << DMA_DW_BIT)
#define DMA_DW32		(2 << DMA_DW_BIT)
#define DMA_NC			(1 << 8)
#define DMA_IE			(1 << 7)
#define DMA_HALT		(1 << 6)
#define DMA_GO			(1 << 5)
#define DMA_AB			(1 << 4)
#define DMA_D1			(1 << 3)
#define DMA_BE1 		(1 << 2)
#define DMA_D0			(1 << 1)
#define DMA_BE0 		(1 << 0)
#define DMA_PERIPHERAL_ADDR	0x00000008
#define DMA_BUFFER0_START	0x0000000C
#define DMA_BUFFER1_START	0x00000014
#define DMA_BUFFER0_COUNT	0x00000010
#define DMA_BUFFER1_COUNT	0x00000018
#define DMA_BAH_BIT	16
#define DMA_BAH_MASK	(0x0f << DMA_BAH_BIT)
#define DMA_COUNT_BIT	0
#define DMA_COUNT_MASK	(0xffff << DMA_COUNT_BIT)
enum ;
enum ;
struct dma_chan ;
extern struct dma_chan au1000_dma_table[];
extern int request_au1000_dma(int dev_id,
const char *dev_str,
irq_handler_t irqhandler,
unsigned long irqflags,
void *irq_dev_id);
extern void free_au1000_dma(unsigned int dmanr);
extern int au1000_dma_read_proc(char *buf, char **start, off_t fpos,
int length, int *eof, void *data);
extern void dump_au1000_dma_channel(unsigned int dmanr);
extern spinlock_t au1000_dma_spin_lock;
static inline struct dma_chan *get_dma_chan(unsigned int dmanr)
static inline unsigned long claim_dma_lock(void)
static inline void release_dma_lock(unsigned long flags)
static inline void enable_dma_buffer0(unsigned int dmanr)
static inline void enable_dma_buffer1(unsigned int dmanr)
static inline void enable_dma_buffers(unsigned int dmanr)
static inline void start_dma(unsigned int dmanr)
#define DMA_HALT_POLL 0x5000
static inline void halt_dma(unsigned int dmanr)
static inline void disable_dma(unsigned int dmanr)
static inline int dma_halted(unsigned int dmanr)
static inline void init_dma(unsigned int dmanr)
static inline void set_dma_mode(unsigned int dmanr, unsigned int mode)
static inline unsigned int get_dma_mode(unsigned int dmanr)
static inline int get_dma_active_buffer(unsigned int dmanr)
static inline void set_dma_fifo_addr(unsigned int dmanr, unsigned int a)
static inline void clear_dma_done0(unsigned int dmanr)
static inline void clear_dma_done1(unsigned int dmanr)
static inline void set_dma_page(unsigned int dmanr, char pagenr)
static inline void set_dma_addr0(unsigned int dmanr, unsigned int a)
static inline void set_dma_addr1(unsigned int dmanr, unsigned int a)
static inline void set_dma_count0(unsigned int dmanr, unsigned int count)
static inline void set_dma_count1(unsigned int dmanr, unsigned int count)
static inline void set_dma_count(unsigned int dmanr, unsigned int count)
static inline unsigned int get_dma_buffer_done(unsigned int dmanr)
static inline int get_dma_done_irq(unsigned int dmanr)
static inline int get_dma_residue(unsigned int dmanr)
