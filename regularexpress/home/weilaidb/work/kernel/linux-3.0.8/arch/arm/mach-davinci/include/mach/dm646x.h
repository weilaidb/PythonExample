#define __ASM_ARCH_DM646X_H
#define DM646X_EMAC_BASE		(0x01C80000)
#define DM646X_EMAC_MDIO_BASE		(DM646X_EMAC_BASE + 0x4000)
#define DM646X_EMAC_CNTRL_OFFSET	(0x0000)
#define DM646X_EMAC_CNTRL_MOD_OFFSET	(0x1000)
#define DM646X_EMAC_CNTRL_RAM_OFFSET	(0x2000)
#define DM646X_EMAC_CNTRL_RAM_SIZE	(0x2000)
#define DM646X_ASYNC_EMIF_CONTROL_BASE	0x20008000
#define DM646X_ASYNC_EMIF_CS2_SPACE_BASE 0x42000000
void __init dm646x_init(void);
void __init dm646x_init_mcasp0(struct snd_platform_data *pdata);
void __init dm646x_init_mcasp1(struct snd_platform_data *pdata);
void __init dm646x_board_setup_refclk(struct clk *clk);
int __init dm646x_init_edma(struct edma_rsv_info *rsv);
void dm646x_video_init(void);
enum vpif_if_type ;
struct vpif_interface ;
struct vpif_subdev_info ;
struct vpif_display_config ;
struct vpif_input ;
#define VPIF_CAPTURE_MAX_CHANNELS	2
struct vpif_capture_chan_config ;
struct vpif_capture_config ;
void dm646x_setup_vpif(struct vpif_display_config *,
struct vpif_capture_config *);
