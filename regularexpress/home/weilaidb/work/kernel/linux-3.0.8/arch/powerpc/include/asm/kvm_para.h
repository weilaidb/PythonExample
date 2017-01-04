#define __POWERPC_KVM_PARA_H__
struct kvm_vcpu_arch_shared ;
#define KVM_SC_MAGIC_R0		0x4b564d21
#define HC_VENDOR_KVM		(42 << 16)
#define HC_EV_SUCCESS		0
#define HC_EV_UNIMPLEMENTED	12
#define KVM_FEATURE_MAGIC_PAGE	1
#define KVM_MAGIC_FEAT_SR	(1 << 0)
static inline int kvm_para_available(void)
extern unsigned long kvm_hypercall(unsigned long *in,
unsigned long *out,
unsigned long nr);
static inline int kvm_para_available(void)
static unsigned long kvm_hypercall(unsigned long *in,
unsigned long *out,
unsigned long nr)
static inline long kvm_hypercall0_1(unsigned int nr, unsigned long *r2)
static inline long kvm_hypercall0(unsigned int nr)
static inline long kvm_hypercall1(unsigned int nr, unsigned long p1)
static inline long kvm_hypercall2(unsigned int nr, unsigned long p1,
unsigned long p2)
static inline long kvm_hypercall3(unsigned int nr, unsigned long p1,
unsigned long p2, unsigned long p3)
static inline long kvm_hypercall4(unsigned int nr, unsigned long p1,
unsigned long p2, unsigned long p3,
unsigned long p4)
static inline unsigned int kvm_arch_para_features(void)
