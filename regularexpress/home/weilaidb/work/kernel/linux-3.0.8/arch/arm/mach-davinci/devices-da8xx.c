#define DA8XX_TPCC_BASE			0x01c00000
#define DA8XX_TPTC0_BASE		0x01c08000
#define DA8XX_TPTC1_BASE		0x01c08400
#define DA8XX_WDOG_BASE			0x01c21000
#define DA8XX_I2C0_BASE			0x01c22000
#define DA8XX_RTC_BASE			0x01c23000
#define DA8XX_MMCSD0_BASE		0x01c40000
#define DA8XX_SPI0_BASE			0x01c41000
#define DA830_SPI1_BASE			0x01e12000
#define DA8XX_LCD_CNTRL_BASE		0x01e13000
#define DA850_MMCSD1_BASE		0x01e1b000
#define DA8XX_EMAC_CPPI_PORT_BASE	0x01e20000
#define DA8XX_EMAC_CPGMACSS_BASE	0x01e22000
#define DA8XX_EMAC_CPGMAC_BASE		0x01e23000
#define DA8XX_EMAC_MDIO_BASE		0x01e24000
#define DA8XX_I2C1_BASE			0x01e28000
#define DA850_TPCC1_BASE		0x01e30000
#define DA850_TPTC2_BASE		0x01e38000
#define DA850_SPI1_BASE			0x01f0e000
#define DA8XX_DDR2_CTL_BASE		0xb0000000
#define DA8XX_EMAC_CTRL_REG_OFFSET	0x3000
#define DA8XX_EMAC_MOD_REG_OFFSET	0x2000
#define DA8XX_EMAC_RAM_OFFSET		0x0000
#define DA8XX_EMAC_CTRL_RAM_SIZE	SZ_8K
#define DA8XX_DMA_SPI0_RX	EDMA_CTLR_CHAN(0, 14)
#define DA8XX_DMA_SPI0_TX	EDMA_CTLR_CHAN(0, 15)
#define DA8XX_DMA_MMCSD0_RX	EDMA_CTLR_CHAN(0, 16)
#define DA8XX_DMA_MMCSD0_TX	EDMA_CTLR_CHAN(0, 17)
#define DA8XX_DMA_SPI1_RX	EDMA_CTLR_CHAN(0, 18)
#define DA8XX_DMA_SPI1_TX	EDMA_CTLR_CHAN(0, 19)
#define DA850_DMA_MMCSD1_RX	EDMA_CTLR_CHAN(1, 28)
#define DA850_DMA_MMCSD1_TX	EDMA_CTLR_CHAN(1, 29)
void __iomem *da8xx_syscfg0_base;
void __iomem *da8xx_syscfg1_base;
static struct plat_serial8250_port da8xx_serial_pdata[] = ;
struct platform_device da8xx_serial_device = ;
static const s8 da8xx_queue_tc_mapping[][2] = ;
static const s8 da8xx_queue_priority_mapping[][2] = ;
static const s8 da850_queue_tc_mapping[][2] = ;
static const s8 da850_queue_priority_mapping[][2] = ;
static struct edma_soc_info da830_edma_cc0_info = ;
static struct edma_soc_info *da830_edma_info[EDMA_MAX_CC] = ;
static struct edma_soc_info da850_edma_cc_info[] = ;
static struct edma_soc_info *da850_edma_info[EDMA_MAX_CC] = ;
static struct resource da830_edma_resources[] = ;
static struct resource da850_edma_resources[] = ;
static struct platform_device da830_edma_device = ;
static struct platform_device da850_edma_device = ;
int __init da830_register_edma(struct edma_rsv_info *rsv)
int __init da850_register_edma(struct edma_rsv_info *rsv[2])
static struct resource da8xx_i2c_resources0[] = ;
static struct platform_device da8xx_i2c_device0 = ;
static struct resource da8xx_i2c_resources1[] = ;
static struct platform_device da8xx_i2c_device1 = ;
int __init da8xx_register_i2c(int instance,
struct davinci_i2c_platform_data *pdata)
static struct resource da8xx_watchdog_resources[] = ;
struct platform_device da8xx_wdt_device = ;
int __init da8xx_register_watchdog(void)
static struct resource da8xx_emac_resources[] = ;
struct emac_platform_data da8xx_emac_pdata = ;
static struct platform_device da8xx_emac_device = ;
static struct resource da8xx_mdio_resources[] = ;
static struct platform_device da8xx_mdio_device = ;
int __init da8xx_register_emac(void)
static struct resource da830_mcasp1_resources[] = ;
static struct platform_device da830_mcasp1_device = ;
static struct resource da850_mcasp_resources[] = ;
static struct platform_device da850_mcasp_device = ;
static struct platform_device davinci_pcm_device = ;
void __init da8xx_register_mcasp(int id, struct snd_platform_data *pdata)
static const struct display_panel disp_panel = ;
static struct lcd_ctrl_config lcd_cfg = ;
struct da8xx_lcdc_platform_data sharp_lcd035q3dg01_pdata = ;
struct da8xx_lcdc_platform_data sharp_lk043t1dg01_pdata = ;
static struct resource da8xx_lcdc_resources[] = ;
static struct platform_device da8xx_lcdc_device = ;
int __init da8xx_register_lcdc(struct da8xx_lcdc_platform_data *pdata)
static struct resource da8xx_mmcsd0_resources[] = ;
static struct platform_device da8xx_mmcsd0_device = ;
int __init da8xx_register_mmcsd0(struct davinci_mmc_config *config)
static struct resource da850_mmcsd1_resources[] = ;
static struct platform_device da850_mmcsd1_device = ;
int __init da850_register_mmcsd1(struct davinci_mmc_config *config)
static struct resource da8xx_rtc_resources[] = ;
static struct platform_device da8xx_rtc_device = ;
int da8xx_register_rtc(void)
static void __iomem *da8xx_ddr2_ctlr_base;
void __iomem * __init da8xx_get_mem_ctlr(void)
static struct resource da8xx_cpuidle_resources[] = ;
static struct davinci_cpuidle_config da8xx_cpuidle_pdata = ;
static struct platform_device da8xx_cpuidle_device = ;
int __init da8xx_register_cpuidle(void)
static struct resource da8xx_spi0_resources[] = ;
static struct resource da8xx_spi1_resources[] = ;
struct davinci_spi_platform_data da8xx_spi_pdata[] = ;
static struct platform_device da8xx_spi_device[] = ;
int __init da8xx_register_spi(int instance, struct spi_board_info *info,
unsigned len)
