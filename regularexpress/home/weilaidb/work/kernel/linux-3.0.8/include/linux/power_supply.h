#define __LINUX_POWER_SUPPLY_H__
enum ;
enum ;
enum ;
enum ;
enum ;
enum power_supply_property ;
enum power_supply_type ;
union power_supply_propval ;
struct power_supply ;
struct power_supply_info ;
extern struct power_supply *power_supply_get_by_name(char *name);
extern void power_supply_changed(struct power_supply *psy);
extern int power_supply_am_i_supplied(struct power_supply *psy);
extern int power_supply_set_battery_charged(struct power_supply *psy);
#if defined(CONFIG_POWER_SUPPLY) || defined(CONFIG_POWER_SUPPLY_MODULE)
extern int power_supply_is_system_supplied(void);
static inline int power_supply_is_system_supplied(void)
extern int power_supply_register(struct device *parent,
struct power_supply *psy);
extern void power_supply_unregister(struct power_supply *psy);
extern struct class *power_supply_class;
static inline bool power_supply_is_amp_property(enum power_supply_property psp)
static inline bool power_supply_is_watt_property(enum power_supply_property psp)
