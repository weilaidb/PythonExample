#define _ASM_TIMER_REGS_H
extern unsigned long __nongprelbss __clkin_clock_speed_HZ;
extern unsigned long __nongprelbss __ext_bus_clock_speed_HZ;
extern unsigned long __nongprelbss __res_bus_clock_speed_HZ;
extern unsigned long __nongprelbss __sdram_clock_speed_HZ;
extern unsigned long __nongprelbss __core_bus_clock_speed_HZ;
extern unsigned long __nongprelbss __core_clock_speed_HZ;
extern unsigned long __nongprelbss __dsu_clock_speed_HZ;
extern unsigned long __nongprelbss __serial_clock_speed_HZ;
#define __get_CLKC()	()
static inline void __set_CLKC(unsigned long v)
#define __get_TCTR()	()
#define __get_TPRV()	()
#define __get_TPRCKSL()	()
#define __get_TCSR(T)	()
#define __get_TxCKSL(T)	()
#define __get_TCSR_DATA(T) ()
#define __set_TCTR(V)	do  while(0)
#define __set_TPRV(V)	do  while(0)
#define __set_TPRCKSL(V) do  while(0)
#define __set_TCSR(T,V)	\
do  while(0)
#define __set_TxCKSL(T,V) \
do  while(0)
#define __set_TCSR_DATA(T,V) __set_TCSR(T, (V) << 24)
#define __set_TxCKSL_DATA(T,V) __set_TxCKSL(T, TxCKSL_EIGHT | __TxCKSL_SELECT((V)))
#define CLKC_CMODE		0x0f000000
#define CLKC_SLPL		0x000f0000
#define CLKC_P0			0x00000100
#define CLKC_CM			0x00000003
#define CLKC_CMODE_s		24
#define TCTR_MODE_0		0x00000000
#define TCTR_MODE_2		0x04000000
#define TCTR_MODE_4		0x08000000
#define TCTR_MODE_5		0x0a000000
#define TCTR_RL_LATCH		0x00000000
#define TCTR_RL_RW_LOW8		0x10000000
#define TCTR_RL_RW_HIGH8	0x20000000
#define TCTR_RL_RW_LH8		0x30000000
#define TCTR_SC_CTR0		0x00000000
#define TCTR_SC_CTR1		0x40000000
#define TCTR_SC_CTR2		0x80000000
#define TCTR_CNT0		0x02000000
#define TCTR_CNT1		0x04000000
#define TCTR_CNT2		0x08000000
#define TCTR_NSTATUS		0x10000000
#define TCTR_NCOUNT		0x20000000
#define TCTR_SC_READBACK	0xc0000000
#define TCSRx_DATA		0xff000000
#define TCSRx_OUTPUT		0x80000000
#define TCSRx_NULLCOUNT		0x40000000
#define TCSRx_RL		0x30000000
#define TCSRx_MODE		0x07000000
#define TxCKSL_SELECT		0x0f000000
#define __TxCKSL_SELECT(X)	((X) << 24)
#define TxCKSL_EIGHT		0xf0000000
