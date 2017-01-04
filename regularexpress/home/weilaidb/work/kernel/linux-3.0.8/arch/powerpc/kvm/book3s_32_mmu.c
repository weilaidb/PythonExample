#define dprintk(X...) printk(KERN_INFO X)
#define dprintk(X...) do  while(0)
#define dprintk_pte(X...) printk(KERN_INFO X)
#define dprintk_pte(X...) do  while(0)
#define PTEG_FLAG_ACCESSED	0x00000100
#define PTEG_FLAG_DIRTY		0x00000080
#define SID_SHIFT		28
static inline bool check_debug_ip(struct kvm_vcpu *vcpu)
static inline u32 sr_vsid(u32 sr_raw)
static inline bool sr_valid(u32 sr_raw)
static inline bool sr_ks(u32 sr_raw)
static inline bool sr_kp(u32 sr_raw)
static inline bool sr_nx(u32 sr_raw)
static int kvmppc_mmu_book3s_32_xlate_bat(struct kvm_vcpu *vcpu, gva_t eaddr,
struct kvmppc_pte *pte, bool data);
static int kvmppc_mmu_book3s_32_esid_to_vsid(struct kvm_vcpu *vcpu, ulong esid,
u64 *vsid);
static u32 find_sr(struct kvm_vcpu *vcpu, gva_t eaddr)
static u64 kvmppc_mmu_book3s_32_ea_to_vp(struct kvm_vcpu *vcpu, gva_t eaddr,
bool data)
static void kvmppc_mmu_book3s_32_reset_msr(struct kvm_vcpu *vcpu)
static hva_t kvmppc_mmu_book3s_32_get_pteg(struct kvmppc_vcpu_book3s *vcpu_book3s,
u32 sre, gva_t eaddr,
bool primary)
static u32 kvmppc_mmu_book3s_32_get_ptem(u32 sre, gva_t eaddr, bool primary)
static int kvmppc_mmu_book3s_32_xlate_bat(struct kvm_vcpu *vcpu, gva_t eaddr,
struct kvmppc_pte *pte, bool data)
static int kvmppc_mmu_book3s_32_xlate_pte(struct kvm_vcpu *vcpu, gva_t eaddr,
struct kvmppc_pte *pte, bool data,
bool primary)
static int kvmppc_mmu_book3s_32_xlate(struct kvm_vcpu *vcpu, gva_t eaddr,
struct kvmppc_pte *pte, bool data)
static u32 kvmppc_mmu_book3s_32_mfsrin(struct kvm_vcpu *vcpu, u32 srnum)
static void kvmppc_mmu_book3s_32_mtsrin(struct kvm_vcpu *vcpu, u32 srnum,
ulong value)
static void kvmppc_mmu_book3s_32_tlbie(struct kvm_vcpu *vcpu, ulong ea, bool large)
static int kvmppc_mmu_book3s_32_esid_to_vsid(struct kvm_vcpu *vcpu, ulong esid,
u64 *vsid)
static bool kvmppc_mmu_book3s_32_is_dcbz32(struct kvm_vcpu *vcpu)
void kvmppc_mmu_book3s_32_init(struct kvm_vcpu *vcpu)
