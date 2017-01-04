#define __PLAT_S3C_SDHCI_H __FILE__
struct platform_device;
struct mmc_host;
struct mmc_card;
struct mmc_ios;
enum cd_types ;
enum clk_types ;
struct s3c_sdhci_platdata ;
extern void s3c_sdhci0_set_platdata(struct s3c_sdhci_platdata *pd);
extern void s3c_sdhci1_set_platdata(struct s3c_sdhci_platdata *pd);
extern void s3c_sdhci2_set_platdata(struct s3c_sdhci_platdata *pd);
extern void s3c_sdhci3_set_platdata(struct s3c_sdhci_platdata *pd);
extern struct s3c_sdhci_platdata s3c_hsmmc0_def_platdata;
extern struct s3c_sdhci_platdata s3c_hsmmc1_def_platdata;
extern struct s3c_sdhci_platdata s3c_hsmmc2_def_platdata;
extern struct s3c_sdhci_platdata s3c_hsmmc3_def_platdata;
extern void s3c2416_setup_sdhci0_cfg_gpio(struct platform_device *, int w);
extern void s3c2416_setup_sdhci1_cfg_gpio(struct platform_device *, int w);
extern void s3c64xx_setup_sdhci0_cfg_gpio(struct platform_device *, int w);
extern void s3c64xx_setup_sdhci1_cfg_gpio(struct platform_device *, int w);
extern void s5pc100_setup_sdhci0_cfg_gpio(struct platform_device *, int w);
extern void s5pc100_setup_sdhci1_cfg_gpio(struct platform_device *, int w);
extern void s5pc100_setup_sdhci2_cfg_gpio(struct platform_device *, int w);
extern void s3c64xx_setup_sdhci2_cfg_gpio(struct platform_device *, int w);
extern void s5pv210_setup_sdhci0_cfg_gpio(struct platform_device *, int w);
extern void s5pv210_setup_sdhci1_cfg_gpio(struct platform_device *, int w);
extern void s5pv210_setup_sdhci2_cfg_gpio(struct platform_device *, int w);
extern void s5pv210_setup_sdhci3_cfg_gpio(struct platform_device *, int w);
extern void exynos4_setup_sdhci0_cfg_gpio(struct platform_device *, int w);
extern void exynos4_setup_sdhci1_cfg_gpio(struct platform_device *, int w);
extern void exynos4_setup_sdhci2_cfg_gpio(struct platform_device *, int w);
extern void exynos4_setup_sdhci3_cfg_gpio(struct platform_device *, int w);
extern char *s3c2416_hsmmc_clksrcs[4];
extern void s3c2416_setup_sdhci_cfg_card(struct platform_device *dev,
void __iomem *r,
struct mmc_ios *ios,
struct mmc_card *card);
static inline void s3c2416_default_sdhci0(void)
static inline void s3c2416_default_sdhci1(void)
static inline void s3c2416_default_sdhci0(void)
static inline void s3c2416_default_sdhci1(void)
extern char *s3c64xx_hsmmc_clksrcs[4];
extern void s3c6400_setup_sdhci_cfg_card(struct platform_device *dev,
void __iomem *r,
struct mmc_ios *ios,
struct mmc_card *card);
static inline void s3c6400_default_sdhci0(void)
static inline void s3c6400_default_sdhci1(void)
static inline void s3c6400_default_sdhci2(void)
extern void s3c6410_setup_sdhci_cfg_card(struct platform_device *dev,
void __iomem *r,
struct mmc_ios *ios,
struct mmc_card *card);
static inline void s3c6410_default_sdhci0(void)
static inline void s3c6410_default_sdhci1(void)
static inline void s3c6410_default_sdhci2(void)
static inline void s3c6410_default_sdhci0(void)
static inline void s3c6410_default_sdhci1(void)
static inline void s3c6410_default_sdhci2(void)
static inline void s3c6400_default_sdhci0(void)
static inline void s3c6400_default_sdhci1(void)
static inline void s3c6400_default_sdhci2(void)
extern char *s5pc100_hsmmc_clksrcs[4];
extern void s5pc100_setup_sdhci0_cfg_card(struct platform_device *dev,
void __iomem *r,
struct mmc_ios *ios,
struct mmc_card *card);
static inline void s5pc100_default_sdhci0(void)
static inline void s5pc100_default_sdhci1(void)
static inline void s5pc100_default_sdhci2(void)
static inline void s5pc100_default_sdhci0(void)
static inline void s5pc100_default_sdhci1(void)
static inline void s5pc100_default_sdhci2(void)
extern char *s5pv210_hsmmc_clksrcs[4];
extern void s5pv210_setup_sdhci_cfg_card(struct platform_device *dev,
void __iomem *r,
struct mmc_ios *ios,
struct mmc_card *card);
static inline void s5pv210_default_sdhci0(void)
static inline void s5pv210_default_sdhci1(void)
static inline void s5pv210_default_sdhci2(void)
static inline void s5pv210_default_sdhci3(void)
static inline void s5pv210_default_sdhci0(void)
static inline void s5pv210_default_sdhci1(void)
static inline void s5pv210_default_sdhci2(void)
static inline void s5pv210_default_sdhci3(void)
extern char *exynos4_hsmmc_clksrcs[4];
extern void exynos4_setup_sdhci_cfg_card(struct platform_device *dev,
void __iomem *r,
struct mmc_ios *ios,
struct mmc_card *card);
static inline void exynos4_default_sdhci0(void)
static inline void exynos4_default_sdhci1(void)
static inline void exynos4_default_sdhci2(void)
static inline void exynos4_default_sdhci3(void)
static inline void exynos4_default_sdhci0(void)
static inline void exynos4_default_sdhci1(void)
static inline void exynos4_default_sdhci2(void)
static inline void exynos4_default_sdhci3(void)
