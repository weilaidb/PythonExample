enum ;
static int msm_irq_debug_mask;
module_param_named(debug_mask, msm_irq_debug_mask, int,
S_IRUGO | S_IWUSR | S_IWGRP);
#define VIC_REG(off) (MSM_VIC_BASE + (off))
#define VIC_INT_TO_REG_ADDR(base, irq) (base + (irq / 32) * 4)
#define VIC_INT_TO_REG_INDEX(irq) ((irq >> 5) & 3)
#define VIC_INT_SELECT0     VIC_REG(0x0000)
#define VIC_INT_SELECT1     VIC_REG(0x0004)
#define VIC_INT_SELECT2     VIC_REG(0x0008)
#define VIC_INT_SELECT3     VIC_REG(0x000C)
#define VIC_INT_EN0         VIC_REG(0x0010)
#define VIC_INT_EN1         VIC_REG(0x0014)
#define VIC_INT_EN2         VIC_REG(0x0018)
#define VIC_INT_EN3         VIC_REG(0x001C)
#define VIC_INT_ENCLEAR0    VIC_REG(0x0020)
#define VIC_INT_ENCLEAR1    VIC_REG(0x0024)
#define VIC_INT_ENCLEAR2    VIC_REG(0x0028)
#define VIC_INT_ENCLEAR3    VIC_REG(0x002C)
#define VIC_INT_ENSET0      VIC_REG(0x0030)
#define VIC_INT_ENSET1      VIC_REG(0x0034)
#define VIC_INT_ENSET2      VIC_REG(0x0038)
#define VIC_INT_ENSET3      VIC_REG(0x003C)
#define VIC_INT_TYPE0       VIC_REG(0x0040)
#define VIC_INT_TYPE1       VIC_REG(0x0044)
#define VIC_INT_TYPE2       VIC_REG(0x0048)
#define VIC_INT_TYPE3       VIC_REG(0x004C)
#define VIC_INT_POLARITY0   VIC_REG(0x0050)
#define VIC_INT_POLARITY1   VIC_REG(0x0054)
#define VIC_INT_POLARITY2   VIC_REG(0x0058)
#define VIC_INT_POLARITY3   VIC_REG(0x005C)
#define VIC_NO_PEND_VAL     VIC_REG(0x0060)
#if defined(CONFIG_ARCH_MSM_SCORPION)
#define VIC_NO_PEND_VAL_FIQ VIC_REG(0x0064)
#define VIC_INT_MASTEREN    VIC_REG(0x0068)
#define VIC_CONFIG          VIC_REG(0x006C)
#define VIC_INT_MASTEREN    VIC_REG(0x0064)
#define VIC_PROTECTION      VIC_REG(0x006C)
#define VIC_CONFIG          VIC_REG(0x0068)
#define VIC_IRQ_STATUS0     VIC_REG(0x0080)
#define VIC_IRQ_STATUS1     VIC_REG(0x0084)
#define VIC_IRQ_STATUS2     VIC_REG(0x0088)
#define VIC_IRQ_STATUS3     VIC_REG(0x008C)
#define VIC_FIQ_STATUS0     VIC_REG(0x0090)
#define VIC_FIQ_STATUS1     VIC_REG(0x0094)
#define VIC_FIQ_STATUS2     VIC_REG(0x0098)
#define VIC_FIQ_STATUS3     VIC_REG(0x009C)
#define VIC_RAW_STATUS0     VIC_REG(0x00A0)
#define VIC_RAW_STATUS1     VIC_REG(0x00A4)
#define VIC_RAW_STATUS2     VIC_REG(0x00A8)
#define VIC_RAW_STATUS3     VIC_REG(0x00AC)
#define VIC_INT_CLEAR0      VIC_REG(0x00B0)
#define VIC_INT_CLEAR1      VIC_REG(0x00B4)
#define VIC_INT_CLEAR2      VIC_REG(0x00B8)
#define VIC_INT_CLEAR3      VIC_REG(0x00BC)
#define VIC_SOFTINT0        VIC_REG(0x00C0)
#define VIC_SOFTINT1        VIC_REG(0x00C4)
#define VIC_SOFTINT2        VIC_REG(0x00C8)
#define VIC_SOFTINT3        VIC_REG(0x00CC)
#define VIC_IRQ_VEC_RD      VIC_REG(0x00D0)
#define VIC_IRQ_VEC_PEND_RD VIC_REG(0x00D4)
#define VIC_IRQ_VEC_WR      VIC_REG(0x00D8)
#if defined(CONFIG_ARCH_MSM_SCORPION)
#define VIC_FIQ_VEC_RD      VIC_REG(0x00DC)
#define VIC_FIQ_VEC_PEND_RD VIC_REG(0x00E0)
#define VIC_FIQ_VEC_WR      VIC_REG(0x00E4)
#define VIC_IRQ_IN_SERVICE  VIC_REG(0x00E8)
#define VIC_IRQ_IN_STACK    VIC_REG(0x00EC)
#define VIC_FIQ_IN_SERVICE  VIC_REG(0x00F0)
#define VIC_FIQ_IN_STACK    VIC_REG(0x00F4)
#define VIC_TEST_BUS_SEL    VIC_REG(0x00F8)
#define VIC_IRQ_CTRL_CONFIG VIC_REG(0x00FC)
#define VIC_IRQ_IN_SERVICE  VIC_REG(0x00E0)
#define VIC_IRQ_IN_STACK    VIC_REG(0x00E4)
#define VIC_TEST_BUS_SEL    VIC_REG(0x00E8)
#define VIC_VECTPRIORITY(n) VIC_REG(0x0200+((n) * 4))
#define VIC_VECTADDR(n)     VIC_REG(0x0400+((n) * 4))
#if defined(CONFIG_ARCH_MSM7X30)
#define VIC_NUM_REGS	    4
#define VIC_NUM_REGS	    2
#if VIC_NUM_REGS == 2
#define DPRINT_REGS(base_reg, format, ...)	      			\
printk(KERN_INFO format " %x %x\n", ##__VA_ARGS__,		\
readl(base_reg ## 0), readl(base_reg ## 1))
#define DPRINT_ARRAY(array, format, ...)				\
printk(KERN_INFO format " %x %x\n", ##__VA_ARGS__,		\
array[0], array[1])
#elif VIC_NUM_REGS == 4
#define DPRINT_REGS(base_reg, format, ...) \
printk(KERN_INFO format " %x %x %x %x\n", ##__VA_ARGS__,	\
readl(base_reg ## 0), readl(base_reg ## 1),	\
readl(base_reg ## 2), readl(base_reg ## 3))
#define DPRINT_ARRAY(array, format, ...)				\
printk(KERN_INFO format " %x %x %x %x\n", ##__VA_ARGS__,	\
array[0], array[1],				\
array[2], array[3])
#error "VIC_NUM_REGS set to illegal value"
static uint32_t msm_irq_smsm_wake_enable[2];
static struct  msm_irq_shadow_reg[VIC_NUM_REGS];
static uint32_t msm_irq_idle_disable[VIC_NUM_REGS];
#define SMSM_FAKE_IRQ (0xff)
static uint8_t msm_irq_to_smsm[NR_IRQS] = ;
static inline void msm_irq_write_all_regs(void __iomem *base, unsigned int val)
static void msm_irq_ack(struct irq_data *d)
static void msm_irq_mask(struct irq_data *d)
static void msm_irq_unmask(struct irq_data *d)
static int msm_irq_set_wake(struct irq_data *d, unsigned int on)
static int msm_irq_set_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip msm_irq_chip = ;
void __init msm_init_irq(void)
