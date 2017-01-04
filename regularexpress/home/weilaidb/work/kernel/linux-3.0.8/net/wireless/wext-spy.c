static inline struct iw_spy_data *get_spydata(struct net_device *dev)
int iw_handler_set_spy(struct net_device *	dev,
struct iw_request_info *	info,
union iwreq_data *	wrqu,
char *			extra)
EXPORT_SYMBOL(iw_handler_set_spy);
int iw_handler_get_spy(struct net_device *	dev,
struct iw_request_info *	info,
union iwreq_data *	wrqu,
char *			extra)
EXPORT_SYMBOL(iw_handler_get_spy);
int iw_handler_set_thrspy(struct net_device *	dev,
struct iw_request_info *info,
union iwreq_data *	wrqu,
char *		extra)
EXPORT_SYMBOL(iw_handler_set_thrspy);
int iw_handler_get_thrspy(struct net_device *	dev,
struct iw_request_info *info,
union iwreq_data *	wrqu,
char *		extra)
EXPORT_SYMBOL(iw_handler_get_thrspy);
static void iw_send_thrspy_event(struct net_device *	dev,
struct iw_spy_data *	spydata,
unsigned char *	address,
struct iw_quality *	wstats)
void wireless_spy_update(struct net_device *	dev,
unsigned char *	address,
struct iw_quality *	wstats)
EXPORT_SYMBOL(wireless_spy_update);
