#define pr_fmt(fmt)	"%s: " fmt, __func__
#define	SSBI_REG_ADDR_IRQ_BASE		0x1BB
#define	SSBI_REG_ADDR_IRQ_ROOT		(SSBI_REG_ADDR_IRQ_BASE + 0)
#define	SSBI_REG_ADDR_IRQ_M_STATUS1	(SSBI_REG_ADDR_IRQ_BASE + 1)
#define	SSBI_REG_ADDR_IRQ_M_STATUS2	(SSBI_REG_ADDR_IRQ_BASE + 2)
#define	SSBI_REG_ADDR_IRQ_M_STATUS3	(SSBI_REG_ADDR_IRQ_BASE + 3)
#define	SSBI_REG_ADDR_IRQ_M_STATUS4	(SSBI_REG_ADDR_IRQ_BASE + 4)
#define	SSBI_REG_ADDR_IRQ_BLK_SEL	(SSBI_REG_ADDR_IRQ_BASE + 5)
#define	SSBI_REG_ADDR_IRQ_IT_STATUS	(SSBI_REG_ADDR_IRQ_BASE + 6)
#define	SSBI_REG_ADDR_IRQ_CONFIG	(SSBI_REG_ADDR_IRQ_BASE + 7)
#define	SSBI_REG_ADDR_IRQ_RT_STATUS	(SSBI_REG_ADDR_IRQ_BASE + 8)
#define	PM_IRQF_LVL_SEL			0x01
#define	PM_IRQF_MASK_FE			0x02
#define	PM_IRQF_MASK_RE			0x04
#define	PM_IRQF_CLR			0x08
#define	PM_IRQF_BITS_MASK		0x70
#define	PM_IRQF_BITS_SHIFT		4
#define	PM_IRQF_WRITE			0x80
#define	PM_IRQF_MASK_ALL		(PM_IRQF_MASK_FE | \
PM_IRQF_MASK_RE)
struct pm_irq_chip ;
static int pm8xxx_read_root_irq(const struct pm_irq_chip *chip, u8 *rp)
static int pm8xxx_read_master_irq(const struct pm_irq_chip *chip, u8 m, u8 *bp)
static int pm8xxx_read_block_irq(struct pm_irq_chip *chip, u8 bp, u8 *ip)
static int pm8xxx_config_irq(struct pm_irq_chip *chip, u8 bp, u8 cp)
static int pm8xxx_irq_block_handler(struct pm_irq_chip *chip, int block)
static int pm8xxx_irq_master_handler(struct pm_irq_chip *chip, int master)
static void pm8xxx_irq_handler(unsigned int irq, struct irq_desc *desc)
static void pm8xxx_irq_mask_ack(struct irq_data *d)
static void pm8xxx_irq_unmask(struct irq_data *d)
static int pm8xxx_irq_set_type(struct irq_data *d, unsigned int flow_type)
static int pm8xxx_irq_set_wake(struct irq_data *d, unsigned int on)
static struct irq_chip pm8xxx_irq_chip = ;
int pm8xxx_get_irq_stat(struct pm_irq_chip *chip, int irq)
EXPORT_SYMBOL_GPL(pm8xxx_get_irq_stat);
struct pm_irq_chip *  __devinit pm8xxx_irq_init(struct device *dev,
const struct pm8xxx_irq_platform_data *pdata)
int __devexit pm8xxx_irq_exit(struct pm_irq_chip *chip)
