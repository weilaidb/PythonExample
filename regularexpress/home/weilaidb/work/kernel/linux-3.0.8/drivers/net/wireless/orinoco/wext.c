#define MAX_RID_LEN 1024
static int orinoco_set_key(struct orinoco_private *priv, int index,
enum orinoco_alg alg, const u8 *key, int key_len,
const u8 *seq, int seq_len)
static struct iw_statistics *orinoco_get_wireless_stats(struct net_device *dev)
static int orinoco_ioctl_setwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr,
char *extra)
static int orinoco_ioctl_getwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr,
char *extra)
static int orinoco_ioctl_setiwencode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq,
char *keybuf)
static int orinoco_ioctl_getiwencode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq,
char *keybuf)
static int orinoco_ioctl_setessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq,
char *essidbuf)
static int orinoco_ioctl_getessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq,
char *essidbuf)
static int orinoco_ioctl_setfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *frq,
char *extra)
static int orinoco_ioctl_getfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *frq,
char *extra)
static int orinoco_ioctl_getsens(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *srq,
char *extra)
static int orinoco_ioctl_setsens(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *srq,
char *extra)
static int orinoco_ioctl_setrate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rrq,
char *extra)
static int orinoco_ioctl_getrate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rrq,
char *extra)
static int orinoco_ioctl_setpower(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *prq,
char *extra)
static int orinoco_ioctl_getpower(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *prq,
char *extra)
static int orinoco_ioctl_set_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
static int orinoco_ioctl_get_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
static int orinoco_ioctl_set_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int orinoco_ioctl_get_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int orinoco_ioctl_set_genie(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int orinoco_ioctl_get_genie(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int orinoco_ioctl_set_mlme(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int orinoco_ioctl_reset(struct net_device *dev,
struct iw_request_info *info,
void *wrqu,
char *extra)
static int orinoco_ioctl_setibssport(struct net_device *dev,
struct iw_request_info *info,
void *wrqu,
char *extra)
static int orinoco_ioctl_getibssport(struct net_device *dev,
struct iw_request_info *info,
void *wrqu,
char *extra)
static int orinoco_ioctl_setport3(struct net_device *dev,
struct iw_request_info *info,
void *wrqu,
char *extra)
static int orinoco_ioctl_getport3(struct net_device *dev,
struct iw_request_info *info,
void *wrqu,
char *extra)
static int orinoco_ioctl_setpreamble(struct net_device *dev,
struct iw_request_info *info,
void *wrqu,
char *extra)
static int orinoco_ioctl_getpreamble(struct net_device *dev,
struct iw_request_info *info,
void *wrqu,
char *extra)
static int orinoco_ioctl_getrid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data,
char *extra)
static int orinoco_ioctl_commit(struct net_device *dev,
struct iw_request_info *info,
void *wrqu,
char *extra)
static const struct iw_priv_args orinoco_privtab[] = ;
static const iw_handler	orinoco_handler[] = ;
static const iw_handler	orinoco_private_handler[] = ;
const struct iw_handler_def orinoco_handler_def = ;
