#define to_htlb1_esel(esel) (tlb1_entry_num - (esel) - 1)
static unsigned int tlb1_entry_num;
void kvmppc_dump_tlbs(struct kvm_vcpu *vcpu)
static inline unsigned int tlb0_get_next_victim(
struct kvmppc_vcpu_e500 *vcpu_e500)
static inline unsigned int tlb1_max_shadow_size(void)
static inline int tlbe_is_writable(struct tlbe *tlbe)
static inline u32 e500_shadow_mas3_attrib(u32 mas3, int usermode)
static inline u32 e500_shadow_mas2_attrib(u32 mas2, int usermode)
static inline void __write_host_tlbe(struct tlbe *stlbe)
static inline void write_host_tlbe(struct kvmppc_vcpu_e500 *vcpu_e500,
int tlbsel, int esel)
void kvmppc_e500_tlb_load(struct kvm_vcpu *vcpu, int cpu)
void kvmppc_e500_tlb_put(struct kvm_vcpu *vcpu)
static int kvmppc_e500_tlb_index(struct kvmppc_vcpu_e500 *vcpu_e500,
gva_t eaddr, int tlbsel, unsigned int pid, int as)
static void kvmppc_e500_shadow_release(struct kvmppc_vcpu_e500 *vcpu_e500,
int tlbsel, int esel)
static void kvmppc_e500_stlbe_invalidate(struct kvmppc_vcpu_e500 *vcpu_e500,
int tlbsel, int esel)
static void kvmppc_e500_tlb1_invalidate(struct kvmppc_vcpu_e500 *vcpu_e500,
gva_t eaddr, gva_t eend, u32 tid)
static inline void kvmppc_e500_deliver_tlb_miss(struct kvm_vcpu *vcpu,
unsigned int eaddr, int as)
static inline void kvmppc_e500_shadow_map(struct kvmppc_vcpu_e500 *vcpu_e500,
u64 gvaddr, gfn_t gfn, struct tlbe *gtlbe, int tlbsel, int esel)
static int kvmppc_e500_stlbe_map(struct kvmppc_vcpu_e500 *vcpu_e500,
int tlbsel, int esel)
static int kvmppc_e500_tlb1_map(struct kvmppc_vcpu_e500 *vcpu_e500,
u64 gvaddr, gfn_t gfn, struct tlbe *gtlbe)
void kvmppc_mmu_priv_switch(struct kvm_vcpu *vcpu, int usermode)
static int kvmppc_e500_gtlbe_invalidate(struct kvmppc_vcpu_e500 *vcpu_e500,
int tlbsel, int esel)
int kvmppc_e500_emul_mt_mmucsr0(struct kvmppc_vcpu_e500 *vcpu_e500, ulong value)
int kvmppc_e500_emul_tlbivax(struct kvm_vcpu *vcpu, int ra, int rb)
int kvmppc_e500_emul_tlbre(struct kvm_vcpu *vcpu)
int kvmppc_e500_emul_tlbsx(struct kvm_vcpu *vcpu, int rb)
int kvmppc_e500_emul_tlbwe(struct kvm_vcpu *vcpu)
int kvmppc_mmu_itlb_index(struct kvm_vcpu *vcpu, gva_t eaddr)
int kvmppc_mmu_dtlb_index(struct kvm_vcpu *vcpu, gva_t eaddr)
void kvmppc_mmu_itlb_miss(struct kvm_vcpu *vcpu)
void kvmppc_mmu_dtlb_miss(struct kvm_vcpu *vcpu)
gpa_t kvmppc_mmu_xlate(struct kvm_vcpu *vcpu, unsigned int index,
gva_t eaddr)
void kvmppc_mmu_destroy(struct kvm_vcpu *vcpu)
void kvmppc_mmu_map(struct kvm_vcpu *vcpu, u64 eaddr, gpa_t gpaddr,
unsigned int index)
int kvmppc_e500_tlb_search(struct kvm_vcpu *vcpu,
gva_t eaddr, unsigned int pid, int as)
void kvmppc_set_pid(struct kvm_vcpu *vcpu, u32 pid)
void kvmppc_e500_tlb_setup(struct kvmppc_vcpu_e500 *vcpu_e500)
int kvmppc_e500_tlb_init(struct kvmppc_vcpu_e500 *vcpu_e500)
void kvmppc_e500_tlb_uninit(struct kvmppc_vcpu_e500 *vcpu_e500)
