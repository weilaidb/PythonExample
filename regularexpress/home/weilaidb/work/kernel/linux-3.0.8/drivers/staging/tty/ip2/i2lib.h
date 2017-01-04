#define I2LIB_H   1
#define MAX_OBUF_BLOCK  36
#define MAX_CBUF_BLOCK  6
#define IBUF_SIZE       512
#define OBUF_SIZE       1024
#define CBUF_SIZE       10
typedef struct _i2ChanStr
i2ChanStr, *i2ChanStrPtr;
#define STARTFL_FLAG 1
#define STOPFL_FLAG  2
#define CHANNEL_MAGIC_BITS 0xff00
#define CHANNEL_MAGIC      0x5300
#define CHANNEL_SUPPORT    0x0001
#define NEED_FLOW    1
#define NEED_INLINE  2
#define NEED_BYPASS  4
#define NEED_CREDIT  8
#define I2_DCD 1
#define I2_CTS 2
#define I2_DSR 4
#define I2_RI  8
#define I2_DTR 1
#define I2_RTS 2
#define I2_BRK    0x10
#define I2_PAR    0x20
#define I2_FRA    0x40
#define I2_OVR    0x80
#define I2_DDCD   0x100
#define I2_DCTS   0x200
#define I2_DDSR   0x400
#define I2_DRI    0x800
#define HOT_CLEAR 0x1322
#define CO_NBLOCK_WRITE 1
#define I2_OUTFLOW_CTS  0x0001
#define I2_INFLOW_RTS   0x0002
#define I2_INFLOW_DSR   0x0004
#define I2_INFLOW_DTR   0x0008
#define I2_OUTFLOW_DSR  0x0010
#define I2_OUTFLOW_DTR  0x0020
#define I2_OUTFLOW_XON  0x0040
#define I2_OUTFLOW_XANY 0x0080
#define I2_INFLOW_XON   0x0100
#define I2_CRTSCTS      (I2_OUTFLOW_CTS|I2_INFLOW_RTS)
#define I2_IXANY_MODE   (I2_OUTFLOW_XON|I2_OUTFLOW_XANY)
#define i2SetOption(pCh, option) pCh->channelOptions |= option
#define i2ClrOption(pCh, option) pCh->channelOptions &= ~option
#define i2SetFatalTrap(pB, routine) pB->i2eFatalTrap = routine
static int  i2InitChannels(i2eBordStrPtr, int, i2ChanStrPtr);
static int  i2QueueCommands(int, i2ChanStrPtr, int, int, cmdSyntaxPtr,...);
static int  i2GetStatus(i2ChanStrPtr, int);
static int  i2Input(i2ChanStrPtr);
static int  i2InputFlush(i2ChanStrPtr);
static int  i2Output(i2ChanStrPtr, const char *, int);
static int  i2OutputFree(i2ChanStrPtr);
static int  i2ServiceBoard(i2eBordStrPtr);
static void i2DrainOutput(i2ChanStrPtr, int);
void ip2trace(unsigned short,unsigned char,unsigned char,unsigned long,...);
#define ip2trace(a,b,c,d...) do  while (0)
#define C_IN_LINE 1
#define C_BYPASS  0
