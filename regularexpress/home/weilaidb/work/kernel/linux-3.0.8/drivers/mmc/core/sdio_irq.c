static int process_sdio_pending_irqs(struct mmc_card *card)
static int sdio_irq_thread(void *_host)
static int sdio_card_irq_get(struct mmc_card *card)
static int sdio_card_irq_put(struct mmc_card *card)
static void sdio_single_irq_set(struct mmc_card *card)
int sdio_claim_irq(struct sdio_func *func, sdio_irq_handler_t *handler)
EXPORT_SYMBOL_GPL(sdio_claim_irq);
int sdio_release_irq(struct sdio_func *func)
EXPORT_SYMBOL_GPL(sdio_release_irq);
