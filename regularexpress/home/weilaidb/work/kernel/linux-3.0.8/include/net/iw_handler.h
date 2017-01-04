#define _IW_HANDLER_H
#define IW_HANDLER_VERSION	8
#define IW_WIRELESS_SPY
#define IW_WIRELESS_THRSPY
#define EIWCOMMIT	EINPROGRESS
#define IW_REQUEST_FLAG_COMPAT	0x0001
#define IW_HEADER_TYPE_NULL	0
#define IW_HEADER_TYPE_CHAR	2
#define IW_HEADER_TYPE_UINT	4
#define IW_HEADER_TYPE_FREQ	5
#define IW_HEADER_TYPE_ADDR	6
#define IW_HEADER_TYPE_POINT	8
#define IW_HEADER_TYPE_PARAM	9
#define IW_HEADER_TYPE_QUAL	10
#define IW_DESCR_FLAG_NONE	0x0000
#define IW_DESCR_FLAG_DUMP	0x0001
#define IW_DESCR_FLAG_EVENT	0x0002
#define IW_DESCR_FLAG_RESTRICT	0x0004
#define IW_DESCR_FLAG_NOMAX	0x0008
#define IW_DESCR_FLAG_WAIT	0x0100
struct iw_request_info ;
struct net_device;
typedef int (*iw_handler)(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
struct iw_handler_def ;
struct iw_ioctl_description ;
struct iw_spy_data ;
struct libipw_device;
struct iw_public_data ;
extern int dev_get_wireless_info(char * buffer, char **start, off_t offset,
int length);
extern void wireless_send_event(struct net_device *	dev,
unsigned int		cmd,
union iwreq_data *	wrqu,
const char *		extra);
extern int iw_handler_set_spy(struct net_device *	dev,
struct iw_request_info *	info,
union iwreq_data *	wrqu,
char *			extra);
extern int iw_handler_get_spy(struct net_device *	dev,
struct iw_request_info *	info,
union iwreq_data *	wrqu,
char *			extra);
extern int iw_handler_set_thrspy(struct net_device *	dev,
struct iw_request_info *info,
union iwreq_data *	wrqu,
char *			extra);
extern int iw_handler_get_thrspy(struct net_device *	dev,
struct iw_request_info *info,
union iwreq_data *	wrqu,
char *			extra);
extern void wireless_spy_update(struct net_device *	dev,
unsigned char *		address,
struct iw_quality *	wstats);
static inline int iwe_stream_lcp_len(struct iw_request_info *info)
static inline int iwe_stream_point_len(struct iw_request_info *info)
static inline int iwe_stream_event_len_adjust(struct iw_request_info *info,
int event_len)
static inline char *
iwe_stream_add_event(struct iw_request_info *info, char *stream, char *ends,
struct iw_event *iwe, int event_len)
static inline char *
iwe_stream_add_point(struct iw_request_info *info, char *stream, char *ends,
struct iw_event *iwe, char *extra)
static inline char *
iwe_stream_add_value(struct iw_request_info *info, char *event, char *value,
char *ends, struct iw_event *iwe, int event_len)
