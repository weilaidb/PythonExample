#define LT_GETRESULT  0x00
#define LT_WRITEMEM   0x01
#define LT_READMEM    0x02
#define LT_GETFLAGS   0x04
#define LT_SETFLAGS   0x05
#define LT_INIT       0x10
#define LT_SENDLAP    0x13
#define LT_RCVLAP     0x14
#define LT_FLAG_ALLLAP 0x04
struct lt_getresult ;
struct lt_mem ;
struct lt_setflags ;
struct lt_getflags ;
struct lt_init ;
struct lt_sendlap ;
struct lt_rcvlap ;
union lt_command ;
typedef union lt_command lt_command;
