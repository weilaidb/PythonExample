#define __MFD_PM8XXX_IRQ_H
struct pm8xxx_irq_core_data ;
struct pm8xxx_irq_platform_data ;
struct pm_irq_chip;
int pm8xxx_get_irq_stat(struct pm_irq_chip *chip, int irq);
struct pm_irq_chip * __devinit pm8xxx_irq_init(struct device *dev,
const struct pm8xxx_irq_platform_data *pdata);
int __devexit pm8xxx_irq_exit(struct pm_irq_chip *chip);
static inline int pm8xxx_get_irq_stat(struct pm_irq_chip *chip, int irq)
static inline struct pm_irq_chip * __devinit pm8xxx_irq_init(
const struct device *dev,
const struct pm8xxx_irq_platform_data *pdata)
static inline int __devexit pm8xxx_irq_exit(struct pm_irq_chip *chip)
