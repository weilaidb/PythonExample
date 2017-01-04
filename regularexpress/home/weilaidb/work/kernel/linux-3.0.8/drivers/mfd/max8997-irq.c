static const u8 max8997_mask_reg[] = ;
static struct i2c_client *get_i2c(struct max8997_dev *max8997,
enum max8997_irq_source src)
struct max8997_irq_data ;
#define DECLARE_IRQ(idx, _group, _mask)		\
[(idx)] =
static const struct max8997_irq_data max8997_irqs[] = ;
static void max8997_irq_lock(struct irq_data *data)
static void max8997_irq_sync_unlock(struct irq_data *data)
static const inline struct max8997_irq_data *
irq_to_max8997_irq(struct max8997_dev *max8997, int irq)
static void max8997_irq_mask(struct irq_data *data)
static void max8997_irq_unmask(struct irq_data *data)
static struct irq_chip max8997_irq_chip = ;
#define MAX8997_IRQSRC_PMIC		(1 << 1)
#define MAX8997_IRQSRC_FUELGAUGE	(1 << 2)
#define MAX8997_IRQSRC_MUIC		(1 << 3)
#define MAX8997_IRQSRC_GPIO		(1 << 4)
#define MAX8997_IRQSRC_FLASH		(1 << 5)
static irqreturn_t max8997_irq_thread(int irq, void *data)
int max8997_irq_resume(struct max8997_dev *max8997)
int max8997_irq_init(struct max8997_dev *max8997)
void max8997_irq_exit(struct max8997_dev *max8997)
