#define VIAWGET_HOSTAPD_MAX_BUF_SIZE 1024
#define HOSTAP_CRYPT_FLAG_SET_TX_KEY BIT0
#define HOSTAP_CRYPT_FLAG_PERMANENT BIT1
#define HOSTAP_CRYPT_ERR_UNKNOWN_ALG 2
#define HOSTAP_CRYPT_ERR_UNKNOWN_ADDR 3
#define HOSTAP_CRYPT_ERR_CRYPT_INIT_FAILED 4
#define HOSTAP_CRYPT_ERR_KEY_SET_FAILED 5
#define HOSTAP_CRYPT_ERR_TX_KEY_SET_FAILED 6
#define HOSTAP_CRYPT_ERR_CARD_CONF_FAILED 7
static int          msglevel                =MSG_LEVEL_INFO;
static int hostap_enable_hostapd(PSDevice pDevice, int rtnl_locked)
static int hostap_disable_hostapd(PSDevice pDevice, int rtnl_locked)
int vt6656_hostap_set_hostapd(PSDevice pDevice, int val, int rtnl_locked)
static int hostap_remove_sta(PSDevice pDevice,
struct viawget_hostapd_param *param)
static int hostap_add_sta(PSDevice pDevice,
struct viawget_hostapd_param *param)
static int hostap_get_info_sta(PSDevice pDevice,
struct viawget_hostapd_param *param)
static int hostap_set_flags_sta(PSDevice pDevice,
struct viawget_hostapd_param *param)
static int hostap_set_generic_element(PSDevice pDevice,
struct viawget_hostapd_param *param)
static void hostap_flush_sta(PSDevice pDevice)
static int hostap_set_encryption(PSDevice pDevice,
struct viawget_hostapd_param *param,
int param_len)
static int hostap_get_encryption(PSDevice pDevice,
struct viawget_hostapd_param *param,
int param_len)
int vt6656_hostap_ioctl(PSDevice pDevice, struct iw_point *p)
