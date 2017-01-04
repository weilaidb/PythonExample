#define OP_19_XOP_RFI     50
#define OP_31_XOP_MFMSR   83
#define OP_31_XOP_WRTEE   131
#define OP_31_XOP_MTMSR   146
#define OP_31_XOP_WRTEEI  163
static void kvmppc_emul_rfi(struct kvm_vcpu *vcpu)
int kvmppc_booke_emulate_op(struct kvm_run *run, struct kvm_vcpu *vcpu,
unsigned int inst, int *advance)
int kvmppc_booke_emulate_mtspr(struct kvm_vcpu *vcpu, int sprn, int rs)
int kvmppc_booke_emulate_mfspr(struct kvm_vcpu *vcpu, int sprn, int rt)
