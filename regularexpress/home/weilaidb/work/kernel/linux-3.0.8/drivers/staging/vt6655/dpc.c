static int          msglevel                =MSG_LEVEL_INFO;
const unsigned char acbyRxRate[MAX_RATE] =
;
static unsigned char s_byGetRateIdx(unsigned char byRate);
static void
s_vGetDASA(unsigned char *pbyRxBufferAddr, unsigned int *pcbHeaderSize,
PSEthernetHeader psEthHeader);
static void
s_vProcessRxMACHeader(PSDevice pDevice, unsigned char *pbyRxBufferAddr,
unsigned int cbPacketSize, bool bIsWEP, bool bExtIV,
unsigned int *pcbHeadSize);
static bool s_bAPModeRxCtl(
PSDevice pDevice,
unsigned char *pbyFrame,
int      iSANodeIndex
);
static bool s_bAPModeRxData (
PSDevice pDevice,
struct sk_buff* skb,
unsigned int FrameSize,
unsigned int cbHeaderOffset,
int      iSANodeIndex,
int      iDANodeIndex
);
static bool s_bHandleRxEncryption(
PSDevice     pDevice,
unsigned char *pbyFrame,
unsigned int FrameSize,
unsigned char *pbyRsr,
unsigned char *pbyNewRsr,
PSKeyItem   *pKeyOut,
bool *pbExtIV,
unsigned short *pwRxTSC15_0,
unsigned long *pdwRxTSC47_16
);
static bool s_bHostWepRxEncryption(
PSDevice     pDevice,
unsigned char *pbyFrame,
unsigned int FrameSize,
unsigned char *pbyRsr,
bool bOnFly,
PSKeyItem    pKey,
unsigned char *pbyNewRsr,
bool *pbExtIV,
unsigned short *pwRxTSC15_0,
unsigned long *pdwRxTSC47_16
);
static void
s_vProcessRxMACHeader(PSDevice pDevice, unsigned char *pbyRxBufferAddr,
unsigned int cbPacketSize, bool bIsWEP, bool bExtIV,
unsigned int *pcbHeadSize)
static unsigned char s_byGetRateIdx (unsigned char byRate)
static void
s_vGetDASA(unsigned char *pbyRxBufferAddr, unsigned int *pcbHeaderSize,
PSEthernetHeader psEthHeader)
void	MngWorkItem(void *Context)
bool
device_receive_frame (
PSDevice pDevice,
PSRxDesc pCurrRD
)
static bool s_bAPModeRxCtl (
PSDevice pDevice,
unsigned char *pbyFrame,
int      iSANodeIndex
)
static bool s_bHandleRxEncryption (
PSDevice     pDevice,
unsigned char *pbyFrame,
unsigned int FrameSize,
unsigned char *pbyRsr,
unsigned char *pbyNewRsr,
PSKeyItem   *pKeyOut,
bool *pbExtIV,
unsigned short *pwRxTSC15_0,
unsigned long *pdwRxTSC47_16
)
static bool s_bHostWepRxEncryption (
PSDevice     pDevice,
unsigned char *pbyFrame,
unsigned int FrameSize,
unsigned char *pbyRsr,
bool bOnFly,
PSKeyItem    pKey,
unsigned char *pbyNewRsr,
bool *pbExtIV,
unsigned short *pwRxTSC15_0,
unsigned long *pdwRxTSC47_16
)
static bool s_bAPModeRxData (
PSDevice pDevice,
struct sk_buff* skb,
unsigned int FrameSize,
unsigned int cbHeaderOffset,
int      iSANodeIndex,
int      iDANodeIndex
)
