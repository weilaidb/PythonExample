#define __KVM_BOOKE_H__
#define BOOKE_IRQPRIO_DATA_STORAGE 0
#define BOOKE_IRQPRIO_INST_STORAGE 1
#define BOOKE_IRQPRIO_ALIGNMENT 2
#define BOOKE_IRQPRIO_PROGRAM 3
#define BOOKE_IRQPRIO_FP_UNAVAIL 4
#define BOOKE_IRQPRIO_SPE_UNAVAIL 5
#define BOOKE_IRQPRIO_SPE_FP_DATA 6
#define BOOKE_IRQPRIO_SPE_FP_ROUND 7
#define BOOKE_IRQPRIO_SYSCALL 8
#define BOOKE_IRQPRIO_AP_UNAVAIL 9
#define BOOKE_IRQPRIO_DTLB_MISS 10
#define BOOKE_IRQPRIO_ITLB_MISS 11
#define BOOKE_IRQPRIO_MACHINE_CHECK 12
#define BOOKE_IRQPRIO_DEBUG 13
#define BOOKE_IRQPRIO_CRITICAL 14
#define BOOKE_IRQPRIO_WATCHDOG 15
#define BOOKE_IRQPRIO_EXTERNAL 16
#define BOOKE_IRQPRIO_FIT 17
#define BOOKE_IRQPRIO_DECREMENTER 18
#define BOOKE_IRQPRIO_PERFORMANCE_MONITOR 19
#define BOOKE_IRQPRIO_EXTERNAL_LEVEL 20
#define BOOKE_IRQPRIO_MAX 20
extern unsigned long kvmppc_booke_handlers;
static inline void kvmppc_set_msr(struct kvm_vcpu *vcpu, u32 new_msr)
int kvmppc_booke_emulate_op(struct kvm_run *run, struct kvm_vcpu *vcpu,
unsigned int inst, int *advance);
int kvmppc_booke_emulate_mfspr(struct kvm_vcpu *vcpu, int sprn, int rt);
int kvmppc_booke_emulate_mtspr(struct kvm_vcpu *vcpu, int sprn, int rs);
