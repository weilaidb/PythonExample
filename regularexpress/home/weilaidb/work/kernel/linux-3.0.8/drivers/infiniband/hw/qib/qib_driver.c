const char ib_qib_version[] = QIB_IDSTR "\n";
DEFINE_SPINLOCK(qib_devs_lock);
LIST_HEAD(qib_dev_list);
DEFINE_MUTEX(qib_mutex);
unsigned qib_ibmtu;
module_param_named(ibmtu, qib_ibmtu, uint, S_IRUGO);
MODULE_PARM_DESC(ibmtu, "Set max IB MTU (0=2KB, 1=256, 2=512, ... 5=4096");
unsigned qib_compat_ddr_negotiate = 1;
module_param_named(compat_ddr_negotiate, qib_compat_ddr_negotiate, uint,
S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(compat_ddr_negotiate,
"Attempt pre-IBTA 1.2 DDR speed negotiation");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("QLogic <support@qlogic.com>");
MODULE_DESCRIPTION("QLogic IB driver");
#define QIB_PIO_MAXIBHDR 128
#define QIB_MAX_PKT_RECV 64
struct qlogic_ib_stats qib_stats;
const char *qib_get_unit_name(int unit)
int qib_count_active_units(void)
int qib_count_units(int *npresentp, int *nupp)
int qib_wait_linkstate(struct qib_pportdata *ppd, u32 state, int msecs)
int qib_set_linkstate(struct qib_pportdata *ppd, u8 newstate)
static inline void *qib_get_egrbuf(const struct qib_ctxtdata *rcd, u32 etail)
static u32 qib_rcv_hdrerr(struct qib_ctxtdata *rcd, struct qib_pportdata *ppd,
u32 ctxt, u32 eflags, u32 l, u32 etail,
__le32 *rhf_addr, struct qib_message_header *rhdr)
u32 qib_kreceive(struct qib_ctxtdata *rcd, u32 *llic, u32 *npkts)
int qib_set_mtu(struct qib_pportdata *ppd, u16 arg)
int qib_set_lid(struct qib_pportdata *ppd, u32 lid, u8 lmc)
#define LED_OVER_FREQ_SHIFT 8
#define LED_OVER_FREQ_MASK (0xFF<<LED_OVER_FREQ_SHIFT)
#define LED_OVER_BOTH_OFF (8)
static void qib_run_led_override(unsigned long opaque)
void qib_set_led_override(struct qib_pportdata *ppd, unsigned int val)
int qib_reset_device(int unit)
