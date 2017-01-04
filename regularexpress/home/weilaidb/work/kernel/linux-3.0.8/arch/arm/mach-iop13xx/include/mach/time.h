#define _IOP13XX_TIME_H_
#define IRQ_IOP_TIMER0 IRQ_IOP13XX_TIMER0
#define IOP_TMR_EN	    0x02
#define IOP_TMR_RELOAD	    0x04
#define IOP_TMR_PRIVILEGED 0x08
#define IOP_TMR_RATIO_1_1  0x00
#define IOP13XX_XSI_FREQ_RATIO_MASK	(3 << 19)
#define IOP13XX_XSI_FREQ_RATIO_2   	(0 << 19)
#define IOP13XX_XSI_FREQ_RATIO_3	(1 << 19)
#define IOP13XX_XSI_FREQ_RATIO_4	(2 << 19)
#define IOP13XX_CORE_FREQ_MASK		(7 << 16)
#define IOP13XX_CORE_FREQ_600		(0 << 16)
#define IOP13XX_CORE_FREQ_667		(1 << 16)
#define IOP13XX_CORE_FREQ_800		(2 << 16)
#define IOP13XX_CORE_FREQ_933		(3 << 16)
#define IOP13XX_CORE_FREQ_1000		(4 << 16)
#define IOP13XX_CORE_FREQ_1200		(5 << 16)
void iop_init_time(unsigned long tickrate);
static inline unsigned long iop13xx_core_freq(void)
static inline unsigned long iop13xx_xsi_bus_ratio(void)
static inline u32 read_tmr0(void)
static inline void write_tmr0(u32 val)
static inline void write_tmr1(u32 val)
static inline u32 read_tcr0(void)
static inline void write_tcr0(u32 val)
static inline u32 read_tcr1(void)
static inline void write_tcr1(u32 val)
static inline void write_trr0(u32 val)
static inline void write_trr1(u32 val)
static inline void write_tisr(u32 val)
