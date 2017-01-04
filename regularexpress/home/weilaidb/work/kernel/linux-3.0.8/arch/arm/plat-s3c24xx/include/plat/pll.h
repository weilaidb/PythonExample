#define S3C24XX_PLLCON_MDIVSHIFT	12
#define S3C24XX_PLLCON_PDIVSHIFT	4
#define S3C24XX_PLLCON_SDIVSHIFT	0
#define S3C24XX_PLLCON_MDIVMASK		((1<<(1+(19-12)))-1)
#define S3C24XX_PLLCON_PDIVMASK		((1<<5)-1)
#define S3C24XX_PLLCON_SDIVMASK		3
static inline unsigned int
s3c24xx_get_pll(unsigned int pllval, unsigned int baseclk)
#define S3C2416_PLL_M_SHIFT	(14)
#define S3C2416_PLL_P_SHIFT	(5)
#define S3C2416_PLL_S_MASK	(7)
#define S3C2416_PLL_M_MASK	((1 << 10) - 1)
#define S3C2416_PLL_P_MASK	(63)
static inline unsigned int
s3c2416_get_pll(unsigned int pllval, unsigned int baseclk)
