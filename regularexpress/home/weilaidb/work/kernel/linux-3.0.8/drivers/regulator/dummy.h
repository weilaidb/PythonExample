#define _DUMMY_H
struct regulator_dev;
extern struct regulator_dev *dummy_regulator_rdev;
void __init regulator_dummy_init(void);
