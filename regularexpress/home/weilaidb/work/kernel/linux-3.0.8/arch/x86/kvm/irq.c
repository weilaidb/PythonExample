int kvm_cpu_has_pending_timer(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL(kvm_cpu_has_pending_timer);
int kvm_cpu_has_interrupt(struct kvm_vcpu *v)
EXPORT_SYMBOL_GPL(kvm_cpu_has_interrupt);
int kvm_cpu_get_interrupt(struct kvm_vcpu *v)
EXPORT_SYMBOL_GPL(kvm_cpu_get_interrupt);
void kvm_inject_pending_timer_irqs(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_inject_pending_timer_irqs);
void __kvm_migrate_timers(struct kvm_vcpu *vcpu)
