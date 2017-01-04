#define __ASM_ARCH_DM355_H
#define DM355_ASYNC_EMIF_CONTROL_BASE	0x01E10000
#define DM355_ASYNC_EMIF_DATA_CE0_BASE	0x02000000
#define ASP1_TX_EVT_EN	1
#define ASP1_RX_EVT_EN	2
struct spi_board_info;
void __init dm355_init(void);
void dm355_init_spi0(unsigned chipselect_mask,
struct spi_board_info *info, unsigned len);
void __init dm355_init_asp1(u32 evt_enable, struct snd_platform_data *pdata);
void dm355_set_vpfe_config(struct vpfe_config *cfg);
