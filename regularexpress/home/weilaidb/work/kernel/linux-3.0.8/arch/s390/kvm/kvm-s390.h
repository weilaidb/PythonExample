#define ARCH_S390_KVM_S390_H
#define VIRTIODESCSPACE (256ul * 4096ul)
typedef int (*intercept_handler_t)(struct kvm_vcpu *vcpu);
#define SIE_INTERCEPT_RERUNVCPU		(1<<0)
int kvm_handle_sie_intercept(struct kvm_vcpu *vcpu);
#define VM_EVENT(d_kvm, d_loglevel, d_string, d_args...)\
do  while (0)
#define VCPU_EVENT(d_vcpu, d_loglevel, d_string, d_args...)\
do  while (0)
static inline int __cpu_is_stopped(struct kvm_vcpu *vcpu)
int kvm_s390_handle_wait(struct kvm_vcpu *vcpu);
enum hrtimer_restart kvm_s390_idle_wakeup(struct hrtimer *timer);
void kvm_s390_tasklet(unsigned long parm);
void kvm_s390_deliver_pending_interrupts(struct kvm_vcpu *vcpu);
int kvm_s390_inject_vm(struct kvm *kvm,
struct kvm_s390_interrupt *s390int);
int kvm_s390_inject_vcpu(struct kvm_vcpu *vcpu,
struct kvm_s390_interrupt *s390int);
int kvm_s390_inject_program_int(struct kvm_vcpu *vcpu, u16 code);
int kvm_s390_inject_sigp_stop(struct kvm_vcpu *vcpu, int action);
static inline long kvm_s390_vcpu_get_memsize(struct kvm_vcpu *vcpu)
static inline void kvm_s390_vcpu_set_mem(struct kvm_vcpu *vcpu)
int kvm_s390_handle_b2(struct kvm_vcpu *vcpu);
int kvm_s390_handle_sigp(struct kvm_vcpu *vcpu);
int kvm_s390_vcpu_store_status(struct kvm_vcpu *vcpu,
unsigned long addr);
int kvm_s390_handle_diag(struct kvm_vcpu *vcpu);
