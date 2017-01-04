static int          msglevel                = MSG_LEVEL_INFO;
#define CRITICAL_PACKET_LEN      256
const WORD wTimeStampOff[2][MAX_RATE] = ;
const WORD wFB_Opt0[2][5] = ;
const WORD wFB_Opt1[2][5] = ;
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
s_vSaveTxPktInfo(
PSDevice pDevice,
BYTE byPktNum,
PBYTE pbyDestAddr,
WORD wPktLength,
WORD wFIFOCtl
);
static
void *
s_vGetFreeContext(
PSDevice pDevice
);
static
void
s_vGenerateTxParameter(
PSDevice         pDevice,
BYTE             byPktType,
WORD             wCurrentRate,
void *pTxBufHead,
void *pvRrvTime,
void *pvRTS,
void *pvCTS,
unsigned int             cbFrameSize,
BOOL             bNeedACK,
unsigned int             uDMAIdx,
PSEthernetHeader psEthHeader
);
static unsigned int s_uFillDataHead(
PSDevice pDevice,
BYTE     byPktType,
WORD     wCurrentRate,
void *pTxDataHead,
unsigned int     cbFrameLength,
unsigned int     uDMAIdx,
BOOL     bNeedAck,
unsigned int     uFragIdx,
unsigned int     cbLastFragmentSize,
unsigned int     uMACfragNum,
BYTE     byFBOption
);
static
void
s_vGenerateMACHeader (
PSDevice         pDevice,
PBYTE            pbyBufferAddr,
WORD             wDuration,
PSEthernetHeader psEthHeader,
BOOL             bNeedEncrypt,
WORD             wFragType,
unsigned int             uDMAIdx,
unsigned int             uFragIdx
);
static
void
s_vFillTxKey(
PSDevice   pDevice,
PBYTE      pbyBuf,
PBYTE      pbyIVHead,
PSKeyItem  pTransmitKey,
PBYTE      pbyHdrBuf,
WORD       wPayloadLen,
PBYTE      pMICHDR
);
static
void
s_vSWencryption (
PSDevice         pDevice,
PSKeyItem        pTransmitKey,
PBYTE            pbyPayloadHead,
WORD             wPayloadSize
);
static unsigned int s_uGetTxRsvTime(
PSDevice pDevice,
BYTE     byPktType,
unsigned int     cbFrameLength,
WORD     wRate,
BOOL     bNeedAck
);
static unsigned int s_uGetRTSCTSRsvTime(
PSDevice pDevice,
BYTE byRTSRsvType,
BYTE byPktType,
unsigned int cbFrameLength,
WORD wCurrentRate
);
static
void
s_vFillCTSHead (
PSDevice pDevice,
unsigned int     uDMAIdx,
BYTE     byPktType,
void *pvCTS,
unsigned int     cbFrameLength,
BOOL     bNeedAck,
BOOL     bDisCRC,
WORD     wCurrentRate,
BYTE     byFBOption
);
static
void
s_vFillRTSHead(
PSDevice         pDevice,
BYTE             byPktType,
void *pvRTS,
unsigned int             cbFrameLength,
BOOL             bNeedAck,
BOOL             bDisCRC,
PSEthernetHeader psEthHeader,
WORD             wCurrentRate,
BYTE             byFBOption
);
static unsigned int s_uGetDataDuration(
PSDevice pDevice,
BYTE     byDurType,
unsigned int     cbFrameLength,
BYTE     byPktType,
WORD     wRate,
BOOL     bNeedAck,
unsigned int     uFragIdx,
unsigned int     cbLastFragmentSize,
unsigned int     uMACfragNum,
BYTE     byFBOption
);
static
unsigned int
s_uGetRTSCTSDuration (
PSDevice pDevice,
BYTE byDurType,
unsigned int cbFrameLength,
BYTE byPktType,
WORD wRate,
BOOL bNeedAck,
BYTE byFBOption
);
static
void *
s_vGetFreeContext(
PSDevice pDevice
)
static
void
s_vSaveTxPktInfo(PSDevice pDevice, BYTE byPktNum, PBYTE pbyDestAddr, WORD wPktLength, WORD wFIFOCtl)
static
void
s_vFillTxKey (
PSDevice   pDevice,
PBYTE      pbyBuf,
PBYTE      pbyIVHead,
PSKeyItem  pTransmitKey,
PBYTE      pbyHdrBuf,
WORD       wPayloadLen,
PBYTE      pMICHDR
)
static
void
s_vSWencryption (
PSDevice            pDevice,
PSKeyItem           pTransmitKey,
PBYTE               pbyPayloadHead,
WORD                wPayloadSize
)
static
unsigned int
s_uGetTxRsvTime (
PSDevice pDevice,
BYTE     byPktType,
unsigned int     cbFrameLength,
WORD     wRate,
BOOL     bNeedAck
)
static
unsigned int
s_uGetRTSCTSRsvTime (
PSDevice pDevice,
BYTE byRTSRsvType,
BYTE byPktType,
unsigned int cbFrameLength,
WORD wCurrentRate
)
static
unsigned int
s_uGetDataDuration (
PSDevice pDevice,
BYTE     byDurType,
unsigned int     cbFrameLength,
BYTE     byPktType,
WORD     wRate,
BOOL     bNeedAck,
unsigned int     uFragIdx,
unsigned int     cbLastFragmentSize,
unsigned int     uMACfragNum,
BYTE     byFBOption
)
static
unsigned int
s_uGetRTSCTSDuration (
PSDevice pDevice,
BYTE byDurType,
unsigned int cbFrameLength,
BYTE byPktType,
WORD wRate,
BOOL bNeedAck,
BYTE byFBOption
)
static
unsigned int
s_uFillDataHead (
PSDevice pDevice,
BYTE     byPktType,
WORD     wCurrentRate,
void *pTxDataHead,
unsigned int     cbFrameLength,
unsigned int     uDMAIdx,
BOOL     bNeedAck,
unsigned int     uFragIdx,
unsigned int     cbLastFragmentSize,
unsigned int     uMACfragNum,
BYTE     byFBOption
)
static
void
s_vFillRTSHead (
PSDevice         pDevice,
BYTE             byPktType,
void *pvRTS,
unsigned int             cbFrameLength,
BOOL             bNeedAck,
BOOL             bDisCRC,
PSEthernetHeader psEthHeader,
WORD             wCurrentRate,
BYTE             byFBOption
)
static
void
s_vFillCTSHead (
PSDevice pDevice,
unsigned int     uDMAIdx,
BYTE     byPktType,
void *pvCTS,
unsigned int     cbFrameLength,
BOOL     bNeedAck,
BOOL     bDisCRC,
WORD     wCurrentRate,
BYTE     byFBOption
)
static
void
s_vGenerateTxParameter (
PSDevice         pDevice,
BYTE             byPktType,
WORD             wCurrentRate,
void *pTxBufHead,
void *pvRrvTime,
void *pvRTS,
void *pvCTS,
unsigned int             cbFrameSize,
BOOL             bNeedACK,
unsigned int             uDMAIdx,
PSEthernetHeader psEthHeader
)
BOOL
s_bPacketToWirelessUsb(
PSDevice         pDevice,
BYTE             byPktType,
PBYTE            usbPacketBuf,
BOOL             bNeedEncryption,
unsigned int             uSkbPacketLen,
unsigned int             uDMAIdx,
PSEthernetHeader psEthHeader,
PBYTE            pPacket,
PSKeyItem        pTransmitKey,
unsigned int             uNodeIndex,
WORD             wCurrentRate,
unsigned int             *pcbHeaderLen,
unsigned int             *pcbTotalLen
)
void
s_vGenerateMACHeader (
PSDevice         pDevice,
PBYTE            pbyBufferAddr,
WORD             wDuration,
PSEthernetHeader psEthHeader,
BOOL             bNeedEncrypt,
WORD             wFragType,
unsigned int             uDMAIdx,
unsigned int             uFragIdx
)
CMD_STATUS csMgmt_xmit(
PSDevice pDevice,
PSTxMgmtPacket pPacket
)
CMD_STATUS
csBeacon_xmit(
PSDevice pDevice,
PSTxMgmtPacket pPacket
)
void
vDMA0_tx_80211(PSDevice  pDevice, struct sk_buff *skb)
int nsDMA_tx_packet(PSDevice pDevice, unsigned int uDMAIdx, struct sk_buff *skb)
BOOL
bRelayPacketSend (
PSDevice pDevice,
PBYTE    pbySkbData,
unsigned int     uDataLen,
unsigned int     uNodeIndex
)
