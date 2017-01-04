#define _ASMm68k_APOLLOHW_H_
extern u_long apollo_model;
#define APOLLO_UNKNOWN (0)
#define APOLLO_DN3000 (1)
#define APOLLO_DN3010 (2)
#define APOLLO_DN3500 (3)
#define APOLLO_DN4000 (4)
#define APOLLO_DN4500 (5)
#define DECLARE_2681_FIELD(x) unsigned char x; unsigned char dummy##x
struct SCN2681 ;
struct mc146818 ;
#define IO_BASE 0x80000000
extern u_long sio01_physaddr;
extern u_long sio23_physaddr;
extern u_long rtc_physaddr;
extern u_long pica_physaddr;
extern u_long picb_physaddr;
extern u_long cpuctrl_physaddr;
extern u_long timer_physaddr;
#define SAU7_SIO01_PHYSADDR 0x10400
#define SAU7_SIO23_PHYSADDR 0x10500
#define SAU7_RTC_PHYSADDR 0x10900
#define SAU7_PICA 0x11000
#define SAU7_PICB 0x11100
#define SAU7_CPUCTRL 0x10100
#define SAU7_TIMER 0x010800
#define SAU8_SIO01_PHYSADDR 0x8400
#define SAU8_RTC_PHYSADDR 0x8900
#define SAU8_PICA 0x9400
#define SAU8_PICB 0x9500
#define SAU8_CPUCTRL 0x8100
#define SAU8_TIMER 0x8800
#define sio01 ((*(volatile struct SCN2681 *)(IO_BASE + sio01_physaddr)))
#define sio23 ((*(volatile struct SCN2681 *)(IO_BASE + sio23_physaddr)))
#define rtc (((volatile struct mc146818 *)(IO_BASE + rtc_physaddr)))
#define cpuctrl (*(volatile unsigned int *)(IO_BASE + cpuctrl_physaddr))
#define pica (IO_BASE + pica_physaddr)
#define picb (IO_BASE + picb_physaddr)
#define timer (IO_BASE + timer_physaddr)
#define addr_xlat_map ((unsigned short *)(IO_BASE + 0x17000))
#define isaIO2mem(x) (((((x) & 0x3f8)  << 7) | (((x) & 0xfc00) >> 6) | ((x) & 0x7)) + 0x40000 + IO_BASE)
#define IRQ_APOLLO	IRQ_USER
