#define __IWM_DEBUG_H__
#define IWM_ERR(p, f, a...) dev_err(iwm_to_dev(p), f, ## a)
#define IWM_WARN(p, f, a...) dev_warn(iwm_to_dev(p), f, ## a)
#define IWM_INFO(p, f, a...) dev_info(iwm_to_dev(p), f, ## a)
#define IWM_CRIT(p, f, a...) dev_crit(iwm_to_dev(p), f, ## a)
#define IWM_DEBUG_MODULE(i, level, module, f, a...)			     \
do  while (0)
#define IWM_HEXDUMP(i, level, module, pref, buf, len)		             \
do  while (0)
#define IWM_DEBUG_MODULE(i, level, module, f, a...)
#define IWM_HEXDUMP(i, level, module, pref, buf, len)
enum iwm_debug_module_id ;
#define IWM_DM_DEFAULT 0
#define IWM_DBG_BOOT(i, l, f, a...) IWM_DEBUG_MODULE(i, l, BOOT, f, ## a)
#define IWM_DBG_FW(i, l, f, a...)   IWM_DEBUG_MODULE(i, l, FW, f, ## a)
#define IWM_DBG_SDIO(i, l, f, a...) IWM_DEBUG_MODULE(i, l, SDIO, f, ## a)
#define IWM_DBG_NTF(i, l, f, a...)  IWM_DEBUG_MODULE(i, l, NTF, f, ## a)
#define IWM_DBG_RX(i, l, f, a...)   IWM_DEBUG_MODULE(i, l, RX, f, ## a)
#define IWM_DBG_TX(i, l, f, a...)   IWM_DEBUG_MODULE(i, l, TX, f, ## a)
#define IWM_DBG_MLME(i, l, f, a...) IWM_DEBUG_MODULE(i, l, MLME, f, ## a)
#define IWM_DBG_CMD(i, l, f, a...)  IWM_DEBUG_MODULE(i, l, CMD, f, ## a)
#define IWM_DBG_WEXT(i, l, f, a...) IWM_DEBUG_MODULE(i, l, WEXT, f, ## a)
enum iwm_debug_level ;
#define IWM_DL_DEFAULT IWM_DL_ERR
struct iwm_debugfs ;
void iwm_debugfs_init(struct iwm_priv *iwm);
void iwm_debugfs_exit(struct iwm_priv *iwm);
static inline void iwm_debugfs_init(struct iwm_priv *iwm)
static inline void iwm_debugfs_exit(struct iwm_priv *iwm)
