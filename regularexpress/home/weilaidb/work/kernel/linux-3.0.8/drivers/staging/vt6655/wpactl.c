#define VIAWGET_WPA_MAX_BUF_SIZE 1024
static const int frequency_list[] = ;
static int          msglevel                =MSG_LEVEL_INFO;
static void wpadev_setup(struct net_device *dev)
static int wpa_init_wpadev(PSDevice pDevice)
static int wpa_release_wpadev(PSDevice pDevice)
int wpa_set_wpadev(PSDevice pDevice, int val)
int wpa_set_keys(PSDevice pDevice, void *ctx, bool fcpfkernel)
static int wpa_set_wpa(PSDevice pDevice,
struct viawget_wpa_param *param)
static int wpa_set_disassociate(PSDevice pDevice,
struct viawget_wpa_param *param)
static int wpa_set_scan(PSDevice pDevice,
struct viawget_wpa_param *param)
static int wpa_get_bssid(PSDevice pDevice,
struct viawget_wpa_param *param)
static int wpa_get_ssid(PSDevice pDevice,
struct viawget_wpa_param *param)
static int wpa_get_scan(PSDevice pDevice,
struct viawget_wpa_param *param)
static int wpa_set_associate(PSDevice pDevice,
struct viawget_wpa_param *param)
int wpa_ioctl(PSDevice pDevice, struct iw_point *p)
