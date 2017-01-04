#define GTCFR_STP(x)		((x) & 1 ? 1 << 5 : 1 << 1)
#define GTCFR_RST(x)		((x) & 1 ? 1 << 4 : 1 << 0)
#define GTMDR_ICLK_MASK		(3 << 1)
#define GTMDR_ICLK_ICAS		(0 << 1)
#define GTMDR_ICLK_ICLK		(1 << 1)
#define GTMDR_ICLK_SLGO		(2 << 1)
#define GTMDR_FRR		(1 << 3)
#define GTMDR_ORI		(1 << 4)
#define GTMDR_SPS(x)		((x) << 8)
struct gtm_timers_regs  __attribute__ ((packed));
struct gtm ;
static LIST_HEAD(gtms);
struct gtm_timer *gtm_get_timer16(void)
EXPORT_SYMBOL(gtm_get_timer16);
struct gtm_timer *gtm_get_specific_timer16(struct gtm *gtm,
unsigned int timer)
EXPORT_SYMBOL(gtm_get_specific_timer16);
void gtm_put_timer16(struct gtm_timer *tmr)
EXPORT_SYMBOL(gtm_put_timer16);
static int gtm_set_ref_timer16(struct gtm_timer *tmr, int frequency,
int reference_value, bool free_run)
int gtm_set_timer16(struct gtm_timer *tmr, unsigned long usec, bool reload)
EXPORT_SYMBOL(gtm_set_timer16);
int gtm_set_exact_timer16(struct gtm_timer *tmr, u16 usec, bool reload)
EXPORT_SYMBOL(gtm_set_exact_timer16);
void gtm_stop_timer16(struct gtm_timer *tmr)
EXPORT_SYMBOL(gtm_stop_timer16);
void gtm_ack_timer16(struct gtm_timer *tmr, u16 events)
EXPORT_SYMBOL(gtm_ack_timer16);
static void __init gtm_set_shortcuts(struct device_node *np,
struct gtm_timer *timers,
struct gtm_timers_regs __iomem *regs)
static int __init fsl_gtm_init(void)
arch_initcall(fsl_gtm_init);
