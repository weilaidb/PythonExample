static int handle_lctlg(struct kvm_vcpu *vcpu)
static int handle_lctl(struct kvm_vcpu *vcpu)
static intercept_handler_t instruction_handlers[256] = ;
static int handle_noop(struct kvm_vcpu *vcpu)
static int handle_stop(struct kvm_vcpu *vcpu)
static int handle_validity(struct kvm_vcpu *vcpu)
static int handle_instruction(struct kvm_vcpu *vcpu)
static int handle_prog(struct kvm_vcpu *vcpu)
static int handle_instruction_and_prog(struct kvm_vcpu *vcpu)
static const intercept_handler_t intercept_funcs[] = ;
int kvm_handle_sie_intercept(struct kvm_vcpu *vcpu)
