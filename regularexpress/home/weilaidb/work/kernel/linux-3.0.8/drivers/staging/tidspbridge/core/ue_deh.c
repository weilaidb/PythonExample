static u32 fault_addr;
static void mmu_fault_dpc(unsigned long data)
static irqreturn_t mmu_fault_isr(int irq, void *data)
int bridge_deh_create(struct deh_mgr **ret_deh,
struct dev_object *hdev_obj)
int bridge_deh_destroy(struct deh_mgr *deh)
int bridge_deh_register_notify(struct deh_mgr *deh, u32 event_mask,
u32 notify_type,
struct dsp_notification *hnotification)
static void mmu_fault_print_stack(struct bridge_dev_context *dev_context)
static inline const char *event_to_string(int event)
void bridge_deh_notify(struct deh_mgr *deh, int event, int info)
