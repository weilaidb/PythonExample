#define __ASM_TXX9_DMAC_H
#define TXX9_DMA_MAX_NR_CHANNELS	4
struct txx9dmac_platform_data ;
struct txx9dmac_chan_platform_data ;
struct txx9dmac_slave ;
void txx9_dmac_init(int id, unsigned long baseaddr, int irq,
const struct txx9dmac_platform_data *pdata);
