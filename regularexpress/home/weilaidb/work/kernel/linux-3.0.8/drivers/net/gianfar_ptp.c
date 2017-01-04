struct gianfar_ptp_registers ;
#define ALM1P                 (1<<31)
#define ALM2P                 (1<<30)
#define FS                    (1<<28)
#define PP1L                  (1<<27)
#define PP2L                  (1<<26)
#define TCLK_PERIOD_SHIFT     (16)
#define TCLK_PERIOD_MASK      (0x3ff)
#define RTPE                  (1<<15)
#define FRD                   (1<<14)
#define ESFDP                 (1<<11)
#define ESFDE                 (1<<10)
#define ETEP2                 (1<<9)
#define ETEP1                 (1<<8)
#define COPH                  (1<<7)
#define CIPH                  (1<<6)
#define TMSR                  (1<<5)
#define BYP                   (1<<3)
#define TE                    (1<<2)
#define CKSEL_SHIFT           (0)
#define CKSEL_MASK            (0x3)
#define ETS2                  (1<<25)
#define ETS1                  (1<<24)
#define ALM2                  (1<<17)
#define ALM1                  (1<<16)
#define PP1                   (1<<7)
#define PP2                   (1<<6)
#define PP3                   (1<<5)
#define ETS2EN                (1<<25)
#define ETS1EN                (1<<24)
#define ALM2EN                (1<<17)
#define ALM1EN                (1<<16)
#define PP1EN                 (1<<7)
#define PP2EN                 (1<<6)
#define TXP2                  (1<<9)
#define TXP1                  (1<<8)
#define RXP                   (1<<0)
#define TXP2EN                (1<<9)
#define TXP1EN                (1<<8)
#define RXPEN                 (1<<0)
#define STAT_VEC_SHIFT        (0)
#define STAT_VEC_MASK         (0x3f)
#define PRSC_OCK_SHIFT        (0)
#define PRSC_OCK_MASK         (0xffff)
#define DRIVER		"gianfar_ptp"
#define DEFAULT_CKSEL	1
#define N_ALARM		1
#define N_EXT_TS	2
#define REG_SIZE	sizeof(struct gianfar_ptp_registers)
struct etsects ;
static u64 tmr_cnt_read(struct etsects *etsects)
static void tmr_cnt_write(struct etsects *etsects, u64 ns)
static void set_alarm(struct etsects *etsects)
static void set_fipers(struct etsects *etsects)
static irqreturn_t isr(int irq, void *priv)
static int ptp_gianfar_adjfreq(struct ptp_clock_info *ptp, s32 ppb)
static int ptp_gianfar_adjtime(struct ptp_clock_info *ptp, s64 delta)
static int ptp_gianfar_gettime(struct ptp_clock_info *ptp, struct timespec *ts)
static int ptp_gianfar_settime(struct ptp_clock_info *ptp,
const struct timespec *ts)
static int ptp_gianfar_enable(struct ptp_clock_info *ptp,
struct ptp_clock_request *rq, int on)
static struct ptp_clock_info ptp_gianfar_caps = ;
static int get_of_u32(struct device_node *node, char *str, u32 *val)
static int gianfar_ptp_probe(struct platform_device *dev)
static int gianfar_ptp_remove(struct platform_device *dev)
static struct of_device_id match_table[] = ;
static struct platform_driver gianfar_ptp_driver = ;
static int __init ptp_gianfar_init(void)
module_init(ptp_gianfar_init);
static void __exit ptp_gianfar_exit(void)
module_exit(ptp_gianfar_exit);
MODULE_AUTHOR("Richard Cochran <richard.cochran@omicron.at>");
MODULE_DESCRIPTION("PTP clock using the eTSEC");
MODULE_LICENSE("GPL");
