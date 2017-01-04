#define __IRQ_H
#define PIC_NUM_PINS 16
#define SELECT_PIC(irq) \
((irq) < 8 ? KVM_IRQCHIP_PIC_MASTER : KVM_IRQCHIP_PIC_SLAVE)
struct kvm;
struct kvm_vcpu;
struct kvm_kpic_state ;
struct kvm_pic ;
struct kvm_pic *kvm_create_pic(struct kvm *kvm);
void kvm_destroy_pic(struct kvm *kvm);
int kvm_pic_read_irq(struct kvm *kvm);
void kvm_pic_update_irq(struct kvm_pic *s);
static inline struct kvm_pic *pic_irqchip(struct kvm *kvm)
static inline int irqchip_in_kernel(struct kvm *kvm)
void kvm_pic_reset(struct kvm_kpic_state *s);
void kvm_inject_pending_timer_irqs(struct kvm_vcpu *vcpu);
void kvm_inject_apic_timer_irqs(struct kvm_vcpu *vcpu);
void kvm_apic_nmi_wd_deliver(struct kvm_vcpu *vcpu);
void __kvm_migrate_apic_timer(struct kvm_vcpu *vcpu);
void __kvm_migrate_pit_timer(struct kvm_vcpu *vcpu);
void __kvm_migrate_timers(struct kvm_vcpu *vcpu);
int apic_has_pending_timer(struct kvm_vcpu *vcpu);
