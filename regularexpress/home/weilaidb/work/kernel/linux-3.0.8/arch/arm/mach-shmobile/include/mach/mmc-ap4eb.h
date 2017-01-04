#define MMC_AP4EB_H
#define PORT185CR      (void __iomem *)0xe60520b9
#define PORT186CR      (void __iomem *)0xe60520ba
#define PORT187CR      (void __iomem *)0xe60520bb
#define PORT188CR      (void __iomem *)0xe60520bc
#define PORTR191_160DR (void __iomem *)0xe6056014
static inline void mmc_init_progress(void)
static inline void mmc_update_progress(int n)
