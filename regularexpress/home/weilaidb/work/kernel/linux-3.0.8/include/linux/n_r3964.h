#define __LINUX_N_R3964_H__
#define STX 0x02
#define ETX 0x03
#define DLE 0x10
#define NAK 0x15
#define R3964_TO_QVZ ((550)*HZ/1000)
#define R3964_TO_ZVZ ((220)*HZ/1000)
#define R3964_TO_NO_BUF ((400)*HZ/1000)
#define R3964_NO_TX_ROOM ((100)*HZ/1000)
#define R3964_TO_RX_PANIC ((4000)*HZ/1000)
#define R3964_MAX_RETRIES 5
#define R3964_ENABLE_SIGNALS      0x5301
#define R3964_SETPRIORITY         0x5302
#define R3964_USE_BCC             0x5303
#define R3964_READ_TELEGRAM       0x5304
#define R3964_MASTER   0
#define R3964_SLAVE    1
#define R3964_SIG_ACK   0x0001
#define R3964_SIG_DATA  0x0002
#define R3964_SIG_ALL   0x000f
#define R3964_SIG_NONE  0x0000
#define R3964_USE_SIGIO 0x1000
enum ;
struct r3964_message;
struct r3964_client_info ;
enum ;
#define R3964_MAX_MSG_COUNT 32
#define R3964_OK 0
#define R3964_TX_FAIL -1
#define R3964_OVERFLOW -2
struct r3964_client_message ;
#define R3964_MTU      256
struct r3964_block_header;
struct r3964_message ;
struct r3964_block_header
;
#define RX_BUF_SIZE    4000
#define TX_BUF_SIZE    4000
#define R3964_MAX_BLOCKS_IN_RX_QUEUE 100
#define R3964_PARITY 0x0001
#define R3964_FRAME  0x0002
#define R3964_OVERRUN 0x0004
#define R3964_UNKNOWN 0x0008
#define R3964_BREAK   0x0010
#define R3964_CHECKSUM 0x0020
#define R3964_ERROR  0x003f
#define R3964_BCC   0x4000
#define R3964_DEBUG 0x8000
struct r3964_info ;
