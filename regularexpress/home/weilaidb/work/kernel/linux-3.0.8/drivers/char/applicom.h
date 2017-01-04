#define __LINUX_APPLICOM_H__
#define DATA_TO_PC_READY      0x00
#define TIC_OWNER_TO_PC       0x01
#define NUMCARD_OWNER_TO_PC   0x02
#define TIC_DES_TO_PC         0x03
#define NUMCARD_DES_TO_PC     0x04
#define DATA_FROM_PC_READY    0x05
#define TIC_OWNER_FROM_PC     0x06
#define NUMCARD_OWNER_FROM_PC 0x07
#define TIC_DES_FROM_PC       0x08
#define NUMCARD_DES_FROM_PC   0x09
#define ACK_FROM_PC_READY     0x0E
#define TIC_ACK_FROM_PC       0x0F
#define NUMCARD_ACK_FROM_PC   0x010
#define TYP_ACK_FROM_PC       0x011
#define CONF_END_TEST         0x012
#define ERROR_CODE            0x016
#define PARAMETER_ERROR       0x018
#define VERS                  0x01E
#define RAM_TO_PC             0x040
#define RAM_FROM_PC           0x0170
#define TYPE_CARD             0x03C0
#define SERIAL_NUMBER         0x03DA
#define RAM_IT_FROM_PC        0x03FE
#define RAM_IT_TO_PC          0x03FF
struct mailbox;
struct st_ram_io
;
