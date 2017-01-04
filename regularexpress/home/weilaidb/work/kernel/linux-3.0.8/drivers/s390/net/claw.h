#define CCW_CLAW_CMD_WRITE           0x01
#define CCW_CLAW_CMD_READ            0x02
#define CCW_CLAW_CMD_NOP             0x03
#define CCW_CLAW_CMD_SENSE           0x04
#define CCW_CLAW_CMD_SIGNAL_SMOD     0x05
#define CCW_CLAW_CMD_TIC             0x08
#define CCW_CLAW_CMD_READHEADER      0x12
#define CCW_CLAW_CMD_READFF          0x22
#define CCW_CLAW_CMD_SENSEID         0xe4
#define MORE_to_COME_FLAG       0x04
#define CLAW_IDLE               0x00
#define CLAW_BUSY               0xff
#define CLAW_PENDING            0x00
#define CLAW_COMPLETE           0xff
#define SYSTEM_VALIDATE_REQUEST   0x01
#define SYSTEM_VALIDATE_RESPONSE  0x02
#define CONNECTION_REQUEST        0x21
#define CONNECTION_RESPONSE       0x22
#define CONNECTION_CONFIRM        0x23
#define DISCONNECT                0x24
#define CLAW_ERROR                0x41
#define CLAW_VERSION_ID           2
#define CLAW_ADAPTER_SENSE_BYTE 0x41
#define CLAW_RC_NAME_MISMATCH       166
#define CLAW_RC_WRONG_VERSION       167
#define CLAW_RC_HOST_RCV_TOO_SMALL  180
#define HOST_APPL_NAME          "TCPIP   "
#define WS_APPL_NAME_IP_LINK    "TCPIP   "
#define WS_APPL_NAME_IP_NAME	"IP      "
#define WS_APPL_NAME_API_LINK   "API     "
#define WS_APPL_NAME_PACKED     "PACKED  "
#define WS_NAME_NOT_DEF         "NOT_DEF "
#define PACKING_ASK		1
#define PACK_SEND		2
#define DO_PACKED		3
#define MAX_ENVELOPE_SIZE       65536
#define CLAW_DEFAULT_MTU_SIZE   4096
#define DEF_PACK_BUFSIZE	32768
#define READ_CHANNEL		0
#define WRITE_CHANNEL		1
#define TB_TX                   0
#define TB_STOP                 1
#define TB_RETRY                2
#define TB_NOBUFFER             3
#define CLAW_MAX_LINK_ID        1
#define CLAW_MAX_DEV            256
#define MAX_NAME_LEN            8
#define CLAW_FRAME_SIZE         4096
#define CLAW_ID_SIZE		20+3
#define CLAW_STOP                0
#define CLAW_START_HALT_IO       1
#define CLAW_START_SENSEID       2
#define CLAW_START_READ          3
#define CLAW_START_WRITE         4
#define LOCK_YES             0
#define LOCK_NO              1
#define CLAW_DBF_TEXT(level, name, text) \
do  while (0)
#define CLAW_DBF_HEX(level,name,addr,len) \
do  while (0)
static inline int claw_dbf_passes(debug_info_t *dbf_grp, int level)
#define CLAW_DBF_TEXT_(level,name,text...) \
do  while (0)
enum claw_channel_types ;
struct clawh ;
struct clawph ;
struct endccw ;
struct ccwbk ;
struct clawctl ;
struct sysval  ;
struct conncmd  ;
struct clawwerror  ;
struct clawbuf  ;
struct chbk ;
struct claw_env ;
struct claw_privbk ;
#define CCWBK_SIZE sizeof(struct ccwbk)
