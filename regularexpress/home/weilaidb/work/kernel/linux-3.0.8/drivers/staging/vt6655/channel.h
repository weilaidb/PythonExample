#define _CHANNEL_H_
typedef struct tagSChannelTblElement SChannelTblElement, *PSChannelTblElement;
bool is_channel_valid(unsigned int CountryCode);
void init_channel_table(void *pDeviceHandler);
unsigned char get_channel_mapping(void *pDeviceHandler, unsigned char byChannelNumber, CARD_PHY_TYPE ePhyType);
bool channel_get_list(unsigned int uCountryCodeIdx, unsigned char *pbyChannelTable);
unsigned char get_channel_number(void *pDeviceHandler, unsigned char byChannelIndex);
bool set_channel(void *pDeviceHandler, unsigned int uConnectionChannel);
void set_country_info(void *pDeviceHandler, CARD_PHY_TYPE ePHYType, void *pIE);
unsigned char set_support_channels(void *pDeviceHandler, unsigned char *pbyIEs);
void set_country_IE(void *pDeviceHandler, void *pIE);
bool get_channel_map_info(void *pDeviceHandler, unsigned int uChannelIndex,
unsigned char *pbyChannelNumber, unsigned char *pbyMap);
void set_channel_map_info(void *pDeviceHandler, unsigned int uChannelIndex,
unsigned char byMap);
void clear_channel_map_info(void *pDeviceHandler);
unsigned char auto_channel_select(void *pDeviceHandler, CARD_PHY_TYPE ePHYType);
