#define SIGP_SENSE             0x01
#define SIGP_EXTERNAL_CALL     0x02
#define SIGP_EMERGENCY         0x03
#define SIGP_START             0x04
#define SIGP_STOP              0x05
#define SIGP_RESTART           0x06
#define SIGP_STOP_STORE_STATUS 0x09
#define SIGP_INITIAL_CPU_RESET 0x0b
#define SIGP_CPU_RESET         0x0c
#define SIGP_SET_PREFIX        0x0d
#define SIGP_STORE_STATUS_ADDR 0x0e
#define SIGP_SET_ARCH          0x12
#define SIGP_STAT_EQUIPMENT_CHECK   0x80000000UL
#define SIGP_STAT_INCORRECT_STATE   0x00000200UL
#define SIGP_STAT_INVALID_PARAMETER 0x00000100UL
#define SIGP_STAT_EXT_CALL_PENDING  0x00000080UL
#define SIGP_STAT_STOPPED           0x00000040UL
#define SIGP_STAT_OPERATOR_INTERV   0x00000020UL
#define SIGP_STAT_CHECK_STOP        0x00000010UL
#define SIGP_STAT_INOPERATIVE       0x00000004UL
#define SIGP_STAT_INVALID_ORDER     0x00000002UL
#define SIGP_STAT_RECEIVER_CHECK    0x00000001UL
static int __sigp_sense(struct kvm_vcpu *vcpu, u16 cpu_addr,
unsigned long *reg)
static int __sigp_emergency(struct kvm_vcpu *vcpu, u16 cpu_addr)
static int __inject_sigp_stop(struct kvm_s390_local_interrupt *li, int action)
static int __sigp_stop(struct kvm_vcpu *vcpu, u16 cpu_addr, int action)
int kvm_s390_inject_sigp_stop(struct kvm_vcpu *vcpu, int action)
static int __sigp_set_arch(struct kvm_vcpu *vcpu, u32 parameter)
static int __sigp_set_prefix(struct kvm_vcpu *vcpu, u16 cpu_addr, u32 address,
unsigned long *reg)
int kvm_s390_handle_sigp(struct kvm_vcpu *vcpu)
