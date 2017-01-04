#define         __OSD_UTIL_H
#if (defined(KERNEL) && (defined(__FreeBSD__) || defined(__bsdi__)))
# include        "i386/isa/dpt_osd_defs.h"
# include        "osd_defs.h"
#define      DPT_UNALIGNED
#define      DPT_EXPORT
#define      DPT_IMPORT
#define      DPT_RUNTIME_IMPORT  DPT_IMPORT
#if defined (_DPT_MSDOS) || defined (_DPT_WIN_3X)
#define      _DPT_16_BIT
#define      _DPT_32_BIT
#if defined (_DPT_SCO) || defined (_DPT_UNIXWARE) || defined (_DPT_SOLARIS) || defined (_DPT_AIX) || defined (SNI_MIPS) || defined (_DPT_BSDI) || defined (_DPT_FREE_BSD) || defined(_DPT_LINUX)
#define      _DPT_UNIX
#if defined (_DPT_WIN_3x) || defined (_DPT_WIN_4X) || defined (_DPT_WIN_NT) \
|| defined (_DPT_OS2)
#define      _DPT_DLL_SUPPORT
#if !defined (_DPT_MSDOS) && !defined (_DPT_WIN_3X) && !defined (_DPT_NETWARE)
#define      _DPT_PREEMPTIVE
#if !defined (_DPT_MSDOS) && !defined (_DPT_WIN_3X)
#define      _DPT_MULTI_THREADED
#if !defined (_DPT_MSDOS)
#define      _DPT_MULTI_TASKING
#if defined (SNI_MIPS) || defined (_DPT_SOLARIS)
#if defined (_DPT_BIG_ENDIAN)
#if !defined (_DPT_STRICT_ALIGN)
#define _DPT_STRICT_ALIGN
#if !defined (DPTSQO)
#if defined (_DPT_SOLARIS)
#define DPTSQO
#define DPTSQC
#define DPTSQO
#if defined (_DPT_MSDOS) || defined (_DPT_SCO)
#define BYTE unsigned char
#define WORD unsigned short
#define _DPT_TYPEDEFS
typedef unsigned char   uCHAR;
typedef unsigned short  uSHORT;
typedef unsigned int    uINT;
typedef unsigned long   uLONG;
typedef union  access_U;
#if !defined (NULL)
#define      NULL    0
#if (!defined(osdSwap2))
uSHORT       osdSwap2(DPT_UNALIGNED uSHORT *);
#if (!defined(osdSwap3))
uLONG        osdSwap3(DPT_UNALIGNED uLONG *);
# if (!defined(osdSwap4))
uLONG        osdSwap4(DPT_UNALIGNED uLONG *);
# endif
uSHORT       trueSwap2(DPT_UNALIGNED uSHORT *);
uLONG        trueSwap4(DPT_UNALIGNED uLONG *);
uLONG	netSwap4(uLONG val);
#if defined (_DPT_BIG_ENDIAN)
#define NET_SWAP_2(x) (((x) >> 8) | ((x) << 8))
#define NET_SWAP_4(x) netSwap4((x))
#define NET_SWAP_2(x) (x)
#define NET_SWAP_4(x) (x)
DLL_HANDLE_T    osdLoadModule(uCHAR *);
uSHORT          osdUnloadModule(DLL_HANDLE_T);
void *          osdGetFnAddr(DLL_HANDLE_T,uCHAR *);
SEMAPHORE_T     osdCreateNamedSemaphore(char *);
SEMAPHORE_T     osdCreateSemaphore(void);
SEMAPHORE_T              osdCreateEventSemaphore(void);
SEMAPHORE_T             osdCreateNamedEventSemaphore(char *);
uSHORT          osdDestroySemaphore(SEMAPHORE_T);
uLONG           osdRequestSemaphore(SEMAPHORE_T,uLONG);
uSHORT          osdReleaseSemaphore(SEMAPHORE_T);
uLONG                            osdWaitForEventSemaphore(SEMAPHORE_T, uLONG);
uLONG                            osdSignalEventSemaphore(SEMAPHORE_T);
uLONG                            osdResetEventSemaphore(SEMAPHORE_T);
void            osdSwitchThreads(void);
uLONG   osdStartThread(void *,void *);
uLONG osdGetThreadID(void);
void osdWakeThread(uLONG);
void osdSleep(uLONG);
#define DPT_THREAD_PRIORITY_LOWEST 0x00
#define DPT_THREAD_PRIORITY_NORMAL 0x01
#define DPT_THREAD_PRIORITY_HIGHEST 0x02
uCHAR osdSetThreadPriority(uLONG tid, uCHAR priority);
