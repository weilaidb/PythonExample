#define OP_19_XOP_RFID		18
#define OP_19_XOP_RFI		50
#define OP_31_XOP_MFMSR		83
#define OP_31_XOP_MTMSR		146
#define OP_31_XOP_MTMSRD	178
#define OP_31_XOP_MTSR		210
#define OP_31_XOP_MTSRIN	242
#define OP_31_XOP_TLBIEL	274
#define OP_31_XOP_TLBIE		306
#define OP_31_XOP_SLBMTE	402
#define OP_31_XOP_SLBIE		434
#define OP_31_XOP_SLBIA		498
#define OP_31_XOP_MFSR		595
#define OP_31_XOP_MFSRIN	659
#define OP_31_XOP_DCBA		758
#define OP_31_XOP_SLBMFEV	851
#define OP_31_XOP_EIOIO		854
#define OP_31_XOP_SLBMFEE	915
#define OP_31_XOP_DCBZ		1010
#define OP_LFS			48
#define OP_LFD			50
#define OP_STFS			52
#define OP_STFD			54
#define SPRN_GQR0		912
#define SPRN_GQR1		913
#define SPRN_GQR2		914
#define SPRN_GQR3		915
#define SPRN_GQR4		916
#define SPRN_GQR5		917
#define SPRN_GQR6		918
#define SPRN_GQR7		919
#undef mfsrin
int kvmppc_core_emulate_op(struct kvm_run *run, struct kvm_vcpu *vcpu,
unsigned int inst, int *advance)
void kvmppc_set_bat(struct kvm_vcpu *vcpu, struct kvmppc_bat *bat, bool upper,
u32 val)
static struct kvmppc_bat *kvmppc_find_bat(struct kvm_vcpu *vcpu, int sprn)
int kvmppc_core_emulate_mtspr(struct kvm_vcpu *vcpu, int sprn, int rs)
int kvmppc_core_emulate_mfspr(struct kvm_vcpu *vcpu, int sprn, int rt)
u32 kvmppc_alignment_dsisr(struct kvm_vcpu *vcpu, unsigned int inst)
ulong kvmppc_alignment_dar(struct kvm_vcpu *vcpu, unsigned int inst)
