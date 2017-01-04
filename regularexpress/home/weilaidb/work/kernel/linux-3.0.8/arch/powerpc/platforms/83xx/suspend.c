#define PMCCR1_NEXT_STATE       0x0C
#define PMCCR1_NEXT_STATE_SHIFT 2
#define PMCCR1_CURR_STATE       0x03
#define IMMR_SYSCR_OFFSET       0x100
#define IMMR_RCW_OFFSET         0x900
#define RCW_PCI_HOST            0x80000000
void mpc83xx_enter_deep_sleep(phys_addr_t immrbase);
struct mpc83xx_pmc ;
struct mpc83xx_rcw ;
struct mpc83xx_clock ;
struct mpc83xx_syscr ;
struct mpc83xx_saved ;
struct pmc_type ;
static struct platform_device *pmc_dev;
static int has_deep_sleep, deep_sleeping;
static int pmc_irq;
static struct mpc83xx_pmc __iomem *pmc_regs;
static struct mpc83xx_clock __iomem *clock_regs;
static struct mpc83xx_syscr __iomem *syscr_regs;
static struct mpc83xx_saved saved_regs;
static int is_pci_agent, wake_from_pci;
static phys_addr_t immrbase;
static int pci_pm_state;
static DECLARE_WAIT_QUEUE_HEAD(agent_wq);
int fsl_deep_sleep(void)
EXPORT_SYMBOL(fsl_deep_sleep);
static int mpc83xx_change_state(void)
static irqreturn_t pmc_irq_handler(int irq, void *dev_id)
static void mpc83xx_suspend_restore_regs(void)
static void mpc83xx_suspend_save_regs(void)
static int mpc83xx_suspend_enter(suspend_state_t state)
static void mpc83xx_suspend_end(void)
static int mpc83xx_suspend_valid(suspend_state_t state)
static int mpc83xx_suspend_begin(suspend_state_t state)
static int agent_thread_fn(void *data)
static void mpc83xx_set_agent(void)
static int mpc83xx_is_pci_agent(void)
static const struct platform_suspend_ops mpc83xx_suspend_ops = ;
static struct of_device_id pmc_match[];
static int pmc_probe(struct platform_device *ofdev)
static int pmc_remove(struct platform_device *ofdev)
;
static struct pmc_type pmc_types[] = ;
static struct of_device_id pmc_match[] = ;
static struct platform_driver pmc_driver = ;
static int pmc_init(void)
module_init(pmc_init);
