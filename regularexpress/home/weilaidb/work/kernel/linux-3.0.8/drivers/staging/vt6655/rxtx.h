#define __RXTX_H__
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
);
unsigned int
cbGetFragCount(
PSDevice         pDevice,
PSKeyItem        pTransmitKey,
unsigned int	cbFrameBodySize,
PSEthernetHeader psEthHeader
);
void
vGenerateFIFOHeader(PSDevice pDevice, unsigned char byPktTyp, unsigned char *pbyTxBufferAddr,
bool bNeedEncrypt, unsigned int	cbPayloadSize, unsigned int uDMAIdx, PSTxDesc pHeadTD,
PSEthernetHeader psEthHeader, unsigned char *pPacket, PSKeyItem pTransmitKey,
unsigned int uNodeIndex, unsigned int *puMACfragNum, unsigned int *pcbHeaderSize);
void vDMA0_tx_80211(PSDevice  pDevice, struct sk_buff *skb, unsigned char *pbMPDU, unsigned int cbMPDULen);
CMD_STATUS csMgmt_xmit(PSDevice pDevice, PSTxMgmtPacket pPacket);
CMD_STATUS csBeacon_xmit(PSDevice pDevice, PSTxMgmtPacket pPacket);
