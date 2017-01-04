#define audit_printk(kvm, fmt, args...)		\
printk(KERN_ERR "audit: (%s) error: "	\
fmt, audit_point_name[kvm->arch.audit_point], ##args)
typedef void (*inspect_spte_fn) (struct kvm_vcpu *vcpu, u64 *sptep, int level);
static void __mmu_spte_walk(struct kvm_vcpu *vcpu, struct kvm_mmu_page *sp,
inspect_spte_fn fn, int level)
static void mmu_spte_walk(struct kvm_vcpu *vcpu, inspect_spte_fn fn)
typedef void (*sp_handler) (struct kvm *kvm, struct kvm_mmu_page *sp);
static void walk_all_active_sps(struct kvm *kvm, sp_handler fn)
static void audit_mappings(struct kvm_vcpu *vcpu, u64 *sptep, int level)
static void inspect_spte_has_rmap(struct kvm *kvm, u64 *sptep)
static void audit_sptes_have_rmaps(struct kvm_vcpu *vcpu, u64 *sptep, int level)
static void audit_spte_after_sync(struct kvm_vcpu *vcpu, u64 *sptep, int level)
static void check_mappings_rmap(struct kvm *kvm, struct kvm_mmu_page *sp)
static void audit_write_protection(struct kvm *kvm, struct kvm_mmu_page *sp)
static void audit_sp(struct kvm *kvm, struct kvm_mmu_page *sp)
static void audit_all_active_sps(struct kvm *kvm)
static void audit_spte(struct kvm_vcpu *vcpu, u64 *sptep, int level)
static void audit_vcpu_spte(struct kvm_vcpu *vcpu)
static void kvm_mmu_audit(void *ignore, struct kvm_vcpu *vcpu, int point)
static bool mmu_audit;
static void mmu_audit_enable(void)
static void mmu_audit_disable(void)
static int mmu_audit_set(const char *val, const struct kernel_param *kp)
static struct kernel_param_ops audit_param_ops = ;
module_param_cb(mmu_audit, &audit_param_ops, &mmu_audit, 0644);
