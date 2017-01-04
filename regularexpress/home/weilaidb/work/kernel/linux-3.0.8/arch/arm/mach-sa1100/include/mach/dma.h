#define __ASM_ARCH_DMA_H
#define SA1100_DMA_CHANNELS	6
#define MAX_DMA_SIZE		0x1fff
#define CUT_DMA_SIZE		0x1000
typedef enum  dma_device_t;
typedef struct  dma_regs_t;
typedef void (*dma_callback_t)(void *data);
extern int sa1100_request_dma( dma_device_t device, const char *device_id,
dma_callback_t callback, void *data,
dma_regs_t **regs );
extern void sa1100_free_dma( dma_regs_t *regs );
extern int sa1100_start_dma( dma_regs_t *regs, dma_addr_t dma_ptr, u_int size );
extern dma_addr_t sa1100_get_dma_pos(dma_regs_t *regs);
extern void sa1100_reset_dma(dma_regs_t *regs);
#define sa1100_stop_dma(regs)	((regs)->ClrDCSR = DCSR_IE|DCSR_RUN)
#define sa1100_resume_dma(regs)	((regs)->SetDCSR = DCSR_IE|DCSR_RUN)
#define sa1100_clear_dma(regs)	((regs)->ClrDCSR = DCSR_IE|DCSR_RUN|DCSR_STRTA|DCSR_STRTB)
