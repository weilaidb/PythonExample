#define dprintk(X...) printk(KERN_INFO X)
#define dprintk(X...) do  while(0)
static void kvmppc_mmu_book3s_64_reset_msr(struct kvm_vcpu *vcpu)
static struct kvmppc_slb *kvmppc_mmu_book3s_64_find_slbe(
struct kvmppc_vcpu_book3s *vcpu_book3s,
gva_t eaddr)
static u64 kvmppc_mmu_book3s_64_ea_to_vp(struct kvm_vcpu *vcpu, gva_t eaddr,
bool data)
static int kvmppc_mmu_book3s_64_get_pagesize(struct kvmppc_slb *slbe)
static u32 kvmppc_mmu_book3s_64_get_page(struct kvmppc_slb *slbe, gva_t eaddr)
static hva_t kvmppc_mmu_book3s_64_get_pteg(
struct kvmppc_vcpu_book3s *vcpu_book3s,
struct kvmppc_slb *slbe, gva_t eaddr,
bool second)
static u64 kvmppc_mmu_book3s_64_get_avpn(struct kvmppc_slb *slbe, gva_t eaddr)
static int kvmppc_mmu_book3s_64_xlate(struct kvm_vcpu *vcpu, gva_t eaddr,
struct kvmppc_pte *gpte, bool data)
static void kvmppc_mmu_book3s_64_slbmte(struct kvm_vcpu *vcpu, u64 rs, u64 rb)
static u64 kvmppc_mmu_book3s_64_slbmfee(struct kvm_vcpu *vcpu, u64 slb_nr)
static u64 kvmppc_mmu_book3s_64_slbmfev(struct kvm_vcpu *vcpu, u64 slb_nr)
static void kvmppc_mmu_book3s_64_slbie(struct kvm_vcpu *vcpu, u64 ea)
static void kvmppc_mmu_book3s_64_slbia(struct kvm_vcpu *vcpu)
static void kvmppc_mmu_book3s_64_mtsrin(struct kvm_vcpu *vcpu, u32 srnum,
ulong value)
static void kvmppc_mmu_book3s_64_tlbie(struct kvm_vcpu *vcpu, ulong va,
bool large)
static int kvmppc_mmu_book3s_64_esid_to_vsid(struct kvm_vcpu *vcpu, ulong esid,
u64 *vsid)
static bool kvmppc_mmu_book3s_64_is_dcbz32(struct kvm_vcpu *vcpu)
void kvmppc_mmu_book3s_64_init(struct kvm_vcpu *vcpu)
