#define __DMA_SH_H
#if defined(CONFIG_CPU_SUBTYPE_SH7723)	|| \
defined(CONFIG_CPU_SUBTYPE_SH7724)	|| \
defined(CONFIG_CPU_SUBTYPE_SH7780)	|| \
defined(CONFIG_CPU_SUBTYPE_SH7785)
#define dmaor_read_reg(n) \
(n ? __raw_readw(SH_DMAC_BASE1 + DMAOR) \
: __raw_readw(SH_DMAC_BASE0 + DMAOR))
#define dmaor_write_reg(n, data) \
(n ? __raw_writew(data, SH_DMAC_BASE1 + DMAOR) \
: __raw_writew(data, SH_DMAC_BASE0 + DMAOR))
#define dmaor_read_reg(n) __raw_readw(SH_DMAC_BASE0 + DMAOR)
#define dmaor_write_reg(n, data) __raw_writew(data, SH_DMAC_BASE0 + DMAOR)
static int dmte_irq_map[] __maybe_unused = ;
#define RS_DUAL	(DM_INC | SM_INC | 0x400 | TS_INDEX2VAL(XMIT_SZ_32BIT))
static u32 dma_base_addr[] __maybe_unused = ;
