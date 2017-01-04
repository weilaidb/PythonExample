#define __DMA_SHDMA_H
#define SH_DMAC_MAX_CHANNELS 20
#define SH_DMA_SLAVE_NUMBER 256
#define SH_DMA_TCR_MAX 0x00FFFFFF
struct device;
struct sh_dmae_chan ;
struct sh_dmae_device ;
#define to_sh_chan(chan) container_of(chan, struct sh_dmae_chan, common)
#define to_sh_desc(lh) container_of(lh, struct sh_desc, node)
#define tx_to_sh_desc(tx) container_of(tx, struct sh_desc, async_tx)
