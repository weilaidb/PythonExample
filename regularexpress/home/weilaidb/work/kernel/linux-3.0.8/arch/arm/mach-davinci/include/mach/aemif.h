#define _MACH_DAVINCI_AEMIF_H
#define NRCSR_OFFSET		0x00
#define AWCCR_OFFSET		0x04
#define A1CR_OFFSET		0x10
#define ACR_ASIZE_MASK		0x3
#define ACR_EW_MASK		BIT(30)
#define ACR_SS_MASK		BIT(31)
struct davinci_aemif_timing ;
int davinci_aemif_setup_timing(struct davinci_aemif_timing *t,
void __iomem *base, unsigned cs);
