#define BY_RF2959_REG_LEN     23
#define CB_RF2959_INIT_SEQ    15
#define SWITCH_CHANNEL_DELAY_RF2959 200
#define RF2959_PWR_IDX_LEN    32
#define BY_MA2825_REG_LEN     23
#define CB_MA2825_INIT_SEQ    13
#define SWITCH_CHANNEL_DELAY_MA2825 200
#define MA2825_PWR_IDX_LEN    31
#define BY_AL2230_REG_LEN     23
#define CB_AL2230_INIT_SEQ    15
#define SWITCH_CHANNEL_DELAY_AL2230 200
#define AL2230_PWR_IDX_LEN    64
#define BY_UW2451_REG_LEN     23
#define CB_UW2451_INIT_SEQ    6
#define SWITCH_CHANNEL_DELAY_UW2451 200
#define UW2451_PWR_IDX_LEN    25
#define BY_MA2829_REG_LEN     23
#define CB_MA2829_INIT_SEQ    13
#define SWITCH_CHANNEL_DELAY_MA2829 200
#define MA2829_PWR_IDX_LEN    64
#define BY_AL7230_REG_LEN     23
#define CB_AL7230_INIT_SEQ    16
#define SWITCH_CHANNEL_DELAY_AL7230 200
#define AL7230_PWR_IDX_LEN    64
#define BY_UW2452_REG_LEN     23
#define CB_UW2452_INIT_SEQ    5
#define SWITCH_CHANNEL_DELAY_UW2452 100
#define UW2452_PWR_IDX_LEN    64
#define BY_VT3226_REG_LEN     23
#define CB_VT3226_INIT_SEQ    12
#define SWITCH_CHANNEL_DELAY_VT3226 200
#define VT3226_PWR_IDX_LEN    16
const unsigned long dwAL2230InitTable[CB_AL2230_INIT_SEQ] = ;
const unsigned long dwAL2230ChannelTable0[CB_MAX_CHANNEL] = ;
const unsigned long dwAL2230ChannelTable1[CB_MAX_CHANNEL] = ;
unsigned long dwAL2230PowerTable[AL2230_PWR_IDX_LEN] = ;
const unsigned long dwAL7230InitTable[CB_AL7230_INIT_SEQ] = ;
const unsigned long dwAL7230InitTableAMode[CB_AL7230_INIT_SEQ] = ;
const unsigned long dwAL7230ChannelTable0[CB_MAX_CHANNEL] = ;
const unsigned long dwAL7230ChannelTable1[CB_MAX_CHANNEL] = ;
const unsigned long dwAL7230ChannelTable2[CB_MAX_CHANNEL] = ;
bool s_bAL7230Init (unsigned long dwIoBase)
bool s_bAL7230SelectChannel (unsigned long dwIoBase, unsigned char byChannel)
bool IFRFbWriteEmbeded (unsigned long dwIoBase, unsigned long dwData)
bool RFbAL2230Init (unsigned long dwIoBase)
bool RFbAL2230SelectChannel (unsigned long dwIoBase, unsigned char byChannel)
bool RFbInit (
PSDevice  pDevice
)
bool RFbShutDown (
PSDevice  pDevice
)
bool RFbSelectChannel (unsigned long dwIoBase, unsigned char byRFType, unsigned char byChannel)
bool RFvWriteWakeProgSyn (unsigned long dwIoBase, unsigned char byRFType, unsigned int uChannel)
bool RFbSetPower (
PSDevice  pDevice,
unsigned int uRATE,
unsigned int uCH
)
bool RFbRawSetPower (
PSDevice  pDevice,
unsigned char byPwr,
unsigned int uRATE
)
void
RFvRSSITodBm (
PSDevice pDevice,
unsigned char byCurrRSSI,
long *    pldBm
)
bool RFbAL7230SelectChannelPostProcess (unsigned long dwIoBase, unsigned char byOldChannel, unsigned char byNewChannel)
