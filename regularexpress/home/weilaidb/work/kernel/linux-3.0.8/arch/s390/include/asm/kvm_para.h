#define __S390_KVM_PARA_H
static inline long kvm_hypercall0(unsigned long nr)
static inline long kvm_hypercall1(unsigned long nr, unsigned long p1)
static inline long kvm_hypercall2(unsigned long nr, unsigned long p1,
unsigned long p2)
static inline long kvm_hypercall3(unsigned long nr, unsigned long p1,
unsigned long p2, unsigned long p3)
static inline long kvm_hypercall4(unsigned long nr, unsigned long p1,
unsigned long p2, unsigned long p3,
unsigned long p4)
static inline long kvm_hypercall5(unsigned long nr, unsigned long p1,
unsigned long p2, unsigned long p3,
unsigned long p4, unsigned long p5)
static inline long kvm_hypercall6(unsigned long nr, unsigned long p1,
unsigned long p2, unsigned long p3,
unsigned long p4, unsigned long p5,
unsigned long p6)
static inline int kvm_para_available(void)
static inline unsigned int kvm_arch_para_features(void)
