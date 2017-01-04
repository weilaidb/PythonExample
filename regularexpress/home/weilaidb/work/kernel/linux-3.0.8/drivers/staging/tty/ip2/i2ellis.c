static int iiWriteBuf16(i2eBordStrPtr, unsigned char *, int);
static int iiWriteBuf8(i2eBordStrPtr, unsigned char *, int);
static int iiReadBuf16(i2eBordStrPtr, unsigned char *, int);
static int iiReadBuf8(i2eBordStrPtr, unsigned char *, int);
static unsigned short iiReadWord16(i2eBordStrPtr);
static unsigned short iiReadWord8(i2eBordStrPtr);
static void iiWriteWord16(i2eBordStrPtr, unsigned short);
static void iiWriteWord8(i2eBordStrPtr, unsigned short);
static int iiWaitForTxEmptyII(i2eBordStrPtr, int);
static int iiWaitForTxEmptyIIEX(i2eBordStrPtr, int);
static int iiTxMailEmptyII(i2eBordStrPtr);
static int iiTxMailEmptyIIEX(i2eBordStrPtr);
static int iiTrySendMailII(i2eBordStrPtr, unsigned char);
static int iiTrySendMailIIEX(i2eBordStrPtr, unsigned char);
static unsigned short iiGetMailII(i2eBordStrPtr);
static unsigned short iiGetMailIIEX(i2eBordStrPtr);
static void iiEnableMailIrqII(i2eBordStrPtr);
static void iiEnableMailIrqIIEX(i2eBordStrPtr);
static void iiWriteMaskII(i2eBordStrPtr, unsigned char);
static void iiWriteMaskIIEX(i2eBordStrPtr, unsigned char);
static void ii2Nop(void);
static int ii2Safe;
static int iiDelayed;
static DEFINE_RWLOCK(Dl_spinlock);
static int
iiSetAddress( i2eBordStrPtr pB, int address, delayFunc_t delay )
static int
iiReset(i2eBordStrPtr pB)
static int
iiResetDelay(i2eBordStrPtr pB)
static int
iiInitialize(i2eBordStrPtr pB)
static void
ii2DelayTimer(unsigned int mseconds)
static void
ii2Nop(void)
static int
iiWriteBuf16(i2eBordStrPtr pB, unsigned char *address, int count)
static int
iiWriteBuf8(i2eBordStrPtr pB, unsigned char *address, int count)
static int
iiReadBuf16(i2eBordStrPtr pB, unsigned char *address, int count)
static int
iiReadBuf8(i2eBordStrPtr pB, unsigned char *address, int count)
static unsigned short
iiReadWord16(i2eBordStrPtr pB)
static unsigned short
iiReadWord8(i2eBordStrPtr pB)
static void
iiWriteWord16(i2eBordStrPtr pB, unsigned short value)
static void
iiWriteWord8(i2eBordStrPtr pB, unsigned short value)
static int
iiWaitForTxEmptyII(i2eBordStrPtr pB, int mSdelay)
static int
iiWaitForTxEmptyIIEX(i2eBordStrPtr pB, int mSdelay)
static int
iiTxMailEmptyII(i2eBordStrPtr pB)
static int
iiTxMailEmptyIIEX(i2eBordStrPtr pB)
static int
iiTrySendMailII(i2eBordStrPtr pB, unsigned char mail)
static int
iiTrySendMailIIEX(i2eBordStrPtr pB, unsigned char mail)
static unsigned short
iiGetMailII(i2eBordStrPtr pB)
static unsigned short
iiGetMailIIEX(i2eBordStrPtr pB)
static void
iiEnableMailIrqII(i2eBordStrPtr pB)
static void
iiEnableMailIrqIIEX(i2eBordStrPtr pB)
static void
iiWriteMaskII(i2eBordStrPtr pB, unsigned char value)
static void
iiWriteMaskIIEX(i2eBordStrPtr pB, unsigned char value)
static int
iiDownloadBlock ( i2eBordStrPtr pB, loadHdrStrPtr pSource, int isStandard)
static int
iiDownloadAll(i2eBordStrPtr pB, loadHdrStrPtr pSource, int isStandard, int size)
