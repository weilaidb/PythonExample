#define  DWNLD_HANDSHAKE_LOC     0x02
#define  DWNLD_TYPE_LOC          0x04
#define  DWNLD_SIZE_MSW_LOC      0x06
#define  DWNLD_SIZE_LSW_LOC      0x08
#define  DWNLD_PS_HDR_LOC        0x0A
#define  MAX_DSP_WAIT_LOOPS      40
#define  DSP_WAIT_SLEEP_TIME     1000
#define  DSP_WAIT_DISPATCH_LVL   50
#define  HANDSHAKE_TIMEOUT_VALUE 0xF1F1
#define  HANDSHAKE_RESET_VALUE   0xFEFE
#define  HANDSHAKE_RESET_VALUE_USB   0xFE7E
#define  HANDSHAKE_DSP_BL_READY  0xFEFE
#define  HANDSHAKE_DSP_BL_READY_USB  0xFE7E
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
#define  MAX_LENGTH              0x7f0
#define  DWNLD_MAG_TYPE_LOC          0x00
#define  DWNLD_MAG_LEN_LOC           0x01
#define  DWNLD_MAG_ADDR_LOC          0x02
#define  DWNLD_MAG_CHKSUM_LOC        0x03
#define  DWNLD_MAG_VAL_LOC           0x04
#define  HANDSHAKE_MAG_DSP_BL_READY  0xFEFE0000
#define  HANDSHAKE_MAG_DSP_ENTRY     0x01000000
#define  HANDSHAKE_MAG_DSP_DATA      0x02000000
#define  HANDSHAKE_MAG_DSP_DONE      0x03000000
#define  HANDSHAKE_MAG_DRV_READY     0xFFFF0000
#define  HANDSHAKE_MAG_DRV_DATA      0x02FECDAB
#define  HANDSHAKE_MAG_DRV_ENTRY     0x01FECDAB
#define  HANDSHAKE_MAG_TIMEOUT_VALUE 0xF1F1
#define  DWNLD_MAG1_HANDSHAKE_LOC     0x00
#define  DWNLD_MAG1_TYPE_LOC          0x01
#define  DWNLD_MAG1_SIZE_LOC          0x02
#define  DWNLD_MAG1_PS_HDR_LOC        0x03
struct dsp_file_hdr ;
struct dsp_image_info ;
static u32 check_usb_db (struct ft1000_device *ft1000dev)
static u16 get_handshake(struct ft1000_device *ft1000dev, u16 expected_value)
static void put_handshake(struct ft1000_device *ft1000dev,u16 handshake_value)
static u16 get_handshake_usb(struct ft1000_device *ft1000dev, u16 expected_value)
static void put_handshake_usb(struct ft1000_device *ft1000dev,u16 handshake_value)
static u16 get_request_type(struct ft1000_device *ft1000dev)
static u16 get_request_type_usb(struct ft1000_device *ft1000dev)
static long get_request_value(struct ft1000_device *ft1000dev)
static void put_request_value(struct ft1000_device *ft1000dev, long lvalue)
static u16 hdr_checksum(struct pseudo_hdr *pHdr)
static int check_buffers(u16 *buff_w, u16 *buff_r, int len, int offset)
static u32 write_blk (struct ft1000_device *ft1000dev, u16 **pUsFile, u8 **pUcFile, long word_length)
static void usb_dnld_complete (struct urb *urb)
static u32 write_blk_fifo(struct ft1000_device *ft1000dev, u16 **pUsFile,
u8 **pUcFile, long word_length)
u16 scram_dnldr(struct ft1000_device *ft1000dev, void *pFileStart,
u32 FileLength)
