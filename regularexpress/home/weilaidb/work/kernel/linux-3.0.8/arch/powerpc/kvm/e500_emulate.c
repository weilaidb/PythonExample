#define XOP_TLBIVAX 786
#define XOP_TLBSX   914
#define XOP_TLBRE   946
#define XOP_TLBWE   978
int kvmppc_core_emulate_op(struct kvm_run *run, struct kvm_vcpu *vcpu,
unsigned int inst, int *advance)
int kvmppc_core_emulate_mtspr(struct kvm_vcpu *vcpu, int sprn, int rs)
int kvmppc_core_emulate_mfspr(struct kvm_vcpu *vcpu, int sprn, int rt)
