#define PPC44x_TLBE_SIZE	PPC44x_TLB_4K
#define PAGE_SIZE_4K (1<<12)
#define PAGE_MASK_4K (~(PAGE_SIZE_4K - 1))
#define PPC44x_TLB_UATTR_MASK \
(PPC44x_TLB_U0|PPC44x_TLB_U1|PPC44x_TLB_U2|PPC44x_TLB_U3)
#define PPC44x_TLB_USER_PERM_MASK (PPC44x_TLB_UX|PPC44x_TLB_UR|PPC44x_TLB_UW)
#define PPC44x_TLB_SUPER_PERM_MASK (PPC44x_TLB_SX|PPC44x_TLB_SR|PPC44x_TLB_SW)
void kvmppc_dump_tlbs(struct kvm_vcpu *vcpu)
static inline void kvmppc_44x_tlbie(unsigned int index)
static inline void kvmppc_44x_tlbre(unsigned int index,
struct kvmppc_44x_tlbe *tlbe)
static inline void kvmppc_44x_tlbwe(unsigned int index,
struct kvmppc_44x_tlbe *stlbe)
static u32 kvmppc_44x_tlb_shadow_attrib(u32 attrib, int usermode)
void kvmppc_44x_tlb_load(struct kvm_vcpu *vcpu)
static void kvmppc_44x_tlbe_set_modified(struct kvmppc_vcpu_44x *vcpu_44x,
unsigned int i)
void kvmppc_44x_tlb_put(struct kvm_vcpu *vcpu)
int kvmppc_44x_tlb_index(struct kvm_vcpu *vcpu, gva_t eaddr, unsigned int pid,
unsigned int as)
gpa_t kvmppc_mmu_xlate(struct kvm_vcpu *vcpu, unsigned int gtlb_index,
gva_t eaddr)
int kvmppc_mmu_itlb_index(struct kvm_vcpu *vcpu, gva_t eaddr)
int kvmppc_mmu_dtlb_index(struct kvm_vcpu *vcpu, gva_t eaddr)
void kvmppc_mmu_itlb_miss(struct kvm_vcpu *vcpu)
void kvmppc_mmu_dtlb_miss(struct kvm_vcpu *vcpu)
static void kvmppc_44x_shadow_release(struct kvmppc_vcpu_44x *vcpu_44x,
unsigned int stlb_index)
void kvmppc_mmu_destroy(struct kvm_vcpu *vcpu)
void kvmppc_mmu_map(struct kvm_vcpu *vcpu, u64 gvaddr, gpa_t gpaddr,
unsigned int gtlb_index)
static void kvmppc_44x_invalidate(struct kvm_vcpu *vcpu,
unsigned int gtlb_index)
void kvmppc_mmu_priv_switch(struct kvm_vcpu *vcpu, int usermode)
void kvmppc_set_pid(struct kvm_vcpu *vcpu, u32 new_pid)
static int tlbe_is_host_safe(const struct kvm_vcpu *vcpu,
const struct kvmppc_44x_tlbe *tlbe)
int kvmppc_44x_emul_tlbwe(struct kvm_vcpu *vcpu, u8 ra, u8 rs, u8 ws)
int kvmppc_44x_emul_tlbsx(struct kvm_vcpu *vcpu, u8 rt, u8 ra, u8 rb, u8 rc)
