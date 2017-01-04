#define __KVM_POWERPC_TLB_H__
extern int kvmppc_44x_tlb_index(struct kvm_vcpu *vcpu, gva_t eaddr,
unsigned int pid, unsigned int as);
extern int kvmppc_44x_emul_tlbsx(struct kvm_vcpu *vcpu, u8 rt, u8 ra, u8 rb,
u8 rc);
extern int kvmppc_44x_emul_tlbwe(struct kvm_vcpu *vcpu, u8 ra, u8 rs, u8 ws);
static inline unsigned int get_tlb_size(const struct kvmppc_44x_tlbe *tlbe)
static inline gva_t get_tlb_eaddr(const struct kvmppc_44x_tlbe *tlbe)
static inline gva_t get_tlb_bytes(const struct kvmppc_44x_tlbe *tlbe)
static inline gva_t get_tlb_end(const struct kvmppc_44x_tlbe *tlbe)
static inline u64 get_tlb_raddr(const struct kvmppc_44x_tlbe *tlbe)
static inline unsigned int get_tlb_tid(const struct kvmppc_44x_tlbe *tlbe)
static inline unsigned int get_tlb_ts(const struct kvmppc_44x_tlbe *tlbe)
static inline unsigned int get_tlb_v(const struct kvmppc_44x_tlbe *tlbe)
static inline unsigned int get_mmucr_stid(const struct kvm_vcpu *vcpu)
static inline unsigned int get_mmucr_sts(const struct kvm_vcpu *vcpu)
