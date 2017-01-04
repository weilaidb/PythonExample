#define UBC_CBR(idx)	(0xff200000 + (0x20 * idx))
#define UBC_CRR(idx)	(0xff200004 + (0x20 * idx))
#define UBC_CAR(idx)	(0xff200008 + (0x20 * idx))
#define UBC_CAMR(idx)	(0xff20000c + (0x20 * idx))
#define UBC_CCMFR	0xff200600
#define UBC_CBCR	0xff200620
#define UBC_CRR_PCB	(1 << 1)
#define UBC_CRR_BIE	(1 << 0)
#define UBC_CBR_CE	(1 << 0)
static struct sh_ubc sh4a_ubc;
static void sh4a_ubc_enable(struct arch_hw_breakpoint *info, int idx)
static void sh4a_ubc_disable(struct arch_hw_breakpoint *info, int idx)
static void sh4a_ubc_enable_all(unsigned long mask)
static void sh4a_ubc_disable_all(void)
static unsigned long sh4a_ubc_active_mask(void)
static unsigned long sh4a_ubc_triggered_mask(void)
static void sh4a_ubc_clear_triggered_mask(unsigned long mask)
static struct sh_ubc sh4a_ubc = ;
static int __init sh4a_ubc_init(void)
arch_initcall(sh4a_ubc_init);
