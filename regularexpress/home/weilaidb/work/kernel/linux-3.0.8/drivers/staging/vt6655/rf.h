#define __RF_H__
#define RF_RFMD2959             0x01
#define RF_MAXIMAG              0x02
#define RF_AIROHA               0x03
#define RF_UW2451               0x05
#define RF_MAXIMG               0x06
#define RF_MAXIM2829            0x07
#define RF_UW2452               0x08
#define RF_AIROHA7230           0x0a
#define RF_UW2453               0x0b
#define RF_VT3226               0x09
#define RF_AL2230S              0x0e
#define RF_NOTHING              0x7E
#define RF_EMU                  0x80
#define RF_MASK                 0x7F
#define ZONE_FCC                0
#define ZONE_MKK1               1
#define ZONE_ETSI               2
#define ZONE_IC                 3
#define ZONE_SPAIN              4
#define ZONE_FRANCE             5
#define ZONE_MKK                6
#define ZONE_ISRAEL             7
#define CB_MAXIM2829_CHANNEL_5G_HIGH    41
#define CB_UW2452_CHANNEL_5G_HIGH       41
bool IFRFbWriteEmbeded(unsigned long dwIoBase, unsigned long dwData);
bool RFbSelectChannel(unsigned long dwIoBase, unsigned char byRFType, unsigned char byChannel);
bool RFbInit (
PSDevice  pDevice
);
bool RFvWriteWakeProgSyn(unsigned long dwIoBase, unsigned char byRFType, unsigned int uChannel);
bool RFbSetPower(PSDevice pDevice, unsigned int uRATE, unsigned int uCH);
bool RFbRawSetPower(
PSDevice  pDevice,
unsigned char byPwr,
unsigned int uRATE
);
void
RFvRSSITodBm(
PSDevice pDevice,
unsigned char byCurrRSSI,
long    *pldBm
);
bool RFbAL7230SelectChannelPostProcess(unsigned long dwIoBase, unsigned char byOldChannel, unsigned char byNewChannel);
