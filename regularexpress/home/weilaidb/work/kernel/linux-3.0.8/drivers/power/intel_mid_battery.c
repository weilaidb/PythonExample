#define DRIVER_NAME "pmic_battery"
static int debug;
module_param(debug, int, 0444);
MODULE_PARM_DESC(debug, "Flag to enable PMIC Battery debug messages.");
#define PMIC_BATT_DRV_INFO_UPDATED	1
#define PMIC_BATT_PRESENT		1
#define PMIC_BATT_NOT_PRESENT		0
#define PMIC_USB_PRESENT		PMIC_BATT_PRESENT
#define PMIC_USB_NOT_PRESENT		PMIC_BATT_NOT_PRESENT
#define PMIC_BATT_CHR_SCHRGINT_ADDR	0xD2
#define PMIC_BATT_CHR_SBATOVP_MASK	(1 << 1)
#define PMIC_BATT_CHR_STEMP_MASK	(1 << 2)
#define PMIC_BATT_CHR_SCOMP_MASK	(1 << 3)
#define PMIC_BATT_CHR_SUSBDET_MASK	(1 << 4)
#define PMIC_BATT_CHR_SBATDET_MASK	(1 << 5)
#define PMIC_BATT_CHR_SDCLMT_MASK	(1 << 6)
#define PMIC_BATT_CHR_SUSBOVP_MASK	(1 << 7)
#define PMIC_BATT_CHR_EXCPT_MASK	0xC6
#define PMIC_BATT_ADC_ACCCHRG_MASK	(1 << 31)
#define PMIC_BATT_ADC_ACCCHRGVAL_MASK	0x7FFFFFFF
#define PMIC_BATT_CHR_IPC_FCHRG_SUBID	0x4
#define PMIC_BATT_CHR_IPC_TCHRG_SUBID	0x6
enum batt_charge_type ;
enum batt_event ;
struct pmic_power_module_info ;
static unsigned int delay_time = 2000;
static enum power_supply_property pmic_usb_props[] = ;
static enum power_supply_property pmic_battery_props[] = ;
struct battery_property ;
#define IPCMSG_BATTERY		0xEF
#define IPC_CMD_CC_WR		  0
#define IPC_CMD_CC_RD		  1
#define IPC_CMD_BATTERY_PROPERTY  2
static int pmic_scu_ipc_battery_cc_read(u32 *value)
static int pmic_scu_ipc_battery_property_get(struct battery_property *prop)
static int pmic_scu_ipc_set_charger(int charger)
static void pmic_battery_log_event(enum batt_event event)
static void pmic_battery_read_status(struct pmic_power_module_info *pbi)
static int pmic_usb_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static inline unsigned long mAStouAh(unsigned long v)
static int pmic_battery_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static void pmic_battery_monitor(struct work_struct *work)
static int pmic_battery_set_charger(struct pmic_power_module_info *pbi,
enum batt_charge_type chrg)
static irqreturn_t pmic_battery_interrupt_handler(int id, void *dev)
static void pmic_battery_handle_intrpt(struct work_struct *work)
static __devinit int probe(int irq, struct device *dev)
static int __devinit platform_pmic_battery_probe(struct platform_device *pdev)
static int __devexit platform_pmic_battery_remove(struct platform_device *pdev)
static struct platform_driver platform_pmic_battery_driver = ;
static int __init platform_pmic_battery_module_init(void)
static void __exit platform_pmic_battery_module_exit(void)
module_init(platform_pmic_battery_module_init);
module_exit(platform_pmic_battery_module_exit);
MODULE_AUTHOR("Nithish Mahalingam <nithish.mahalingam@intel.com>");
MODULE_DESCRIPTION("Intel Moorestown PMIC Battery Driver");
MODULE_LICENSE("GPL");
