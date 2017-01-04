static void __iomem *icu1_base;
static void __iomem *icu2_base;
static unsigned char sysint1_assign[16] = ;
static unsigned char sysint2_assign[16] = ;
#define ICU1_TYPE1_BASE	0x0b000080UL
#define ICU2_TYPE1_BASE	0x0b000200UL
#define ICU1_TYPE2_BASE	0x0f000080UL
#define ICU2_TYPE2_BASE	0x0f0000a0UL
#define ICU1_SIZE	0x20
#define ICU2_SIZE	0x1c
#define SYSINT1REG	0x00
#define PIUINTREG	0x02
#define INTASSIGN0	0x04
#define INTASSIGN1	0x06
#define GIUINTLREG	0x08
#define DSIUINTREG	0x0a
#define MSYSINT1REG	0x0c
#define MPIUINTREG	0x0e
#define MAIUINTREG	0x10
#define MKIUINTREG	0x12
#define MMACINTREG	0x12
#define MGIUINTLREG	0x14
#define MDSIUINTREG	0x16
#define NMIREG		0x18
#define SOFTREG		0x1a
#define INTASSIGN2	0x1c
#define INTASSIGN3	0x1e
#define SYSINT2REG	0x00
#define GIUINTHREG	0x02
#define FIRINTREG	0x04
#define MSYSINT2REG	0x06
#define MGIUINTHREG	0x08
#define MFIRINTREG	0x0a
#define PCIINTREG	0x0c
#define PCIINT0	0x0001
#define SCUINTREG	0x0e
#define SCUINT0	0x0001
#define CSIINTREG	0x10
#define MPCIINTREG	0x12
#define MSCUINTREG	0x14
#define MCSIINTREG	0x16
#define BCUINTREG	0x18
#define BCUINTR	0x0001
#define MBCUINTREG	0x1a
#define SYSINT1_IRQ_TO_PIN(x)	((x) - SYSINT1_IRQ_BASE)
#define SYSINT2_IRQ_TO_PIN(x)	((x) - SYSINT2_IRQ_BASE)
#define INT_TO_IRQ(x)		((x) + 2)
#define icu1_read(offset)		readw(icu1_base + (offset))
#define icu1_write(offset, value)	writew((value), icu1_base + (offset))
#define icu2_read(offset)		readw(icu2_base + (offset))
#define icu2_write(offset, value)	writew((value), icu2_base + (offset))
#define INTASSIGN_MAX	4
#define INTASSIGN_MASK	0x0007
static inline uint16_t icu1_set(uint8_t offset, uint16_t set)
static inline uint16_t icu1_clear(uint8_t offset, uint16_t clear)
static inline uint16_t icu2_set(uint8_t offset, uint16_t set)
static inline uint16_t icu2_clear(uint8_t offset, uint16_t clear)
void vr41xx_enable_piuint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_enable_piuint);
void vr41xx_disable_piuint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_disable_piuint);
void vr41xx_enable_aiuint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_enable_aiuint);
void vr41xx_disable_aiuint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_disable_aiuint);
void vr41xx_enable_kiuint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_enable_kiuint);
void vr41xx_disable_kiuint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_disable_kiuint);
void vr41xx_enable_macint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_enable_macint);
void vr41xx_disable_macint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_disable_macint);
void vr41xx_enable_dsiuint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_enable_dsiuint);
void vr41xx_disable_dsiuint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_disable_dsiuint);
void vr41xx_enable_firint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_enable_firint);
void vr41xx_disable_firint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_disable_firint);
void vr41xx_enable_pciint(void)
EXPORT_SYMBOL(vr41xx_enable_pciint);
void vr41xx_disable_pciint(void)
EXPORT_SYMBOL(vr41xx_disable_pciint);
void vr41xx_enable_scuint(void)
EXPORT_SYMBOL(vr41xx_enable_scuint);
void vr41xx_disable_scuint(void)
EXPORT_SYMBOL(vr41xx_disable_scuint);
void vr41xx_enable_csiint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_enable_csiint);
void vr41xx_disable_csiint(uint16_t mask)
EXPORT_SYMBOL(vr41xx_disable_csiint);
void vr41xx_enable_bcuint(void)
EXPORT_SYMBOL(vr41xx_enable_bcuint);
void vr41xx_disable_bcuint(void)
EXPORT_SYMBOL(vr41xx_disable_bcuint);
static void disable_sysint1_irq(struct irq_data *d)
static void enable_sysint1_irq(struct irq_data *d)
static struct irq_chip sysint1_irq_type = ;
static void disable_sysint2_irq(struct irq_data *d)
static void enable_sysint2_irq(struct irq_data *d)
static struct irq_chip sysint2_irq_type = ;
static inline int set_sysint1_assign(unsigned int irq, unsigned char assign)
static inline int set_sysint2_assign(unsigned int irq, unsigned char assign)
int vr41xx_set_intassign(unsigned int irq, unsigned char intassign)
EXPORT_SYMBOL(vr41xx_set_intassign);
static int icu_get_irq(unsigned int irq)
static int __init vr41xx_icu_init(void)
core_initcall(vr41xx_icu_init);
