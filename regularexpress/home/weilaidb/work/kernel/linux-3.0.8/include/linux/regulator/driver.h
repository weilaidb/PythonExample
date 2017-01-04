#define __LINUX_REGULATOR_DRIVER_H_
struct regulator_dev;
struct regulator_init_data;
enum regulator_status ;
struct regulator_ops ;
enum regulator_type ;
struct regulator_desc ;
struct regulator_dev ;
struct regulator_dev *regulator_register(struct regulator_desc *regulator_desc,
struct device *dev, const struct regulator_init_data *init_data,
void *driver_data);
void regulator_unregister(struct regulator_dev *rdev);
int regulator_notifier_call_chain(struct regulator_dev *rdev,
unsigned long event, void *data);
void *rdev_get_drvdata(struct regulator_dev *rdev);
struct device *rdev_get_dev(struct regulator_dev *rdev);
int rdev_get_id(struct regulator_dev *rdev);
int regulator_mode_to_status(unsigned int);
void *regulator_get_init_drvdata(struct regulator_init_data *reg_init_data);
