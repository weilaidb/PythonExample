#define _LINUX_MMC_DW_MMC_H_
#define MAX_MCI_SLOTS	2
enum dw_mci_state ;
enum ;
struct mmc_data;
struct dw_mci ;
struct dw_mci_dma_ops ;
#define DW_MCI_QUIRK_IDMAC_DTO			BIT(0)
#define DW_MCI_QUIRK_RETRY_DELAY		BIT(1)
#define DW_MCI_QUIRK_HIGHSPEED			BIT(2)
#define DW_MCI_QUIRK_BROKEN_CARD_DETECTION	BIT(3)
struct dma_pdata;
struct block_settings ;
struct dw_mci_board ;
