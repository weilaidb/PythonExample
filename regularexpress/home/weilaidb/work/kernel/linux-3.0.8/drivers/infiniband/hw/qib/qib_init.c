#define QIB_MIN_USER_CTXT_BUFCNT 7
#define QLOGIC_IB_R_SOFTWARE_MASK 0xFF
#define QLOGIC_IB_R_SOFTWARE_SHIFT 24
#define QLOGIC_IB_R_EMULATOR_MASK (1ULL<<62)
ushort qib_cfgctxts;
module_param_named(cfgctxts, qib_cfgctxts, ushort, S_IRUGO);
MODULE_PARM_DESC(cfgctxts, "Set max number of contexts to use");
ushort qib_mini_init;
module_param_named(mini_init, qib_mini_init, ushort, S_IRUGO);
MODULE_PARM_DESC(mini_init, "If set, do minimal diag init");
unsigned qib_n_krcv_queues;
module_param_named(krcvqs, qib_n_krcv_queues, uint, S_IRUGO);
MODULE_PARM_DESC(krcvqs, "number of kernel receive queues per IB port");
unsigned qib_wc_pat = 1;
module_param_named(wc_pat, qib_wc_pat, uint, S_IRUGO);
MODULE_PARM_DESC(wc_pat, "enable write-combining via PAT mechanism");
struct workqueue_struct *qib_cq_wq;
static void verify_interrupt(unsigned long);
static struct idr qib_unit_table;
u32 qib_cpulist_count;
unsigned long *qib_cpulist;
void qib_set_ctxtcnt(struct qib_devdata *dd)
int qib_create_ctxts(struct qib_devdata *dd)
struct qib_ctxtdata *qib_create_ctxtdata(struct qib_pportdata *ppd, u32 ctxt)
void qib_init_pportdata(struct qib_pportdata *ppd, struct qib_devdata *dd,
u8 hw_pidx, u8 port)
static int init_pioavailregs(struct qib_devdata *dd)
static void init_shadow_tids(struct qib_devdata *dd)
static int loadtime_init(struct qib_devdata *dd)
static int init_after_reset(struct qib_devdata *dd)
static void enable_chip(struct qib_devdata *dd)
static void verify_interrupt(unsigned long opaque)
static void init_piobuf_state(struct qib_devdata *dd)
int qib_init(struct qib_devdata *dd, int reinit)
int __attribute__((weak)) qib_enable_wc(struct qib_devdata *dd)
void __attribute__((weak)) qib_disable_wc(struct qib_devdata *dd)
static inline struct qib_devdata *__qib_lookup(int unit)
struct qib_devdata *qib_lookup(int unit)
static void qib_stop_timers(struct qib_devdata *dd)
static void qib_shutdown_device(struct qib_devdata *dd)
void qib_free_ctxtdata(struct qib_devdata *dd, struct qib_ctxtdata *rcd)
static void qib_verify_pioperf(struct qib_devdata *dd)
void qib_free_devdata(struct qib_devdata *dd)
struct qib_devdata *qib_alloc_devdata(struct pci_dev *pdev, size_t extra)
void qib_disable_after_error(struct qib_devdata *dd)
static void __devexit qib_remove_one(struct pci_dev *);
static int __devinit qib_init_one(struct pci_dev *,
const struct pci_device_id *);
#define DRIVER_LOAD_MSG "QLogic " QIB_DRV_NAME " loaded: "
#define PFX QIB_DRV_NAME ": "
static const struct pci_device_id qib_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, qib_pci_tbl);
struct pci_driver qib_driver = ;
static int __init qlogic_ib_init(void)
module_init(qlogic_ib_init);
static void __exit qlogic_ib_cleanup(void)
module_exit(qlogic_ib_cleanup);
static void cleanup_device_data(struct qib_devdata *dd)
static void qib_postinit_cleanup(struct qib_devdata *dd)
static int __devinit qib_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit qib_remove_one(struct pci_dev *pdev)
int qib_create_rcvhdrq(struct qib_devdata *dd, struct qib_ctxtdata *rcd)
int qib_setup_eagerbufs(struct qib_ctxtdata *rcd)
int init_chip_wc_pat(struct qib_devdata *dd, u32 vl15buflen)
