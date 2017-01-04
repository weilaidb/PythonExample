#define _LINUX_MWAVEDD_H
extern int mwave_debug;
extern int mwave_3780i_irq;
extern int mwave_3780i_io;
extern int mwave_uart_irq;
extern int mwave_uart_io;
#define PRINTK_ERROR printk
#define KERN_ERR_MWAVE KERN_ERR "mwave: "
#define TRACE_MWAVE     0x0001
#define TRACE_SMAPI     0x0002
#define TRACE_3780I     0x0004
#define TRACE_TP3780I   0x0008
#define PRINTK_1(f,s)                       \
if (f & (mwave_debug))
#define PRINTK_2(f,s,v1)                    \
if (f & (mwave_debug))
#define PRINTK_3(f,s,v1,v2)                 \
if (f & (mwave_debug))
#define PRINTK_4(f,s,v1,v2,v3)              \
if (f & (mwave_debug))
#define PRINTK_5(f,s,v1,v2,v3,v4)           \
if (f & (mwave_debug))
#define PRINTK_6(f,s,v1,v2,v3,v4,v5)        \
if (f & (mwave_debug))
#define PRINTK_7(f,s,v1,v2,v3,v4,v5,v6)     \
if (f & (mwave_debug))
#define PRINTK_8(f,s,v1,v2,v3,v4,v5,v6,v7)  \
if (f & (mwave_debug))
#define PRINTK_1(f,s)
#define PRINTK_2(f,s,v1)
#define PRINTK_3(f,s,v1,v2)
#define PRINTK_4(f,s,v1,v2,v3)
#define PRINTK_5(f,s,v1,v2,v3,v4)
#define PRINTK_6(f,s,v1,v2,v3,v4,v5)
#define PRINTK_7(f,s,v1,v2,v3,v4,v5,v6)
#define PRINTK_8(f,s,v1,v2,v3,v4,v5,v6,v7)
typedef struct _MWAVE_IPC  MWAVE_IPC;
typedef struct _MWAVE_DEVICE_DATA  MWAVE_DEVICE_DATA, *pMWAVE_DEVICE_DATA;
extern MWAVE_DEVICE_DATA mwave_s_mdd;
