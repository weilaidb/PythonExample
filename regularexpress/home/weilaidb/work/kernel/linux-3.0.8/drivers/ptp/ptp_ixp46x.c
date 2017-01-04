#define DRIVER		"ptp_ixp46x"
#define N_EXT_TS	2
#define MASTER_GPIO	8
#define MASTER_IRQ	25
#define SLAVE_GPIO	7
#define SLAVE_IRQ	24
struct ixp_clock ;
DEFINE_SPINLOCK(register_lock);
static u64 ixp_systime_read(struct ixp46x_ts_regs *regs)
static void ixp_systime_write(struct ixp46x_ts_regs *regs, u64 ns)
static irqreturn_t isr(int irq, void *priv)
static int ptp_ixp_adjfreq(struct ptp_clock_info *ptp, s32 ppb)
static int ptp_ixp_adjtime(struct ptp_clock_info *ptp, s64 delta)
static int ptp_ixp_gettime(struct ptp_clock_info *ptp, struct timespec *ts)
static int ptp_ixp_settime(struct ptp_clock_info *ptp,
const struct timespec *ts)
static int ptp_ixp_enable(struct ptp_clock_info *ptp,
struct ptp_clock_request *rq, int on)
static struct ptp_clock_info ptp_ixp_caps = ;
static struct ixp_clock ixp_clock;
static int setup_interrupt(int gpio)
static void __exit ptp_ixp_exit(void)
static int __init ptp_ixp_init(void)
module_init(ptp_ixp_init);
module_exit(ptp_ixp_exit);
MODULE_AUTHOR("Richard Cochran <richard.cochran@omicron.at>");
MODULE_DESCRIPTION("PTP clock using the IXP46X timer");
MODULE_LICENSE("GPL");
