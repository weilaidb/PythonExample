#define DA9030_FAULT_LOG		0x0a
#define DA9030_FAULT_LOG_OVER_TEMP	(1 << 7)
#define DA9030_FAULT_LOG_VBAT_OVER	(1 << 4)
#define DA9030_CHARGE_CONTROL		0x28
#define DA9030_CHRG_CHARGER_ENABLE	(1 << 7)
#define DA9030_ADC_MAN_CONTROL		0x30
#define DA9030_ADC_TBATREF_ENABLE	(1 << 5)
#define DA9030_ADC_LDO_INT_ENABLE	(1 << 4)
#define DA9030_ADC_AUTO_CONTROL		0x31
#define DA9030_ADC_TBAT_ENABLE		(1 << 5)
#define DA9030_ADC_VBAT_IN_TXON		(1 << 4)
#define DA9030_ADC_VCH_ENABLE		(1 << 3)
#define DA9030_ADC_ICH_ENABLE		(1 << 2)
#define DA9030_ADC_VBAT_ENABLE		(1 << 1)
#define DA9030_ADC_AUTO_SLEEP_ENABLE	(1 << 0)
#define DA9030_VBATMON		0x32
#define DA9030_VBATMONTXON	0x33
#define DA9030_TBATHIGHP	0x34
#define DA9030_TBATHIGHN	0x35
#define DA9030_TBATLOW		0x36
#define DA9030_VBAT_RES		0x41
#define DA9030_VBATMIN_RES	0x42
#define DA9030_VBATMINTXON_RES	0x43
#define DA9030_ICHMAX_RES	0x44
#define DA9030_ICHMIN_RES	0x45
#define DA9030_ICHAVERAGE_RES	0x46
#define DA9030_VCHMAX_RES	0x47
#define DA9030_VCHMIN_RES	0x48
#define DA9030_TBAT_RES		0x49
struct da9030_adc_res ;
struct da9030_battery_thresholds ;
struct da9030_charger ;
static inline int da9030_reg_to_mV(int reg)
static inline int da9030_millivolt_to_reg(int mV)
static inline int da9030_reg_to_mA(int reg)
static int bat_debug_show(struct seq_file *s, void *data)
static int debug_open(struct inode *inode, struct file *file)
static const struct file_operations bat_debug_fops = ;
static struct dentry *da9030_bat_create_debugfs(struct da9030_charger *charger)
static void da9030_bat_remove_debugfs(struct da9030_charger *charger)
static inline struct dentry *da9030_bat_create_debugfs(struct da9030_charger *charger)
static inline void da9030_bat_remove_debugfs(struct da9030_charger *charger)
static inline void da9030_read_adc(struct da9030_charger *charger,
struct da9030_adc_res *adc)
static void da9030_charger_update_state(struct da9030_charger *charger)
static void da9030_set_charge(struct da9030_charger *charger, int on)
static void da9030_charger_check_state(struct da9030_charger *charger)
static void da9030_charging_monitor(struct work_struct *work)
static enum power_supply_property da9030_battery_props[] = ;
static void da9030_battery_check_status(struct da9030_charger *charger,
union power_supply_propval *val)
static void da9030_battery_check_health(struct da9030_charger *charger,
union power_supply_propval *val)
static int da9030_battery_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static void da9030_battery_vbat_event(struct da9030_charger *charger)
static int da9030_battery_event(struct notifier_block *nb, unsigned long event,
void *data)
static void da9030_battery_convert_thresholds(struct da9030_charger *charger,
struct da9030_battery_info *pdata)
static void da9030_battery_setup_psy(struct da9030_charger *charger)
;
static int da9030_battery_charger_init(struct da9030_charger *charger)
static int da9030_battery_probe(struct platform_device *pdev)
static int da9030_battery_remove(struct platform_device *dev)
static struct platform_driver da903x_battery_driver = ;
static int da903x_battery_init(void)
static void da903x_battery_exit(void)
module_init(da903x_battery_init);
module_exit(da903x_battery_exit);
MODULE_DESCRIPTION("DA9030 battery charger driver");
MODULE_AUTHOR("Mike Rapoport, CompuLab");
MODULE_LICENSE("GPL");
