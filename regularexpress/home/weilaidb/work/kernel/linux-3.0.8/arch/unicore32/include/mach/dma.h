#define __MACH_PUV3_DMA_H__
#define MAX_DMA_CHANNELS	6
typedef enum  puv3_dma_prio;
extern int puv3_request_dma(char *name,
puv3_dma_prio prio,
void (*irq_handler)(int, void *),
void (*err_handler)(int, void *),
void *data);
extern void puv3_free_dma(int dma_ch);
static inline void puv3_stop_dma(int ch)
static inline void puv3_resume_dma(int ch)
