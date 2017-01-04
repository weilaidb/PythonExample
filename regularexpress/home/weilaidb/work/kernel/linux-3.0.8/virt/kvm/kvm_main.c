#define CREATE_TRACE_POINTS
MODULE_AUTHOR("Qumranet");
MODULE_LICENSE("GPL");
DEFINE_RAW_SPINLOCK(kvm_lock);
LIST_HEAD(vm_list);
static cpumask_var_t cpus_hardware_enabled;
static int kvm_usage_count = 0;
static atomic_t hardware_enable_failed;
struct kmem_cache *kvm_vcpu_cache;
EXPORT_SYMBOL_GPL(kvm_vcpu_cache);
static __read_mostly struct preempt_ops kvm_preempt_ops;
struct dentry *kvm_debugfs_dir;
static long kvm_vcpu_ioctl(struct file *file, unsigned int ioctl,
unsigned long arg);
static int hardware_enable_all(void);
static void hardware_disable_all(void);
static void kvm_io_bus_destroy(struct kvm_io_bus *bus);
bool kvm_rebooting;
EXPORT_SYMBOL_GPL(kvm_rebooting);
static bool largepages_enabled = true;
static struct page *hwpoison_page;
static pfn_t hwpoison_pfn;
static struct page *fault_page;
static pfn_t fault_pfn;
inline int kvm_is_mmio_pfn(pfn_t pfn)
void vcpu_load(struct kvm_vcpu *vcpu)
void vcpu_put(struct kvm_vcpu *vcpu)
static void ack_flush(void *_completed)
static bool make_all_cpus_request(struct kvm *kvm, unsigned int req)
void kvm_flush_remote_tlbs(struct kvm *kvm)
void kvm_reload_remote_mmus(struct kvm *kvm)
int kvm_vcpu_init(struct kvm_vcpu *vcpu, struct kvm *kvm, unsigned id)
EXPORT_SYMBOL_GPL(kvm_vcpu_init);
void kvm_vcpu_uninit(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_vcpu_uninit);
#if defined(CONFIG_MMU_NOTIFIER) && defined(KVM_ARCH_WANT_MMU_NOTIFIER)
static inline struct kvm *mmu_notifier_to_kvm(struct mmu_notifier *mn)
static void kvm_mmu_notifier_invalidate_page(struct mmu_notifier *mn,
struct mm_struct *mm,
unsigned long address)
static void kvm_mmu_notifier_change_pte(struct mmu_notifier *mn,
struct mm_struct *mm,
unsigned long address,
pte_t pte)
static void kvm_mmu_notifier_invalidate_range_start(struct mmu_notifier *mn,
struct mm_struct *mm,
unsigned long start,
unsigned long end)
static void kvm_mmu_notifier_invalidate_range_end(struct mmu_notifier *mn,
struct mm_struct *mm,
unsigned long start,
unsigned long end)
static int kvm_mmu_notifier_clear_flush_young(struct mmu_notifier *mn,
struct mm_struct *mm,
unsigned long address)
static int kvm_mmu_notifier_test_young(struct mmu_notifier *mn,
struct mm_struct *mm,
unsigned long address)
static void kvm_mmu_notifier_release(struct mmu_notifier *mn,
struct mm_struct *mm)
static const struct mmu_notifier_ops kvm_mmu_notifier_ops = ;
static int kvm_init_mmu_notifier(struct kvm *kvm)
static int kvm_init_mmu_notifier(struct kvm *kvm)
static struct kvm *kvm_create_vm(void)
static void kvm_destroy_dirty_bitmap(struct kvm_memory_slot *memslot)
static void kvm_free_physmem_slot(struct kvm_memory_slot *free,
struct kvm_memory_slot *dont)
void kvm_free_physmem(struct kvm *kvm)
static void kvm_destroy_vm(struct kvm *kvm)
void kvm_get_kvm(struct kvm *kvm)
EXPORT_SYMBOL_GPL(kvm_get_kvm);
void kvm_put_kvm(struct kvm *kvm)
EXPORT_SYMBOL_GPL(kvm_put_kvm);
static int kvm_vm_release(struct inode *inode, struct file *filp)
static int kvm_create_dirty_bitmap(struct kvm_memory_slot *memslot)
int __kvm_set_memory_region(struct kvm *kvm,
struct kvm_userspace_memory_region *mem,
int user_alloc)
EXPORT_SYMBOL_GPL(__kvm_set_memory_region);
int kvm_set_memory_region(struct kvm *kvm,
struct kvm_userspace_memory_region *mem,
int user_alloc)
EXPORT_SYMBOL_GPL(kvm_set_memory_region);
int kvm_vm_ioctl_set_memory_region(struct kvm *kvm,
struct
kvm_userspace_memory_region *mem,
int user_alloc)
int kvm_get_dirty_log(struct kvm *kvm,
struct kvm_dirty_log *log, int *is_dirty)
void kvm_disable_largepages(void)
EXPORT_SYMBOL_GPL(kvm_disable_largepages);
int is_error_page(struct page *page)
EXPORT_SYMBOL_GPL(is_error_page);
int is_error_pfn(pfn_t pfn)
EXPORT_SYMBOL_GPL(is_error_pfn);
int is_hwpoison_pfn(pfn_t pfn)
EXPORT_SYMBOL_GPL(is_hwpoison_pfn);
int is_fault_pfn(pfn_t pfn)
EXPORT_SYMBOL_GPL(is_fault_pfn);
static inline unsigned long bad_hva(void)
int kvm_is_error_hva(unsigned long addr)
EXPORT_SYMBOL_GPL(kvm_is_error_hva);
static struct kvm_memory_slot *__gfn_to_memslot(struct kvm_memslots *slots,
gfn_t gfn)
struct kvm_memory_slot *gfn_to_memslot(struct kvm *kvm, gfn_t gfn)
EXPORT_SYMBOL_GPL(gfn_to_memslot);
int kvm_is_visible_gfn(struct kvm *kvm, gfn_t gfn)
EXPORT_SYMBOL_GPL(kvm_is_visible_gfn);
unsigned long kvm_host_page_size(struct kvm *kvm, gfn_t gfn)
static unsigned long gfn_to_hva_many(struct kvm_memory_slot *slot, gfn_t gfn,
gfn_t *nr_pages)
unsigned long gfn_to_hva(struct kvm *kvm, gfn_t gfn)
EXPORT_SYMBOL_GPL(gfn_to_hva);
static pfn_t get_fault_pfn(void)
int get_user_page_nowait(struct task_struct *tsk, struct mm_struct *mm,
unsigned long start, int write, struct page **page)
static inline int check_user_page_hwpoison(unsigned long addr)
static pfn_t hva_to_pfn(struct kvm *kvm, unsigned long addr, bool atomic,
bool *async, bool write_fault, bool *writable)
pfn_t hva_to_pfn_atomic(struct kvm *kvm, unsigned long addr)
EXPORT_SYMBOL_GPL(hva_to_pfn_atomic);
static pfn_t __gfn_to_pfn(struct kvm *kvm, gfn_t gfn, bool atomic, bool *async,
bool write_fault, bool *writable)
pfn_t gfn_to_pfn_atomic(struct kvm *kvm, gfn_t gfn)
EXPORT_SYMBOL_GPL(gfn_to_pfn_atomic);
pfn_t gfn_to_pfn_async(struct kvm *kvm, gfn_t gfn, bool *async,
bool write_fault, bool *writable)
EXPORT_SYMBOL_GPL(gfn_to_pfn_async);
pfn_t gfn_to_pfn(struct kvm *kvm, gfn_t gfn)
EXPORT_SYMBOL_GPL(gfn_to_pfn);
pfn_t gfn_to_pfn_prot(struct kvm *kvm, gfn_t gfn, bool write_fault,
bool *writable)
EXPORT_SYMBOL_GPL(gfn_to_pfn_prot);
pfn_t gfn_to_pfn_memslot(struct kvm *kvm,
struct kvm_memory_slot *slot, gfn_t gfn)
int gfn_to_page_many_atomic(struct kvm *kvm, gfn_t gfn, struct page **pages,
int nr_pages)
EXPORT_SYMBOL_GPL(gfn_to_page_many_atomic);
struct page *gfn_to_page(struct kvm *kvm, gfn_t gfn)
EXPORT_SYMBOL_GPL(gfn_to_page);
void kvm_release_page_clean(struct page *page)
EXPORT_SYMBOL_GPL(kvm_release_page_clean);
void kvm_release_pfn_clean(pfn_t pfn)
EXPORT_SYMBOL_GPL(kvm_release_pfn_clean);
void kvm_release_page_dirty(struct page *page)
EXPORT_SYMBOL_GPL(kvm_release_page_dirty);
void kvm_release_pfn_dirty(pfn_t pfn)
EXPORT_SYMBOL_GPL(kvm_release_pfn_dirty);
void kvm_set_page_dirty(struct page *page)
EXPORT_SYMBOL_GPL(kvm_set_page_dirty);
void kvm_set_pfn_dirty(pfn_t pfn)
EXPORT_SYMBOL_GPL(kvm_set_pfn_dirty);
void kvm_set_pfn_accessed(pfn_t pfn)
EXPORT_SYMBOL_GPL(kvm_set_pfn_accessed);
void kvm_get_pfn(pfn_t pfn)
EXPORT_SYMBOL_GPL(kvm_get_pfn);
static int next_segment(unsigned long len, int offset)
int kvm_read_guest_page(struct kvm *kvm, gfn_t gfn, void *data, int offset,
int len)
EXPORT_SYMBOL_GPL(kvm_read_guest_page);
int kvm_read_guest(struct kvm *kvm, gpa_t gpa, void *data, unsigned long len)
EXPORT_SYMBOL_GPL(kvm_read_guest);
int kvm_read_guest_atomic(struct kvm *kvm, gpa_t gpa, void *data,
unsigned long len)
EXPORT_SYMBOL(kvm_read_guest_atomic);
int kvm_write_guest_page(struct kvm *kvm, gfn_t gfn, const void *data,
int offset, int len)
EXPORT_SYMBOL_GPL(kvm_write_guest_page);
int kvm_write_guest(struct kvm *kvm, gpa_t gpa, const void *data,
unsigned long len)
int kvm_gfn_to_hva_cache_init(struct kvm *kvm, struct gfn_to_hva_cache *ghc,
gpa_t gpa)
EXPORT_SYMBOL_GPL(kvm_gfn_to_hva_cache_init);
int kvm_write_guest_cached(struct kvm *kvm, struct gfn_to_hva_cache *ghc,
void *data, unsigned long len)
EXPORT_SYMBOL_GPL(kvm_write_guest_cached);
int kvm_clear_guest_page(struct kvm *kvm, gfn_t gfn, int offset, int len)
EXPORT_SYMBOL_GPL(kvm_clear_guest_page);
int kvm_clear_guest(struct kvm *kvm, gpa_t gpa, unsigned long len)
EXPORT_SYMBOL_GPL(kvm_clear_guest);
void mark_page_dirty_in_slot(struct kvm *kvm, struct kvm_memory_slot *memslot,
gfn_t gfn)
void mark_page_dirty(struct kvm *kvm, gfn_t gfn)
void kvm_vcpu_block(struct kvm_vcpu *vcpu)
void kvm_resched(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_resched);
void kvm_vcpu_on_spin(struct kvm_vcpu *me)
EXPORT_SYMBOL_GPL(kvm_vcpu_on_spin);
static int kvm_vcpu_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct kvm_vcpu_vm_ops = ;
static int kvm_vcpu_mmap(struct file *file, struct vm_area_struct *vma)
static int kvm_vcpu_release(struct inode *inode, struct file *filp)
static struct file_operations kvm_vcpu_fops = ;
static int create_vcpu_fd(struct kvm_vcpu *vcpu)
static int kvm_vm_ioctl_create_vcpu(struct kvm *kvm, u32 id)
static int kvm_vcpu_ioctl_set_sigmask(struct kvm_vcpu *vcpu, sigset_t *sigset)
static long kvm_vcpu_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
static long kvm_vm_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
struct compat_kvm_dirty_log ;
static long kvm_vm_compat_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
static int kvm_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct kvm_vm_vm_ops = ;
static int kvm_vm_mmap(struct file *file, struct vm_area_struct *vma)
static struct file_operations kvm_vm_fops = ;
static int kvm_dev_ioctl_create_vm(void)
static long kvm_dev_ioctl_check_extension_generic(long arg)
static long kvm_dev_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
static struct file_operations kvm_chardev_ops = ;
static struct miscdevice kvm_dev = ;
static void hardware_enable_nolock(void *junk)
static void hardware_enable(void *junk)
static void hardware_disable_nolock(void *junk)
static void hardware_disable(void *junk)
static void hardware_disable_all_nolock(void)
static void hardware_disable_all(void)
static int hardware_enable_all(void)
static int kvm_cpu_hotplug(struct notifier_block *notifier, unsigned long val,
void *v)
asmlinkage void kvm_spurious_fault(void)
EXPORT_SYMBOL_GPL(kvm_spurious_fault);
static int kvm_reboot(struct notifier_block *notifier, unsigned long val,
void *v)
static struct notifier_block kvm_reboot_notifier = ;
static void kvm_io_bus_destroy(struct kvm_io_bus *bus)
int kvm_io_bus_write(struct kvm *kvm, enum kvm_bus bus_idx, gpa_t addr,
int len, const void *val)
int kvm_io_bus_read(struct kvm *kvm, enum kvm_bus bus_idx, gpa_t addr,
int len, void *val)
int kvm_io_bus_register_dev(struct kvm *kvm, enum kvm_bus bus_idx,
struct kvm_io_device *dev)
int kvm_io_bus_unregister_dev(struct kvm *kvm, enum kvm_bus bus_idx,
struct kvm_io_device *dev)
static struct notifier_block kvm_cpu_notifier = ;
static int vm_stat_get(void *_offset, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(vm_stat_fops, vm_stat_get, NULL, "%llu\n");
static int vcpu_stat_get(void *_offset, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(vcpu_stat_fops, vcpu_stat_get, NULL, "%llu\n");
static const struct file_operations *stat_fops[] = ;
static void kvm_init_debug(void)
static void kvm_exit_debug(void)
static int kvm_suspend(void)
static void kvm_resume(void)
static struct syscore_ops kvm_syscore_ops = ;
struct page *bad_page;
pfn_t bad_pfn;
static inline
struct kvm_vcpu *preempt_notifier_to_vcpu(struct preempt_notifier *pn)
static void kvm_sched_in(struct preempt_notifier *pn, int cpu)
static void kvm_sched_out(struct preempt_notifier *pn,
struct task_struct *next)
int kvm_init(void *opaque, unsigned vcpu_size, unsigned vcpu_align,
struct module *module)
EXPORT_SYMBOL_GPL(kvm_init);
void kvm_exit(void)
EXPORT_SYMBOL_GPL(kvm_exit);
