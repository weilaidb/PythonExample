static const unsigned int tran_exp[] = ;
static const unsigned char tran_mant[] = ;
static const unsigned int tacc_exp[] = ;
static const unsigned int tacc_mant[] = ;
#define UNSTUFF_BITS(resp,start,size)					\
()
static int mmc_decode_cid(struct mmc_card *card)
static void mmc_set_erase_size(struct mmc_card *card)
static int mmc_decode_csd(struct mmc_card *card)
static int mmc_get_ext_csd(struct mmc_card *card, u8 **new_ext_csd)
static int mmc_read_ext_csd(struct mmc_card *card, u8 *ext_csd)
static inline void mmc_free_ext_csd(u8 *ext_csd)
static int mmc_compare_ext_csds(struct mmc_card *card, unsigned bus_width)
MMC_DEV_ATTR(cid, "%08x%08x%08x%08x\n", card->raw_cid[0], card->raw_cid[1],
card->raw_cid[2], card->raw_cid[3]);
MMC_DEV_ATTR(csd, "%08x%08x%08x%08x\n", card->raw_csd[0], card->raw_csd[1],
card->raw_csd[2], card->raw_csd[3]);
MMC_DEV_ATTR(date, "%02d/%04d\n", card->cid.month, card->cid.year);
MMC_DEV_ATTR(erase_size, "%u\n", card->erase_size << 9);
MMC_DEV_ATTR(preferred_erase_size, "%u\n", card->pref_erase << 9);
MMC_DEV_ATTR(fwrev, "0x%x\n", card->cid.fwrev);
MMC_DEV_ATTR(hwrev, "0x%x\n", card->cid.hwrev);
MMC_DEV_ATTR(manfid, "0x%06x\n", card->cid.manfid);
MMC_DEV_ATTR(name, "%s\n", card->cid.prod_name);
MMC_DEV_ATTR(oemid, "0x%04x\n", card->cid.oemid);
MMC_DEV_ATTR(serial, "0x%08x\n", card->cid.serial);
MMC_DEV_ATTR(enhanced_area_offset, "%llu\n",
card->ext_csd.enhanced_area_offset);
MMC_DEV_ATTR(enhanced_area_size, "%u\n", card->ext_csd.enhanced_area_size);
static struct attribute *mmc_std_attrs[] = ;
static struct attribute_group mmc_std_attr_group = ;
static const struct attribute_group *mmc_attr_groups[] = ;
static struct device_type mmc_type = ;
static int mmc_init_card(struct mmc_host *host, u32 ocr,
struct mmc_card *oldcard)
static void mmc_remove(struct mmc_host *host)
static void mmc_detect(struct mmc_host *host)
static int mmc_suspend(struct mmc_host *host)
static int mmc_resume(struct mmc_host *host)
static int mmc_power_restore(struct mmc_host *host)
static int mmc_sleep(struct mmc_host *host)
static int mmc_awake(struct mmc_host *host)
static const struct mmc_bus_ops mmc_ops = ;
static const struct mmc_bus_ops mmc_ops_unsafe = ;
static void mmc_attach_bus_ops(struct mmc_host *host)
int mmc_attach_mmc(struct mmc_host *host)
