#define INT_MASK_DISABLE            0xffffffff
#define INT_MASK_ENABLE             0xfffebf17
#define INT_MASK_ENABLE_NO_FLOW     0xfffebfd7
void et131x_enable_interrupts(struct et131x_adapter *adapter)
void et131x_disable_interrupts(struct et131x_adapter *adapter)
irqreturn_t et131x_isr(int irq, void *dev_id)
void et131x_isr_handler(struct work_struct *work)
