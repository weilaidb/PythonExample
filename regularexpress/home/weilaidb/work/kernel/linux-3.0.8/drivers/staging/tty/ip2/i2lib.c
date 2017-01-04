static void i2QueueNeeds(i2eBordStrPtr, i2ChanStrPtr, int);
static i2ChanStrPtr i2DeQueueNeeds(i2eBordStrPtr, int );
static void i2StripFifo(i2eBordStrPtr);
static void i2StuffFifoBypass(i2eBordStrPtr);
static void i2StuffFifoFlow(i2eBordStrPtr);
static void i2StuffFifoInline(i2eBordStrPtr);
static int i2RetryFlushOutput(i2ChanStrPtr);
static void iiSendPendingMail(i2eBordStrPtr);
static void serviceOutgoingFifo(i2eBordStrPtr);
static void do_input(struct work_struct *);
static void do_status(struct work_struct *);
unsigned char DBGBuf[0x4000];
unsigned short I = 0;
static void
WriteDBGBuf(char *s, unsigned char *src, unsigned short n )
static void
fatality(i2eBordStrPtr pB )
static inline int
i2Validate ( i2ChanStrPtr pCh )
static void iiSendPendingMail_t(unsigned long data)
static void
iiSendPendingMail(i2eBordStrPtr pB)
static int
i2InitChannels ( i2eBordStrPtr pB, int nChannels, i2ChanStrPtr pCh)
static i2ChanStrPtr
i2DeQueueNeeds(i2eBordStrPtr pB, int type)
static void
i2QueueNeeds(i2eBordStrPtr pB, i2ChanStrPtr pCh, int type)
static int
i2QueueCommands(int type, i2ChanStrPtr pCh, int timeout, int nCommands,
cmdSyntaxPtr pCs0,...)
static int
i2GetStatus(i2ChanStrPtr pCh, int resetBits)
static int
i2Input(i2ChanStrPtr pCh)
static int
i2InputFlush(i2ChanStrPtr pCh)
static int
i2Output(i2ChanStrPtr pCh, const char *pSource, int count)
static inline void
i2FlushOutput(i2ChanStrPtr pCh)
static int
i2RetryFlushOutput(i2ChanStrPtr pCh)
static void
i2DrainWakeup(unsigned long d)
static void
i2DrainOutput(i2ChanStrPtr pCh, int timeout)
static int
i2OutputFree(i2ChanStrPtr pCh)
static void
ip2_owake( PTTY tp)
static inline void
set_baud_params(i2eBordStrPtr pB)
static unsigned char junkBuffer[IBUF_SIZE];
static unsigned char cmdBuffer[MAX_CMD_PACK_SIZE + 4];
static char xlatDss[16] = ;
static inline void
i2StripFifo(i2eBordStrPtr pB)
static int
i2Write2Fifo(i2eBordStrPtr pB, unsigned char *source, int count,int reserve)
static inline void
i2StuffFifoBypass(i2eBordStrPtr pB)
static inline void
i2StuffFifoFlow(i2eBordStrPtr pB)
static inline void
i2StuffFifoInline(i2eBordStrPtr pB)
static void
serviceOutgoingFifo(i2eBordStrPtr pB)
static inline int
i2ServiceBoard ( i2eBordStrPtr pB )
