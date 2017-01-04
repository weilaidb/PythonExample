static int _mmc_select_card(struct mmc_host *host, struct mmc_card *card)
int mmc_select_card(struct mmc_card *card)
int mmc_deselect_cards(struct mmc_host *host)
int mmc_card_sleepawake(struct mmc_host *host, int sleep)
int mmc_go_idle(struct mmc_host *host)
int mmc_send_op_cond(struct mmc_host *host, u32 ocr, u32 *rocr)
int mmc_all_send_cid(struct mmc_host *host, u32 *cid)
int mmc_set_relative_addr(struct mmc_card *card)
static int
mmc_send_cxd_native(struct mmc_host *host, u32 arg, u32 *cxd, int opcode)
static int
mmc_send_cxd_data(struct mmc_card *card, struct mmc_host *host,
u32 opcode, void *buf, unsigned len)
int mmc_send_csd(struct mmc_card *card, u32 *csd)
int mmc_send_cid(struct mmc_host *host, u32 *cid)
int mmc_send_ext_csd(struct mmc_card *card, u8 *ext_csd)
int mmc_spi_read_ocr(struct mmc_host *host, int highcap, u32 *ocrp)
int mmc_spi_set_crc(struct mmc_host *host, int use_crc)
int mmc_switch(struct mmc_card *card, u8 set, u8 index, u8 value,
unsigned int timeout_ms)
EXPORT_SYMBOL_GPL(mmc_switch);
int mmc_send_status(struct mmc_card *card, u32 *status)
static int
mmc_send_bus_test(struct mmc_card *card, struct mmc_host *host, u8 opcode,
u8 len)
int mmc_bus_test(struct mmc_card *card, u8 bus_width)
