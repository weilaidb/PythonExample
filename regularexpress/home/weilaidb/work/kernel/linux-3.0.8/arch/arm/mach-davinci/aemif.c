#define TA(x)		((x) << 2)
#define RHOLD(x)	((x) << 4)
#define RSTROBE(x)	((x) << 7)
#define RSETUP(x)	((x) << 13)
#define WHOLD(x)	((x) << 17)
#define WSTROBE(x)	((x) << 20)
#define WSETUP(x)	((x) << 26)
#define TA_MAX		0x3
#define RHOLD_MAX	0x7
#define RSTROBE_MAX	0x3f
#define RSETUP_MAX	0xf
#define WHOLD_MAX	0x7
#define WSTROBE_MAX	0x3f
#define WSETUP_MAX	0xf
#define TIMING_MASK	(TA(TA_MAX) | \
RHOLD(RHOLD_MAX) | \
RSTROBE(RSTROBE_MAX) |	\
RSETUP(RSETUP_MAX) | \
WHOLD(WHOLD_MAX) | \
WSTROBE(WSTROBE_MAX) | \
WSETUP(WSETUP_MAX))
static int aemif_calc_rate(int wanted, unsigned long clk, int max)
int davinci_aemif_setup_timing(struct davinci_aemif_timing *t,
void __iomem *base, unsigned cs)
EXPORT_SYMBOL(davinci_aemif_setup_timing);
