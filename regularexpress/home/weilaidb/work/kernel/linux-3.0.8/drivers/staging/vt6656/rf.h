#define __RF_H__
#define RF_RFMD2959         0x01
#define RF_MAXIMAG          0x02
#define RF_AL2230           0x03
#define RF_GCT5103          0x04
#define RF_UW2451           0x05
#define RF_MAXIMG           0x06
#define RF_MAXIM2829        0x07
#define RF_UW2452           0x08
#define RF_VT3226           0x09
#define RF_AIROHA7230       0x0a
#define RF_UW2453           0x0b
#define RF_VT3226D0         0x0c
#define RF_VT3342A0         0x0d
#define RF_AL2230S          0x0e
#define RF_EMU              0x80
#define RF_MASK             0x7F
extern const BYTE RFaby11aChannelIndex[200];
BOOL IFRFbWriteEmbeded(PSDevice pDevice, DWORD dwData);
BOOL RFbSetPower(PSDevice pDevice, unsigned int uRATE, unsigned int uCH);
BOOL RFbRawSetPower(
PSDevice  pDevice,
BYTE      byPwr,
unsigned int      uRATE
);
void RFvRSSITodBm(PSDevice pDevice, BYTE byCurrRSSI, long *pldBm);
void RFbRFTableDownload(PSDevice pDevice);
BOOL s_bVT3226D0_11bLoCurrentAdjust(
PSDevice    pDevice,
BYTE        byChannel,
BOOL        b11bMode
);
