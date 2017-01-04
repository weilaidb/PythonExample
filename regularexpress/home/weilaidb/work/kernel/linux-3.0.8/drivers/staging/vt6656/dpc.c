static int          msglevel                =MSG_LEVEL_INFO;
const BYTE acbyRxRate[MAX_RATE] =
;
static BYTE s_byGetRateIdx(BYTE byRate);
static
void
s_vGetDASA(
PBYTE pbyRxBufferAddr,
unsigned int *pcbHeaderSize,
PSEthernetHeader psEthHeader
);
static
void
s_vProcessRxMACHeader (
PSDevice pDevice,
PBYTE pbyRxBufferAddr,
unsigned int cbPacketSize,
BOOL bIsWEP,
BOOL bExtIV,
unsigned int *pcbHeadSize
);
static BOOL s_bAPModeRxCtl(
PSDevice pDevice,
PBYTE    pbyFrame,
signed int      iSANodeIndex
);
static BOOL s_bAPModeRxData (
PSDevice pDevice,
struct sk_buff *skb,
unsigned int     FrameSize,
unsigned int     cbHeaderOffset,
signed int      iSANodeIndex,
signed int      iDANodeIndex
);
static BOOL s_bHandleRxEncryption(
PSDevice     pDevice,
PBYTE        pbyFrame,
unsigned int         FrameSize,
PBYTE        pbyRsr,
PBYTE       pbyNewRsr,
PSKeyItem   * pKeyOut,
int *       pbExtIV,
PWORD       pwRxTSC15_0,
PDWORD      pdwRxTSC47_16
);
static BOOL s_bHostWepRxEncryption(
PSDevice     pDevice,
PBYTE        pbyFrame,
unsigned int         FrameSize,
PBYTE        pbyRsr,
BOOL         bOnFly,
PSKeyItem    pKey,
PBYTE       pbyNewRsr,
int *       pbExtIV,
PWORD       pwRxTSC15_0,
PDWORD      pdwRxTSC47_16
);
static
void
s_vProcessRxMACHeader (
PSDevice pDevice,
PBYTE pbyRxBufferAddr,
unsigned int cbPacketSize,
BOOL bIsWEP,
BOOL bExtIV,
unsigned int *pcbHeadSize
)
static BYTE s_byGetRateIdx(BYTE byRate)
static
void
s_vGetDASA (
PBYTE pbyRxBufferAddr,
unsigned int *pcbHeaderSize,
PSEthernetHeader psEthHeader
)
BOOL
RXbBulkInProcessData (
PSDevice         pDevice,
PRCB             pRCB,
unsigned long            BytesToIndicate
)
static BOOL s_bAPModeRxCtl (
PSDevice pDevice,
PBYTE    pbyFrame,
signed int      iSANodeIndex
)
static BOOL s_bHandleRxEncryption (
PSDevice     pDevice,
PBYTE        pbyFrame,
unsigned int         FrameSize,
PBYTE        pbyRsr,
PBYTE       pbyNewRsr,
PSKeyItem   * pKeyOut,
int *       pbExtIV,
PWORD       pwRxTSC15_0,
PDWORD      pdwRxTSC47_16
)
static BOOL s_bHostWepRxEncryption (
PSDevice     pDevice,
PBYTE        pbyFrame,
unsigned int         FrameSize,
PBYTE        pbyRsr,
BOOL         bOnFly,
PSKeyItem    pKey,
PBYTE       pbyNewRsr,
int *       pbExtIV,
PWORD       pwRxTSC15_0,
PDWORD      pdwRxTSC47_16
)
static BOOL s_bAPModeRxData (
PSDevice pDevice,
struct sk_buff *skb,
unsigned int     FrameSize,
unsigned int     cbHeaderOffset,
signed int      iSANodeIndex,
signed int      iDANodeIndex
)
void RXvWorkItem(void *Context)
void
RXvFreeRCB(
PRCB pRCB,
BOOL bReAllocSkb
)
void RXvMngWorkItem(void *Context)
