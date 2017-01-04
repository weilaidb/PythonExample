#define _PPC440SPE_ADMA_H
#define to_ppc440spe_adma_chan(chan) \
container_of(chan, struct ppc440spe_adma_chan, common)
#define to_ppc440spe_adma_device(dev) \
container_of(dev, struct ppc440spe_adma_device, common)
#define tx_to_ppc440spe_adma_slot(tx) \
container_of(tx, struct ppc440spe_adma_desc_slot, async_tx)
#define PPC440SPE_DEFAULT_POLY	0x4d
#define PPC440SPE_ADMA_ENGINES_NUM	(XOR_ENGINES_NUM + DMA_ENGINES_NUM)
#define PPC440SPE_ADMA_WATCHDOG_MSEC	3
#define PPC440SPE_ADMA_THRESHOLD	1
#define PPC440SPE_DMA0_ID	0
#define PPC440SPE_DMA1_ID	1
#define PPC440SPE_XOR_ID	2
#define PPC440SPE_ADMA_DMA_MAX_BYTE_COUNT	0xFFFFFFUL
#define PPC440SPE_ADMA_XOR_MAX_BYTE_COUNT	(1 << 31)
#define PPC440SPE_ADMA_ZERO_SUM_MAX_BYTE_COUNT PPC440SPE_ADMA_XOR_MAX_BYTE_COUNT
#define PPC440SPE_RXOR_RUN	0
#define MQ0_CF2H_RXOR_BS_MASK	0x1FF
#undef ADMA_LL_DEBUG
struct ppc440spe_adma_device ;
struct ppc440spe_adma_chan ;
struct ppc440spe_rxor ;
struct ppc440spe_adma_desc_slot ;
