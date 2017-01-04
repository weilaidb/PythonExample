#define ARCH_X86_KVM_X86_H
static inline void kvm_clear_exception_queue(struct kvm_vcpu *vcpu)
static inline void kvm_queue_interrupt(struct kvm_vcpu *vcpu, u8 vector,
bool soft)
static inline void kvm_clear_interrupt_queue(struct kvm_vcpu *vcpu)
static inline bool kvm_event_needs_reinjection(struct kvm_vcpu *vcpu)
static inline bool kvm_exception_is_soft(unsigned int nr)
struct kvm_cpuid_entry2 *kvm_find_cpuid_entry(struct kvm_vcpu *vcpu,
u32 function, u32 index);
static inline bool is_protmode(struct kvm_vcpu *vcpu)
static inline int is_long_mode(struct kvm_vcpu *vcpu)
static inline bool mmu_is_nested(struct kvm_vcpu *vcpu)
static inline int is_pae(struct kvm_vcpu *vcpu)
static inline int is_pse(struct kvm_vcpu *vcpu)
static inline int is_paging(struct kvm_vcpu *vcpu)
static inline u32 bit(int bitno)
void kvm_before_handle_nmi(struct kvm_vcpu *vcpu);
void kvm_after_handle_nmi(struct kvm_vcpu *vcpu);
int kvm_inject_realmode_interrupt(struct kvm_vcpu *vcpu, int irq, int inc_eip);
void kvm_write_tsc(struct kvm_vcpu *vcpu, u64 data);
