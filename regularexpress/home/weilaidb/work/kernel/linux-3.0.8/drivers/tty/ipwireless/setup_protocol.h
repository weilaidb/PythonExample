#define _IPWIRELESS_CS_SETUP_PROTOCOL_H_
#define TL_SETUP_VERSION		1
#define TL_SETUP_VERSION_QRY_TMO	1000
#define TL_SETUP_MAX_VERSION_QRY	30
#define TL_SETUP_SIGNO_GET_VERSION_QRY	10
#define TL_SETUP_SIGNO_GET_VERSION_RSP	11
#define TL_SETUP_SIGNO_CONFIG_MSG	12
#define TL_SETUP_SIGNO_CONFIG_DONE_MSG	13
#define TL_SETUP_SIGNO_OPEN_MSG		14
#define TL_SETUP_SIGNO_CLOSE_MSG	15
#define TL_SETUP_SIGNO_INFO_MSG     20
#define TL_SETUP_SIGNO_INFO_MSG_ACK 21
#define TL_SETUP_SIGNO_REBOOT_MSG      22
#define TL_SETUP_SIGNO_REBOOT_MSG_ACK  23
struct tl_setup_get_version_qry  __attribute__ ((__packed__));
struct tl_setup_get_version_rsp  __attribute__ ((__packed__));
struct tl_setup_config_msg  __attribute__ ((__packed__));
struct tl_setup_config_done_msg  __attribute__ ((__packed__));
struct tl_setup_open_msg  __attribute__ ((__packed__));
struct tl_setup_close_msg  __attribute__ ((__packed__));
#define COMM_DRIVER     0
#define NDISWAN_DRIVER  1
#define NDISWAN_DRIVER_MAJOR_VERSION  2
#define NDISWAN_DRIVER_MINOR_VERSION  0
struct tl_setup_info_msg  __attribute__ ((__packed__));
struct tl_setup_info_msgAck  __attribute__ ((__packed__));
struct TlSetupRebootMsgAck  __attribute__ ((__packed__));
union ipw_setup_rx_msg  __attribute__ ((__packed__));
