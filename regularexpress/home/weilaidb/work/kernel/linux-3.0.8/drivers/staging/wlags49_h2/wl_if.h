#define __WAVELAN2_IF_H__
#define MAX_LTV_BUF_SIZE            (512 - (sizeof(hcf_16) * 2))
#define HCF_TALLIES_SIZE            (sizeof(CFG_HERMES_TALLIES_STRCT) + \
(sizeof(hcf_16) * 2))
#define HCF_MAX_MULTICAST           16
#define HCF_MAX_NAME_LEN            32
#define MAX_LINE_SIZE   			256
#define HCF_NUM_IO_PORTS            0x80
#define TX_TIMEOUT                  ((800 * HZ) / 1000)
#define HCF_MIN_SIGNAL_LEVEL        54
#define HCF_MAX_SIGNAL_LEVEL        100
#define HCF_MIN_NOISE_LEVEL         HCF_MIN_SIGNAL_LEVEL
#define HCF_MAX_NOISE_LEVEL         HCF_MAX_SIGNAL_LEVEL
#define HCF_0DBM_OFFSET             (HCF_MAX_SIGNAL_LEVEL + 1)
#define HCF_MIN_COMM_QUALITY        0
#define HCF_MAX_COMM_QUALITY        (HCF_MAX_SIGNAL_LEVEL - HCF_MIN_NOISE_LEVEL + 1)
#define MIN_KEY_SIZE                5
#define MAX_KEY_SIZE                13
#define MAX_KEYS                    4
#define RADIO_CHANNELS              14
#define RADIO_SENSITIVITY_LEVELS    3
#define RADIO_TX_POWER_MWATT        32
#define RADIO_TX_POWER_DBM          15
#define MIN_RTS_BYTES               0
#define MAX_RTS_BYTES               2347
#define MAX_RATES                   8
#define MEGABIT                     1024*1024
#define HCF_FAILURE                 0xFF
#define UIL_FAILURE		            0xFF
#define CFG_UIL_CONNECT             0xA123
#define CFG_UIL_CONNECT_ACK_CODE    0x5653435A
#define WVLAN2_UIL_CONNECTED        (0x01L << 0)
#define WVLAN2_UIL_BUSY             (0x01L << 1)
#define WVLAN2_IOCTL_UIL            SIOCDEVPRIVATE
#define SIOCSIWNETNAME              SIOCDEVPRIVATE+1
#define SIOCGIWNETNAME              SIOCDEVPRIVATE+2
#define SIOCSIWSTANAME              SIOCDEVPRIVATE+3
#define SIOCGIWSTANAME              SIOCDEVPRIVATE+4
#define SIOCSIWPORTTYPE             SIOCDEVPRIVATE+5
#define SIOCGIWPORTTYPE             SIOCDEVPRIVATE+6
#define WL_IOCTL_RTS                SIOCDEVPRIVATE+7
#define WL_IOCTL_RTS_READ           1
#define WL_IOCTL_RTS_WRITE          2
#define WL_IOCTL_RTS_BATCH_READ     3
#define WL_IOCTL_RTS_BATCH_WRITE    4
typedef struct
wvName_t;
typedef struct
ltv_t;
struct uilreq
;
struct rtsreq
;
