#define  I2ELLIS_H   1
#define MAX_BOX		4
typedef struct _bidStat
bidStat, *bidStatPtr;
#define FF(c)	((c & 0xC0) >> 6)
#define NN(c)	((c & 0x30) >> 4)
#define L(c)	((c & 0x08) >> 3)
#define SSS(c)	 (c & 0x07)
#define BID_HAS_654(x)	(SSS(x) == 0x04)
#define BID_NO_BOX	0xff
#define BID_8PORT  	0x80
#define BID_4PORT   	0x81
#define BID_EXP_MASK   	0x30
#define BID_EXP_8PORT	0x00
#define BID_EXP_4PORT	0x10
#define BID_EXP_UNDEF	0x20
#define BID_EXP_16PORT	0x30
#define BID_LCD_CTRL   	0x08
#define BID_LCD_NONE	0x00
#define BID_LCD_PRES   	0x08
#define BID_CON_MASK	0x07
#define BID_CON_DB25	0x00
#define BID_CON_RJ45	0x01
#define CH_QUEUE_SIZE ABS_MOST_PORTS+2
typedef struct _i2eBordStr
i2eBordStr, *i2eBordStrPtr;
#define iiDelay(a,b)          (*(a)->i2eDelay)(b)
#define iiWriteBuf(a,b,c)     (*(a)->i2eWriteBuf)(a,b,c)
#define iiReadBuf(a,b,c)      (*(a)->i2eReadBuf)(a,b,c)
#define iiWriteWord(a,b)      (*(a)->i2eWriteWord)(a,b)
#define iiReadWord(a)         (*(a)->i2eReadWord)(a)
#define iiWaitForTxEmpty(a,b) (*(a)->i2eWaitForTxEmpty)(a,b)
#define iiTxMailEmpty(a)      (*(a)->i2eTxMailEmpty)(a)
#define iiTrySendMail(a,b)    (*(a)->i2eTrySendMail)(a,b)
#define iiGetMail(a)          (*(a)->i2eGetMail)(a)
#define iiEnableMailIrq(a)    (*(a)->i2eEnableMailIrq)(a)
#define iiDisableMailIrq(a)   (*(a)->i2eWriteMask)(a,0)
#define iiWriteMask(a,b)      (*(a)->i2eWriteMask)(a,b)
typedef void (*delayFunc_t)(unsigned int);
#define I2E_MAGIC       0x4251
#define I2E_INCOMPLETE  0x1122
#define I2EE_GOOD       0
#define I2EE_BADADDR    1
#define I2EE_BADSTATE   2
#define I2EE_BADMAGIC   3
#define I2EE_PORM_SHORT 4
#define I2EE_PORM_LONG  5
#define I2EE_BAD_FAMILY 6
#define I2EE_INCONSIST  7
#define I2EE_POSTERR    8
#define I2EE_BADBUS     9
#define I2EE_TXE_TIME   10
#define I2EE_INVALID    11
#define I2EE_BAD_PORT   12
#define I2EE_BAD_IRQ    13
#define I2EE_NOCHANNELS 14
#define FIFO_II   0
#define FIFO_IIEX 1
#define NO_MAIL_HERE    0x1111
#define II_STATE_COLD      0
#define II_STATE_RESET     1
#define II_STATE_READY     2
#define II_STATE_LOADING   3
#define II_STATE_LOADED    4
#define II_STATE_BADLOAD   5
#define II_STATE_STDLOADED 6
#define I2_IRQ_UNDEFINED	0x1352
#define I2_HAS_INPUT(pB)	!(inb(pB->i2eStatus) & ST_IN_EMPTY)
#define I2_HAS_MAIL(pB)		(inb(pB->i2eStatus) & ST_IN_MAIL)
#define I2_UPDATE_FIFO_ROOM(pB)	((pB)->i2eFifoRemains = (pB)->i2eFifoSize)
static int iiSetAddress(i2eBordStrPtr, int, delayFunc_t );
static int iiReset(i2eBordStrPtr);
static int iiResetDelay(i2eBordStrPtr);
static int iiInitialize(i2eBordStrPtr);
extern int iiValidateChannels(i2eBordStrPtr);
static int iiDownloadBlock(i2eBordStrPtr, loadHdrStrPtr, int);
#define II_DOWN_BADVALID   0
#define II_DOWN_CONTINUING 1
#define II_DOWN_GOOD       2
#define II_DOWN_BAD        3
#define II_DOWN_BADFILE    4
#define II_DOWN_BADSTATE   5
#define II_DOWN_TIMEOUT    6
#define II_DOWN_OVER       7
#define II_DOWN_UNDER      8
#define II_DOWN_NOFILE     9
static int iiDownloadAll(i2eBordStrPtr, loadHdrStrPtr, int, int);
#define I2_COMPLETE(pB,code) do  while (0)
