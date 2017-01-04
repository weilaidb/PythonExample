#define __RTL871X_EEPROM_H__
#define	RTL8712_EEPROM_ID		0x8712
#define	EEPROM_MAX_SIZE			256
#define	CLOCK_RATE			50
#define EEPROM_READ_OPCODE		06
#define EEPROM_WRITE_OPCODE		05
#define EEPROM_ERASE_OPCODE		07
#define EEPROM_EWEN_OPCODE		19
#define EEPROM_EWDS_OPCODE		16
#define	EEPROM_CID_DEFAULT		0x0
#define	EEPROM_CID_ALPHA		0x1
#define	EEPROM_CID_Senao		0x3
#define	EEPROM_CID_NetCore		0x5
#define	EEPROM_CID_CAMEO		0X8
#define	EEPROM_CID_SITECOM		0x9
#define	EEPROM_CID_COREGA		0xB
#define	EEPROM_CID_EDIMAX_BELKIN	0xC
#define	EEPROM_CID_SERCOMM_BELKIN	0xE
#define	EEPROM_CID_CAMEO1		0xF
#define	EEPROM_CID_WNC_COREGA		0x12
#define	EEPROM_CID_CLEVO		0x13
#define	EEPROM_CID_WHQL			0xFE
enum RT_CUSTOMER_ID ;
struct eeprom_priv ;
void r8712_eeprom_write16(struct _adapter *padapter, u16 reg, u16 data);
u16 r8712_eeprom_read16(struct _adapter *padapter, u16 reg);
