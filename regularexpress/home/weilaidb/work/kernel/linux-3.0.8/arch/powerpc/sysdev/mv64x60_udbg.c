#define MPSC_0_CR1_OFFSET	0x000c
#define MPSC_0_CR2_OFFSET	0x0010
#define MPSC_CHR_2_TCS		(1 << 9)
#define MPSC_0_CHR_10_OFFSET	0x0030
#define MPSC_INTR_CAUSE_OFF_0	0x0004
#define MPSC_INTR_CAUSE_OFF_1	0x000c
#define MPSC_INTR_CAUSE_RCC	(1<<6)
static void __iomem *mpsc_base;
static void __iomem *mpsc_intr_cause;
static void mv64x60_udbg_putc(char c)
static int mv64x60_udbg_testc(void)
static int mv64x60_udbg_getc(void)
static int mv64x60_udbg_getc_poll(void)
static void mv64x60_udbg_init(void)
void mv64x60_init_early(void)
