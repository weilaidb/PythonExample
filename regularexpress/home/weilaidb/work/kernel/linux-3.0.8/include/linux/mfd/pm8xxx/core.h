#define __MFD_PM8XXX_CORE_H
struct pm8xxx_drvdata ;
static inline int pm8xxx_readb(const struct device *dev, u16 addr, u8 *val)
static inline int pm8xxx_writeb(const struct device *dev, u16 addr, u8 val)
static inline int pm8xxx_read_buf(const struct device *dev, u16 addr, u8 *buf,
int n)
static inline int pm8xxx_write_buf(const struct device *dev, u16 addr, u8 *buf,
int n)
static inline int pm8xxx_read_irq_stat(const struct device *dev, int irq)
