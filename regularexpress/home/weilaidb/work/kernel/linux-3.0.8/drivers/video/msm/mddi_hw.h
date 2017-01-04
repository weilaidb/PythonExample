#define _MDDI_HW_H_
#define MDDI_CMD                0x0000
#define MDDI_VERSION            0x0004
#define MDDI_PRI_PTR            0x0008
#define MDDI_SEC_PTR            0x000c
#define MDDI_BPS                0x0010
#define MDDI_SPM                0x0014
#define MDDI_INT                0x0018
#define MDDI_INTEN              0x001c
#define MDDI_REV_PTR            0x0020
#define MDDI_REV_SIZE           0x0024
#define MDDI_STAT               0x0028
#define MDDI_REV_RATE_DIV       0x002c
#define MDDI_REV_CRC_ERR        0x0030
#define MDDI_TA1_LEN            0x0034
#define MDDI_TA2_LEN            0x0038
#define MDDI_TEST_BUS           0x003c
#define MDDI_TEST               0x0040
#define MDDI_REV_PKT_CNT        0x0044
#define MDDI_DRIVE_HI           0x0048
#define MDDI_DRIVE_LO           0x004c
#define MDDI_DISP_WAKE          0x0050
#define MDDI_REV_ENCAP_SZ       0x0054
#define MDDI_RTD_VAL            0x0058
#define MDDI_PAD_CTL            0x0068
#define MDDI_DRIVER_START_CNT   0x006c
#define MDDI_NEXT_PRI_PTR       0x0070
#define MDDI_NEXT_SEC_PTR       0x0074
#define MDDI_MISR_CTL           0x0078
#define MDDI_MISR_DATA          0x007c
#define MDDI_SF_CNT             0x0080
#define MDDI_MF_CNT             0x0084
#define MDDI_CURR_REV_PTR       0x0088
#define MDDI_CORE_VER           0x008c
#define MDDI_INT_PRI_PTR_READ       0x0001
#define MDDI_INT_SEC_PTR_READ       0x0002
#define MDDI_INT_REV_DATA_AVAIL     0x0004
#define MDDI_INT_DISP_REQ           0x0008
#define MDDI_INT_PRI_UNDERFLOW      0x0010
#define MDDI_INT_SEC_UNDERFLOW      0x0020
#define MDDI_INT_REV_OVERFLOW       0x0040
#define MDDI_INT_CRC_ERROR          0x0080
#define MDDI_INT_MDDI_IN            0x0100
#define MDDI_INT_PRI_OVERWRITE      0x0200
#define MDDI_INT_SEC_OVERWRITE      0x0400
#define MDDI_INT_REV_OVERWRITE      0x0800
#define MDDI_INT_DMA_FAILURE        0x1000
#define MDDI_INT_LINK_ACTIVE        0x2000
#define MDDI_INT_IN_HIBERNATION     0x4000
#define MDDI_INT_PRI_LINK_LIST_DONE 0x8000
#define MDDI_INT_SEC_LINK_LIST_DONE 0x10000
#define MDDI_INT_NO_CMD_PKTS_PEND   0x20000
#define MDDI_INT_RTD_FAILURE        0x40000
#define MDDI_INT_REV_PKT_RECEIVED   0x80000
#define MDDI_INT_REV_PKTS_AVAIL     0x100000
#define MDDI_INT_NEED_CLEAR ( \
MDDI_INT_REV_DATA_AVAIL | \
MDDI_INT_PRI_UNDERFLOW | \
MDDI_INT_SEC_UNDERFLOW | \
MDDI_INT_REV_OVERFLOW | \
MDDI_INT_CRC_ERROR | \
MDDI_INT_REV_PKT_RECEIVED)
#define MDDI_STAT_LINK_ACTIVE        0x0001
#define MDDI_STAT_NEW_REV_PTR        0x0002
#define MDDI_STAT_NEW_PRI_PTR        0x0004
#define MDDI_STAT_NEW_SEC_PTR        0x0008
#define MDDI_STAT_IN_HIBERNATION     0x0010
#define MDDI_STAT_PRI_LINK_LIST_DONE 0x0020
#define MDDI_STAT_SEC_LINK_LIST_DONE 0x0040
#define MDDI_STAT_PENDING_TIMING_PKT 0x0080
#define MDDI_STAT_PENDING_REV_ENCAP  0x0100
#define MDDI_STAT_PENDING_POWERDOWN  0x0200
#define MDDI_STAT_RTD_MEAS_FAIL      0x0800
#define MDDI_STAT_CLIENT_WAKEUP_REQ  0x1000
#define MDDI_CMD_POWERDOWN           0x0100
#define MDDI_CMD_POWERUP             0x0200
#define MDDI_CMD_HIBERNATE           0x0300
#define MDDI_CMD_RESET               0x0400
#define MDDI_CMD_DISP_IGNORE         0x0501
#define MDDI_CMD_DISP_LISTEN         0x0500
#define MDDI_CMD_SEND_REV_ENCAP      0x0600
#define MDDI_CMD_GET_CLIENT_CAP      0x0601
#define MDDI_CMD_GET_CLIENT_STATUS   0x0602
#define MDDI_CMD_SEND_RTD            0x0700
#define MDDI_CMD_LINK_ACTIVE         0x0900
#define MDDI_CMD_PERIODIC_REV_ENCAP  0x0A00
#define MDDI_CMD_FORCE_NEW_REV_PTR   0x0C00
#define MDDI_VIDEO_REV_PKT_SIZE              0x40
#define MDDI_CLIENT_CAPABILITY_REV_PKT_SIZE  0x60
#define MDDI_MAX_REV_PKT_SIZE                0x60
#define MDDI_REV_BUFFER_SIZE (MDDI_MAX_REV_PKT_SIZE * 4)
#define MDDI_HOST_BYTES_PER_SUBFRAME  0x3C00
#define MDDI_HOST_TA2_LEN       0x000c
#define MDDI_HOST_REV_RATE_DIV  0x0002
struct __attribute__((packed)) mddi_rev_packet ;
struct __attribute__((packed)) mddi_client_status ;
struct __attribute__((packed)) mddi_client_caps  mddi_client_capability_type;
struct __attribute__((packed)) mddi_video_stream ;
#define TYPE_VIDEO_STREAM      16
#define TYPE_CLIENT_CAPS       66
#define TYPE_REGISTER_ACCESS   146
#define TYPE_CLIENT_STATUS     70
struct __attribute__((packed)) mddi_register_access ;
struct __attribute__((packed)) mddi_llentry ;
