#define _MMC_CORE_SDIO_BUS_H
struct sdio_func *sdio_alloc_func(struct mmc_card *card);
int sdio_add_func(struct sdio_func *func);
void sdio_remove_func(struct sdio_func *func);
int sdio_register_bus(void);
void sdio_unregister_bus(void);
