#define _INC_SBE_PROMFORMAT_H_
#define STRUCT_OFFSET(type, symbol)  ((long)&(((type *)0)->symbol))
#define PROM_FORMAT_Unk   (-1)
#define PROM_FORMAT_TYPE1   1
#define PROM_FORMAT_TYPE2   2
typedef struct
FLD_TYPE1;
typedef struct
FLD_TYPE2;
#define SBE_EEPROM_SIZE    128
#define SBE_MFG_INFO_SIZE  sizeof(FLD_TYPE2)
typedef union
PROMFORMAT;
