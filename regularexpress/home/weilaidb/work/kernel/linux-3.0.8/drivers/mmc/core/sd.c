static const unsigned int tran_exp[] = ;
static const unsigned char tran_mant[] = ;
static const unsigned int tacc_exp[] = ;
static const unsigned int tacc_mant[] = ;
#define UNSTUFF_BITS(resp,start,size)					\
()
void mmc_decode_cid(struct mmc_card *card)
static int mmc_decode_csd(struct mmc_card *card)
static int mmc_decode_scr(struct mmc_card *card)
static int mmc_read_ssr(struct mmc_card *card)
static int mmc_read_switch(struct mmc_card *card)
int mmc_sd_switch_hs(struct mmc_card *card)
static int sd_select_driver_type(struct mmc_card *card, u8 *status)
static int sd_set_bus_speed_mode(struct mmc_card *card, u8 *status)
static int sd_set_current_limit(struct mmc_card *card, u8 *status)
static int mmc_sd_init_uhs_card(struct mmc_card *card)
MMC_DEV_ATTR(cid, "%08x%08x%08x%08x\n", card->raw_cid[0], card->raw_cid[1],
card->raw_cid[2], card->raw_cid[3]);
MMC_DEV_ATTR(csd, "%08x%08x%08x%08x\n", card->raw_csd[0], card->raw_csd[1],
card->raw_csd[2], card->raw_csd[3]);
MMC_DEV_ATTR(scr, "%08x%08x\n", card->raw_scr[0], card->raw_scr[1]);
MMC_DEV_ATTR(date, "%02d/%04d\n", card->cid.month, card->cid.year);
MMC_DEV_ATTR(erase_size, "%u\n", card->erase_size << 9);
MMC_DEV_ATTR(preferred_erase_size, "%u\n", card->pref_erase << 9);
MMC_DEV_ATTR(fwrev, "0x%x\n", card->cid.fwrev);
MMC_DEV_ATTR(hwrev, "0x%x\n", card->cid.hwrev);
MMC_DEV_ATTR(manfid, "0x%06x\n", card->cid.manfid);
MMC_DEV_ATTR(name, "%s\n", card->cid.prod_name);
MMC_DEV_ATTR(oemid, "0x%04x\n", card->cid.oemid);
MMC_DEV_ATTR(serial, "0x%08x\n", card->cid.serial);
static struct attribute *sd_std_attrs[] = ;
static struct attribute_group sd_std_attr_group = ;
static const struct attribute_group *sd_attr_groups[] = ;
struct device_type sd_type = ;
int mmc_sd_get_cid(struct mmc_host *host, u32 ocr, u32 *cid, u32 *rocr)
int mmc_sd_get_csd(struct mmc_host *host, struct mmc_card *card)
int mmc_sd_setup_card(struct mmc_host *host, struct mmc_card *card,
bool reinit)
unsigned mmc_sd_get_max_clock(struct mmc_card *card)
void mmc_sd_go_highspeed(struct mmc_card *card)
static int mmc_sd_init_card(struct mmc_host *host, u32 ocr,
struct mmc_card *oldcard)
static void mmc_sd_remove(struct mmc_host *host)
static void mmc_sd_detect(struct mmc_host *host)
static int mmc_sd_suspend(struct mmc_host *host)
static int mmc_sd_resume(struct mmc_host *host)
static int mmc_sd_power_restore(struct mmc_host *host)
static const struct mmc_bus_ops mmc_sd_ops = ;
static const struct mmc_bus_ops mmc_sd_ops_unsafe = ;
static void mmc_sd_attach_bus_ops(struct mmc_host *host)
int mmc_attach_sd(struct mmc_host *host)
