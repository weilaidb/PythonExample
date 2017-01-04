#define __ASM_KVM_BOOK3S_ASM_H__
.macro DO_KVM intno
.if (\intno == BOOK3S_INTERRUPT_SYSTEM_RESET) || \
(\intno == BOOK3S_INTERRUPT_MACHINE_CHECK) || \
(\intno == BOOK3S_INTERRUPT_DATA_STORAGE) || \
(\intno == BOOK3S_INTERRUPT_INST_STORAGE) || \
(\intno == BOOK3S_INTERRUPT_DATA_SEGMENT) || \
(\intno == BOOK3S_INTERRUPT_INST_SEGMENT) || \
(\intno == BOOK3S_INTERRUPT_EXTERNAL) || \
(\intno == BOOK3S_INTERRUPT_EXTERNAL_HV) || \
(\intno == BOOK3S_INTERRUPT_ALIGNMENT) || \
(\intno == BOOK3S_INTERRUPT_PROGRAM) || \
(\intno == BOOK3S_INTERRUPT_FP_UNAVAIL) || \
(\intno == BOOK3S_INTERRUPT_DECREMENTER) || \
(\intno == BOOK3S_INTERRUPT_SYSCALL) || \
(\intno == BOOK3S_INTERRUPT_TRACE) || \
(\intno == BOOK3S_INTERRUPT_PERFMON) || \
(\intno == BOOK3S_INTERRUPT_ALTIVEC) || \
(\intno == BOOK3S_INTERRUPT_VSX)
b	kvmppc_trampoline_\intno
kvmppc_resume_\intno:
.endif
.endm
.macro DO_KVM intno
.endm
struct kvmppc_book3s_shadow_vcpu ;
