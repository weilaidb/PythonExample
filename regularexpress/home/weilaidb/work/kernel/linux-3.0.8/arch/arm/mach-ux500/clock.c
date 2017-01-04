static LIST_HEAD(clk_list);
#define PRCC_PCKEN		0x00
#define PRCC_PCKDIS		0x04
#define PRCC_KCKEN		0x08
#define PRCC_KCKDIS		0x0C
#define PRCM_YYCLKEN0_MGT_SET	0x510
#define PRCM_YYCLKEN1_MGT_SET	0x514
#define PRCM_YYCLKEN0_MGT_CLR	0x518
#define PRCM_YYCLKEN1_MGT_CLR	0x51C
#define PRCM_YYCLKEN0_MGT_VAL	0x520
#define PRCM_YYCLKEN1_MGT_VAL	0x524
#define PRCM_SVAMMDSPCLK_MGT	0x008
#define PRCM_SIAMMDSPCLK_MGT	0x00C
#define PRCM_SGACLK_MGT		0x014
#define PRCM_UARTCLK_MGT	0x018
#define PRCM_MSP02CLK_MGT	0x01C
#define PRCM_MSP1CLK_MGT	0x288
#define PRCM_I2CCLK_MGT		0x020
#define PRCM_SDMMCCLK_MGT	0x024
#define PRCM_SLIMCLK_MGT	0x028
#define PRCM_PER1CLK_MGT	0x02C
#define PRCM_PER2CLK_MGT	0x030
#define PRCM_PER3CLK_MGT	0x034
#define PRCM_PER5CLK_MGT	0x038
#define PRCM_PER6CLK_MGT	0x03C
#define PRCM_PER7CLK_MGT	0x040
#define PRCM_LCDCLK_MGT		0x044
#define PRCM_BMLCLK_MGT		0x04C
#define PRCM_HSITXCLK_MGT	0x050
#define PRCM_HSIRXCLK_MGT	0x054
#define PRCM_HDMICLK_MGT	0x058
#define PRCM_APEATCLK_MGT	0x05C
#define PRCM_APETRACECLK_MGT	0x060
#define PRCM_MCDECLK_MGT	0x064
#define PRCM_IPI2CCLK_MGT	0x068
#define PRCM_DSIALTCLK_MGT	0x06C
#define PRCM_DMACLK_MGT		0x074
#define PRCM_B2R2CLK_MGT	0x078
#define PRCM_TVCLK_MGT		0x07C
#define PRCM_TCR		0x1C8
#define PRCM_TCR_STOPPED	(1 << 16)
#define PRCM_TCR_DOZE_MODE	(1 << 17)
#define PRCM_UNIPROCLK_MGT	0x278
#define PRCM_SSPCLK_MGT		0x280
#define PRCM_RNGCLK_MGT		0x284
#define PRCM_UICCCLK_MGT	0x27C
#define PRCM_MGT_ENABLE		(1 << 8)
static DEFINE_SPINLOCK(clocks_lock);
static void __clk_enable(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
static void __clk_disable(struct clk *clk)
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
static unsigned long clk_mtu_get_rate(struct clk *clk)
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_round_rate);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
static void clk_prcmu_enable(struct clk *clk)
static void clk_prcmu_disable(struct clk *clk)
static void clk_prcmu_ed_enable(struct clk *clk)
static void clk_prcmu_ed_disable(struct clk *clk)
static struct clkops clk_prcmu_ops = ;
static unsigned int clkrst_base[] = ;
static void clk_prcc_enable(struct clk *clk)
static void clk_prcc_disable(struct clk *clk)
static struct clkops clk_prcc_ops = ;
static struct clk clk_32khz = ;
static DEFINE_PRCMU_CLK(svaclk,		0x0, 2, SVAMMDSPCLK);
static DEFINE_PRCMU_CLK(siaclk,		0x0, 3, SIAMMDSPCLK);
static DEFINE_PRCMU_CLK(sgaclk,		0x0, 4, SGACLK);
static DEFINE_PRCMU_CLK_RATE(uartclk,	0x0, 5, UARTCLK, 38400000);
static DEFINE_PRCMU_CLK(msp02clk,	0x0, 6, MSP02CLK);
static DEFINE_PRCMU_CLK(msp1clk,	0x0, 7, MSP1CLK);
static DEFINE_PRCMU_CLK_RATE(i2cclk,	0x0, 8, I2CCLK, 48000000);
static DEFINE_PRCMU_CLK_RATE(sdmmcclk,	0x0, 9, SDMMCCLK, 100000000);
static DEFINE_PRCMU_CLK(slimclk,	0x0, 10, SLIMCLK);
static DEFINE_PRCMU_CLK(per1clk,	0x0, 11, PER1CLK);
static DEFINE_PRCMU_CLK(per2clk,	0x0, 12, PER2CLK);
static DEFINE_PRCMU_CLK(per3clk,	0x0, 13, PER3CLK);
static DEFINE_PRCMU_CLK(per5clk,	0x0, 14, PER5CLK);
static DEFINE_PRCMU_CLK_RATE(per6clk,	0x0, 15, PER6CLK, 133330000);
static DEFINE_PRCMU_CLK_RATE(per7clk,	0x0, 16, PER7CLK, 100000000);
static DEFINE_PRCMU_CLK(lcdclk,		0x0, 17, LCDCLK);
static DEFINE_PRCMU_CLK(bmlclk,		0x0, 18, BMLCLK);
static DEFINE_PRCMU_CLK(hsitxclk,	0x0, 19, HSITXCLK);
static DEFINE_PRCMU_CLK(hsirxclk,	0x0, 20, HSIRXCLK);
static DEFINE_PRCMU_CLK(hdmiclk,	0x0, 21, HDMICLK);
static DEFINE_PRCMU_CLK(apeatclk,	0x0, 22, APEATCLK);
static DEFINE_PRCMU_CLK(apetraceclk,	0x0, 23, APETRACECLK);
static DEFINE_PRCMU_CLK(mcdeclk,	0x0, 24, MCDECLK);
static DEFINE_PRCMU_CLK(ipi2clk,	0x0, 25, IPI2CCLK);
static DEFINE_PRCMU_CLK(dsialtclk,	0x0, 26, DSIALTCLK);
static DEFINE_PRCMU_CLK(dmaclk,		0x0, 27, DMACLK);
static DEFINE_PRCMU_CLK(b2r2clk,	0x0, 28, B2R2CLK);
static DEFINE_PRCMU_CLK(tvclk,		0x0, 29, TVCLK);
static DEFINE_PRCMU_CLK(uniproclk,	0x0, 30, UNIPROCLK);
static DEFINE_PRCMU_CLK_RATE(sspclk,	0x0, 31, SSPCLK, 48000000);
static DEFINE_PRCMU_CLK(rngclk,		0x4, 0, RNGCLK);
static DEFINE_PRCMU_CLK(uiccclk,	0x4, 1, UICCCLK);
static DEFINE_PRCC_CLK(1, i2c4,		10, 9, &clk_i2cclk);
static DEFINE_PRCC_CLK(1, gpio0,	9, -1, NULL);
static DEFINE_PRCC_CLK(1, slimbus0,	8,  8, &clk_slimclk);
static DEFINE_PRCC_CLK(1, spi3_ed,	7,  7, NULL);
static DEFINE_PRCC_CLK(1, spi3_v1,	7, -1, NULL);
static DEFINE_PRCC_CLK(1, i2c2,		6,  6, &clk_i2cclk);
static DEFINE_PRCC_CLK(1, sdi0,		5,  5, &clk_sdmmcclk);
static DEFINE_PRCC_CLK(1, msp1_ed,	4,  4, &clk_msp02clk);
static DEFINE_PRCC_CLK(1, msp1_v1,	4,  4, &clk_msp1clk);
static DEFINE_PRCC_CLK(1, msp0,		3,  3, &clk_msp02clk);
static DEFINE_PRCC_CLK(1, i2c1,		2,  2, &clk_i2cclk);
static DEFINE_PRCC_CLK(1, uart1,	1,  1, &clk_uartclk);
static DEFINE_PRCC_CLK(1, uart0,	0,  0, &clk_uartclk);
static DEFINE_PRCC_CLK(2, gpio1_ed,	12, -1, NULL);
static DEFINE_PRCC_CLK(2, ssitx_ed,	11, -1, NULL);
static DEFINE_PRCC_CLK(2, ssirx_ed,	10, -1, NULL);
static DEFINE_PRCC_CLK(2, spi0_ed,	 9, -1, NULL);
static DEFINE_PRCC_CLK(2, sdi3_ed,	 8,  6, &clk_sdmmcclk);
static DEFINE_PRCC_CLK(2, sdi1_ed,	 7,  5, &clk_sdmmcclk);
static DEFINE_PRCC_CLK(2, msp2_ed,	 6,  4, &clk_msp02clk);
static DEFINE_PRCC_CLK(2, sdi4_ed,	 4,  2, &clk_sdmmcclk);
static DEFINE_PRCC_CLK(2, pwl_ed,	 3,  1, NULL);
static DEFINE_PRCC_CLK(2, spi1_ed,	 2, -1, NULL);
static DEFINE_PRCC_CLK(2, spi2_ed,	 1, -1, NULL);
static DEFINE_PRCC_CLK(2, i2c3_ed,	 0,  0, &clk_i2cclk);
static DEFINE_PRCC_CLK(2, gpio1_v1,	11, -1, NULL);
static DEFINE_PRCC_CLK(2, ssitx_v1,	10,  7, NULL);
static DEFINE_PRCC_CLK(2, ssirx_v1,	 9,  6, NULL);
static DEFINE_PRCC_CLK(2, spi0_v1,	 8, -1, NULL);
static DEFINE_PRCC_CLK(2, sdi3_v1,	 7,  5, &clk_sdmmcclk);
static DEFINE_PRCC_CLK(2, sdi1_v1,	 6,  4, &clk_sdmmcclk);
static DEFINE_PRCC_CLK(2, msp2_v1,	 5,  3, &clk_msp02clk);
static DEFINE_PRCC_CLK(2, sdi4_v1,	 4,  2, &clk_sdmmcclk);
static DEFINE_PRCC_CLK(2, pwl_v1,	 3,  1, NULL);
static DEFINE_PRCC_CLK(2, spi1_v1,	 2, -1, NULL);
static DEFINE_PRCC_CLK(2, spi2_v1,	 1, -1, NULL);
static DEFINE_PRCC_CLK(2, i2c3_v1,	 0,  0, &clk_i2cclk);
static DEFINE_PRCC_CLK(3, gpio2,	8, -1, NULL);
static DEFINE_PRCC_CLK(3, sdi5,		7,  7, &clk_sdmmcclk);
static DEFINE_PRCC_CLK(3, uart2,	6,  6, &clk_uartclk);
static DEFINE_PRCC_CLK(3, ske,		5,  5, &clk_32khz);
static DEFINE_PRCC_CLK(3, sdi2,		4,  4, &clk_sdmmcclk);
static DEFINE_PRCC_CLK(3, i2c0,		3,  3, &clk_i2cclk);
static DEFINE_PRCC_CLK(3, ssp1_ed,	2,  2, &clk_i2cclk);
static DEFINE_PRCC_CLK(3, ssp0_ed,	1,  1, &clk_i2cclk);
static DEFINE_PRCC_CLK(3, ssp1_v1,	2,  2, &clk_sspclk);
static DEFINE_PRCC_CLK(3, ssp0_v1,	1,  1, &clk_sspclk);
static DEFINE_PRCC_CLK(3, fsmc,		0, -1, NULL);
static DEFINE_PRCC_CLK(5, gpio3,	1, -1, NULL);
static DEFINE_PRCC_CLK(5, usb_ed,	0,  0, &clk_i2cclk);
static DEFINE_PRCC_CLK(5, usb_v1,	0,  0, NULL);
static DEFINE_PRCC_CLK_CUSTOM(6, mtu1_v1, 8, -1, NULL, clk_mtu_get_rate, 1);
static DEFINE_PRCC_CLK_CUSTOM(6, mtu0_v1, 7, -1, NULL, clk_mtu_get_rate, 0);
static DEFINE_PRCC_CLK(6, cfgreg_v1,	6,  6, NULL);
static DEFINE_PRCC_CLK(6, dmc_ed,	6,  6, NULL);
static DEFINE_PRCC_CLK(6, hash1,	5, -1, NULL);
static DEFINE_PRCC_CLK(6, unipro_v1,	4,  1, &clk_uniproclk);
static DEFINE_PRCC_CLK(6, cryp1_ed,	4, -1, NULL);
static DEFINE_PRCC_CLK(6, pka,		3, -1, NULL);
static DEFINE_PRCC_CLK(6, hash0,	2, -1, NULL);
static DEFINE_PRCC_CLK(6, cryp0,	1, -1, NULL);
static DEFINE_PRCC_CLK(6, rng_ed,	0,  0, &clk_i2cclk);
static DEFINE_PRCC_CLK(6, rng_v1,	0,  0, &clk_rngclk);
static DEFINE_PRCC_CLK(7, tzpc0_ed,	4, -1, NULL);
static DEFINE_PRCC_CLK_CUSTOM(7, mtu1_ed, 3, -1, NULL, clk_mtu_get_rate, 1);
static DEFINE_PRCC_CLK_CUSTOM(7, mtu0_ed, 2, -1, NULL, clk_mtu_get_rate, 0);
static DEFINE_PRCC_CLK(7, wdg_ed,	1, -1, NULL);
static DEFINE_PRCC_CLK(7, cfgreg_ed,	0, -1, NULL);
static struct clk clk_dummy_apb_pclk = ;
static struct clk_lookup u8500_common_clks[] = ;
static struct clk_lookup u8500_ed_clks[] = ;
static struct clk_lookup u8500_v1_clks[] = ;
static struct dentry *clk_debugfs_root;
void __init clk_debugfs_add_table(struct clk_lookup *cl, size_t num)
static ssize_t usecount_dbg_read(struct file *file, char __user *buf,
size_t size, loff_t *off)
static ssize_t rate_dbg_read(struct file *file, char __user *buf,
size_t size, loff_t *off)
static const struct file_operations usecount_fops = ;
static const struct file_operations set_rate_fops = ;
static struct dentry *clk_debugfs_register_dir(struct clk *c,
struct dentry *p_dentry)
static void clk_debugfs_remove_dir(struct dentry *cdentry)
static int clk_debugfs_register_one(struct clk *c)
static int clk_debugfs_register(struct clk *c)
static int __init clk_debugfs_init(void)
late_initcall(clk_debugfs_init);
int __init clk_init(void)
