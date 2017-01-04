#define __LINUX_REGULATOR_MACHINE_H_
struct regulator;
#define REGULATOR_CHANGE_VOLTAGE	0x1
#define REGULATOR_CHANGE_CURRENT	0x2
#define REGULATOR_CHANGE_MODE		0x4
#define REGULATOR_CHANGE_STATUS		0x8
#define REGULATOR_CHANGE_DRMS		0x10
struct regulator_state ;
struct regulation_constraints ;
struct regulator_consumer_supply ;
#define REGULATOR_SUPPLY(_name, _dev_name)			\
struct regulator_init_data ;
int regulator_suspend_prepare(suspend_state_t state);
int regulator_suspend_finish(void);
void regulator_has_full_constraints(void);
void regulator_use_dummy_regulator(void);
static inline void regulator_has_full_constraints(void)
static inline void regulator_use_dummy_regulator(void)
