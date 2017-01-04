#if PTTYPE == 64
#define pt_element_t u64
#define guest_walker guest_walker64
#define FNAME(name) paging##64_##name
#define PT_BASE_ADDR_MASK PT64_BASE_ADDR_MASK
#define PT_LVL_ADDR_MASK(lvl) PT64_LVL_ADDR_MASK(lvl)
#define PT_LVL_OFFSET_MASK(lvl) PT64_LVL_OFFSET_MASK(lvl)
#define PT_INDEX(addr, level) PT64_INDEX(addr, level)
#define PT_LEVEL_BITS PT64_LEVEL_BITS
#define PT_MAX_FULL_LEVELS 4
#define CMPXCHG cmpxchg
#define CMPXCHG cmpxchg64
#define PT_MAX_FULL_LEVELS 2
#elif PTTYPE == 32
#define pt_element_t u32
#define guest_walker guest_walker32
#define FNAME(name) paging##32_##name
#define PT_BASE_ADDR_MASK PT32_BASE_ADDR_MASK
#define PT_LVL_ADDR_MASK(lvl) PT32_LVL_ADDR_MASK(lvl)
#define PT_LVL_OFFSET_MASK(lvl) PT32_LVL_OFFSET_MASK(lvl)
#define PT_INDEX(addr, level) PT32_INDEX(addr, level)
#define PT_LEVEL_BITS PT32_LEVEL_BITS
#define PT_MAX_FULL_LEVELS 2
#define CMPXCHG cmpxchg
#error Invalid PTTYPE value
#define gpte_to_gfn_lvl FNAME(gpte_to_gfn_lvl)
#define gpte_to_gfn(pte) gpte_to_gfn_lvl((pte), PT_PAGE_TABLE_LEVEL)
struct guest_walker ;
static gfn_t gpte_to_gfn_lvl(pt_element_t gpte, int lvl)
static int FNAME(cmpxchg_gpte)(struct kvm_vcpu *vcpu, struct kvm_mmu *mmu,
pt_element_t __user *ptep_user, unsigned index,
pt_element_t orig_pte, pt_element_t new_pte)
static unsigned FNAME(gpte_access)(struct kvm_vcpu *vcpu, pt_element_t gpte)
static int FNAME(walk_addr_generic)(struct guest_walker *walker,
struct kvm_vcpu *vcpu, struct kvm_mmu *mmu,
gva_t addr, u32 access)
static int FNAME(walk_addr)(struct guest_walker *walker,
struct kvm_vcpu *vcpu, gva_t addr, u32 access)
static int FNAME(walk_addr_nested)(struct guest_walker *walker,
struct kvm_vcpu *vcpu, gva_t addr,
u32 access)
static bool FNAME(prefetch_invalid_gpte)(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp, u64 *spte,
pt_element_t gpte)
static void FNAME(update_pte)(struct kvm_vcpu *vcpu, struct kvm_mmu_page *sp,
u64 *spte, const void *pte)
static bool FNAME(gpte_changed)(struct kvm_vcpu *vcpu,
struct guest_walker *gw, int level)
static void FNAME(pte_prefetch)(struct kvm_vcpu *vcpu, struct guest_walker *gw,
u64 *sptep)
static u64 *FNAME(fetch)(struct kvm_vcpu *vcpu, gva_t addr,
struct guest_walker *gw,
int user_fault, int write_fault, int hlevel,
int *ptwrite, pfn_t pfn, bool map_writable,
bool prefault)
static int FNAME(page_fault)(struct kvm_vcpu *vcpu, gva_t addr, u32 error_code,
bool prefault)
static void FNAME(invlpg)(struct kvm_vcpu *vcpu, gva_t gva)
static gpa_t FNAME(gva_to_gpa)(struct kvm_vcpu *vcpu, gva_t vaddr, u32 access,
struct x86_exception *exception)
static gpa_t FNAME(gva_to_gpa_nested)(struct kvm_vcpu *vcpu, gva_t vaddr,
u32 access,
struct x86_exception *exception)
static void FNAME(prefetch_page)(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp)
static int FNAME(sync_page)(struct kvm_vcpu *vcpu, struct kvm_mmu_page *sp)
#undef pt_element_t
#undef guest_walker
#undef FNAME
#undef PT_BASE_ADDR_MASK
#undef PT_INDEX
#undef PT_LVL_ADDR_MASK
#undef PT_LVL_OFFSET_MASK
#undef PT_LEVEL_BITS
#undef PT_MAX_FULL_LEVELS
#undef gpte_to_gfn
#undef gpte_to_gfn_lvl
#undef CMPXCHG
