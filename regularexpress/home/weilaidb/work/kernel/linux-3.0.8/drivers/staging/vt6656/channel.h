#define _CHANNEL_H_
typedef struct tagSChannelTblElement  SChannelTblElement, *PSChannelTblElement;
BOOL    ChannelValid(unsigned int CountryCode, unsigned int ChannelNum);
void    CHvInitChannelTable(void *pDeviceHandler);
BYTE    CHbyGetChannelMapping(BYTE byChannelNumber);
BOOL CHvChannelGetList(unsigned int uCountryCodeIdx, PBYTE pbyChannelTable);
