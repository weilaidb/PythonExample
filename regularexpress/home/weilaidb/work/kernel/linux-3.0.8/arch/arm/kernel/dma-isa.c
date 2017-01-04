#define ISA_DMA_MASK		0
#define ISA_DMA_MODE		1
#define ISA_DMA_CLRFF		2
#define ISA_DMA_PGHI		3
#define ISA_DMA_PGLO		4
#define ISA_DMA_ADDR		5
#define ISA_DMA_COUNT		6
static unsigned int isa_dma_port[8][7] = ;
static int isa_get_dma_residue(unsigned int chan, dma_t *dma)
static void isa_enable_dma(unsigned int chan, dma_t *dma)
static void isa_disable_dma(unsigned int chan, dma_t *dma)
static struct dma_ops isa_dma_ops = ;
static struct resource dma_resources[] = ;
static dma_t isa_dma[8];
void __init isa_init_dma(void)
