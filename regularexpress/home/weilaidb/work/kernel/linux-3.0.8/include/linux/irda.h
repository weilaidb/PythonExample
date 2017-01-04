#define KERNEL_IRDA_H
#define HINT_PNP         0x01
#define HINT_PDA         0x02
#define HINT_COMPUTER    0x04
#define HINT_PRINTER     0x08
#define HINT_MODEM       0x10
#define HINT_FAX         0x20
#define HINT_LAN         0x40
#define HINT_EXTENSION   0x80
#define HINT_TELEPHONY   0x01
#define HINT_FILE_SERVER 0x02
#define HINT_COMM        0x04
#define HINT_MESSAGE     0x08
#define HINT_HTTP        0x10
#define HINT_OBEX        0x20
#define CS_ASCII         0x00
#define	CS_ISO_8859_1    0x01
#define	CS_ISO_8859_2    0x02
#define	CS_ISO_8859_3    0x03
#define	CS_ISO_8859_4    0x04
#define	CS_ISO_8859_5    0x05
#define	CS_ISO_8859_6    0x06
#define	CS_ISO_8859_7    0x07
#define	CS_ISO_8859_8    0x08
#define	CS_ISO_8859_9    0x09
#define CS_UNICODE       0xff
typedef enum  IRDA_DONGLE;
enum ;
#define SOL_IRLMP      266
#define SOL_IRTTP      266
#define IRLMP_ENUMDEVICES        1
#define IRLMP_IAS_SET            2
#define IRLMP_IAS_QUERY          3
#define IRLMP_HINTS_SET          4
#define IRLMP_QOS_SET            5
#define IRLMP_QOS_GET            6
#define IRLMP_MAX_SDU_SIZE       7
#define IRLMP_IAS_GET            8
#define IRLMP_IAS_DEL		 9
#define IRLMP_HINT_MASK_SET	10
#define IRLMP_WAITDEVICE	11
#define IRTTP_MAX_SDU_SIZE IRLMP_MAX_SDU_SIZE
#define IAS_MAX_STRING         256
#define IAS_MAX_OCTET_STRING  1024
#define IAS_MAX_CLASSNAME       60
#define IAS_MAX_ATTRIBNAME      60
#define IAS_MAX_ATTRIBNUMBER   256
#define IAS_EXPORT_CLASSNAME       64
#define IAS_EXPORT_ATTRIBNAME     256
#define IAS_MISSING 0
#define IAS_INTEGER 1
#define IAS_OCT_SEQ 2
#define IAS_STRING  3
#define LSAP_ANY              0xff
struct sockaddr_irda ;
struct irda_device_info ;
struct irda_device_list ;
struct irda_ias_set ;
#define SIOCSDONGLE    (SIOCDEVPRIVATE + 0)
#define SIOCGDONGLE    (SIOCDEVPRIVATE + 1)
#define SIOCSBANDWIDTH (SIOCDEVPRIVATE + 2)
#define SIOCSMEDIABUSY (SIOCDEVPRIVATE + 3)
#define SIOCGMEDIABUSY (SIOCDEVPRIVATE + 4)
#define SIOCGRECEIVING (SIOCDEVPRIVATE + 5)
#define SIOCSMODE      (SIOCDEVPRIVATE + 6)
#define SIOCGMODE      (SIOCDEVPRIVATE + 7)
#define SIOCSDTRRTS    (SIOCDEVPRIVATE + 8)
#define SIOCGQOS       (SIOCDEVPRIVATE + 9)
#define IRNAMSIZ 16
struct if_irda_qos ;
struct if_irda_line ;
struct if_irda_req ;
#define ifr_baudrate  ifr_ifru.ifru_qos.baudrate
#define ifr_receiving ifr_ifru.ifru_receiving
#define ifr_dongle    ifr_ifru.ifru_dongle
#define ifr_mode      ifr_ifru.ifru_mode
#define ifr_dtr       ifr_ifru.ifru_line.dtr
#define ifr_rts       ifr_ifru.ifru_line.rts
#define IRDA_NL_NAME "irda"
#define IRDA_NL_VERSION 1
enum irda_nl_commands ;
#define IRDA_NL_CMD_MAX (__IRDA_NL_CMD_AFTER_LAST - 1)
enum nl80211_attrs ;
#define IRDA_NL_ATTR_MAX (__IRDA_NL_ATTR_AFTER_LAST - 1)
#define IRDA_MODE_PRIMARY   0x1
#define IRDA_MODE_SECONDARY 0x2
#define IRDA_MODE_MONITOR   0x4
