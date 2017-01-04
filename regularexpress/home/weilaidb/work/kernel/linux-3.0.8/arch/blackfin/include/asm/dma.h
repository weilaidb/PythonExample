#define _BLACKFIN_DMA_H_
#define DATA_SIZE_8			0
#define DATA_SIZE_16		1
#define DATA_SIZE_32		2
#define DMA_FLOW_STOP		0
#define DMA_FLOW_AUTO		1
#define DMA_FLOW_ARRAY		4
#define DMA_FLOW_SMALL		6
#define DMA_FLOW_LARGE		7
#define DIMENSION_LINEAR	0
#define DIMENSION_2D		1
#define DIR_READ			0
#define DIR_WRITE			1
#define INTR_DISABLE		0
#define INTR_ON_BUF			2
#define INTR_ON_ROW			3
#define DMA_NOSYNC_KEEP_DMA_BUF	0
#define DMA_SYNC_RESTART		1
struct dmasg  __attribute__((packed));
struct dma_register ;
struct dma_channel ;
int blackfin_dma_suspend(void);
void blackfin_dma_resume(void);
extern struct dma_channel dma_ch[MAX_DMA_CHANNELS];
extern struct dma_register * const dma_io_base_addr[MAX_DMA_CHANNELS];
extern int channel2irq(unsigned int channel);
static inline void set_dma_start_addr(unsigned int channel, unsigned long addr)
static inline void set_dma_next_desc_addr(unsigned int channel, void *addr)
static inline void set_dma_curr_desc_addr(unsigned int channel, void *addr)
static inline void set_dma_x_count(unsigned int channel, unsigned short x_count)
static inline void set_dma_y_count(unsigned int channel, unsigned short y_count)
static inline void set_dma_x_modify(unsigned int channel, short x_modify)
static inline void set_dma_y_modify(unsigned int channel, short y_modify)
static inline void set_dma_config(unsigned int channel, unsigned short config)
static inline void set_dma_curr_addr(unsigned int channel, unsigned long addr)
static inline unsigned short
set_bfin_dma_config(char direction, char flow_mode,
char intr_mode, char dma_mode, char width, char syncmode)
static inline unsigned short get_dma_curr_irqstat(unsigned int channel)
static inline unsigned short get_dma_curr_xcount(unsigned int channel)
static inline unsigned short get_dma_curr_ycount(unsigned int channel)
static inline void *get_dma_next_desc_ptr(unsigned int channel)
static inline void *get_dma_curr_desc_ptr(unsigned int channel)
static inline unsigned short get_dma_config(unsigned int channel)
static inline unsigned long get_dma_curr_addr(unsigned int channel)
static inline void set_dma_sg(unsigned int channel, struct dmasg *sg, int ndsize)
static inline int dma_channel_active(unsigned int channel)
static inline void disable_dma(unsigned int channel)
static inline void enable_dma(unsigned int channel)
int set_dma_callback(unsigned int channel, irq_handler_t callback, void *data);
static inline void dma_disable_irq(unsigned int channel)
static inline void dma_disable_irq_nosync(unsigned int channel)
static inline void dma_enable_irq(unsigned int channel)
static inline void clear_dma_irqstat(unsigned int channel)
void *dma_memcpy(void *dest, const void *src, size_t count);
void *dma_memcpy_nocache(void *dest, const void *src, size_t count);
void *safe_dma_memcpy(void *dest, const void *src, size_t count);
void blackfin_dma_early_init(void);
void early_dma_memcpy(void *dest, const void *src, size_t count);
void early_dma_memcpy_done(void);
