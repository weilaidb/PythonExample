#define TEXT_END	0x1A
struct fw_info ;
static const struct fw_info orinoco_fw[] = ;
MODULE_FIRMWARE("agere_sta_fw.bin");
MODULE_FIRMWARE("agere_ap_fw.bin");
MODULE_FIRMWARE("prism_sta_fw.bin");
MODULE_FIRMWARE("prism_ap_fw.bin");
MODULE_FIRMWARE("symbol_sp24t_prim_fw");
MODULE_FIRMWARE("symbol_sp24t_sec_fw");
struct orinoco_fw_header  __packed;
static const char *validate_fw(const struct orinoco_fw_header *hdr, size_t len)
#if defined(CONFIG_HERMES_CACHE_FW_ON_INIT) || defined(CONFIG_PM_SLEEP)
static inline const struct firmware *
orinoco_cached_fw_get(struct orinoco_private *priv, bool primary)
#define orinoco_cached_fw_get(priv, primary) (NULL)
static int
orinoco_dl_firmware(struct orinoco_private *priv,
const struct fw_info *fw,
int ap)
static int
symbol_dl_image(struct orinoco_private *priv, const struct fw_info *fw,
const unsigned char *image, const void *end,
int secondary)
static int
symbol_dl_firmware(struct orinoco_private *priv,
const struct fw_info *fw)
int orinoco_download(struct orinoco_private *priv)
#if defined(CONFIG_HERMES_CACHE_FW_ON_INIT) || defined(CONFIG_PM_SLEEP)
void orinoco_cache_fw(struct orinoco_private *priv, int ap)
void orinoco_uncache_fw(struct orinoco_private *priv)
