#define CMU_TYPE1_BASE	0x0b000060UL
#define CMU_TYPE1_SIZE	0x4
#define CMU_TYPE2_BASE	0x0f000060UL
#define CMU_TYPE2_SIZE	0x4
#define CMU_TYPE3_BASE	0x0f000060UL
#define CMU_TYPE3_SIZE	0x8
#define CMUCLKMSK	0x0
#define MSKPIU		0x0001
#define MSKSIU		0x0002
#define MSKAIU		0x0004
#define MSKKIU		0x0008
#define MSKFIR		0x0010
#define MSKDSIU	0x0820
#define MSKCSI		0x0040
#define MSKPCIU	0x0080
#define MSKSSIU	0x0100
#define MSKSHSP	0x0200
#define MSKFFIR	0x0400
#define MSKSCSI	0x1000
#define MSKPPCIU	0x2000
#define CMUCLKMSK2	0x4
#define MSKCEU		0x0001
#define MSKMAC0	0x0002
#define MSKMAC1	0x0004
static void __iomem *cmu_base;
static uint16_t cmuclkmsk, cmuclkmsk2;
static DEFINE_SPINLOCK(cmu_lock);
#define cmu_read(offset)		readw(cmu_base + (offset))
#define cmu_write(offset, value)	writew((value), cmu_base + (offset))
void vr41xx_supply_clock(vr41xx_clock_t clock)
EXPORT_SYMBOL_GPL(vr41xx_supply_clock);
void vr41xx_mask_clock(vr41xx_clock_t clock)
EXPORT_SYMBOL_GPL(vr41xx_mask_clock);
static int __init vr41xx_cmu_init(void)
core_initcall(vr41xx_cmu_init);
