#define dprintk_mmu(a, ...) printk(KERN_INFO a, __VA_ARGS__)
#define dprintk_mmu(a, ...) do  while(0)
#define dprintk_sr(a, ...) printk(KERN_INFO a, __VA_ARGS__)
#define dprintk_sr(a, ...) do  while(0)
#if PAGE_SHIFT != 12
#error Unknown page size
#error XXX need to grab mmu_hash_lock
#error Only 32 bit pages are supported for now
static ulong htab;
static u32 htabmask;
void kvmppc_mmu_invalidate_pte(struct kvm_vcpu *vcpu, struct hpte_cache *pte)
static u16 kvmppc_sid_hash(struct kvm_vcpu *vcpu, u64 gvsid)
static struct kvmppc_sid_map *find_sid_vsid(struct kvm_vcpu *vcpu, u64 gvsid)
static u32 *kvmppc_mmu_get_pteg(struct kvm_vcpu *vcpu, u32 vsid, u32 eaddr,
bool primary)
extern char etext[];
int kvmppc_mmu_map_page(struct kvm_vcpu *vcpu, struct kvmppc_pte *orig_pte)
static struct kvmppc_sid_map *create_sid_map(struct kvm_vcpu *vcpu, u64 gvsid)
int kvmppc_mmu_map_segment(struct kvm_vcpu *vcpu, ulong eaddr)
void kvmppc_mmu_flush_segments(struct kvm_vcpu *vcpu)
void kvmppc_mmu_destroy(struct kvm_vcpu *vcpu)
#define CTX_TO_VSID(c, id)	((((c) * (897 * 16)) + (id * 0x111)) & 0xffffff)
int kvmppc_mmu_init(struct kvm_vcpu *vcpu)
