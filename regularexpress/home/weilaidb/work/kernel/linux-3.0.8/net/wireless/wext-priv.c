int iw_handler_get_private(struct net_device *		dev,
struct iw_request_info *	info,
union iwreq_data *		wrqu,
char *			extra)
static const char iw_priv_type_size[] = ;
static int get_priv_size(__u16 args)
static int adjust_priv_size(__u16 args, struct iw_point *iwp)
static int get_priv_descr_and_size(struct net_device *dev, unsigned int cmd,
const struct iw_priv_args **descrp)
static int ioctl_private_iw_point(struct iw_point *iwp, unsigned int cmd,
const struct iw_priv_args *descr,
iw_handler handler, struct net_device *dev,
struct iw_request_info *info, int extra_size)
int ioctl_private_call(struct net_device *dev, struct iwreq *iwr,
unsigned int cmd, struct iw_request_info *info,
iw_handler handler)
int compat_private_call(struct net_device *dev, struct iwreq *iwr,
unsigned int cmd, struct iw_request_info *info,
iw_handler handler)
