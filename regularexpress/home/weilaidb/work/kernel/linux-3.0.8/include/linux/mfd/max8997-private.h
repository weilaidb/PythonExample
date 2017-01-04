#define __LINUX_MFD_MAX8997_PRIV_H
#define MAX8997_REG_INVALID	(0xff)
enum max8997_pmic_reg ;
enum max8997_muic_reg ;
enum max8997_haptic_reg ;
enum max8997_rtc_reg ;
enum max8997_irq_source ;
enum max8997_irq ;
#define MAX8997_NUM_GPIO	12
struct max8997_dev ;
enum max8997_types ;
extern int max8997_irq_init(struct max8997_dev *max8997);
extern void max8997_irq_exit(struct max8997_dev *max8997);
extern int max8997_irq_resume(struct max8997_dev *max8997);
extern int max8997_read_reg(struct i2c_client *i2c, u8 reg, u8 *dest);
extern int max8997_bulk_read(struct i2c_client *i2c, u8 reg, int count,
u8 *buf);
extern int max8997_write_reg(struct i2c_client *i2c, u8 reg, u8 value);
extern int max8997_bulk_write(struct i2c_client *i2c, u8 reg, int count,
u8 *buf);
extern int max8997_update_reg(struct i2c_client *i2c, u8 reg, u8 val, u8 mask);
#define MAX8997_GPIO_INT_BOTH	(0x3 << 4)
#define MAX8997_GPIO_INT_RISE	(0x2 << 4)
#define MAX8997_GPIO_INT_FALL	(0x1 << 4)
#define MAX8997_GPIO_INT_MASK	(0x3 << 4)
#define MAX8997_GPIO_DATA_MASK	(0x1 << 2)
