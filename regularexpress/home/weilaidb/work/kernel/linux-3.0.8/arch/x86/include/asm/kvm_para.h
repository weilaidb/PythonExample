#define _ASM_X86_KVM_PARA_H
#define KVM_CPUID_SIGNATURE	0x40000000
#define KVM_CPUID_FEATURES	0x40000001
#define KVM_FEATURE_CLOCKSOURCE		0
#define KVM_FEATURE_NOP_IO_DELAY	1
#define KVM_FEATURE_MMU_OP		2
#define KVM_FEATURE_CLOCKSOURCE2        3
#define KVM_FEATURE_ASYNC_PF		4
#define KVM_FEATURE_CLOCKSOURCE_STABLE_BIT	24
#define MSR_KVM_WALL_CLOCK  0x11
#define MSR_KVM_SYSTEM_TIME 0x12
#define MSR_KVM_WALL_CLOCK_NEW  0x4b564d00
#define MSR_KVM_SYSTEM_TIME_NEW 0x4b564d01
#define MSR_KVM_ASYNC_PF_EN 0x4b564d02
#define KVM_MAX_MMU_OP_BATCH           32
#define KVM_ASYNC_PF_ENABLED			(1 << 0)
#define KVM_ASYNC_PF_SEND_ALWAYS		(1 << 1)
#define KVM_MMU_OP_WRITE_PTE            1
#define KVM_MMU_OP_FLUSH_TLB	        2
#define KVM_MMU_OP_RELEASE_PT	        3
struct kvm_mmu_op_header ;
struct kvm_mmu_op_write_pte ;
struct kvm_mmu_op_flush_tlb ;
struct kvm_mmu_op_release_pt ;
#define KVM_PV_REASON_PAGE_NOT_PRESENT 1
#define KVM_PV_REASON_PAGE_READY 2
struct kvm_vcpu_pv_apf_data ;
extern void kvmclock_init(void);
extern int kvm_register_clock(char *txt);
#define KVM_HYPERCALL ".byte 0x0f,0x01,0xc1"
static inline long kvm_hypercall0(unsigned int nr)
static inline long kvm_hypercall1(unsigned int nr, unsigned long p1)
static inline long kvm_hypercall2(unsigned int nr, unsigned long p1,
unsigned long p2)
static inline long kvm_hypercall3(unsigned int nr, unsigned long p1,
unsigned long p2, unsigned long p3)
static inline long kvm_hypercall4(unsigned int nr, unsigned long p1,
unsigned long p2, unsigned long p3,
unsigned long p4)
static inline int kvm_para_available(void)
static inline unsigned int kvm_arch_para_features(void)
void __init kvm_guest_init(void);
void kvm_async_pf_task_wait(u32 token);
void kvm_async_pf_task_wake(u32 token);
u32 kvm_read_and_reset_pf_reason(void);
#define kvm_guest_init() do  while (0)
#define kvm_async_pf_task_wait(T) do  while(0)
#define kvm_async_pf_task_wake(T) do  while(0)
static inline u32 kvm_read_and_reset_pf_reason(void)
