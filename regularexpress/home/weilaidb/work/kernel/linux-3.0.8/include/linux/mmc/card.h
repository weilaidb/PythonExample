#define LINUX_MMC_CARD_H
struct mmc_cid ;
struct mmc_csd ;
struct mmc_ext_csd ;
struct sd_scr ;
struct sd_ssr ;
struct sd_switch_caps ;
struct sdio_cccr ;
struct sdio_cis ;
struct mmc_host;
struct sdio_func;
struct sdio_func_tuple;
#define SDIO_MAX_FUNCS		7
struct mmc_card ;
struct mmc_fixup ;
#define CID_MANFID_ANY (-1u)
#define CID_OEMID_ANY ((unsigned short) -1)
#define CID_NAME_ANY (NULL)
#define END_FIXUP
#define _FIXUP_EXT(_name, _manfid, _oemid, _rev_start, _rev_end,	\
_cis_vendor, _cis_device,				\
_fixup, _data)					\
#define MMC_FIXUP_REV(_name, _manfid, _oemid, _rev_start, _rev_end,	\
_fixup, _data)					\
_FIXUP_EXT(_name, _manfid,					\
_oemid, _rev_start, _rev_end,			\
SDIO_ANY_ID, SDIO_ANY_ID,				\
_fixup, _data)					\
#define MMC_FIXUP(_name, _manfid, _oemid, _fixup, _data) \
MMC_FIXUP_REV(_name, _manfid, _oemid, 0, -1ull, _fixup, _data)
#define SDIO_FIXUP(_vendor, _device, _fixup, _data)			\
_FIXUP_EXT(CID_NAME_ANY, CID_MANFID_ANY,			\
CID_OEMID_ANY, 0, -1ull,				\
_vendor, _device,					\
_fixup, _data)					\
#define cid_rev(hwrev, fwrev, year, month)	\
(((u64) hwrev) << 40 |                  \
((u64) fwrev) << 32 |                  \
((u64) year) << 16 |                   \
((u64) month))
#define cid_rev_card(card)		  \
cid_rev(card->cid.hwrev,	  \
card->cid.fwrev,      \
card->cid.year,	  \
card->cid.month)
static inline void __maybe_unused add_quirk(struct mmc_card *card, int data)
static inline void __maybe_unused remove_quirk(struct mmc_card *card, int data)
#define mmc_card_mmc(c)		((c)->type == MMC_TYPE_MMC)
#define mmc_card_sd(c)		((c)->type == MMC_TYPE_SD)
#define mmc_card_sdio(c)	((c)->type == MMC_TYPE_SDIO)
#define mmc_card_present(c)	((c)->state & MMC_STATE_PRESENT)
#define mmc_card_readonly(c)	((c)->state & MMC_STATE_READONLY)
#define mmc_card_highspeed(c)	((c)->state & MMC_STATE_HIGHSPEED)
#define mmc_card_blockaddr(c)	((c)->state & MMC_STATE_BLOCKADDR)
#define mmc_card_ddr_mode(c)	((c)->state & MMC_STATE_HIGHSPEED_DDR)
#define mmc_sd_card_uhs(c) ((c)->state & MMC_STATE_ULTRAHIGHSPEED)
#define mmc_card_ext_capacity(c) ((c)->state & MMC_CARD_SDXC)
#define mmc_card_set_present(c)	((c)->state |= MMC_STATE_PRESENT)
#define mmc_card_set_readonly(c) ((c)->state |= MMC_STATE_READONLY)
#define mmc_card_set_highspeed(c) ((c)->state |= MMC_STATE_HIGHSPEED)
#define mmc_card_set_blockaddr(c) ((c)->state |= MMC_STATE_BLOCKADDR)
#define mmc_card_set_ddr_mode(c) ((c)->state |= MMC_STATE_HIGHSPEED_DDR)
#define mmc_sd_card_set_uhs(c) ((c)->state |= MMC_STATE_ULTRAHIGHSPEED)
#define mmc_card_set_ext_capacity(c) ((c)->state |= MMC_CARD_SDXC)
static inline void __maybe_unused add_quirk_mmc(struct mmc_card *card, int data)
static inline void __maybe_unused remove_quirk_mmc(struct mmc_card *card,
int data)
static inline void __maybe_unused add_quirk_sd(struct mmc_card *card, int data)
static inline void __maybe_unused remove_quirk_sd(struct mmc_card *card,
int data)
static inline int mmc_card_lenient_fn0(const struct mmc_card *c)
static inline int mmc_blksz_for_byte_mode(const struct mmc_card *c)
static inline int mmc_card_disable_cd(const struct mmc_card *c)
static inline int mmc_card_nonstd_func_interface(const struct mmc_card *c)
#define mmc_card_name(c)	((c)->cid.prod_name)
#define mmc_card_id(c)		(dev_name(&(c)->dev))
#define mmc_dev_to_card(d)	container_of(d, struct mmc_card, dev)
#define mmc_list_to_card(l)	container_of(l, struct mmc_card, node)
#define mmc_get_drvdata(c)	dev_get_drvdata(&(c)->dev)
#define mmc_set_drvdata(c,d)	dev_set_drvdata(&(c)->dev, d)
struct mmc_driver ;
extern int mmc_register_driver(struct mmc_driver *);
extern void mmc_unregister_driver(struct mmc_driver *);
extern void mmc_fixup_device(struct mmc_card *card,
const struct mmc_fixup *table);
