#define CLKSPEEDREG_TYPE1	(void __iomem *)KSEG1ADDR(0x0b000014)
#define CLKSPEEDREG_TYPE2	(void __iomem *)KSEG1ADDR(0x0f000014)
#define CLKSP(x)		((x) & 0x001f)
#define CLKSP_VR4133(x)	((x) & 0x0007)
#define DIV2B			0x8000
#define DIV3B			0x4000
#define DIV4B			0x2000
#define DIVT(x)		(((x) & 0xf000) >> 12)
#define DIVVT(x)		(((x) & 0x0f00) >> 8)
#define TDIVMODE(x)		(2 << (((x) & 0x1000) >> 12))
#define VTDIVMODE(x)		(((x) & 0x0700) >> 8)
static unsigned long vr41xx_vtclock;
static unsigned long vr41xx_tclock;
unsigned long vr41xx_get_vtclock_frequency(void)
EXPORT_SYMBOL_GPL(vr41xx_get_vtclock_frequency);
unsigned long vr41xx_get_tclock_frequency(void)
EXPORT_SYMBOL_GPL(vr41xx_get_tclock_frequency);
static inline uint16_t read_clkspeed(void)
static inline unsigned long calculate_pclock(uint16_t clkspeed)
static inline unsigned long calculate_vtclock(uint16_t clkspeed, unsigned long pclock)
static inline unsigned long calculate_tclock(uint16_t clkspeed, unsigned long pclock,
unsigned long vtclock)
void vr41xx_calculate_clock_frequency(void)
EXPORT_SYMBOL_GPL(vr41xx_calculate_clock_frequency);
