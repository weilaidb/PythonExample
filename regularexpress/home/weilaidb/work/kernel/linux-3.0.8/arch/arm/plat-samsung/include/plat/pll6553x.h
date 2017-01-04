#define PLL6553X_MDIV_MASK	((1 << (23-16)) - 1)
#define PLL6553X_PDIV_MASK	((1 << (13-8)) - 1)
#define PLL6553X_SDIV_MASK	((1 << (2-0)) - 1)
#define PLL6553X_MDIV_SHIFT	(16)
#define PLL6553X_PDIV_SHIFT	(8)
#define PLL6553X_SDIV_SHIFT	(0)
#define PLL6553X_KDIV_MASK	(0xffff)
static inline unsigned long s3c_get_pll6553x(unsigned long baseclk,
u32 pll0, u32 pll1)
