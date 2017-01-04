static int qib_tune_pcie_caps(struct qib_devdata *);
static int qib_tune_pcie_coalesce(struct qib_devdata *);
int qib_pcie_init(struct pci_dev *pdev, const struct pci_device_id *ent)
int qib_pcie_ddinit(struct qib_devdata *dd, struct pci_dev *pdev,
const struct pci_device_id *ent)
void qib_pcie_ddcleanup(struct qib_devdata *dd)
static void qib_msix_setup(struct qib_devdata *dd, int pos, u32 *msixcnt,
struct msix_entry *msix_entry)
static int qib_msi_setup(struct qib_devdata *dd, int pos)
int qib_pcie_params(struct qib_devdata *dd, u32 minw, u32 *nent,
struct msix_entry *entry)
int qib_reinit_intr(struct qib_devdata *dd)
void qib_nomsi(struct qib_devdata *dd)
void qib_nomsix(struct qib_devdata *dd)
void qib_enable_intx(struct pci_dev *pdev)
void qib_pcie_getcmd(struct qib_devdata *dd, u16 *cmd, u8 *iline, u8 *cline)
void qib_pcie_reenable(struct qib_devdata *dd, u16 cmd, u8 iline, u8 cline)
static int fld2val(int wd, int mask)
static int val2fld(int wd, int mask)
static int qib_pcie_coalesce;
module_param_named(pcie_coalesce, qib_pcie_coalesce, int, S_IRUGO);
MODULE_PARM_DESC(pcie_coalesce, "tune PCIe colescing on some Intel chipsets");
static int qib_tune_pcie_coalesce(struct qib_devdata *dd)
static int qib_pcie_caps;
module_param_named(pcie_caps, qib_pcie_caps, int, S_IRUGO);
MODULE_PARM_DESC(pcie_caps, "Max PCIe tuning: Payload (4lsb), ReadReq (D4..7)");
static int qib_tune_pcie_caps(struct qib_devdata *dd)
static pci_ers_result_t
qib_pci_error_detected(struct pci_dev *pdev, pci_channel_state_t state)
static pci_ers_result_t
qib_pci_mmio_enabled(struct pci_dev *pdev)
static pci_ers_result_t
qib_pci_slot_reset(struct pci_dev *pdev)
static pci_ers_result_t
qib_pci_link_reset(struct pci_dev *pdev)
static void
qib_pci_resume(struct pci_dev *pdev)
struct pci_error_handlers qib_pci_err_handler = ;
