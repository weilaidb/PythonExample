#define EPROM_DELAY 10
#define EPROM_ANAPARAM_ADDRLWORD 0xd
#define EPROM_ANAPARAM_ADDRHWORD 0xe
#define EPROM_RFCHIPID 0x6
#define EPROM_TXPW_BASE 0x05
#define EPROM_RFCHIPID_RTL8225U 5
#define EPROM_RF_PARAM 0x4
#define EPROM_CONFIG2 0xc
#define EPROM_VERSION 0x1E
#define MAC_ADR 0x7
#define CIS 0x18
#define EPROM_TXPW0 0x16
#define EPROM_TXPW2 0x1b
#define EPROM_TXPW1 0x3d
u32 eprom_read(struct r8192_priv *priv, u32 addr);
