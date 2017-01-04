#define _ISLPCI_MGT_H
#define K_DEBUG(f, m, args...) do  while(0)
#define DEBUG(f, args...) K_DEBUG(f, pc_debug, args)
extern int pc_debug;
#define init_wds 0
#define PCIDEVICE_LATENCY_TIMER_MIN		0x40
#define PCIDEVICE_LATENCY_TIMER_VAL		0x50
#define SHOW_NOTHING                            0x00
#define SHOW_ANYTHING                           0xFF
#define SHOW_ERROR_MESSAGES                     0x01
#define SHOW_TRAPS                              0x02
#define SHOW_FUNCTION_CALLS                     0x04
#define SHOW_TRACING                            0x08
#define SHOW_QUEUE_INDEXES                      0x10
#define SHOW_PIMFOR_FRAMES                      0x20
#define SHOW_BUFFER_CONTENTS                    0x40
#define VERBOSE                                 0x01
#define CARD_DEFAULT_CHANNEL                    6
#define CARD_DEFAULT_MODE                       INL_MODE_CLIENT
#define CARD_DEFAULT_IW_MODE			IW_MODE_INFRA
#define CARD_DEFAULT_BSSTYPE                    DOT11_BSSTYPE_INFRA
#define CARD_DEFAULT_CLIENT_SSID		""
#define CARD_DEFAULT_AP_SSID			"default"
#define CARD_DEFAULT_KEY1                       "default_key_1"
#define CARD_DEFAULT_KEY2                       "default_key_2"
#define CARD_DEFAULT_KEY3                       "default_key_3"
#define CARD_DEFAULT_KEY4                       "default_key_4"
#define CARD_DEFAULT_WEP                        0
#define CARD_DEFAULT_FILTER                     0
#define CARD_DEFAULT_WDS                        0
#define	CARD_DEFAULT_AUTHEN                     DOT11_AUTH_OS
#define	CARD_DEFAULT_DOT1X			0
#define CARD_DEFAULT_MLME_MODE			DOT11_MLME_AUTO
#define CARD_DEFAULT_CONFORMANCE                OID_INL_CONFORMANCE_NONE
#define CARD_DEFAULT_PROFILE			DOT11_PROFILE_MIXED_G_WIFI
#define CARD_DEFAULT_MAXFRAMEBURST		DOT11_MAXFRAMEBURST_MIXED_SAFE
#define PIMFOR_ETHERTYPE                        0x8828
#define PIMFOR_HEADER_SIZE                      12
#define PIMFOR_VERSION                          1
#define PIMFOR_OP_GET                           0
#define PIMFOR_OP_SET                           1
#define PIMFOR_OP_RESPONSE                      2
#define PIMFOR_OP_ERROR                         3
#define PIMFOR_OP_TRAP                          4
#define PIMFOR_OP_RESERVED                      5
#define PIMFOR_DEV_ID_MHLI_MIB                  0
#define PIMFOR_FLAG_APPLIC_ORIGIN               0x01
#define PIMFOR_FLAG_LITTLE_ENDIAN               0x02
void display_buffer(char *, int);
typedef struct  __packed
pimfor_header_t;
struct islpci_mgmtframe ;
int
islpci_mgt_receive(struct net_device *ndev);
int
islpci_mgmt_rx_fill(struct net_device *ndev);
void
islpci_mgt_cleanup_transmit(struct net_device *ndev);
int
islpci_mgt_transaction(struct net_device *ndev,
int operation, unsigned long oid,
void *senddata, int sendlen,
struct islpci_mgmtframe **recvframe);
static inline void
islpci_mgt_release(struct islpci_mgmtframe *frame)
