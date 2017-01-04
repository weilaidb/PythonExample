#define _DEBUG_H
#define DBG 0
#undef	DBG
#define DBG 1
#if DBG
#define DBG_LVL 5
#define DBG_ERROR_ON        0x00000001L
#define DBG_WARNING_ON      0x00000002L
#define DBG_NOTICE_ON       0x00000004L
#define DBG_TRACE_ON        0x00000008L
#define DBG_VERBOSE_ON      0x00000010L
#define DBG_PARAM_ON        0x00000020L
#define DBG_BREAK_ON        0x00000040L
#define DBG_RX_ON           0x00000100L
#define DBG_TX_ON           0x00000200L
#define DBG_DS_ON           0x00000400L
#define DBG_DEFAULTS        (DBG_ERROR_ON | DBG_WARNING_ON | DBG_BREAK_ON)
#define DBG_FLAGS(A)        ((A)->DebugFlag)
#define DBG_NAME(A)         ((A)->dbgName)
#define DBG_LEVEL(A)        ((A)->dbgLevel)
#   define PRINTK(S...)     printk(S)
#   define DBG_PRINT(S...)  PRINTK(KERN_DEBUG S)
#   define DBG_PRINTC(S...) PRINTK(S)
#   define DBG_TRAP
#define _ENTER_STR          ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"
#define _LEAVE_STR          "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"
#define _DBG_ENTER(A)       DBG_PRINT("%s:%.*s:%s\n", DBG_NAME(A), ++DBG_LEVEL(A), _ENTER_STR, __FUNC__)
#define _DBG_LEAVE(A)       DBG_PRINT("%s:%.*s:%s\n", DBG_NAME(A), DBG_LEVEL(A)--, _LEAVE_STR, __FUNC__)
#define DBG_FUNC(F)         static const char *__FUNC__ = F;
#define DBG_ENTER(A)
#define DBG_LEAVE(A)
#define DBG_PARAM(A, N, F, S...)
#define DBG_ERROR(A, S...)
#define DBG_WARNING(A, S...)
#define DBG_NOTICE(A, S...)
#define DBG_TRACE(A, S...)   do  while (0)
#define DBG_RX(A, S...)
#define DBG_TX(A, S...)
#define DBG_DS(A, S...)
#define DBG_ASSERT(C)
typedef struct  dbg_info_t;
#define DBG_DEFN
#define DBG_TRAP
#define DBG_FUNC(F)
#define DBG_PRINT(S...)
#define DBG_ENTER(A)
#define DBG_LEAVE(A)
#define DBG_PARAM(A, N, F, S...)
#define DBG_ERROR(A, S...)
#define DBG_WARNING(A, S...)
#define DBG_NOTICE(A, S...)
#define DBG_TRACE(A, S...)
#define DBG_RX(A, S...)
#define DBG_TX(A, S...)
#define DBG_DS(A, S...)
#define DBG_ASSERT(C)
