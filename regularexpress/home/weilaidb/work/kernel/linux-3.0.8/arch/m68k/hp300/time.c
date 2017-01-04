#define CLOCKBASE	0xf05f8000
#define	CLKCR1		0x1
#define	CLKCR2		0x3
#define	CLKCR3		CLKCR1
#define	CLKSR		CLKCR2
#define	CLKMSB1		0x5
#define	CLKMSB2		0x9
#define	CLKMSB3		0xD
#define USECS_PER_JIFFY (1000000/HZ)
#define INTVAL ((10000 / 4) - 1)
static irqreturn_t hp300_tick(int irq, void *dev_id)
unsigned long hp300_gettimeoffset(void)
void __init hp300_sched_init(irq_handler_t vector)
