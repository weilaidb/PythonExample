MODULE_AUTHOR("Intel");
MODULE_LICENSE("GPL");
extern char kvm_ia64_ivt;
extern char kvm_asm_mov_from_ar;
extern char kvm_asm_mov_from_ar_sn2;
extern fpswa_interface_t *vmm_fpswa_interface;
long vmm_sanity = 1;
struct kvm_vmm_info vmm_info = ;
static int __init  kvm_vmm_init(void)
static void __exit kvm_vmm_exit(void)
void vmm_spin_lock(vmm_spinlock_t *lock)
void vmm_spin_unlock(vmm_spinlock_t *lock)
static void vcpu_debug_exit(struct kvm_vcpu *vcpu)
asmlinkage int printk(const char *fmt, ...)
module_init(kvm_vmm_init)
module_exit(kvm_vmm_exit)
