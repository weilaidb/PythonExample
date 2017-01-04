#define IRQ_DMA0_EOT IRQ_IOP32X_DMA0_EOT
#define IRQ_DMA0_EOC IRQ_IOP32X_DMA0_EOC
#define IRQ_DMA0_ERR IRQ_IOP32X_DMA0_ERR
#define IRQ_DMA1_EOT IRQ_IOP32X_DMA1_EOT
#define IRQ_DMA1_EOC IRQ_IOP32X_DMA1_EOC
#define IRQ_DMA1_ERR IRQ_IOP32X_DMA1_ERR
#define IRQ_AA_EOT IRQ_IOP32X_AA_EOT
#define IRQ_AA_EOC IRQ_IOP32X_AA_EOC
#define IRQ_AA_ERR IRQ_IOP32X_AA_ERR
#define IRQ_DMA0_EOT IRQ_IOP33X_DMA0_EOT
#define IRQ_DMA0_EOC IRQ_IOP33X_DMA0_EOC
#define IRQ_DMA0_ERR IRQ_IOP33X_DMA0_ERR
#define IRQ_DMA1_EOT IRQ_IOP33X_DMA1_EOT
#define IRQ_DMA1_EOC IRQ_IOP33X_DMA1_EOC
#define IRQ_DMA1_ERR IRQ_IOP33X_DMA1_ERR
#define IRQ_AA_EOT IRQ_IOP33X_AA_EOT
#define IRQ_AA_EOC IRQ_IOP33X_AA_EOC
#define IRQ_AA_ERR IRQ_IOP33X_AA_ERR
static struct resource iop3xx_dma_0_resources[] = ;
static struct resource iop3xx_dma_1_resources[] = ;
static struct resource iop3xx_aau_resources[] = ;
static u64 iop3xx_adma_dmamask = DMA_BIT_MASK(32);
static struct iop_adma_platform_data iop3xx_dma_0_data = ;
static struct iop_adma_platform_data iop3xx_dma_1_data = ;
static struct iop_adma_platform_data iop3xx_aau_data = ;
struct platform_device iop3xx_dma_0_channel = ;
struct platform_device iop3xx_dma_1_channel = ;
struct platform_device iop3xx_aau_channel = ;
static int __init iop3xx_adma_cap_init(void)
arch_initcall(iop3xx_adma_cap_init);
