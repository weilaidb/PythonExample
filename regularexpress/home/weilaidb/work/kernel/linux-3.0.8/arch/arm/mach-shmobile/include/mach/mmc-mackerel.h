#define MMC_MACKEREL_H
#define PORT0CR      (void __iomem *)0xe6051000
#define PORT1CR      (void __iomem *)0xe6051001
#define PORT2CR      (void __iomem *)0xe6051002
#define PORT159CR    (void __iomem *)0xe605009f
#define PORTR031_000DR (void __iomem *)0xe6055000
#define PORTL159_128DR (void __iomem *)0xe6054010
static inline void mmc_init_progress(void)
static inline void mmc_update_progress(int n)
