#undef MODULE_PARAM_PREFIX
#define MODULE_PARAM_PREFIX "pcie_aspm."
#define ASPM_STATE_L0S_UP	(1)
#define ASPM_STATE_L0S_DW	(2)
#define ASPM_STATE_L1		(4)
#define ASPM_STATE_L0S		(ASPM_STATE_L0S_UP | ASPM_STATE_L0S_DW)
#define ASPM_STATE_ALL		(ASPM_STATE_L0S | ASPM_STATE_L1)
struct aspm_latency ;
struct pcie_link_state ;
static int aspm_disabled, aspm_force, aspm_clear_state;
static bool aspm_support_enabled = true;
static DEFINE_MUTEX(aspm_lock);
static LIST_HEAD(link_list);
#define POLICY_DEFAULT 0
#define POLICY_PERFORMANCE 1
#define POLICY_POWERSAVE 2
static int aspm_policy;
static const char *policy_str[] = ;
#define LINK_RETRAIN_TIMEOUT HZ
static int policy_to_aspm_state(struct pcie_link_state *link)
static int policy_to_clkpm_state(struct pcie_link_state *link)
static void pcie_set_clkpm_nocheck(struct pcie_link_state *link, int enable)
static void pcie_set_clkpm(struct pcie_link_state *link, int enable)
static void pcie_clkpm_cap_init(struct pcie_link_state *link, int blacklist)
static void pcie_aspm_configure_common_clock(struct pcie_link_state *link)
static u32 calc_l0s_latency(u32 encoding)
static u32 calc_l0s_acceptable(u32 encoding)
static u32 calc_l1_latency(u32 encoding)
static u32 calc_l1_acceptable(u32 encoding)
struct aspm_register_info ;
static void pcie_get_aspm_reg(struct pci_dev *pdev,
struct aspm_register_info *info)
static void pcie_aspm_check_latency(struct pci_dev *endpoint)
static void pcie_aspm_cap_init(struct pcie_link_state *link, int blacklist)
static void pcie_config_aspm_dev(struct pci_dev *pdev, u32 val)
static void pcie_config_aspm_link(struct pcie_link_state *link, u32 state)
static void pcie_config_aspm_path(struct pcie_link_state *link)
static void free_link_state(struct pcie_link_state *link)
static int pcie_aspm_sanity_check(struct pci_dev *pdev)
static struct pcie_link_state *alloc_pcie_link_state(struct pci_dev *pdev)
void pcie_aspm_init_link_state(struct pci_dev *pdev)
static void pcie_update_aspm_capable(struct pcie_link_state *root)
void pcie_aspm_exit_link_state(struct pci_dev *pdev)
void pcie_aspm_pm_state_change(struct pci_dev *pdev)
void pcie_aspm_powersave_config_link(struct pci_dev *pdev)
static void __pci_disable_link_state(struct pci_dev *pdev, int state, bool sem)
void pci_disable_link_state_locked(struct pci_dev *pdev, int state)
EXPORT_SYMBOL(pci_disable_link_state_locked);
void pci_disable_link_state(struct pci_dev *pdev, int state)
EXPORT_SYMBOL(pci_disable_link_state);
static int pcie_aspm_set_policy(const char *val, struct kernel_param *kp)
static int pcie_aspm_get_policy(char *buffer, struct kernel_param *kp)
module_param_call(policy, pcie_aspm_set_policy, pcie_aspm_get_policy,
NULL, 0644);
static ssize_t link_state_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t link_state_store(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t n)
static ssize_t clk_ctl_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t clk_ctl_store(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t n)
static DEVICE_ATTR(link_state, 0644, link_state_show, link_state_store);
static DEVICE_ATTR(clk_ctl, 0644, clk_ctl_show, clk_ctl_store);
static char power_group[] = "power";
void pcie_aspm_create_sysfs_dev_files(struct pci_dev *pdev)
void pcie_aspm_remove_sysfs_dev_files(struct pci_dev *pdev)
static int __init pcie_aspm_disable(char *str)
__setup("pcie_aspm=", pcie_aspm_disable);
void pcie_clear_aspm(void)
void pcie_no_aspm(void)
int pcie_aspm_enabled(void)
EXPORT_SYMBOL(pcie_aspm_enabled);
bool pcie_aspm_support_enabled(void)
EXPORT_SYMBOL(pcie_aspm_support_enabled);
