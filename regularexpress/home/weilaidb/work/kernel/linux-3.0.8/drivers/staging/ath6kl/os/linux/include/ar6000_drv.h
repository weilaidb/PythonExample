#define _AR6000_H_
#define ATH_MODULE_NAME driver
#define  ATH_DEBUG_DBG_LOG       ATH_DEBUG_MAKE_MODULE_MASK(0)
#define  ATH_DEBUG_WLAN_CONNECT  ATH_DEBUG_MAKE_MODULE_MASK(1)
#define  ATH_DEBUG_WLAN_SCAN     ATH_DEBUG_MAKE_MODULE_MASK(2)
#define  ATH_DEBUG_WLAN_TX       ATH_DEBUG_MAKE_MODULE_MASK(3)
#define  ATH_DEBUG_WLAN_RX       ATH_DEBUG_MAKE_MODULE_MASK(4)
#define  ATH_DEBUG_HTC_RAW       ATH_DEBUG_MAKE_MODULE_MASK(5)
#define  ATH_DEBUG_HCI_BRIDGE    ATH_DEBUG_MAKE_MODULE_MASK(6)
#define  ATH_DEBUG_HCI_RECV      ATH_DEBUG_MAKE_MODULE_MASK(7)
#define  ATH_DEBUG_HCI_SEND      ATH_DEBUG_MAKE_MODULE_MASK(8)
#define  ATH_DEBUG_HCI_DUMP      ATH_DEBUG_MAKE_MODULE_MASK(9)
#define  __dev_put(dev) dev_put(dev)
#define USER_SAVEDKEYS_STAT_INIT     0
#define USER_SAVEDKEYS_STAT_RUN      1
struct USER_SAVEDKEYS ;
#define DBG_INFO        0x00000001
#define DBG_ERROR       0x00000002
#define DBG_WARNING     0x00000004
#define DBG_SDIO        0x00000008
#define DBG_HIF         0x00000010
#define DBG_HTC         0x00000020
#define DBG_WMI         0x00000040
#define DBG_WMI2        0x00000080
#define DBG_DRIVER      0x00000100
#define DBG_DEFAULTS    (DBG_ERROR|DBG_WARNING)
int ar6000_ReadRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data);
int ar6000_WriteRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data);
#define MAX_AR6000                        1
#define AR6000_MAX_RX_BUFFERS             16
#define AR6000_BUFFER_SIZE                1664
#define AR6000_MAX_AMSDU_RX_BUFFERS       4
#define AR6000_AMSDU_REFILL_THRESHOLD     3
#define AR6000_AMSDU_BUFFER_SIZE          (WMI_MAX_AMSDU_RX_DATA_FRAME_LENGTH + 128)
#define AR6000_MAX_RX_MESSAGE_SIZE        (max(WMI_MAX_NORMAL_RX_DATA_FRAME_LENGTH,WMI_MAX_AMSDU_RX_DATA_FRAME_LENGTH))
#define AR6000_TX_TIMEOUT                 10
#define AR6000_ETH_ADDR_LEN               6
#define AR6000_MAX_ENDPOINTS              4
#define MAX_NODE_NUM                      15
#define MAX_DEF_COOKIE_NUM                180
#define MAX_HI_COOKIE_NUM                 18
#define MAX_COOKIE_NUM                    (MAX_DEF_COOKIE_NUM + MAX_HI_COOKIE_NUM)
#define MAX_DEFAULT_SEND_QUEUE_DEPTH      (MAX_DEF_COOKIE_NUM / WMM_NUM_AC)
#define AR6000_HB_CHALLENGE_RESP_FREQ_DEFAULT        1
#define AR6000_HB_CHALLENGE_RESP_MISS_THRES_DEFAULT  1
#define A_DISCONNECT_TIMER_INTERVAL       10 * 1000
#define A_DEFAULT_LISTEN_INTERVAL         100
#define A_MAX_WOW_LISTEN_INTERVAL         1000
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
typedef enum _AR6K_BIN_FILE  AR6K_BIN_FILE;
#define SETUPHCI_DEFAULT           1
#define SETUPHCI_DEFAULT           0
#define SETUPBTDEV_DEFAULT         1
#define SETUPBTDEV_DEFAULT         0
#define ENABLEUARTPRINT_DEFAULT    1
#define ENABLEUARTPRINT_DEFAULT    0
#define NOHIFSCATTERSUPPORT_DEFAULT    1
#define NOHIFSCATTERSUPPORT_DEFAULT    0
#if defined(CONFIG_ATH6KL_ENABLE_COEXISTENCE)
#define ATH6KL_BT_DEV 1
#elif defined(CONFIG_AR600x_BT_CSR)
#define ATH6KL_BT_DEV 2
#define ATH6KL_BT_DEV 3
#define ATH6KL_BT_ANTENNA 2
#define ATH6KL_BT_ANTENNA 1
#define AR3KHCIBAUD_DEFAULT        3000000
#define HCIUARTSCALE_DEFAULT       1
#define HCIUARTSTEP_DEFAULT        8937
#define AR3KHCIBAUD_DEFAULT        0
#define HCIUARTSCALE_DEFAULT       0
#define HCIUARTSTEP_DEFAULT        0
#define WLAN_INIT_MODE_DEFAULT     WLAN_INIT_MODE_DRV
#define AR6K_PATCH_DOWNLOAD_ADDRESS(_param, _ver) do  while (0)
#define AR6K_DATA_DOWNLOAD_ADDRESS(_param, _ver) do  while (0)
#define AR6K_DATASET_PATCH_ADDRESS(_param, _ver) do  while (0)
#define AR6K_APP_LOAD_ADDRESS(_param, _ver) do  while (0)
#define AR6K_APP_START_OVERRIDE_ADDRESS(_param, _ver) do  while (0)
#define AR6003_REV1_VERSION                 0x300002ba
#define AR6003_REV1_DATA_DOWNLOAD_ADDRESS   AR6003_REV1_OTP_DATA_ADDRESS
#define AR6003_REV1_PATCH_DOWNLOAD_ADDRESS  0x57ea6c
#define AR6003_REV1_OTP_FILE                "ath6k/AR6003/hw1.0/otp.bin.z77"
#define AR6003_REV1_FIRMWARE_FILE           "ath6k/AR6003/hw1.0/athwlan.bin.z77"
#define AR6003_REV1_TCMD_FIRMWARE_FILE      "ath6k/AR6003/hw1.0/athtcmd_ram.bin"
#define AR6003_REV1_ART_FIRMWARE_FILE       "ath6k/AR6003/hw1.0/device.bin"
#define AR6003_REV1_PATCH_FILE              "ath6k/AR6003/hw1.0/data.patch.bin"
#define AR6003_REV1_EPPING_FIRMWARE_FILE    "ath6k/AR6003/hw1.0/endpointping.bin"
#define AR6003_REV1_BOARD_DATA_FILE         "ath6k/AR6003/hw1.0/bdata.SD31.bin"
#elif defined(CONFIG_AR600x_SD32_XXX)
#define AR6003_REV1_BOARD_DATA_FILE         "ath6k/AR6003/hw1.0/bdata.SD32.bin"
#elif defined(CONFIG_AR600x_WB31_XXX)
#define AR6003_REV1_BOARD_DATA_FILE         "ath6k/AR6003/hw1.0/bdata.WB31.bin"
#define AR6003_REV1_BOARD_DATA_FILE         "ath6k/AR6003/hw1.0/bdata.CUSTOM.bin"
#define AR6003_REV2_VERSION                 0x30000384
#define AR6003_REV2_DATA_DOWNLOAD_ADDRESS   AR6003_REV2_OTP_DATA_ADDRESS
#define AR6003_REV2_PATCH_DOWNLOAD_ADDRESS  0x57e910
#define AR6003_REV2_OTP_FILE                "ath6k/AR6003/hw2.0/otp.bin.z77"
#define AR6003_REV2_FIRMWARE_FILE           "ath6k/AR6003/hw2.0/athwlan.bin.z77"
#define AR6003_REV2_TCMD_FIRMWARE_FILE      "ath6k/AR6003/hw2.0/athtcmd_ram.bin"
#define AR6003_REV2_ART_FIRMWARE_FILE       "ath6k/AR6003/hw2.0/device.bin"
#define AR6003_REV2_PATCH_FILE              "ath6k/AR6003/hw2.0/data.patch.bin"
#define AR6003_REV2_EPPING_FIRMWARE_FILE    "ath6k/AR6003/hw2.0/endpointping.bin"
#define AR6003_REV2_BOARD_DATA_FILE         "ath6k/AR6003/hw2.0/bdata.SD31.bin"
#elif defined(CONFIG_AR600x_SD32_XXX)
#define AR6003_REV2_BOARD_DATA_FILE         "ath6k/AR6003/hw2.0/bdata.SD32.bin"
#elif defined(CONFIG_AR600x_WB31_XXX)
#define AR6003_REV2_BOARD_DATA_FILE         "ath6k/AR6003/hw2.0/bdata.WB31.bin"
#define AR6003_REV2_BOARD_DATA_FILE         "ath6k/AR6003/hw2.0/bdata.CUSTOM.bin"
#define AR6003_REV3_VERSION                 0x30000582
#define AR6003_REV3_OTP_FILE                "ath6k/AR6003/hw2.1.1/otp.bin"
#define AR6003_REV3_FIRMWARE_FILE           "ath6k/AR6003/hw2.1.1/athwlan.bin"
#define AR6003_REV3_TCMD_FIRMWARE_FILE    "ath6k/AR6003/hw2.1.1/athtcmd_ram.bin"
#define AR6003_REV3_ART_FIRMWARE_FILE       "ath6k/AR6003/hw2.1.1/device.bin"
#define AR6003_REV3_PATCH_FILE            "ath6k/AR6003/hw2.1.1/data.patch.bin"
#define AR6003_REV3_EPPING_FIRMWARE_FILE "ath6k/AR6003/hw2.1.1/endpointping.bin"
#define AR6003_REV3_BOARD_DATA_FILE       "ath6k/AR6003/hw2.1.1/bdata.SD31.bin"
#elif defined(CONFIG_AR600x_SD32_XXX)
#define AR6003_REV3_BOARD_DATA_FILE        "ath6k/AR6003/hw2.1.1/bdata.SD32.bin"
#elif defined(CONFIG_AR600x_WB31_XXX)
#define AR6003_REV3_BOARD_DATA_FILE        "ath6k/AR6003/hw2.1.1/bdata.WB31.bin"
#define AR6003_REV3_BOARD_DATA_FILE      "ath6k/AR6003/hw2.1.1/bdata.CUSTOM.bin"
enum ;
typedef enum _HTC_RAW_STREAM_ID  HTC_RAW_STREAM_ID;
#define RAW_HTC_READ_BUFFERS_NUM    4
#define RAW_HTC_WRITE_BUFFERS_NUM   4
#define HTC_RAW_BUFFER_SIZE  1664
typedef struct  raw_htc_buffer;
enum ;
struct ar_wep_key  ;
struct ar_key ;
enum ;
struct ar_node_mapping ;
struct ar_cookie ;
struct ar_hb_chlng_resp ;
#define STA_PWR_MGMT_MASK 0x1
#define STA_PWR_MGMT_SHIFT 0x0
#define STA_PWR_MGMT_AWAKE 0x0
#define STA_PWR_MGMT_SLEEP 0x1
#define STA_SET_PWR_SLEEP(sta) (sta->flags |= (STA_PWR_MGMT_MASK << STA_PWR_MGMT_SHIFT))
#define STA_CLR_PWR_SLEEP(sta) (sta->flags &= ~(STA_PWR_MGMT_MASK << STA_PWR_MGMT_SHIFT))
#define STA_IS_PWR_SLEEP(sta) ((sta->flags >> STA_PWR_MGMT_SHIFT) & STA_PWR_MGMT_MASK)
#define STA_PS_POLLED_MASK 0x1
#define STA_PS_POLLED_SHIFT 0x1
#define STA_SET_PS_POLLED(sta) (sta->flags |= (STA_PS_POLLED_MASK << STA_PS_POLLED_SHIFT))
#define STA_CLR_PS_POLLED(sta) (sta->flags &= ~(STA_PS_POLLED_MASK << STA_PS_POLLED_SHIFT))
#define STA_IS_PS_POLLED(sta) (sta->flags & (STA_PS_POLLED_MASK << STA_PS_POLLED_SHIFT))
typedef struct  sta_t;
typedef struct ar6_raw_htc  AR_RAW_HTC_T;
struct ar6_softc ;
struct ar_virtual_interface ;
static inline void *ar6k_priv(struct net_device *dev)
#define SET_HCI_BUS_TYPE(pHciDev, __bus, __type) do  while(0)
#define GET_INODE_FROM_FILEP(filp) \
(filp)->f_path.dentry->d_inode
#define arAc2EndpointID(ar,ac)          (ar)->arAc2EpMapping[(ac)]
#define arSetAc2EndpointIDMap(ar,ac,ep)  \
#define arEndpoint2Ac(ar,ep)           (ar)->arEp2AcMapping[(ep)]
#define arRawIfEnabled(ar) (ar)->arRawIfInit
#define arRawStream2EndpointID(ar,raw)          (ar)->arRawHtc->arRaw2EpMapping[(raw)]
#define arSetRawStream2EndpointIDMap(ar,raw,ep)  \
#define arEndpoint2RawStreamID(ar,ep)           (ar)->arRawHtc->arEp2RawMapping[(ep)]
struct ar_giwscan_param ;
#define AR6000_STAT_INC(ar, stat)       (ar->arNetStats.stat++)
#define AR6000_SPIN_LOCK(lock, param)   do  while (0)
#define AR6000_SPIN_UNLOCK(lock, param) do  while (0)
void ar6000_init_profile_info(struct ar6_softc *ar);
void ar6000_install_static_wep_keys(struct ar6_softc *ar);
int ar6000_init(struct net_device *dev);
int ar6000_dbglog_get_debug_logs(struct ar6_softc *ar);
void ar6000_TxDataCleanup(struct ar6_softc *ar);
int ar6000_acl_data_tx(struct sk_buff *skb, struct net_device *dev);
void ar6000_restart_endpoint(struct net_device *dev);
void ar6000_stop_endpoint(struct net_device *dev, bool keepprofile, bool getdbglogs);
#define __user
int ar6000_htc_raw_open(struct ar6_softc *ar);
int ar6000_htc_raw_close(struct ar6_softc *ar);
ssize_t ar6000_htc_raw_read(struct ar6_softc *ar,
HTC_RAW_STREAM_ID StreamID,
char __user *buffer, size_t count);
ssize_t ar6000_htc_raw_write(struct ar6_softc *ar,
HTC_RAW_STREAM_ID StreamID,
char __user *buffer, size_t count);
sta_t *
ieee80211_find_conn(struct ar6_softc *ar, u8 *node_addr);
sta_t *
ieee80211_find_conn_for_aid(struct ar6_softc *ar, u8 aid);
u8 remove_sta(struct ar6_softc *ar, u8 *mac, u16 reason);
int ar6000_setup_hci(struct ar6_softc *ar);
void     ar6000_cleanup_hci(struct ar6_softc *ar);
void     ar6000_set_default_ar3kconfig(struct ar6_softc *ar, void *ar3kconfig);
int hci_test_send(struct ar6_softc *ar, struct sk_buff *skb);
ATH_DEBUG_DECLARE_EXTERN(htc);
ATH_DEBUG_DECLARE_EXTERN(wmi);
ATH_DEBUG_DECLARE_EXTERN(bmi);
ATH_DEBUG_DECLARE_EXTERN(hif);
ATH_DEBUG_DECLARE_EXTERN(wlan);
ATH_DEBUG_DECLARE_EXTERN(misc);
extern u8 bcast_mac[];
extern u8 null_mac[];
