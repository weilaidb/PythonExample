int mmc_app_cmd(struct mmc_host *host, struct mmc_card *card)
EXPORT_SYMBOL_GPL(mmc_app_cmd);
int mmc_wait_for_app_cmd(struct mmc_host *host, struct mmc_card *card,
struct mmc_command *cmd, int retries)
EXPORT_SYMBOL(mmc_wait_for_app_cmd);
int mmc_app_set_bus_width(struct mmc_card *card, int width)
int mmc_send_app_op_cond(struct mmc_host *host, u32 ocr, u32 *rocr)
int mmc_send_if_cond(struct mmc_host *host, u32 ocr)
int mmc_send_relative_addr(struct mmc_host *host, unsigned int *rca)
int mmc_app_send_scr(struct mmc_card *card, u32 *scr)
int mmc_sd_switch(struct mmc_card *card, int mode, int group,
u8 value, u8 *resp)
int mmc_app_sd_status(struct mmc_card *card, void *ssr)
