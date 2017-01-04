#define __ASM_ARCH_DM665_H
#define DM365_EMAC_BASE			(0x01D07000)
#define DM365_EMAC_MDIO_BASE		(DM365_EMAC_BASE + 0x4000)
#define DM365_EMAC_CNTRL_OFFSET		(0x0000)
#define DM365_EMAC_CNTRL_MOD_OFFSET	(0x3000)
#define DM365_EMAC_CNTRL_RAM_OFFSET	(0x1000)
#define DM365_EMAC_CNTRL_RAM_SIZE	(0x2000)
#define DM365_KEYSCAN_BASE		(0x01C69400)
#define DM365_RTC_BASE			(0x01C69000)
#define DAVINCI_DM365_VC_BASE		(0x01D0C000)
#define DAVINCI_DMA_VC_TX		2
#define DAVINCI_DMA_VC_RX		3
#define DM365_ASYNC_EMIF_CONTROL_BASE	0x01D10000
#define DM365_ASYNC_EMIF_DATA_CE0_BASE	0x02000000
#define DM365_ASYNC_EMIF_DATA_CE1_BASE	0x04000000
void __init dm365_init(void);
void __init dm365_init_asp(struct snd_platform_data *pdata);
void __init dm365_init_vc(struct snd_platform_data *pdata);
void __init dm365_init_ks(struct davinci_ks_platform_data *pdata);
void __init dm365_init_rtc(void);
void dm365_init_spi0(unsigned chipselect_mask,
struct spi_board_info *info, unsigned len);
void dm365_set_vpfe_config(struct vpfe_config *cfg);
