#define __LINUX_REGULATOR_CONSUMER_H_
#define REGULATOR_MODE_FAST			0x1
#define REGULATOR_MODE_NORMAL			0x2
#define REGULATOR_MODE_IDLE			0x4
#define REGULATOR_MODE_STANDBY			0x8
#define REGULATOR_EVENT_UNDER_VOLTAGE		0x01
#define REGULATOR_EVENT_OVER_CURRENT		0x02
#define REGULATOR_EVENT_REGULATION_OUT		0x04
#define REGULATOR_EVENT_FAIL			0x08
#define REGULATOR_EVENT_OVER_TEMP		0x10
#define REGULATOR_EVENT_FORCE_DISABLE		0x20
#define REGULATOR_EVENT_VOLTAGE_CHANGE		0x40
#define REGULATOR_EVENT_DISABLE 		0x80
struct regulator;
struct regulator_bulk_data ;
#if defined(CONFIG_REGULATOR)
struct regulator *__must_check regulator_get(struct device *dev,
const char *id);
struct regulator *__must_check regulator_get_exclusive(struct device *dev,
const char *id);
void regulator_put(struct regulator *regulator);
int regulator_enable(struct regulator *regulator);
int regulator_disable(struct regulator *regulator);
int regulator_force_disable(struct regulator *regulator);
int regulator_is_enabled(struct regulator *regulator);
int regulator_bulk_get(struct device *dev, int num_consumers,
struct regulator_bulk_data *consumers);
int regulator_bulk_enable(int num_consumers,
struct regulator_bulk_data *consumers);
int regulator_bulk_disable(int num_consumers,
struct regulator_bulk_data *consumers);
void regulator_bulk_free(int num_consumers,
struct regulator_bulk_data *consumers);
int regulator_count_voltages(struct regulator *regulator);
int regulator_list_voltage(struct regulator *regulator, unsigned selector);
int regulator_is_supported_voltage(struct regulator *regulator,
int min_uV, int max_uV);
int regulator_set_voltage(struct regulator *regulator, int min_uV, int max_uV);
int regulator_set_voltage_time(struct regulator *regulator,
int old_uV, int new_uV);
int regulator_get_voltage(struct regulator *regulator);
int regulator_sync_voltage(struct regulator *regulator);
int regulator_set_current_limit(struct regulator *regulator,
int min_uA, int max_uA);
int regulator_get_current_limit(struct regulator *regulator);
int regulator_set_mode(struct regulator *regulator, unsigned int mode);
unsigned int regulator_get_mode(struct regulator *regulator);
int regulator_set_optimum_mode(struct regulator *regulator, int load_uA);
int regulator_register_notifier(struct regulator *regulator,
struct notifier_block *nb);
int regulator_unregister_notifier(struct regulator *regulator,
struct notifier_block *nb);
void *regulator_get_drvdata(struct regulator *regulator);
void regulator_set_drvdata(struct regulator *regulator, void *data);
static inline struct regulator *__must_check regulator_get(struct device *dev,
const char *id)
static inline void regulator_put(struct regulator *regulator)
static inline int regulator_enable(struct regulator *regulator)
static inline int regulator_disable(struct regulator *regulator)
static inline int regulator_is_enabled(struct regulator *regulator)
static inline int regulator_bulk_get(struct device *dev,
int num_consumers,
struct regulator_bulk_data *consumers)
static inline int regulator_bulk_enable(int num_consumers,
struct regulator_bulk_data *consumers)
static inline int regulator_bulk_disable(int num_consumers,
struct regulator_bulk_data *consumers)
static inline void regulator_bulk_free(int num_consumers,
struct regulator_bulk_data *consumers)
static inline int regulator_set_voltage(struct regulator *regulator,
int min_uV, int max_uV)
static inline int regulator_get_voltage(struct regulator *regulator)
static inline int regulator_set_current_limit(struct regulator *regulator,
int min_uA, int max_uA)
static inline int regulator_get_current_limit(struct regulator *regulator)
static inline int regulator_set_mode(struct regulator *regulator,
unsigned int mode)
static inline unsigned int regulator_get_mode(struct regulator *regulator)
static inline int regulator_set_optimum_mode(struct regulator *regulator,
int load_uA)
static inline int regulator_register_notifier(struct regulator *regulator,
struct notifier_block *nb)
static inline int regulator_unregister_notifier(struct regulator *regulator,
struct notifier_block *nb)
static inline void *regulator_get_drvdata(struct regulator *regulator)
static inline void regulator_set_drvdata(struct regulator *regulator,
void *data)
