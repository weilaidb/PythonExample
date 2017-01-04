static const char *libipw_modes[] = ;
static inline unsigned int elapsed_jiffies_msecs(unsigned long start)
#define MAX_CUSTOM_LEN 64
static char *libipw_translate_scan(struct libipw_device *ieee,
char *start, char *stop,
struct libipw_network *network,
struct iw_request_info *info)
#define SCAN_ITEM_SIZE 128
int libipw_wx_get_scan(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int libipw_wx_set_encode(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *keybuf)
int libipw_wx_get_encode(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *keybuf)
int libipw_wx_set_encodeext(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int libipw_wx_get_encodeext(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
EXPORT_SYMBOL(libipw_wx_set_encodeext);
EXPORT_SYMBOL(libipw_wx_get_encodeext);
EXPORT_SYMBOL(libipw_wx_get_scan);
EXPORT_SYMBOL(libipw_wx_set_encode);
EXPORT_SYMBOL(libipw_wx_get_encode);
