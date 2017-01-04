#define _pkt_h 1
#define PKT_CMD_BIT     ((ushort) 0x080)
#define PKT_CMD_DATA    ((ushort) 0x080)
#define PKT_ACK         ((ushort) 0x040)
#define PKT_TGL         ((ushort) 0x020)
#define PKT_LEN_MASK    ((ushort) 0x07f)
#define DATA_WNDW       ((ushort) 0x10)
#define PKT_TTL_MASK    ((ushort) 0x0f)
#define PKT_MAX_DATA_LEN   72
#define PKT_LENGTH         sizeof(struct PKT)
#define SYNC_PKT_LENGTH    (PKT_LENGTH + 4)
#define CONTROL_PKT_LEN_MASK PKT_LEN_MASK
#define CONTROL_PKT_CMD_BIT  PKT_CMD_BIT
#define CONTROL_PKT_ACK (PKT_ACK << 8)
#define CONTROL_PKT_TGL (PKT_TGL << 8)
#define CONTROL_PKT_TTL_MASK (PKT_TTL_MASK << 8)
#define CONTROL_DATA_WNDW  (DATA_WNDW << 8)
struct PKT ;
