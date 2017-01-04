#define COMMON_DRV_H_
struct common_credit_state_info ;
struct hci_transport_callbacks ;
struct hci_transport_misc_handles ;
#define AR6K_CONTROL_PKT_TAG    HTC_TX_PACKET_TAG_USER_DEFINED
#define AR6K_DATA_PKT_TAG       (AR6K_CONTROL_PKT_TAG + 1)
#define AR6002_VERSION_REV1     0x20000086
#define AR6002_VERSION_REV2     0x20000188
#define AR6003_VERSION_REV1     0x300002ba
#define AR6003_VERSION_REV2     0x30000384
#define AR6002_CUST_DATA_SIZE 112
#define AR6003_CUST_DATA_SIZE 16
int ar6000_setup_credit_dist(HTC_HANDLE HTCHandle, struct common_credit_state_info *pCredInfo);
int ar6000_ReadRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data);
int ar6000_WriteRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data);
int ar6000_ReadDataDiag(struct hif_device *hifDevice, u32 address,  u8 *data, u32 length);
int ar6000_reset_device(struct hif_device *hifDevice, u32 TargetType, bool waitForCompletion, bool coldReset);
void ar6000_dump_target_assert_info(struct hif_device *hifDevice, u32 TargetType);
int ar6000_set_htc_params(struct hif_device *hifDevice,
u32 TargetType,
u32 MboxIsrYieldValue,
u8 HtcControlBuffers);
int ar6000_set_hci_bridge_flags(struct hif_device *hifDevice,
u32 TargetType,
u32 Flags);
void ar6000_copy_cust_data_from_target(struct hif_device *hifDevice, u32 TargetType);
u8 *ar6000_get_cust_data_buffer(u32 TargetType);
int ar6000_setBTState(void *context, u8 *pInBuf, u32 InBufSize);
int ar6000_setDevicePowerState(void *context, u8 *pInBuf, u32 InBufSize);
int ar6000_setWowMode(void *context, u8 *pInBuf, u32 InBufSize);
int ar6000_setHostMode(void *context, u8 *pInBuf, u32 InBufSize);
