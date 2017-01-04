bool tdp_enabled = false;
enum ;
char *audit_point_name[] = ;
#undef MMU_DEBUG
#define pgprintk(x...) do  while (0)
#define rmap_printk(x...) do  while (0)
#define pgprintk(x...) do  while (0)
#define rmap_printk(x...) do  while (0)
static int dbg = 0;
module_param(dbg, bool, 0644);
static int oos_shadow = 1;
module_param(oos_shadow, bool, 0644);
#define ASSERT(x) do  while (0)
#define ASSERT(x)							\
if (!(x))
#define PTE_PREFETCH_NUM		8
#define PT_FIRST_AVAIL_BITS_SHIFT 9
#define PT64_SECOND_AVAIL_BITS_SHIFT 52
#define PT64_LEVEL_BITS 9
#define PT64_LEVEL_SHIFT(level) \
(PAGE_SHIFT + (level - 1) * PT64_LEVEL_BITS)
#define PT64_INDEX(address, level)\
(((address) >> PT64_LEVEL_SHIFT(level)) & ((1 << PT64_LEVEL_BITS) - 1))
#define PT32_LEVEL_BITS 10
#define PT32_LEVEL_SHIFT(level) \
(PAGE_SHIFT + (level - 1) * PT32_LEVEL_BITS)
#define PT32_LVL_OFFSET_MASK(level) \
(PT32_BASE_ADDR_MASK & ((1ULL << (PAGE_SHIFT + (((level) - 1) \
* PT32_LEVEL_BITS))) - 1))
#define PT32_INDEX(address, level)\
(((address) >> PT32_LEVEL_SHIFT(level)) & ((1 << PT32_LEVEL_BITS) - 1))
#define PT64_BASE_ADDR_MASK (((1ULL << 52) - 1) & ~(u64)(PAGE_SIZE-1))
#define PT64_DIR_BASE_ADDR_MASK \
(PT64_BASE_ADDR_MASK & ~((1ULL << (PAGE_SHIFT + PT64_LEVEL_BITS)) - 1))
#define PT64_LVL_ADDR_MASK(level) \
(PT64_BASE_ADDR_MASK & ~((1ULL << (PAGE_SHIFT + (((level) - 1) \
* PT64_LEVEL_BITS))) - 1))
#define PT64_LVL_OFFSET_MASK(level) \
(PT64_BASE_ADDR_MASK & ((1ULL << (PAGE_SHIFT + (((level) - 1) \
* PT64_LEVEL_BITS))) - 1))
#define PT32_BASE_ADDR_MASK PAGE_MASK
#define PT32_DIR_BASE_ADDR_MASK \
(PAGE_MASK & ~((1ULL << (PAGE_SHIFT + PT32_LEVEL_BITS)) - 1))
#define PT32_LVL_ADDR_MASK(level) \
(PAGE_MASK & ~((1ULL << (PAGE_SHIFT + (((level) - 1) \
* PT32_LEVEL_BITS))) - 1))
#define PT64_PERM_MASK (PT_PRESENT_MASK | PT_WRITABLE_MASK | PT_USER_MASK \
| PT64_NX_MASK)
#define RMAP_EXT 4
#define ACC_EXEC_MASK    1
#define ACC_WRITE_MASK   PT_WRITABLE_MASK
#define ACC_USER_MASK    PT_USER_MASK
#define ACC_ALL          (ACC_EXEC_MASK | ACC_WRITE_MASK | ACC_USER_MASK)
#define CREATE_TRACE_POINTS
#define SPTE_HOST_WRITEABLE (1ULL << PT_FIRST_AVAIL_BITS_SHIFT)
#define SHADOW_PT_INDEX(addr, level) PT64_INDEX(addr, level)
struct kvm_rmap_desc ;
struct kvm_shadow_walk_iterator ;
#define for_each_shadow_entry(_vcpu, _addr, _walker)    \
for (shadow_walk_init(&(_walker), _vcpu, _addr);	\
shadow_walk_okay(&(_walker));			\
shadow_walk_next(&(_walker)))
typedef void (*mmu_parent_walk_fn) (struct kvm_mmu_page *sp, u64 *spte);
static struct kmem_cache *pte_chain_cache;
static struct kmem_cache *rmap_desc_cache;
static struct kmem_cache *mmu_page_header_cache;
static struct percpu_counter kvm_total_used_mmu_pages;
static u64 __read_mostly shadow_trap_nonpresent_pte;
static u64 __read_mostly shadow_notrap_nonpresent_pte;
static u64 __read_mostly shadow_nx_mask;
static u64 __read_mostly shadow_x_mask;
static u64 __read_mostly shadow_user_mask;
static u64 __read_mostly shadow_accessed_mask;
static u64 __read_mostly shadow_dirty_mask;
static inline u64 rsvd_bits(int s, int e)
void kvm_mmu_set_nonpresent_ptes(u64 trap_pte, u64 notrap_pte)
EXPORT_SYMBOL_GPL(kvm_mmu_set_nonpresent_ptes);
void kvm_mmu_set_mask_ptes(u64 user_mask, u64 accessed_mask,
u64 dirty_mask, u64 nx_mask, u64 x_mask)
EXPORT_SYMBOL_GPL(kvm_mmu_set_mask_ptes);
static bool is_write_protection(struct kvm_vcpu *vcpu)
static int is_cpuid_PSE36(void)
static int is_nx(struct kvm_vcpu *vcpu)
static int is_shadow_present_pte(u64 pte)
static int is_large_pte(u64 pte)
static int is_writable_pte(unsigned long pte)
static int is_dirty_gpte(unsigned long pte)
static int is_rmap_spte(u64 pte)
static int is_last_spte(u64 pte, int level)
static pfn_t spte_to_pfn(u64 pte)
static gfn_t pse36_gfn_delta(u32 gpte)
static void __set_spte(u64 *sptep, u64 spte)
static u64 __xchg_spte(u64 *sptep, u64 new_spte)
static bool spte_has_volatile_bits(u64 spte)
static bool spte_is_bit_cleared(u64 old_spte, u64 new_spte, u64 bit_mask)
static void update_spte(u64 *sptep, u64 new_spte)
static int mmu_topup_memory_cache(struct kvm_mmu_memory_cache *cache,
struct kmem_cache *base_cache, int min)
static void mmu_free_memory_cache(struct kvm_mmu_memory_cache *mc,
struct kmem_cache *cache)
static int mmu_topup_memory_cache_page(struct kvm_mmu_memory_cache *cache,
int min)
static void mmu_free_memory_cache_page(struct kvm_mmu_memory_cache *mc)
static int mmu_topup_memory_caches(struct kvm_vcpu *vcpu)
static void mmu_free_memory_caches(struct kvm_vcpu *vcpu)
static void *mmu_memory_cache_alloc(struct kvm_mmu_memory_cache *mc,
size_t size)
static struct kvm_pte_chain *mmu_alloc_pte_chain(struct kvm_vcpu *vcpu)
static void mmu_free_pte_chain(struct kvm_pte_chain *pc)
static struct kvm_rmap_desc *mmu_alloc_rmap_desc(struct kvm_vcpu *vcpu)
static void mmu_free_rmap_desc(struct kvm_rmap_desc *rd)
static gfn_t kvm_mmu_page_get_gfn(struct kvm_mmu_page *sp, int index)
static void kvm_mmu_page_set_gfn(struct kvm_mmu_page *sp, int index, gfn_t gfn)
static struct kvm_lpage_info *lpage_info_slot(gfn_t gfn,
struct kvm_memory_slot *slot,
int level)
static void account_shadowed(struct kvm *kvm, gfn_t gfn)
static void unaccount_shadowed(struct kvm *kvm, gfn_t gfn)
static int has_wrprotected_page(struct kvm *kvm,
gfn_t gfn,
int level)
static int host_mapping_level(struct kvm *kvm, gfn_t gfn)
static struct kvm_memory_slot *
gfn_to_memslot_dirty_bitmap(struct kvm_vcpu *vcpu, gfn_t gfn,
bool no_dirty_log)
static bool mapping_level_dirty_bitmap(struct kvm_vcpu *vcpu, gfn_t large_gfn)
static int mapping_level(struct kvm_vcpu *vcpu, gfn_t large_gfn)
static unsigned long *gfn_to_rmap(struct kvm *kvm, gfn_t gfn, int level)
static int rmap_add(struct kvm_vcpu *vcpu, u64 *spte, gfn_t gfn)
static void rmap_desc_remove_entry(unsigned long *rmapp,
struct kvm_rmap_desc *desc,
int i,
struct kvm_rmap_desc *prev_desc)
static void rmap_remove(struct kvm *kvm, u64 *spte)
static int set_spte_track_bits(u64 *sptep, u64 new_spte)
static void drop_spte(struct kvm *kvm, u64 *sptep, u64 new_spte)
static u64 *rmap_next(struct kvm *kvm, unsigned long *rmapp, u64 *spte)
static int rmap_write_protect(struct kvm *kvm, u64 gfn)
static int kvm_unmap_rmapp(struct kvm *kvm, unsigned long *rmapp,
unsigned long data)
static int kvm_set_pte_rmapp(struct kvm *kvm, unsigned long *rmapp,
unsigned long data)
static int kvm_handle_hva(struct kvm *kvm, unsigned long hva,
unsigned long data,
int (*handler)(struct kvm *kvm, unsigned long *rmapp,
unsigned long data))
int kvm_unmap_hva(struct kvm *kvm, unsigned long hva)
void kvm_set_spte_hva(struct kvm *kvm, unsigned long hva, pte_t pte)
static int kvm_age_rmapp(struct kvm *kvm, unsigned long *rmapp,
unsigned long data)
static int kvm_test_age_rmapp(struct kvm *kvm, unsigned long *rmapp,
unsigned long data)
#define RMAP_RECYCLE_THRESHOLD 1000
static void rmap_recycle(struct kvm_vcpu *vcpu, u64 *spte, gfn_t gfn)
int kvm_age_hva(struct kvm *kvm, unsigned long hva)
int kvm_test_age_hva(struct kvm *kvm, unsigned long hva)
static int is_empty_shadow_page(u64 *spt)
static inline void kvm_mod_used_mmu_pages(struct kvm *kvm, int nr)
static void kvm_mmu_free_page(struct kvm *kvm, struct kvm_mmu_page *sp)
static unsigned kvm_page_table_hashfn(gfn_t gfn)
static struct kvm_mmu_page *kvm_mmu_alloc_page(struct kvm_vcpu *vcpu,
u64 *parent_pte, int direct)
static void mmu_page_add_parent_pte(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp, u64 *parent_pte)
static void mmu_page_remove_parent_pte(struct kvm_mmu_page *sp,
u64 *parent_pte)
static void mmu_parent_walk(struct kvm_mmu_page *sp, mmu_parent_walk_fn fn)
static void mark_unsync(struct kvm_mmu_page *sp, u64 *spte);
static void kvm_mmu_mark_parents_unsync(struct kvm_mmu_page *sp)
static void mark_unsync(struct kvm_mmu_page *sp, u64 *spte)
static void nonpaging_prefetch_page(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp)
static int nonpaging_sync_page(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp)
static void nonpaging_invlpg(struct kvm_vcpu *vcpu, gva_t gva)
static void nonpaging_update_pte(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp, u64 *spte,
const void *pte)
#define KVM_PAGE_ARRAY_NR 16
struct kvm_mmu_pages ;
#define for_each_unsync_children(bitmap, idx)		\
for (idx = find_first_bit(bitmap, 512);		\
idx < 512;					\
idx = find_next_bit(bitmap, 512, idx+1))
static int mmu_pages_add(struct kvm_mmu_pages *pvec, struct kvm_mmu_page *sp,
int idx)
static int __mmu_unsync_walk(struct kvm_mmu_page *sp,
struct kvm_mmu_pages *pvec)
static int mmu_unsync_walk(struct kvm_mmu_page *sp,
struct kvm_mmu_pages *pvec)
static void kvm_unlink_unsync_page(struct kvm *kvm, struct kvm_mmu_page *sp)
static int kvm_mmu_prepare_zap_page(struct kvm *kvm, struct kvm_mmu_page *sp,
struct list_head *invalid_list);
static void kvm_mmu_commit_zap_page(struct kvm *kvm,
struct list_head *invalid_list);
#define for_each_gfn_sp(kvm, sp, gfn, pos)				\
hlist_for_each_entry(sp, pos,						\
&(kvm)->arch.mmu_page_hash[kvm_page_table_hashfn(gfn)], hash_link)	\
if ((sp)->gfn != (gfn))  else
#define for_each_gfn_indirect_valid_sp(kvm, sp, gfn, pos)		\
hlist_for_each_entry(sp, pos,						\
&(kvm)->arch.mmu_page_hash[kvm_page_table_hashfn(gfn)], hash_link)	\
if ((sp)->gfn != (gfn) || (sp)->role.direct ||		\
(sp)->role.invalid)  else
static int __kvm_sync_page(struct kvm_vcpu *vcpu, struct kvm_mmu_page *sp,
struct list_head *invalid_list, bool clear_unsync)
static int kvm_sync_page_transient(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp)
static int kvm_sync_page(struct kvm_vcpu *vcpu, struct kvm_mmu_page *sp,
struct list_head *invalid_list)
static void kvm_sync_pages(struct kvm_vcpu *vcpu,  gfn_t gfn)
struct mmu_page_path ;
#define for_each_sp(pvec, sp, parents, i)			\
for (i = mmu_pages_next(&pvec, &parents, -1),	\
sp = pvec.page[i].sp;			\
i < pvec.nr && ();	\
i = mmu_pages_next(&pvec, &parents, i))
static int mmu_pages_next(struct kvm_mmu_pages *pvec,
struct mmu_page_path *parents,
int i)
static void mmu_pages_clear_parents(struct mmu_page_path *parents)
static void kvm_mmu_pages_init(struct kvm_mmu_page *parent,
struct mmu_page_path *parents,
struct kvm_mmu_pages *pvec)
static void mmu_sync_children(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *parent)
static struct kvm_mmu_page *kvm_mmu_get_page(struct kvm_vcpu *vcpu,
gfn_t gfn,
gva_t gaddr,
unsigned level,
int direct,
unsigned access,
u64 *parent_pte)
static void shadow_walk_init(struct kvm_shadow_walk_iterator *iterator,
struct kvm_vcpu *vcpu, u64 addr)
static bool shadow_walk_okay(struct kvm_shadow_walk_iterator *iterator)
static void shadow_walk_next(struct kvm_shadow_walk_iterator *iterator)
static void link_shadow_page(u64 *sptep, struct kvm_mmu_page *sp)
static void drop_large_spte(struct kvm_vcpu *vcpu, u64 *sptep)
static void validate_direct_spte(struct kvm_vcpu *vcpu, u64 *sptep,
unsigned direct_access)
static void kvm_mmu_page_unlink_children(struct kvm *kvm,
struct kvm_mmu_page *sp)
static void kvm_mmu_put_page(struct kvm_mmu_page *sp, u64 *parent_pte)
static void kvm_mmu_reset_last_pte_updated(struct kvm *kvm)
static void kvm_mmu_unlink_parents(struct kvm *kvm, struct kvm_mmu_page *sp)
static int mmu_zap_unsync_children(struct kvm *kvm,
struct kvm_mmu_page *parent,
struct list_head *invalid_list)
static int kvm_mmu_prepare_zap_page(struct kvm *kvm, struct kvm_mmu_page *sp,
struct list_head *invalid_list)
static void kvm_mmu_commit_zap_page(struct kvm *kvm,
struct list_head *invalid_list)
void kvm_mmu_change_mmu_pages(struct kvm *kvm, unsigned int goal_nr_mmu_pages)
static int kvm_mmu_unprotect_page(struct kvm *kvm, gfn_t gfn)
static void mmu_unshadow(struct kvm *kvm, gfn_t gfn)
static void page_header_update_slot(struct kvm *kvm, void *pte, gfn_t gfn)
static void mmu_convert_notrap(struct kvm_mmu_page *sp)
static int get_mtrr_type(struct mtrr_state_type *mtrr_state,
u64 start, u64 end)
u8 kvm_get_guest_memory_type(struct kvm_vcpu *vcpu, gfn_t gfn)
EXPORT_SYMBOL_GPL(kvm_get_guest_memory_type);
static void __kvm_unsync_page(struct kvm_vcpu *vcpu, struct kvm_mmu_page *sp)
static void kvm_unsync_pages(struct kvm_vcpu *vcpu,  gfn_t gfn)
static int mmu_need_write_protect(struct kvm_vcpu *vcpu, gfn_t gfn,
bool can_unsync)
static int set_spte(struct kvm_vcpu *vcpu, u64 *sptep,
unsigned pte_access, int user_fault,
int write_fault, int dirty, int level,
gfn_t gfn, pfn_t pfn, bool speculative,
bool can_unsync, bool host_writable)
static void mmu_set_spte(struct kvm_vcpu *vcpu, u64 *sptep,
unsigned pt_access, unsigned pte_access,
int user_fault, int write_fault, int dirty,
int *ptwrite, int level, gfn_t gfn,
pfn_t pfn, bool speculative,
bool host_writable)
static void nonpaging_new_cr3(struct kvm_vcpu *vcpu)
static pfn_t pte_prefetch_gfn_to_pfn(struct kvm_vcpu *vcpu, gfn_t gfn,
bool no_dirty_log)
static int direct_pte_prefetch_many(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp,
u64 *start, u64 *end)
static void __direct_pte_prefetch(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp, u64 *sptep)
static void direct_pte_prefetch(struct kvm_vcpu *vcpu, u64 *sptep)
static int __direct_map(struct kvm_vcpu *vcpu, gpa_t v, int write,
int map_writable, int level, gfn_t gfn, pfn_t pfn,
bool prefault)
static void kvm_send_hwpoison_signal(unsigned long address, struct task_struct *tsk)
static int kvm_handle_bad_page(struct kvm *kvm, gfn_t gfn, pfn_t pfn)
static void transparent_hugepage_adjust(struct kvm_vcpu *vcpu,
gfn_t *gfnp, pfn_t *pfnp, int *levelp)
static bool try_async_pf(struct kvm_vcpu *vcpu, bool prefault, gfn_t gfn,
gva_t gva, pfn_t *pfn, bool write, bool *writable);
static int nonpaging_map(struct kvm_vcpu *vcpu, gva_t v, int write, gfn_t gfn,
bool prefault)
static void mmu_free_roots(struct kvm_vcpu *vcpu)
static int mmu_check_root(struct kvm_vcpu *vcpu, gfn_t root_gfn)
static int mmu_alloc_direct_roots(struct kvm_vcpu *vcpu)
static int mmu_alloc_shadow_roots(struct kvm_vcpu *vcpu)
static int mmu_alloc_roots(struct kvm_vcpu *vcpu)
static void mmu_sync_roots(struct kvm_vcpu *vcpu)
void kvm_mmu_sync_roots(struct kvm_vcpu *vcpu)
static gpa_t nonpaging_gva_to_gpa(struct kvm_vcpu *vcpu, gva_t vaddr,
u32 access, struct x86_exception *exception)
static gpa_t nonpaging_gva_to_gpa_nested(struct kvm_vcpu *vcpu, gva_t vaddr,
u32 access,
struct x86_exception *exception)
static int nonpaging_page_fault(struct kvm_vcpu *vcpu, gva_t gva,
u32 error_code, bool prefault)
static int kvm_arch_setup_async_pf(struct kvm_vcpu *vcpu, gva_t gva, gfn_t gfn)
static bool can_do_async_pf(struct kvm_vcpu *vcpu)
static bool try_async_pf(struct kvm_vcpu *vcpu, bool prefault, gfn_t gfn,
gva_t gva, pfn_t *pfn, bool write, bool *writable)
static int tdp_page_fault(struct kvm_vcpu *vcpu, gva_t gpa, u32 error_code,
bool prefault)
static void nonpaging_free(struct kvm_vcpu *vcpu)
static int nonpaging_init_context(struct kvm_vcpu *vcpu,
struct kvm_mmu *context)
void kvm_mmu_flush_tlb(struct kvm_vcpu *vcpu)
static void paging_new_cr3(struct kvm_vcpu *vcpu)
static unsigned long get_cr3(struct kvm_vcpu *vcpu)
static void inject_page_fault(struct kvm_vcpu *vcpu,
struct x86_exception *fault)
static void paging_free(struct kvm_vcpu *vcpu)
static bool is_rsvd_bits_set(struct kvm_mmu *mmu, u64 gpte, int level)
#define PTTYPE 64
#undef PTTYPE
#define PTTYPE 32
#undef PTTYPE
static void reset_rsvds_bits_mask(struct kvm_vcpu *vcpu,
struct kvm_mmu *context,
int level)
static int paging64_init_context_common(struct kvm_vcpu *vcpu,
struct kvm_mmu *context,
int level)
static int paging64_init_context(struct kvm_vcpu *vcpu,
struct kvm_mmu *context)
static int paging32_init_context(struct kvm_vcpu *vcpu,
struct kvm_mmu *context)
static int paging32E_init_context(struct kvm_vcpu *vcpu,
struct kvm_mmu *context)
static int init_kvm_tdp_mmu(struct kvm_vcpu *vcpu)
int kvm_init_shadow_mmu(struct kvm_vcpu *vcpu, struct kvm_mmu *context)
EXPORT_SYMBOL_GPL(kvm_init_shadow_mmu);
static int init_kvm_softmmu(struct kvm_vcpu *vcpu)
static int init_kvm_nested_mmu(struct kvm_vcpu *vcpu)
static int init_kvm_mmu(struct kvm_vcpu *vcpu)
static void destroy_kvm_mmu(struct kvm_vcpu *vcpu)
int kvm_mmu_reset_context(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_mmu_reset_context);
int kvm_mmu_load(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_mmu_load);
void kvm_mmu_unload(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_mmu_unload);
static void mmu_pte_write_zap_pte(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp,
u64 *spte)
static void mmu_pte_write_new_pte(struct kvm_vcpu *vcpu,
struct kvm_mmu_page *sp, u64 *spte,
const void *new)
static bool need_remote_flush(u64 old, u64 new)
static void mmu_pte_write_flush_tlb(struct kvm_vcpu *vcpu, bool zap_page,
bool remote_flush, bool local_flush)
static bool last_updated_pte_accessed(struct kvm_vcpu *vcpu)
static void kvm_mmu_access_page(struct kvm_vcpu *vcpu, gfn_t gfn)
void kvm_mmu_pte_write(struct kvm_vcpu *vcpu, gpa_t gpa,
const u8 *new, int bytes,
bool guest_initiated)
int kvm_mmu_unprotect_page_virt(struct kvm_vcpu *vcpu, gva_t gva)
EXPORT_SYMBOL_GPL(kvm_mmu_unprotect_page_virt);
void __kvm_mmu_free_some_pages(struct kvm_vcpu *vcpu)
int kvm_mmu_page_fault(struct kvm_vcpu *vcpu, gva_t cr2, u32 error_code,
void *insn, int insn_len)
EXPORT_SYMBOL_GPL(kvm_mmu_page_fault);
void kvm_mmu_invlpg(struct kvm_vcpu *vcpu, gva_t gva)
EXPORT_SYMBOL_GPL(kvm_mmu_invlpg);
void kvm_enable_tdp(void)
EXPORT_SYMBOL_GPL(kvm_enable_tdp);
void kvm_disable_tdp(void)
EXPORT_SYMBOL_GPL(kvm_disable_tdp);
static void free_mmu_pages(struct kvm_vcpu *vcpu)
static int alloc_mmu_pages(struct kvm_vcpu *vcpu)
int kvm_mmu_create(struct kvm_vcpu *vcpu)
int kvm_mmu_setup(struct kvm_vcpu *vcpu)
void kvm_mmu_slot_remove_write_access(struct kvm *kvm, int slot)
void kvm_mmu_zap_all(struct kvm *kvm)
static int kvm_mmu_remove_some_alloc_mmu_pages(struct kvm *kvm,
struct list_head *invalid_list)
static int mmu_shrink(struct shrinker *shrink, struct shrink_control *sc)
static struct shrinker mmu_shrinker = ;
static void mmu_destroy_caches(void)
int kvm_mmu_module_init(void)
unsigned int kvm_mmu_calculate_mmu_pages(struct kvm *kvm)
static void *pv_mmu_peek_buffer(struct kvm_pv_mmu_op_buffer *buffer,
unsigned len)
static void *pv_mmu_read_buffer(struct kvm_pv_mmu_op_buffer *buffer,
unsigned len)
static int kvm_pv_mmu_write(struct kvm_vcpu *vcpu,
gpa_t addr, gpa_t value)
static int kvm_pv_mmu_flush_tlb(struct kvm_vcpu *vcpu)
static int kvm_pv_mmu_release_pt(struct kvm_vcpu *vcpu, gpa_t addr)
static int kvm_pv_mmu_op_one(struct kvm_vcpu *vcpu,
struct kvm_pv_mmu_op_buffer *buffer)
int kvm_pv_mmu_op(struct kvm_vcpu *vcpu, unsigned long bytes,
gpa_t addr, unsigned long *ret)
int kvm_mmu_get_spte_hierarchy(struct kvm_vcpu *vcpu, u64 addr, u64 sptes[4])
EXPORT_SYMBOL_GPL(kvm_mmu_get_spte_hierarchy);
void kvm_mmu_destroy(struct kvm_vcpu *vcpu)
static void mmu_audit_disable(void)
void kvm_mmu_module_exit(void)
