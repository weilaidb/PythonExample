void ipath_disarm_senderrbufs(struct ipath_devdata *dd)
#define E_SUM_PKTERRS \
(INFINIPATH_E_RHDRLEN | INFINIPATH_E_RBADTID | \
INFINIPATH_E_RBADVERSION | INFINIPATH_E_RHDR | \
INFINIPATH_E_RLONGPKTLEN | INFINIPATH_E_RSHORTPKTLEN | \
INFINIPATH_E_RMAXPKTLEN | INFINIPATH_E_RMINPKTLEN | \
INFINIPATH_E_RFORMATERR | INFINIPATH_E_RUNSUPVL | \
INFINIPATH_E_RUNEXPCHAR | INFINIPATH_E_REBP)
#define E_SUM_ERRS \
(INFINIPATH_E_SPIOARMLAUNCH | INFINIPATH_E_SUNEXPERRPKTNUM | \
INFINIPATH_E_SDROPPEDDATAPKT | INFINIPATH_E_SDROPPEDSMPPKT | \
INFINIPATH_E_SMAXPKTLEN | INFINIPATH_E_SUNSUPVL | \
INFINIPATH_E_SMINPKTLEN | INFINIPATH_E_SPKTLEN | \
INFINIPATH_E_INVALIDADDR)
#define E_SPKT_ERRS_IGNORE \
(INFINIPATH_E_SDROPPEDDATAPKT | INFINIPATH_E_SDROPPEDSMPPKT | \
INFINIPATH_E_SMAXPKTLEN | INFINIPATH_E_SMINPKTLEN | \
INFINIPATH_E_SPKTLEN)
#define E_SUM_LINK_PKTERRS \
(INFINIPATH_E_SDROPPEDDATAPKT | INFINIPATH_E_SDROPPEDSMPPKT | \
INFINIPATH_E_SMINPKTLEN | INFINIPATH_E_SPKTLEN | \
INFINIPATH_E_RSHORTPKTLEN | INFINIPATH_E_RMINPKTLEN | \
INFINIPATH_E_RUNEXPCHAR)
static u64 handle_e_sum_errs(struct ipath_devdata *dd, ipath_err_t errs)
#define INFINIPATH_HWE_TXEMEMPARITYERR_MSG(a) \
#define INFINIPATH_HWE_RXEMEMPARITYERR_MSG(a) \
static const struct ipath_hwerror_msgs ipath_generic_hwerror_msgs[] = ;
static void ipath_format_hwmsg(char *msg, size_t msgl, const char *hwmsg)
void ipath_format_hwerrors(u64 hwerrs,
const struct ipath_hwerror_msgs *hwerrmsgs,
size_t nhwerrmsgs,
char *msg, size_t msgl)
static char *ib_linkstate(struct ipath_devdata *dd, u64 ibcs)
void signal_ib_event(struct ipath_devdata *dd, enum ib_event_type ev)
static void handle_e_ibstatuschanged(struct ipath_devdata *dd,
ipath_err_t errs)
static void handle_supp_msgs(struct ipath_devdata *dd,
unsigned supp_msgs, char *msg, u32 msgsz)
static unsigned handle_frequent_errors(struct ipath_devdata *dd,
ipath_err_t errs, char *msg,
u32 msgsz, int *noprint)
static void handle_sdma_errors(struct ipath_devdata *dd, ipath_err_t errs)
static void handle_sdma_intr(struct ipath_devdata *dd, u64 istat)
static int handle_hdrq_full(struct ipath_devdata *dd)
static int handle_errors(struct ipath_devdata *dd, ipath_err_t errs)
void ipath_clear_freeze(struct ipath_devdata *dd)
static noinline void ipath_bad_intr(struct ipath_devdata *dd, u32 *unexpectp)
static noinline void ipath_bad_regread(struct ipath_devdata *dd)
static void handle_layer_pioavail(struct ipath_devdata *dd)
static void handle_urcv(struct ipath_devdata *dd, u64 istat)
irqreturn_t ipath_intr(int irq, void *data)
