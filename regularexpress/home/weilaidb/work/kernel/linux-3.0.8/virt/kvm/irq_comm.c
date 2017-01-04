static inline int kvm_irq_line_state(unsigned long *irq_state,
int irq_source_id, int level)
static int kvm_set_pic_irq(struct kvm_kernel_irq_routing_entry *e,
struct kvm *kvm, int irq_source_id, int level)
static int kvm_set_ioapic_irq(struct kvm_kernel_irq_routing_entry *e,
struct kvm *kvm, int irq_source_id, int level)
inline static bool kvm_is_dm_lowest_prio(struct kvm_lapic_irq *irq)
int kvm_irq_delivery_to_apic(struct kvm *kvm, struct kvm_lapic *src,
struct kvm_lapic_irq *irq)
int kvm_set_msi(struct kvm_kernel_irq_routing_entry *e,
struct kvm *kvm, int irq_source_id, int level)
int kvm_set_irq(struct kvm *kvm, int irq_source_id, u32 irq, int level)
void kvm_notify_acked_irq(struct kvm *kvm, unsigned irqchip, unsigned pin)
void kvm_register_irq_ack_notifier(struct kvm *kvm,
struct kvm_irq_ack_notifier *kian)
void kvm_unregister_irq_ack_notifier(struct kvm *kvm,
struct kvm_irq_ack_notifier *kian)
int kvm_request_irq_source_id(struct kvm *kvm)
void kvm_free_irq_source_id(struct kvm *kvm, int irq_source_id)
void kvm_register_irq_mask_notifier(struct kvm *kvm, int irq,
struct kvm_irq_mask_notifier *kimn)
void kvm_unregister_irq_mask_notifier(struct kvm *kvm, int irq,
struct kvm_irq_mask_notifier *kimn)
void kvm_fire_mask_notifiers(struct kvm *kvm, unsigned irqchip, unsigned pin,
bool mask)
void kvm_free_irq_routing(struct kvm *kvm)
static int setup_routing_entry(struct kvm_irq_routing_table *rt,
struct kvm_kernel_irq_routing_entry *e,
const struct kvm_irq_routing_entry *ue)
int kvm_set_irq_routing(struct kvm *kvm,
const struct kvm_irq_routing_entry *ue,
unsigned nr,
unsigned flags)
#define IOAPIC_ROUTING_ENTRY(irq) \
#define ROUTING_ENTRY1(irq) IOAPIC_ROUTING_ENTRY(irq)
#  define PIC_ROUTING_ENTRY(irq) \
#  define ROUTING_ENTRY2(irq) \
IOAPIC_ROUTING_ENTRY(irq), PIC_ROUTING_ENTRY(irq)
#  define ROUTING_ENTRY2(irq) \
IOAPIC_ROUTING_ENTRY(irq)
static const struct kvm_irq_routing_entry default_routing[] = ;
int kvm_setup_default_irq_routing(struct kvm *kvm)
