#define POINTER_32BIT dword
#define POINTER_32BIT byte *
#if !defined(MIPS_SCOM)
#define BUFFER_SZ  48
#define MAINT_OFFS 0x380
#define BUFFER_SZ  128
#if defined(PRI)
#define MAINT_OFFS 0xef00
#define MAINT_OFFS 0xff00
#define MIPS_BUFFER_SZ  128
#if defined(PRI)
#define MIPS_MAINT_OFFS 0xef00
#define MIPS_MAINT_OFFS 0xff00
#define LOG                     1
#define MEMR                    2
#define MEMW                    3
#define IOR                     4
#define IOW                     5
#define B1TEST                  6
#define B2TEST                  7
#define BTESTOFF                8
#define DSIG_STATS              9
#define B_CH_STATS              10
#define D_CH_STATS              11
#define BL1_STATS               12
#define BL1_STATS_C             13
#define GET_VERSION             14
#define OS_STATS                15
#define XLOG_SET_MASK           16
#define XLOG_GET_MASK           17
#define DSP_READ                20
#define DSP_WRITE               21
#define OK 0xff
#define MORE_EVENTS 0xfe
#define NO_EVENT 1
struct DSigStruc
;
struct BL1Struc ;
struct L2Struc ;
struct OSStruc ;
typedef union
BUFFER;
typedef union
MIPS_BUFFER;
#if !defined(MIPS_SCOM)
struct pc_maint
;
struct pc_maint
;
struct mi_pc_maint
;
