#define __KVM_E500_TLB_H__
#define KVM_E500_TLB0_WAY_SIZE_BIT	7
#define KVM_E500_TLB0_WAY_SIZE		(1UL << KVM_E500_TLB0_WAY_SIZE_BIT)
#define KVM_E500_TLB0_WAY_SIZE_MASK	(KVM_E500_TLB0_WAY_SIZE - 1)
#define KVM_E500_TLB0_WAY_NUM_BIT	1
#define KVM_E500_TLB0_WAY_NUM		(1UL << KVM_E500_TLB0_WAY_NUM_BIT)
#define KVM_E500_TLB0_WAY_NUM_MASK	(KVM_E500_TLB0_WAY_NUM - 1)
#define KVM_E500_TLB0_SIZE  (KVM_E500_TLB0_WAY_SIZE * KVM_E500_TLB0_WAY_NUM)
#define KVM_E500_TLB1_SIZE  16
#define index_of(tlbsel, esel)	(((tlbsel) << 16) | ((esel) & 0xFFFF))
#define tlbsel_of(index)	((index) >> 16)
#define esel_of(index)		((index) & 0xFFFF)
#define E500_TLB_USER_PERM_MASK (MAS3_UX|MAS3_UR|MAS3_UW)
#define E500_TLB_SUPER_PERM_MASK (MAS3_SX|MAS3_SR|MAS3_SW)
#define MAS2_ATTRIB_MASK \
(MAS2_X0 | MAS2_X1)
#define MAS3_ATTRIB_MASK \
(MAS3_U0 | MAS3_U1 | MAS3_U2 | MAS3_U3 \
| E500_TLB_USER_PERM_MASK | E500_TLB_SUPER_PERM_MASK)
extern void kvmppc_dump_tlbs(struct kvm_vcpu *);
extern int kvmppc_e500_emul_mt_mmucsr0(struct kvmppc_vcpu_e500 *, ulong);
extern int kvmppc_e500_emul_tlbwe(struct kvm_vcpu *);
extern int kvmppc_e500_emul_tlbre(struct kvm_vcpu *);
extern int kvmppc_e500_emul_tlbivax(struct kvm_vcpu *, int, int);
extern int kvmppc_e500_emul_tlbsx(struct kvm_vcpu *, int);
extern int kvmppc_e500_tlb_search(struct kvm_vcpu *, gva_t, unsigned int, int);
extern void kvmppc_e500_tlb_put(struct kvm_vcpu *);
extern void kvmppc_e500_tlb_load(struct kvm_vcpu *, int);
extern int kvmppc_e500_tlb_init(struct kvmppc_vcpu_e500 *);
extern void kvmppc_e500_tlb_uninit(struct kvmppc_vcpu_e500 *);
extern void kvmppc_e500_tlb_setup(struct kvmppc_vcpu_e500 *);
static inline unsigned int get_tlb_size(const struct tlbe *tlbe)
static inline gva_t get_tlb_eaddr(const struct tlbe *tlbe)
static inline u64 get_tlb_bytes(const struct tlbe *tlbe)
static inline gva_t get_tlb_end(const struct tlbe *tlbe)
static inline u64 get_tlb_raddr(const struct tlbe *tlbe)
static inline unsigned int get_tlb_tid(const struct tlbe *tlbe)
static inline unsigned int get_tlb_ts(const struct tlbe *tlbe)
static inline unsigned int get_tlb_v(const struct tlbe *tlbe)
static inline unsigned int get_tlb_iprot(const struct tlbe *tlbe)
static inline unsigned int get_cur_pid(struct kvm_vcpu *vcpu)
static inline unsigned int get_cur_spid(
const struct kvmppc_vcpu_e500 *vcpu_e500)
static inline unsigned int get_cur_sas(
const struct kvmppc_vcpu_e500 *vcpu_e500)
static inline unsigned int get_tlb_tlbsel(
const struct kvmppc_vcpu_e500 *vcpu_e500)
static inline unsigned int get_tlb_nv_bit(
const struct kvmppc_vcpu_e500 *vcpu_e500)
static inline unsigned int get_tlb_esel_bit(
const struct kvmppc_vcpu_e500 *vcpu_e500)
static inline unsigned int get_tlb_esel(
const struct kvmppc_vcpu_e500 *vcpu_e500,
int tlbsel)
static inline int tlbe_is_host_safe(const struct kvm_vcpu *vcpu,
const struct tlbe *tlbe)
