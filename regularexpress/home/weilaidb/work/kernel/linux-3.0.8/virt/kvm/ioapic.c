static int ioapic_deliver(struct kvm_ioapic *vioapic, int irq);
static unsigned long ioapic_read_indirect(struct kvm_ioapic *ioapic,
unsigned long addr,
unsigned long length)
static int ioapic_service(struct kvm_ioapic *ioapic, unsigned int idx)
static void update_handled_vectors(struct kvm_ioapic *ioapic)
static void ioapic_write_indirect(struct kvm_ioapic *ioapic, u32 val)
static int ioapic_deliver(struct kvm_ioapic *ioapic, int irq)
int kvm_ioapic_set_irq(struct kvm_ioapic *ioapic, int irq, int level)
static void __kvm_ioapic_update_eoi(struct kvm_ioapic *ioapic, int vector,
int trigger_mode)
void kvm_ioapic_update_eoi(struct kvm *kvm, int vector, int trigger_mode)
static inline struct kvm_ioapic *to_ioapic(struct kvm_io_device *dev)
static inline int ioapic_in_range(struct kvm_ioapic *ioapic, gpa_t addr)
static int ioapic_mmio_read(struct kvm_io_device *this, gpa_t addr, int len,
void *val)
static int ioapic_mmio_write(struct kvm_io_device *this, gpa_t addr, int len,
const void *val)
void kvm_ioapic_reset(struct kvm_ioapic *ioapic)
static const struct kvm_io_device_ops ioapic_mmio_ops = ;
int kvm_ioapic_init(struct kvm *kvm)
void kvm_ioapic_destroy(struct kvm *kvm)
int kvm_get_ioapic(struct kvm *kvm, struct kvm_ioapic_state *state)
int kvm_set_ioapic(struct kvm *kvm, struct kvm_ioapic_state *state)
