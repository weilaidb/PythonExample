#define __KERNEL_SYSCALLS__
#define DEBUG(n, args...) printk(KERN_DEBUG args);
#define DEBUG(n, args...)
#define  MAX_DSP_WAIT_LOOPS      100
#define  DSP_WAIT_SLEEP_TIME     1
#define  MAX_LENGTH              0x7f0
#define  DWNLD_MAG_HANDSHAKE_LOC 0x00
#define  DWNLD_MAG_TYPE_LOC      0x01
#define  DWNLD_MAG_SIZE_LOC      0x02
#define  DWNLD_MAG_PS_HDR_LOC    0x03
#define  DWNLD_HANDSHAKE_LOC     0x02
#define  DWNLD_TYPE_LOC          0x04
#define  DWNLD_SIZE_MSW_LOC      0x06
#define  DWNLD_SIZE_LSW_LOC      0x08
#define  DWNLD_PS_HDR_LOC        0x0A
#define  HANDSHAKE_TIMEOUT_VALUE 0xF1F1
#define  HANDSHAKE_RESET_VALUE   0xFEFE
#define  HANDSHAKE_DSP_BL_READY  0xFEFE
#define  HANDSHAKE_DRIVER_READY  0xFFFF
#define  HANDSHAKE_SEND_DATA     0x0000
#define  HANDSHAKE_REQUEST       0x0001
#define  HANDSHAKE_RESPONSE      0x0000
#define  REQUEST_CODE_LENGTH     0x0000
#define  REQUEST_RUN_ADDRESS     0x0001
#define  REQUEST_CODE_SEGMENT    0x0002
#define  REQUEST_DONE_BL         0x0003
#define  REQUEST_DONE_CL         0x0004
#define  REQUEST_VERSION_INFO    0x0005
#define  REQUEST_CODE_BY_VERSION 0x0006
#define  REQUEST_MAILBOX_DATA    0x0007
#define  REQUEST_FILE_CHECKSUM   0x0008
#define  STATE_START_DWNLD       0x01
#define  STATE_BOOT_DWNLD        0x02
#define  STATE_CODE_DWNLD        0x03
#define  STATE_DONE_DWNLD        0x04
#define  STATE_SECTION_PROV      0x05
#define  STATE_DONE_PROV         0x06
#define  STATE_DONE_FILE         0x07
USHORT get_handshake(struct net_device *dev, USHORT expected_value);
void put_handshake(struct net_device *dev, USHORT handshake_value);
USHORT get_request_type(struct net_device *dev);
long get_request_value(struct net_device *dev);
void put_request_value(struct net_device *dev, long lvalue);
USHORT hdr_checksum(PPSEUDO_HDR pHdr);
typedef struct _DSP_FILE_HDR  __attribute__ ((packed)) DSP_FILE_HDR, *PDSP_FILE_HDR;
typedef struct _DSP_FILE_HDR_5  __attribute__ ((packed)) DSP_FILE_HDR_5, *PDSP_FILE_HDR_5;
typedef struct _DSP_IMAGE_INFO  __attribute__ ((packed)) DSP_IMAGE_INFO, *PDSP_IMAGE_INFO;
typedef struct _DSP_IMAGE_INFO_V6  __attribute__ ((packed)) DSP_IMAGE_INFO_V6, *PDSP_IMAGE_INFO_V6;
void card_bootload(struct net_device *dev)
USHORT get_handshake(struct net_device *dev, USHORT expected_value)
void put_handshake(struct net_device *dev, USHORT handshake_value)
USHORT get_request_type(struct net_device *dev)
long get_request_value(struct net_device *dev)
void put_request_value(struct net_device *dev, long lvalue)
USHORT hdr_checksum(PPSEUDO_HDR pHdr)
int card_download(struct net_device *dev, const u8 *pFileStart, UINT FileLength)
