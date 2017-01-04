static int psw_extint_disabled(struct kvm_vcpu *vcpu)
static int psw_interrupts_disabled(struct kvm_vcpu *vcpu)
static int __interrupt_is_deliverable(struct kvm_vcpu *vcpu,
struct kvm_s390_interrupt_info *inti)
static void __set_cpu_idle(struct kvm_vcpu *vcpu)
static void __unset_cpu_idle(struct kvm_vcpu *vcpu)
static void __reset_intercept_indicators(struct kvm_vcpu *vcpu)
static void __set_cpuflag(struct kvm_vcpu *vcpu, u32 flag)
static void __set_intercept_indicator(struct kvm_vcpu *vcpu,
struct kvm_s390_interrupt_info *inti)
static void __do_deliver_interrupt(struct kvm_vcpu *vcpu,
struct kvm_s390_interrupt_info *inti)
static int __try_deliver_ckc_interrupt(struct kvm_vcpu *vcpu)
static int kvm_cpu_has_interrupt(struct kvm_vcpu *vcpu)
int kvm_cpu_has_pending_timer(struct kvm_vcpu *vcpu)
int kvm_s390_handle_wait(struct kvm_vcpu *vcpu)
void kvm_s390_tasklet(unsigned long parm)
enum hrtimer_restart kvm_s390_idle_wakeup(struct hrtimer *timer)
void kvm_s390_deliver_pending_interrupts(struct kvm_vcpu *vcpu)
int kvm_s390_inject_program_int(struct kvm_vcpu *vcpu, u16 code)
int kvm_s390_inject_vm(struct kvm *kvm,
struct kvm_s390_interrupt *s390int)
int kvm_s390_inject_vcpu(struct kvm_vcpu *vcpu,
struct kvm_s390_interrupt *s390int)
