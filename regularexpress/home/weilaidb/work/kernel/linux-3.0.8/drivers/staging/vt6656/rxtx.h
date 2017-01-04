#define __RXTX_H__
typedef struct tagSRTSDataF  SRTSDataF, *PSRTSDataF;
typedef struct tagSCTSDataF  SCTSDataF, *PSCTSDataF;
typedef struct tagSMICHDR  SMICHDR, *PSMICHDR;
typedef struct tagSTX_NAF_G_RTS
TX_NAF_G_RTS, *PTX_NAF_G_RTS;
typedef struct tagSTX_NAF_G_RTS_MIC
TX_NAF_G_RTS_MIC, *PTX_NAF_G_RTS_MIC;
typedef struct tagSTX_NAF_G_CTS
TX_NAF_G_CTS, *PTX_NAF_G_CTS;
typedef struct tagSTX_NAF_G_CTS_MIC
TX_NAF_G_CTS_MIC, *PTX_NAF_G_CTS_MIC;
typedef struct tagSTX_NAF_G_BEACON
TX_NAF_G_BEACON, *PTX_NAF_G_BEACON;
typedef struct tagSTX_NAF_AB_RTS
TX_NAF_AB_RTS, *PTX_NAF_AB_RTS;
typedef struct tagSTX_NAF_AB_RTS_MIC
TX_NAF_AB_RTS_MIC, *PTX_NAF_AB_RTS_MIC;
typedef struct tagSTX_NAF_AB_CTS
TX_NAF_AB_CTS, *PTX_NAF_AB_CTS;
typedef struct tagSTX_NAF_AB_CTS_MIC
TX_NAF_AB_CTS_MIC, *PTX_NAF_AB_CTS_MIC;
typedef struct tagSTX_NAF_AB_BEACON
TX_NAF_AB_BEACON, *PTX_NAF_AB_BEACON;
typedef struct tagSTX_AF_G_RTS
TX_AF_G_RTS, *PTX_AF_G_RTS;
typedef struct tagSTX_AF_G_RTS_MIC
TX_AF_G_RTS_MIC, *PTX_AF_G_RTS_MIC;
typedef struct tagSTX_AF_G_CTS
TX_AF_G_CTS, *PTX_AF_G_CTS;
typedef struct tagSTX_AF_G_CTS_MIC
TX_AF_G_CTS_MIC, *PTX_AF_G_CTS_MIC;
typedef struct tagSTX_AF_A_RTS
TX_AF_A_RTS, *PTX_AF_A_RTS;
typedef struct tagSTX_AF_A_RTS_MIC
TX_AF_A_RTS_MIC, *PTX_AF_A_RTS_MIC;
typedef struct tagSTX_AF_A_CTS
TX_AF_A_CTS, *PTX_AF_A_CTS;
typedef struct tagSTX_AF_A_CTS_MIC
TX_AF_A_CTS_MIC, *PTX_AF_A_CTS_MIC;
typedef union tagUTX_BUFFER_CONTAINER
TX_BUFFER_CONTAINER, *PTX_BUFFER_CONTAINER;
typedef struct tagSTX_BUFFER
TX_BUFFER, *PTX_BUFFER;
typedef struct tagSBEACON_BUFFER
BEACON_BUFFER, *PBEACON_BUFFER;
BOOL
bPacketToWirelessUsb(
PSDevice         pDevice,
BYTE             byPktType,
PBYTE            usbPacketBuf,
BOOL             bNeedEncrypt,
unsigned int             cbPayloadSize,
unsigned int             uDMAIdx,
PSEthernetHeader psEthHeader,
PBYTE            pPacket,
PSKeyItem        pTransmitKey,
unsigned int             uNodeIndex,
WORD             wCurrentRate,
unsigned int             *pcbHeaderLen,
unsigned int             *pcbTotalLen
);
void vDMA0_tx_80211(PSDevice  pDevice, struct sk_buff *skb);
int nsDMA_tx_packet(PSDevice pDevice,
unsigned int uDMAIdx,
struct sk_buff *skb);
CMD_STATUS csMgmt_xmit(PSDevice pDevice, PSTxMgmtPacket pPacket);
CMD_STATUS csBeacon_xmit(PSDevice pDevice, PSTxMgmtPacket pPacket);
BOOL bRelayPacketSend(PSDevice pDevice, PBYTE pbySkbData,
unsigned int uDataLen, unsigned int uNodeIndex);
