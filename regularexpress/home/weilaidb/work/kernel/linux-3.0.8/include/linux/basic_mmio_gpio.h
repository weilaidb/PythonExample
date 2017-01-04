#define __BASIC_MMIO_GPIO_H
struct bgpio_pdata ;
struct device;
struct bgpio_chip ;
static inline struct bgpio_chip *to_bgpio_chip(struct gpio_chip *gc)
int __devexit bgpio_remove(struct bgpio_chip *bgc);
int __devinit bgpio_init(struct bgpio_chip *bgc,
struct device *dev,
unsigned long sz,
void __iomem *dat,
void __iomem *set,
void __iomem *clr,
void __iomem *dirout,
void __iomem *dirin,
bool big_endian);
