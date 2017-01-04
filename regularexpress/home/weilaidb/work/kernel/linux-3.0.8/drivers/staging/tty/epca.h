#define XEMPORTS    0xC02
#define XEPORTS     0xC22
#define MAX_ALLOC   0x100
#define MAXBOARDS   12
#define FEPCODESEG  0x0200L
#define FEPCODE     0x2000L
#define BIOSCODE    0xf800L
#define MISCGLOBAL  0x0C00L
#define NPORT       0x0C22L
#define MBOX        0x0C40L
#define PORTBASE    0x0C90L
#define INVALID_BOARD_TYPE   0x1
#define INVALID_NUM_PORTS    0x2
#define INVALID_MEM_BASE     0x4
#define INVALID_PORT_BASE    0x8
#define INVALID_BOARD_STATUS 0x10
#define INVALID_ALTPIN       0x20
#define FEPCLR      0x00
#define FEPMEM      0x02
#define FEPRST      0x04
#define FEPINT      0x08
#define	FEPMASK     0x0e
#define	FEPWIN      0x80
#define PCXE    0
#define PCXEVE  1
#define PCXEM   2
#define EISAXEM 3
#define PC64XE  4
#define PCXI    5
#define PCIXEM  7
#define PCICX   8
#define PCIXR   9
#define PCIXRJ  10
#define EPCA_NUM_TYPES 6
static char *board_desc[] =
;
#define STARTC      021
#define STOPC       023
#define IAIXON      0x2000
#define TXSTOPPED  0x1
#define LOWWAIT    0x2
#define EMPTYWAIT  0x4
#define RXSTOPPED  0x8
#define TXBUSY     0x10
#define DISABLED   0
#define ENABLED    1
#define OFF        0
#define ON         1
#define FEPTIMEOUT 200000
#define SERIAL_TYPE_INFO    3
#define EPCA_EVENT_HANGUP   1
#define EPCA_MAGIC          0x5c6df104L
struct channel
;
struct board_info
;
