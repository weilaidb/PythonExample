static int          msglevel                =MSG_LEVEL_INFO;
#define	PLICE_DEBUG
#define CRITICAL_PACKET_LEN      256
const unsigned short wTimeStampOff[2][MAX_RATE] = ;
const unsigned short wFB_Opt0[2][5] = ;
const unsigned short wFB_Opt1[2][5] = ;
#define RTSDUR_BB       0
#define RTSDUR_BA       1
#define RTSDUR_AA       2
#define CTSDUR_BA       3
#define RTSDUR_BA_F0    4
#define RTSDUR_AA_F0    5
#define RTSDUR_BA_F1    6
#define RTSDUR_AA_F1    7
#define CTSDUR_BA_F0    8
#define CTSDUR_BA_F1    9
#define DATADUR_B       10
#define DATADUR_A       11
#define DATADUR_A_F0    12
#define DATADUR_A_F1    13
static
void
s_vFillTxKey(
PSDevice   pDevice,
unsigned char *pbyBuf,
unsigned char *pbyIVHead,
PSKeyItem  pTransmitKey,
unsigned char *pbyHdrBuf,
unsigned short wPayloadLen,
unsigned char *pMICHDR
);
static
void
s_vFillRTSHead(
PSDevice         pDevice,
unsigned char byPktType,
void *           pvRTS,
unsigned int	cbFrameLength,
bool bNeedAck,
bool bDisCRC,
PSEthernetHeader psEthHeader,
unsigned short wCurrentRate,
unsigned char byFBOption
);
static
void
s_vGenerateTxParameter(
PSDevice         pDevice,
unsigned char byPktType,
void *           pTxBufHead,
void *           pvRrvTime,
void *           pvRTS,
void *           pvCTS,
unsigned int	cbFrameSize,
bool bNeedACK,
unsigned int	uDMAIdx,
PSEthernetHeader psEthHeader,
unsigned short wCurrentRate
);
static void s_vFillFragParameter(
PSDevice pDevice,
unsigned char *pbyBuffer,
unsigned int	uTxType,
void *   pvtdCurr,
unsigned short wFragType,
unsigned int	cbReqCount
);
static unsigned int
s_cbFillTxBufHead(PSDevice pDevice, unsigned char byPktType, unsigned char *pbyTxBufferAddr,
unsigned int cbFrameBodySize, unsigned int uDMAIdx, PSTxDesc pHeadTD,
PSEthernetHeader psEthHeader, unsigned char *pPacket, bool bNeedEncrypt,
PSKeyItem pTransmitKey, unsigned int uNodeIndex, unsigned int *puMACfragNum);
static
unsigned int
s_uFillDataHead (
PSDevice pDevice,
unsigned char byPktType,
void *   pTxDataHead,
unsigned int cbFrameLength,
unsigned int uDMAIdx,
bool bNeedAck,
unsigned int uFragIdx,
unsigned int cbLastFragmentSize,
unsigned int uMACfragNum,
unsigned char byFBOption,
unsigned short wCurrentRate
);
static
void
s_vFillTxKey (
PSDevice   pDevice,
unsigned char *pbyBuf,
unsigned char *pbyIVHead,
PSKeyItem  pTransmitKey,
unsigned char *pbyHdrBuf,
unsigned short wPayloadLen,
unsigned char *pMICHDR
)
static
void
s_vSWencryption (
PSDevice            pDevice,
PSKeyItem           pTransmitKey,
unsigned char *pbyPayloadHead,
unsigned short wPayloadSize
)
static
unsigned int
s_uGetTxRsvTime (
PSDevice pDevice,
unsigned char byPktType,
unsigned int cbFrameLength,
unsigned short wRate,
bool bNeedAck
)
static
unsigned int
s_uGetRTSCTSRsvTime (
PSDevice pDevice,
unsigned char byRTSRsvType,
unsigned char byPktType,
unsigned int cbFrameLength,
unsigned short wCurrentRate
)
static
unsigned int
s_uGetDataDuration (
PSDevice pDevice,
unsigned char byDurType,
unsigned int cbFrameLength,
unsigned char byPktType,
unsigned short wRate,
bool bNeedAck,
unsigned int uFragIdx,
unsigned int cbLastFragmentSize,
unsigned int uMACfragNum,
unsigned char byFBOption
)
static
unsigned int
s_uGetRTSCTSDuration (
PSDevice pDevice,
unsigned char byDurType,
unsigned int cbFrameLength,
unsigned char byPktType,
unsigned short wRate,
bool bNeedAck,
unsigned char byFBOption
)
static
unsigned int
s_uFillDataHead (
PSDevice pDevice,
unsigned char byPktType,
void *   pTxDataHead,
unsigned int cbFrameLength,
unsigned int uDMAIdx,
bool bNeedAck,
unsigned int uFragIdx,
unsigned int cbLastFragmentSize,
unsigned int uMACfragNum,
unsigned char byFBOption,
unsigned short wCurrentRate
)
static
void
s_vFillRTSHead (
PSDevice         pDevice,
unsigned char byPktType,
void *           pvRTS,
unsigned int cbFrameLength,
bool bNeedAck,
bool bDisCRC,
PSEthernetHeader psEthHeader,
unsigned short wCurrentRate,
unsigned char byFBOption
)
static
void
s_vFillCTSHead (
PSDevice pDevice,
unsigned int uDMAIdx,
unsigned char byPktType,
void *   pvCTS,
unsigned int cbFrameLength,
bool bNeedAck,
bool bDisCRC,
unsigned short wCurrentRate,
unsigned char byFBOption
)
static
void
s_vGenerateTxParameter (
PSDevice         pDevice,
unsigned char byPktType,
void *           pTxBufHead,
void *           pvRrvTime,
void *           pvRTS,
void *           pvCTS,
unsigned int cbFrameSize,
bool bNeedACK,
unsigned int uDMAIdx,
PSEthernetHeader psEthHeader,
unsigned short wCurrentRate
)
static
void
s_vFillFragParameter(
PSDevice pDevice,
unsigned char *pbyBuffer,
unsigned int uTxType,
void *   pvtdCurr,
unsigned short wFragType,
unsigned int cbReqCount
)
static unsigned int
s_cbFillTxBufHead(PSDevice pDevice, unsigned char byPktType, unsigned char *pbyTxBufferAddr,
unsigned int cbFrameBodySize, unsigned int uDMAIdx, PSTxDesc pHeadTD,
PSEthernetHeader psEthHeader, unsigned char *pPacket, bool bNeedEncrypt,
PSKeyItem pTransmitKey, unsigned int uNodeIndex, unsigned int *puMACfragNum)
void
vGenerateFIFOHeader(PSDevice pDevice, unsigned char byPktType, unsigned char *pbyTxBufferAddr,
bool bNeedEncrypt, unsigned int cbPayloadSize, unsigned int uDMAIdx,
PSTxDesc pHeadTD, PSEthernetHeader psEthHeader, unsigned char *pPacket,
PSKeyItem pTransmitKey, unsigned int uNodeIndex, unsigned int *puMACfragNum,
unsigned int *pcbHeaderSize)
void
vGenerateMACHeader (
PSDevice         pDevice,
unsigned char *pbyBufferAddr,
unsigned short wDuration,
PSEthernetHeader psEthHeader,
bool bNeedEncrypt,
unsigned short wFragType,
unsigned int uDMAIdx,
unsigned int uFragIdx
)
CMD_STATUS csMgmt_xmit(PSDevice pDevice, PSTxMgmtPacket pPacket)
CMD_STATUS csBeacon_xmit(PSDevice pDevice, PSTxMgmtPacket pPacket)
unsigned int
cbGetFragCount (
PSDevice         pDevice,
PSKeyItem        pTransmitKey,
unsigned int cbFrameBodySize,
PSEthernetHeader psEthHeader
)
void
vDMA0_tx_80211(PSDevice  pDevice, struct sk_buff *skb, unsigned char *pbMPDU, unsigned int cbMPDULen)
