#define WRITE_WO_MMIO(reg, x)					\
do  while (0)
#define READ_SHADOW_REG(val, reg)				\
do  while (0)
#define READ_MMIO_UPPER32(val, reg)				\
do  while (0)
u32 cbe_read_phys_ctr(u32 cpu, u32 phys_ctr)
EXPORT_SYMBOL_GPL(cbe_read_phys_ctr);
void cbe_write_phys_ctr(u32 cpu, u32 phys_ctr, u32 val)
EXPORT_SYMBOL_GPL(cbe_write_phys_ctr);
u32 cbe_read_ctr(u32 cpu, u32 ctr)
EXPORT_SYMBOL_GPL(cbe_read_ctr);
void cbe_write_ctr(u32 cpu, u32 ctr, u32 val)
EXPORT_SYMBOL_GPL(cbe_write_ctr);
u32 cbe_read_pm07_control(u32 cpu, u32 ctr)
EXPORT_SYMBOL_GPL(cbe_read_pm07_control);
void cbe_write_pm07_control(u32 cpu, u32 ctr, u32 val)
EXPORT_SYMBOL_GPL(cbe_write_pm07_control);
u32 cbe_read_pm(u32 cpu, enum pm_reg_name reg)
EXPORT_SYMBOL_GPL(cbe_read_pm);
void cbe_write_pm(u32 cpu, enum pm_reg_name reg, u32 val)
EXPORT_SYMBOL_GPL(cbe_write_pm);
u32 cbe_get_ctr_size(u32 cpu, u32 phys_ctr)
EXPORT_SYMBOL_GPL(cbe_get_ctr_size);
void cbe_set_ctr_size(u32 cpu, u32 phys_ctr, u32 ctr_size)
EXPORT_SYMBOL_GPL(cbe_set_ctr_size);
void cbe_enable_pm(u32 cpu)
EXPORT_SYMBOL_GPL(cbe_enable_pm);
void cbe_disable_pm(u32 cpu)
EXPORT_SYMBOL_GPL(cbe_disable_pm);
void cbe_read_trace_buffer(u32 cpu, u64 *buf)
EXPORT_SYMBOL_GPL(cbe_read_trace_buffer);
u32 cbe_get_and_clear_pm_interrupts(u32 cpu)
EXPORT_SYMBOL_GPL(cbe_get_and_clear_pm_interrupts);
void cbe_enable_pm_interrupts(u32 cpu, u32 thread, u32 mask)
EXPORT_SYMBOL_GPL(cbe_enable_pm_interrupts);
void cbe_disable_pm_interrupts(u32 cpu)
EXPORT_SYMBOL_GPL(cbe_disable_pm_interrupts);
static irqreturn_t cbe_pm_irq(int irq, void *dev_id)
static int __init cbe_init_pm_irq(void)
machine_arch_initcall(cell, cbe_init_pm_irq);
void cbe_sync_irq(int node)
EXPORT_SYMBOL_GPL(cbe_sync_irq);
