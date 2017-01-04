static int          msglevel                =MSG_LEVEL_INFO;
#define BY_AL2230_REG_LEN     23
#define CB_AL2230_INIT_SEQ    15
#define AL2230_PWR_IDX_LEN    64
#define BY_AL7230_REG_LEN     23
#define CB_AL7230_INIT_SEQ    16
#define AL7230_PWR_IDX_LEN    64
#define BY_VT3226_REG_LEN     23
#define CB_VT3226_INIT_SEQ    11
#define VT3226_PWR_IDX_LEN    64
#define BY_VT3342_REG_LEN     23
#define CB_VT3342_INIT_SEQ    13
#define VT3342_PWR_IDX_LEN    64
BYTE abyAL2230InitTable[CB_AL2230_INIT_SEQ][3] = ;
BYTE abyAL2230ChannelTable0[CB_MAX_CHANNEL_24G][3] = ;
BYTE abyAL2230ChannelTable1[CB_MAX_CHANNEL_24G][3] = ;
BYTE abyAL7230InitTable[CB_AL7230_INIT_SEQ][3] = ;
BYTE abyAL7230InitTableAMode[CB_AL7230_INIT_SEQ][3] = ;
BYTE abyAL7230ChannelTable0[CB_MAX_CHANNEL][3] = ;
BYTE abyAL7230ChannelTable1[CB_MAX_CHANNEL][3] = ;
BYTE abyAL7230ChannelTable2[CB_MAX_CHANNEL][3] = ;
BYTE abyVT3226_InitTable[CB_VT3226_INIT_SEQ][3] = ;
BYTE abyVT3226D0_InitTable[CB_VT3226_INIT_SEQ][3] = ;
BYTE abyVT3226_ChannelTable0[CB_MAX_CHANNEL_24G][3] = ;
BYTE abyVT3226_ChannelTable1[CB_MAX_CHANNEL_24G][3] = ;
DWORD dwVT3226D0LoCurrentTable[CB_MAX_CHANNEL_24G] = ;
BYTE abyVT3342A0_InitTable[CB_VT3342_INIT_SEQ][3] = ;
BYTE abyVT3342_ChannelTable0[CB_MAX_CHANNEL][3] = ;
BYTE abyVT3342_ChannelTable1[CB_MAX_CHANNEL][3] = ;
const DWORD dwAL2230PowerTable[AL2230_PWR_IDX_LEN] = ;
const BYTE RFaby11aChannelIndex[200] = ;
BOOL IFRFbWriteEmbeded (PSDevice pDevice, DWORD dwData)
BOOL RFbSetPower (
PSDevice  pDevice,
unsigned int      uRATE,
unsigned int      uCH
)
BOOL RFbRawSetPower (
PSDevice  pDevice,
BYTE      byPwr,
unsigned int      uRATE
)
void
RFvRSSITodBm (
PSDevice pDevice,
BYTE     byCurrRSSI,
long *    pldBm
)
void
RFbRFTableDownload (
PSDevice pDevice
)
BOOL s_bVT3226D0_11bLoCurrentAdjust(
PSDevice    pDevice,
BYTE        byChannel,
BOOL        b11bMode)
