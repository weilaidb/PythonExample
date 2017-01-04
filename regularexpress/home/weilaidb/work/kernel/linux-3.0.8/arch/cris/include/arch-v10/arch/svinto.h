#define _ASM_CRIS_SVINTO_H
extern unsigned int genconfig_shadow;
enum ;
typedef struct etrax_dma_descr  etrax_dma_descr;
#define RESET_DMA_NUM( n ) \
*R_DMA_CH##n##_CMD = IO_STATE( R_DMA_CH0_CMD, cmd, reset )
#define RESET_DMA( n ) RESET_DMA_NUM( n )
#define WAIT_DMA_NUM( n ) \
while( (*R_DMA_CH##n##_CMD & IO_MASK( R_DMA_CH0_CMD, cmd )) != \
IO_STATE( R_DMA_CH0_CMD, cmd, hold ) )
#define WAIT_DMA( n ) WAIT_DMA_NUM( n )
extern void prepare_rx_descriptor(struct etrax_dma_descr *desc);
extern void flush_etrax_cache(void);
