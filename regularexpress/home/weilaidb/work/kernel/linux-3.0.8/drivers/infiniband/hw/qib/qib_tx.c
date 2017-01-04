static unsigned qib_hol_timeout_ms = 3000;
module_param_named(hol_timeout_ms, qib_hol_timeout_ms, uint, S_IRUGO);
MODULE_PARM_DESC(hol_timeout_ms,
"duration of user app suspension after link failure");
unsigned qib_sdma_fetch_arb = 1;
module_param_named(fetch_arb, qib_sdma_fetch_arb, uint, S_IRUGO);
MODULE_PARM_DESC(fetch_arb, "IBA7220: change SDMA descriptor arbitration");
void qib_disarm_piobufs(struct qib_devdata *dd, unsigned first, unsigned cnt)
int qib_disarm_piobufs_ifneeded(struct qib_ctxtdata *rcd)
static struct qib_pportdata *is_sdma_buf(struct qib_devdata *dd, unsigned i)
static int find_ctxt(struct qib_devdata *dd, unsigned bufn)
void qib_disarm_piobufs_set(struct qib_devdata *dd, unsigned long *mask,
unsigned cnt)
static void update_send_bufs(struct qib_devdata *dd)
static noinline void no_send_bufs(struct qib_devdata *dd)
u32 __iomem *qib_getsendbuf_range(struct qib_devdata *dd, u32 *pbufnum,
u32 first, u32 last)
void qib_sendbuf_done(struct qib_devdata *dd, unsigned n)
void qib_chg_pioavailkernel(struct qib_devdata *dd, unsigned start,
unsigned len, u32 avail, struct qib_ctxtdata *rcd)
void qib_cancel_sends(struct qib_pportdata *ppd)
void qib_force_pio_avail_update(struct qib_devdata *dd)
void qib_hol_down(struct qib_pportdata *ppd)
void qib_hol_init(struct qib_pportdata *ppd)
void qib_hol_up(struct qib_pportdata *ppd)
void qib_hol_event(unsigned long opaque)
