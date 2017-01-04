#define ECRC_POLICY_DEFAULT 0
#define ECRC_POLICY_OFF     1
#define ECRC_POLICY_ON      2
static int ecrc_policy = ECRC_POLICY_DEFAULT;
static const char *ecrc_policy_str[] = ;
static int enable_ecrc_checking(struct pci_dev *dev)
static int disable_ecrc_checking(struct pci_dev *dev)
void pcie_set_ecrc_checking(struct pci_dev *dev)
void pcie_ecrc_get_policy(char *str)
