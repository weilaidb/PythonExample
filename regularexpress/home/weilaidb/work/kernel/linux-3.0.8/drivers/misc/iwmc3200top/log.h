#define __LOG_H__
#define LOG_SEV_CRITICAL		0
#define LOG_SEV_ERROR			1
#define LOG_SEV_WARNING			2
#define LOG_SEV_INFO			3
#define LOG_SEV_INFOEX			4
#define LOG_SEV_TRACE			5
#define LOG_SEV_DUMP			6
#define LOG_SEV_FW_FILTER_ALL		\
(BIT(LOG_SEV_CRITICAL)	|	\
BIT(LOG_SEV_ERROR)	|	\
BIT(LOG_SEV_WARNING)	| 	\
BIT(LOG_SEV_INFO)	|	\
BIT(LOG_SEV_INFOEX))
#define LOG_SEV_FILTER_ALL		\
(BIT(LOG_SEV_CRITICAL)	|	\
BIT(LOG_SEV_ERROR)	|	\
BIT(LOG_SEV_WARNING)	| 	\
BIT(LOG_SEV_INFO)	|	\
BIT(LOG_SEV_INFOEX)	|	\
BIT(LOG_SEV_TRACE)	|	\
BIT(LOG_SEV_DUMP))
#define LOG_SRC_INIT			0
#define LOG_SRC_DEBUGFS			1
#define LOG_SRC_FW_DOWNLOAD		2
#define LOG_SRC_FW_MSG			3
#define LOG_SRC_TST			4
#define LOG_SRC_IRQ			5
#define	LOG_SRC_MAX			6
#define	LOG_SRC_ALL			0xFF
#define LOG_SEV_FILTER_RUNTIME			\
(BIT(LOG_SEV_CRITICAL)	|		\
BIT(LOG_SEV_ERROR)	|		\
BIT(LOG_SEV_WARNING))
#define FW_LOG_SEV_FILTER_RUNTIME	LOG_SEV_FILTER_ALL
#define priv2dev(priv) (&(priv->func)->dev)
#define LOG_CRITICAL(priv, src, fmt, args...)				\
do  while (0)
#define LOG_ERROR(priv, src, fmt, args...)				\
do  while (0)
#define LOG_WARNING(priv, src, fmt, args...)				\
do  while (0)
#define LOG_INFO(priv, src, fmt, args...)				\
do  while (0)
#define LOG_TRACE(priv, src, fmt, args...)				\
do  while (0)
#define LOG_HEXDUMP(src, ptr, len)					\
do  while (0)
void iwmct_log_top_message(struct iwmct_priv *priv, u8 *buf, int len);
extern u8 iwmct_logdefs[];
int iwmct_log_set_filter(u8 src, u8 logmask);
int iwmct_log_set_fw_filter(u8 src, u8 logmask);
ssize_t show_iwmct_log_level(struct device *d,
struct device_attribute *attr, char *buf);
ssize_t store_iwmct_log_level(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count);
ssize_t show_iwmct_log_level_fw(struct device *d,
struct device_attribute *attr, char *buf);
ssize_t store_iwmct_log_level_fw(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count);
#define LOG_CRITICAL(priv, src, fmt, args...)
#define LOG_ERROR(priv, src, fmt, args...)
#define LOG_WARNING(priv, src, fmt, args...)
#define LOG_INFO(priv, src, fmt, args...)
#define LOG_TRACE(priv, src, fmt, args...)
#define LOG_HEXDUMP(src, ptr, len)
static inline void iwmct_log_top_message(struct iwmct_priv *priv,
u8 *buf, int len)
static inline int iwmct_log_set_filter(u8 src, u8 logmask)
static inline int iwmct_log_set_fw_filter(u8 src, u8 logmask)
int log_get_filter_str(char *buf, int size);
int log_get_fw_filter_str(char *buf, int size);
