#define __LINUX_MFD_MAX8998_PRIV_H
#define MAX8998_NUM_IRQ_REGS	4
enum ;
enum ;
enum ;
#define MAX8998_IRQ_DCINF_MASK		(1 << 2)
#define MAX8998_IRQ_DCINR_MASK		(1 << 3)
#define MAX8998_IRQ_JIGF_MASK		(1 << 4)
#define MAX8998_IRQ_JIGR_MASK		(1 << 5)
#define MAX8998_IRQ_PWRONF_MASK		(1 << 6)
#define MAX8998_IRQ_PWRONR_MASK		(1 << 7)
#define MAX8998_IRQ_WTSREVNT_MASK	(1 << 0)
#define MAX8998_IRQ_SMPLEVNT_MASK	(1 << 1)
#define MAX8998_IRQ_ALARM1_MASK		(1 << 2)
#define MAX8998_IRQ_ALARM0_MASK		(1 << 3)
#define MAX8998_IRQ_ONKEY1S_MASK	(1 << 0)
#define MAX8998_IRQ_TOPOFFR_MASK	(1 << 2)
#define MAX8998_IRQ_DCINOVPR_MASK	(1 << 3)
#define MAX8998_IRQ_CHGRSTF_MASK	(1 << 4)
#define MAX8998_IRQ_DONER_MASK		(1 << 5)
#define MAX8998_IRQ_CHGFAULT_MASK	(1 << 7)
#define MAX8998_IRQ_LOBAT1_MASK		(1 << 0)
#define MAX8998_IRQ_LOBAT2_MASK		(1 << 1)
#define MAX8998_ENRAMP                  (1 << 4)
struct max8998_dev ;
int max8998_irq_init(struct max8998_dev *max8998);
void max8998_irq_exit(struct max8998_dev *max8998);
int max8998_irq_resume(struct max8998_dev *max8998);
extern int max8998_read_reg(struct i2c_client *i2c, u8 reg, u8 *dest);
extern int max8998_bulk_read(struct i2c_client *i2c, u8 reg, int count,
u8 *buf);
extern int max8998_write_reg(struct i2c_client *i2c, u8 reg, u8 value);
extern int max8998_bulk_write(struct i2c_client *i2c, u8 reg, int count,
u8 *buf);
extern int max8998_update_reg(struct i2c_client *i2c, u8 reg, u8 val, u8 mask);
