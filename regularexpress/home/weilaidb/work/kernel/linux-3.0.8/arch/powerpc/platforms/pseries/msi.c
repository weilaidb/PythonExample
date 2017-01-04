static int query_token, change_token;
#define RTAS_QUERY_FN		0
#define RTAS_CHANGE_FN		1
#define RTAS_RESET_FN		2
#define RTAS_CHANGE_MSI_FN	3
#define RTAS_CHANGE_MSIX_FN	4
static struct pci_dn *get_pdn(struct pci_dev *pdev)
static int rtas_change_msi(struct pci_dn *pdn, u32 func, u32 num_irqs)
static void rtas_disable_msi(struct pci_dev *pdev)
static int rtas_query_irq_number(struct pci_dn *pdn, int offset)
static void rtas_teardown_msi_irqs(struct pci_dev *pdev)
static int check_req(struct pci_dev *pdev, int nvec, char *prop_name)
static int check_req_msi(struct pci_dev *pdev, int nvec)
static int check_req_msix(struct pci_dev *pdev, int nvec)
static struct device_node *find_pe_total_msi(struct pci_dev *dev, int *total)
static struct device_node *find_pe_dn(struct pci_dev *dev, int *total)
struct msi_counts ;
static void *count_non_bridge_devices(struct device_node *dn, void *data)
static void *count_spare_msis(struct device_node *dn, void *data)
static int msi_quota_for_device(struct pci_dev *dev, int request)
static int rtas_msi_check_device(struct pci_dev *pdev, int nvec, int type)
static int check_msix_entries(struct pci_dev *pdev)
static int rtas_setup_msi_irqs(struct pci_dev *pdev, int nvec, int type)
static void rtas_msi_pci_irq_fixup(struct pci_dev *pdev)
static int rtas_msi_init(void)
arch_initcall(rtas_msi_init);
