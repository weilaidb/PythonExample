#define ASM_KVM_CACHE_REGS_H
#define KVM_POSSIBLE_CR0_GUEST_BITS X86_CR0_TS
#define KVM_POSSIBLE_CR4_GUEST_BITS				  \
(X86_CR4_PVI | X86_CR4_DE | X86_CR4_PCE | X86_CR4_OSFXSR  \
| X86_CR4_OSXMMEXCPT | X86_CR4_PGE)
static inline unsigned long kvm_register_read(struct kvm_vcpu *vcpu,
enum kvm_reg reg)
static inline void kvm_register_write(struct kvm_vcpu *vcpu,
enum kvm_reg reg,
unsigned long val)
static inline unsigned long kvm_rip_read(struct kvm_vcpu *vcpu)
static inline void kvm_rip_write(struct kvm_vcpu *vcpu, unsigned long val)
static inline u64 kvm_pdptr_read(struct kvm_vcpu *vcpu, int index)
static inline u64 kvm_pdptr_read_mmu(struct kvm_vcpu *vcpu, struct kvm_mmu *mmu, int index)
static inline ulong kvm_read_cr0_bits(struct kvm_vcpu *vcpu, ulong mask)
static inline ulong kvm_read_cr0(struct kvm_vcpu *vcpu)
static inline ulong kvm_read_cr4_bits(struct kvm_vcpu *vcpu, ulong mask)
static inline ulong kvm_read_cr3(struct kvm_vcpu *vcpu)
static inline ulong kvm_read_cr4(struct kvm_vcpu *vcpu)
static inline u64 kvm_read_edx_eax(struct kvm_vcpu *vcpu)
static inline void enter_guest_mode(struct kvm_vcpu *vcpu)
static inline void leave_guest_mode(struct kvm_vcpu *vcpu)
static inline bool is_guest_mode(struct kvm_vcpu *vcpu)
