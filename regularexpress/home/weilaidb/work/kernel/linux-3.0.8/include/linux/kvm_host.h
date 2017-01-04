#define __KVM_HOST_H
#define KVM_MMIO_SIZE 8
#define KVM_REQ_TLB_FLUSH          0
#define KVM_REQ_MIGRATE_TIMER      1
#define KVM_REQ_REPORT_TPR_ACCESS  2
#define KVM_REQ_MMU_RELOAD         3
#define KVM_REQ_TRIPLE_FAULT       4
#define KVM_REQ_PENDING_TIMER      5
#define KVM_REQ_UNHALT             6
#define KVM_REQ_MMU_SYNC           7
#define KVM_REQ_CLOCK_UPDATE       8
#define KVM_REQ_KICK               9
#define KVM_REQ_DEACTIVATE_FPU    10
#define KVM_REQ_EVENT             11
#define KVM_REQ_APF_HALT          12
#define KVM_USERSPACE_IRQ_SOURCE_ID	0
struct kvm;
struct kvm_vcpu;
extern struct kmem_cache *kvm_vcpu_cache;
struct kvm_io_bus ;
enum kvm_bus ;
int kvm_io_bus_write(struct kvm *kvm, enum kvm_bus bus_idx, gpa_t addr,
int len, const void *val);
int kvm_io_bus_read(struct kvm *kvm, enum kvm_bus bus_idx, gpa_t addr, int len,
void *val);
int kvm_io_bus_register_dev(struct kvm *kvm, enum kvm_bus bus_idx,
struct kvm_io_device *dev);
int kvm_io_bus_unregister_dev(struct kvm *kvm, enum kvm_bus bus_idx,
struct kvm_io_device *dev);
struct kvm_async_pf ;
void kvm_clear_async_pf_completion_queue(struct kvm_vcpu *vcpu);
void kvm_check_async_pf_completion(struct kvm_vcpu *vcpu);
int kvm_setup_async_pf(struct kvm_vcpu *vcpu, gva_t gva, gfn_t gfn,
struct kvm_arch_async_pf *arch);
int kvm_async_pf_wakeup_all(struct kvm_vcpu *vcpu);
enum ;
struct kvm_vcpu ;
static inline int kvm_vcpu_exiting_guest_mode(struct kvm_vcpu *vcpu)
#define KVM_MEM_MAX_NR_PAGES ((1UL << 31) - 1)
struct kvm_lpage_info ;
struct kvm_memory_slot ;
static inline unsigned long kvm_dirty_bitmap_bytes(struct kvm_memory_slot *memslot)
struct kvm_kernel_irq_routing_entry ;
struct kvm_irq_routing_table ;
struct kvm_irq_routing_table ;
struct kvm_memslots ;
struct kvm ;
#define pr_unimpl(vcpu, fmt, ...)					\
do  while (0)
#define kvm_printf(kvm, fmt ...) printk(KERN_DEBUG fmt)
#define vcpu_printf(vcpu, fmt...) kvm_printf(vcpu->kvm, fmt)
static inline struct kvm_vcpu *kvm_get_vcpu(struct kvm *kvm, int i)
#define kvm_for_each_vcpu(idx, vcpup, kvm) \
for (idx = 0; \
idx < atomic_read(&kvm->online_vcpus) && \
(vcpup = kvm_get_vcpu(kvm, idx)) != NULL; \
idx++)
int kvm_vcpu_init(struct kvm_vcpu *vcpu, struct kvm *kvm, unsigned id);
void kvm_vcpu_uninit(struct kvm_vcpu *vcpu);
void vcpu_load(struct kvm_vcpu *vcpu);
void vcpu_put(struct kvm_vcpu *vcpu);
int kvm_init(void *opaque, unsigned vcpu_size, unsigned vcpu_align,
struct module *module);
void kvm_exit(void);
void kvm_get_kvm(struct kvm *kvm);
void kvm_put_kvm(struct kvm *kvm);
static inline struct kvm_memslots *kvm_memslots(struct kvm *kvm)
#define HPA_MSB ((sizeof(hpa_t) * 8) - 1)
#define HPA_ERR_MASK ((hpa_t)1 << HPA_MSB)
static inline int is_error_hpa(hpa_t hpa)
extern struct page *bad_page;
extern pfn_t bad_pfn;
int is_error_page(struct page *page);
int is_error_pfn(pfn_t pfn);
int is_hwpoison_pfn(pfn_t pfn);
int is_fault_pfn(pfn_t pfn);
int kvm_is_error_hva(unsigned long addr);
int kvm_set_memory_region(struct kvm *kvm,
struct kvm_userspace_memory_region *mem,
int user_alloc);
int __kvm_set_memory_region(struct kvm *kvm,
struct kvm_userspace_memory_region *mem,
int user_alloc);
int kvm_arch_prepare_memory_region(struct kvm *kvm,
struct kvm_memory_slot *memslot,
struct kvm_memory_slot old,
struct kvm_userspace_memory_region *mem,
int user_alloc);
void kvm_arch_commit_memory_region(struct kvm *kvm,
struct kvm_userspace_memory_region *mem,
struct kvm_memory_slot old,
int user_alloc);
void kvm_disable_largepages(void);
void kvm_arch_flush_shadow(struct kvm *kvm);
int gfn_to_page_many_atomic(struct kvm *kvm, gfn_t gfn, struct page **pages,
int nr_pages);
struct page *gfn_to_page(struct kvm *kvm, gfn_t gfn);
unsigned long gfn_to_hva(struct kvm *kvm, gfn_t gfn);
void kvm_release_page_clean(struct page *page);
void kvm_release_page_dirty(struct page *page);
void kvm_set_page_dirty(struct page *page);
void kvm_set_page_accessed(struct page *page);
pfn_t hva_to_pfn_atomic(struct kvm *kvm, unsigned long addr);
pfn_t gfn_to_pfn_atomic(struct kvm *kvm, gfn_t gfn);
pfn_t gfn_to_pfn_async(struct kvm *kvm, gfn_t gfn, bool *async,
bool write_fault, bool *writable);
pfn_t gfn_to_pfn(struct kvm *kvm, gfn_t gfn);
pfn_t gfn_to_pfn_prot(struct kvm *kvm, gfn_t gfn, bool write_fault,
bool *writable);
pfn_t gfn_to_pfn_memslot(struct kvm *kvm,
struct kvm_memory_slot *slot, gfn_t gfn);
void kvm_release_pfn_dirty(pfn_t);
void kvm_release_pfn_clean(pfn_t pfn);
void kvm_set_pfn_dirty(pfn_t pfn);
void kvm_set_pfn_accessed(pfn_t pfn);
void kvm_get_pfn(pfn_t pfn);
int kvm_read_guest_page(struct kvm *kvm, gfn_t gfn, void *data, int offset,
int len);
int kvm_read_guest_atomic(struct kvm *kvm, gpa_t gpa, void *data,
unsigned long len);
int kvm_read_guest(struct kvm *kvm, gpa_t gpa, void *data, unsigned long len);
int kvm_write_guest_page(struct kvm *kvm, gfn_t gfn, const void *data,
int offset, int len);
int kvm_write_guest(struct kvm *kvm, gpa_t gpa, const void *data,
unsigned long len);
int kvm_write_guest_cached(struct kvm *kvm, struct gfn_to_hva_cache *ghc,
void *data, unsigned long len);
int kvm_gfn_to_hva_cache_init(struct kvm *kvm, struct gfn_to_hva_cache *ghc,
gpa_t gpa);
int kvm_clear_guest_page(struct kvm *kvm, gfn_t gfn, int offset, int len);
int kvm_clear_guest(struct kvm *kvm, gpa_t gpa, unsigned long len);
struct kvm_memory_slot *gfn_to_memslot(struct kvm *kvm, gfn_t gfn);
int kvm_is_visible_gfn(struct kvm *kvm, gfn_t gfn);
unsigned long kvm_host_page_size(struct kvm *kvm, gfn_t gfn);
void mark_page_dirty(struct kvm *kvm, gfn_t gfn);
void mark_page_dirty_in_slot(struct kvm *kvm, struct kvm_memory_slot *memslot,
gfn_t gfn);
void kvm_vcpu_block(struct kvm_vcpu *vcpu);
void kvm_vcpu_on_spin(struct kvm_vcpu *vcpu);
void kvm_resched(struct kvm_vcpu *vcpu);
void kvm_load_guest_fpu(struct kvm_vcpu *vcpu);
void kvm_put_guest_fpu(struct kvm_vcpu *vcpu);
void kvm_flush_remote_tlbs(struct kvm *kvm);
void kvm_reload_remote_mmus(struct kvm *kvm);
long kvm_arch_dev_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg);
long kvm_arch_vcpu_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg);
int kvm_dev_ioctl_check_extension(long ext);
int kvm_get_dirty_log(struct kvm *kvm,
struct kvm_dirty_log *log, int *is_dirty);
int kvm_vm_ioctl_get_dirty_log(struct kvm *kvm,
struct kvm_dirty_log *log);
int kvm_vm_ioctl_set_memory_region(struct kvm *kvm,
struct
kvm_userspace_memory_region *mem,
int user_alloc);
long kvm_arch_vm_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg);
int kvm_arch_vcpu_ioctl_get_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu);
int kvm_arch_vcpu_ioctl_set_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu);
int kvm_arch_vcpu_ioctl_translate(struct kvm_vcpu *vcpu,
struct kvm_translation *tr);
int kvm_arch_vcpu_ioctl_get_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs);
int kvm_arch_vcpu_ioctl_set_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs);
int kvm_arch_vcpu_ioctl_get_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs);
int kvm_arch_vcpu_ioctl_set_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs);
int kvm_arch_vcpu_ioctl_get_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state);
int kvm_arch_vcpu_ioctl_set_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state);
int kvm_arch_vcpu_ioctl_set_guest_debug(struct kvm_vcpu *vcpu,
struct kvm_guest_debug *dbg);
int kvm_arch_vcpu_ioctl_run(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run);
int kvm_arch_init(void *opaque);
void kvm_arch_exit(void);
int kvm_arch_vcpu_init(struct kvm_vcpu *vcpu);
void kvm_arch_vcpu_uninit(struct kvm_vcpu *vcpu);
void kvm_arch_vcpu_free(struct kvm_vcpu *vcpu);
void kvm_arch_vcpu_load(struct kvm_vcpu *vcpu, int cpu);
void kvm_arch_vcpu_put(struct kvm_vcpu *vcpu);
struct kvm_vcpu *kvm_arch_vcpu_create(struct kvm *kvm, unsigned int id);
int kvm_arch_vcpu_setup(struct kvm_vcpu *vcpu);
void kvm_arch_vcpu_destroy(struct kvm_vcpu *vcpu);
int kvm_arch_vcpu_reset(struct kvm_vcpu *vcpu);
int kvm_arch_hardware_enable(void *garbage);
void kvm_arch_hardware_disable(void *garbage);
int kvm_arch_hardware_setup(void);
void kvm_arch_hardware_unsetup(void);
void kvm_arch_check_processor_compat(void *rtn);
int kvm_arch_vcpu_runnable(struct kvm_vcpu *vcpu);
void kvm_free_physmem(struct kvm *kvm);
static inline struct kvm *kvm_arch_alloc_vm(void)
static inline void kvm_arch_free_vm(struct kvm *kvm)
int kvm_arch_init_vm(struct kvm *kvm);
void kvm_arch_destroy_vm(struct kvm *kvm);
void kvm_free_all_assigned_devices(struct kvm *kvm);
void kvm_arch_sync_events(struct kvm *kvm);
int kvm_cpu_has_pending_timer(struct kvm_vcpu *vcpu);
void kvm_vcpu_kick(struct kvm_vcpu *vcpu);
int kvm_is_mmio_pfn(pfn_t pfn);
struct kvm_irq_ack_notifier ;
struct kvm_assigned_dev_kernel ;
struct kvm_irq_mask_notifier ;
void kvm_register_irq_mask_notifier(struct kvm *kvm, int irq,
struct kvm_irq_mask_notifier *kimn);
void kvm_unregister_irq_mask_notifier(struct kvm *kvm, int irq,
struct kvm_irq_mask_notifier *kimn);
void kvm_fire_mask_notifiers(struct kvm *kvm, unsigned irqchip, unsigned pin,
bool mask);
void kvm_get_intr_delivery_bitmask(struct kvm_ioapic *ioapic,
union kvm_ioapic_redirect_entry *entry,
unsigned long *deliver_bitmask);
int kvm_set_irq(struct kvm *kvm, int irq_source_id, u32 irq, int level);
int kvm_set_msi(struct kvm_kernel_irq_routing_entry *irq_entry, struct kvm *kvm,
int irq_source_id, int level);
void kvm_notify_acked_irq(struct kvm *kvm, unsigned irqchip, unsigned pin);
void kvm_register_irq_ack_notifier(struct kvm *kvm,
struct kvm_irq_ack_notifier *kian);
void kvm_unregister_irq_ack_notifier(struct kvm *kvm,
struct kvm_irq_ack_notifier *kian);
int kvm_request_irq_source_id(struct kvm *kvm);
void kvm_free_irq_source_id(struct kvm *kvm, int irq_source_id);
#define KVM_IOMMU_CACHE_COHERENCY	0x1
int kvm_iommu_map_pages(struct kvm *kvm, struct kvm_memory_slot *slot);
int kvm_iommu_map_guest(struct kvm *kvm);
int kvm_iommu_unmap_guest(struct kvm *kvm);
int kvm_assign_device(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev);
int kvm_deassign_device(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev);
static inline int kvm_iommu_map_pages(struct kvm *kvm,
struct kvm_memory_slot *slot)
static inline int kvm_iommu_map_guest(struct kvm *kvm)
static inline int kvm_iommu_unmap_guest(struct kvm *kvm)
static inline int kvm_assign_device(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev)
static inline int kvm_deassign_device(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev)
static inline void kvm_guest_enter(void)
static inline void kvm_guest_exit(void)
static inline int memslot_id(struct kvm *kvm, gfn_t gfn)
static inline unsigned long gfn_to_hva_memslot(struct kvm_memory_slot *slot,
gfn_t gfn)
static inline gpa_t gfn_to_gpa(gfn_t gfn)
static inline gfn_t gpa_to_gfn(gpa_t gpa)
static inline hpa_t pfn_to_hpa(pfn_t pfn)
static inline void kvm_migrate_timers(struct kvm_vcpu *vcpu)
enum kvm_stat_kind ;
struct kvm_stats_debugfs_item ;
extern struct kvm_stats_debugfs_item debugfs_entries[];
extern struct dentry *kvm_debugfs_dir;
static inline int mmu_notifier_retry(struct kvm_vcpu *vcpu, unsigned long mmu_seq)
#define KVM_MAX_IRQ_ROUTES 1024
int kvm_setup_default_irq_routing(struct kvm *kvm);
int kvm_set_irq_routing(struct kvm *kvm,
const struct kvm_irq_routing_entry *entries,
unsigned nr,
unsigned flags);
void kvm_free_irq_routing(struct kvm *kvm);
static inline void kvm_free_irq_routing(struct kvm *kvm)
void kvm_eventfd_init(struct kvm *kvm);
int kvm_irqfd(struct kvm *kvm, int fd, int gsi, int flags);
void kvm_irqfd_release(struct kvm *kvm);
void kvm_irq_routing_update(struct kvm *, struct kvm_irq_routing_table *);
int kvm_ioeventfd(struct kvm *kvm, struct kvm_ioeventfd *args);
static inline void kvm_eventfd_init(struct kvm *kvm)
static inline int kvm_irqfd(struct kvm *kvm, int fd, int gsi, int flags)
static inline void kvm_irqfd_release(struct kvm *kvm)
static inline void kvm_irq_routing_update(struct kvm *kvm,
struct kvm_irq_routing_table *irq_rt)
static inline int kvm_ioeventfd(struct kvm *kvm, struct kvm_ioeventfd *args)
static inline bool kvm_vcpu_is_bsp(struct kvm_vcpu *vcpu)
long kvm_vm_ioctl_assigned_device(struct kvm *kvm, unsigned ioctl,
unsigned long arg);
static inline long kvm_vm_ioctl_assigned_device(struct kvm *kvm, unsigned ioctl,
unsigned long arg)
static inline void kvm_make_request(int req, struct kvm_vcpu *vcpu)
static inline bool kvm_check_request(int req, struct kvm_vcpu *vcpu)
