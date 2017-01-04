#define __IWM_FW_H__
struct iwm_fw_hdr_rec ;
#define IWM_HDR_LEN                          (512)
#define IWM_HDR_BARKER_LEN                   (16)
#define IWM_HDR_REC_OP_INVALID             (0x00)
#define IWM_HDR_REC_OP_BUILD_DATE          (0x01)
#define IWM_HDR_REC_OP_BUILD_TAG           (0x02)
#define IWM_HDR_REC_OP_SW_VER              (0x03)
#define IWM_HDR_REC_OP_HW_SKU              (0x04)
#define IWM_HDR_REC_OP_BUILD_OPT           (0x05)
#define IWM_HDR_REC_OP_MEM_DESC            (0x06)
#define IWM_HDR_REC_USERDEFS               (0x07)
#define IWM_HDR_REC_LEN_BUILD_DATE           (4)
#define IWM_HDR_REC_LEN_BUILD_TAG            (64)
#define IWM_HDR_REC_LEN_SW_VER               (4)
#define IWM_HDR_REC_LEN_HW_SKU               (4)
#define IWM_HDR_REC_LEN_BUILD_OPT            (4)
#define IWM_HDR_REC_LEN_MEM_DESC             (12)
#define IWM_HDR_REC_LEN_USERDEF              (64)
#define IWM_BUILD_YEAR(date) ((date >> 16) & 0xffff)
#define IWM_BUILD_MONTH(date) ((date >> 8) & 0xff)
#define IWM_BUILD_DAY(date) (date & 0xff)
struct iwm_fw_img_desc ;
struct iwm_fw_img_ver ;
int iwm_load_fw(struct iwm_priv *iwm);
