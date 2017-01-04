#define LOG_MSG_SIZE_MAX		12400
u8 iwmct_logdefs[LOG_SRC_MAX];
static u8 iwmct_fw_logdefs[FW_LOG_SRC_MAX];
static int _log_set_log_filter(u8 *logdefs, int size, u8 src, u8 logmask)
int iwmct_log_set_filter(u8 src, u8 logmask)
int iwmct_log_set_fw_filter(u8 src, u8 logmask)
static int log_msg_format_hex(char *str, int slen, u8 *ibuf,
int ilen, char *pref)
void iwmct_log_top_message(struct iwmct_priv *priv, u8 *buf, int len)
static int _log_get_filter_str(u8 *logdefs, int logdefsz, char *buf, int size)
int log_get_filter_str(char *buf, int size)
int log_get_fw_filter_str(char *buf, int size)
#define HEXADECIMAL_RADIX	16
#define LOG_SRC_FORMAT		7
ssize_t show_iwmct_log_level(struct device *d,
struct device_attribute *attr, char *buf)
ssize_t store_iwmct_log_level(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
ssize_t show_iwmct_log_level_fw(struct device *d,
struct device_attribute *attr, char *buf)
ssize_t store_iwmct_log_level_fw(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
