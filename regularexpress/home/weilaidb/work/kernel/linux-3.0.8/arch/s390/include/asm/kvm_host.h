#define ASM_KVM_HOST_H
#define KVM_MAX_VCPUS 64
#define KVM_MEMORY_SLOTS 32
#define KVM_PRIVATE_MEM_SLOTS 4
struct sca_entry  __attribute__((packed));
struct sca_block  __attribute__((packed));
#define KVM_NR_PAGE_SIZES 2
#define KVM_HPAGE_GFN_SHIFT(x) (((x) - 1) * 8)
#define KVM_HPAGE_SHIFT(x) (PAGE_SHIFT + KVM_HPAGE_GFN_SHIFT(x))
#define KVM_HPAGE_SIZE(x) (1UL << KVM_HPAGE_SHIFT(x))
#define KVM_HPAGE_MASK(x)	(~(KVM_HPAGE_SIZE(x) - 1))
#define KVM_PAGES_PER_HPAGE(x)	(KVM_HPAGE_SIZE(x) / PAGE_SIZE)
#define CPUSTAT_HOST       0x80000000
#define CPUSTAT_WAIT       0x10000000
#define CPUSTAT_ECALL_PEND 0x08000000
#define CPUSTAT_STOP_INT   0x04000000
#define CPUSTAT_IO_INT     0x02000000
#define CPUSTAT_EXT_INT    0x01000000
#define CPUSTAT_RUNNING    0x00800000
#define CPUSTAT_RETAINED   0x00400000
#define CPUSTAT_TIMING_SUB 0x00020000
#define CPUSTAT_SIE_SUB    0x00010000
#define CPUSTAT_RRF        0x00008000
#define CPUSTAT_SLSV       0x00004000
#define CPUSTAT_SLSR       0x00002000
#define CPUSTAT_ZARCH      0x00000800
#define CPUSTAT_MCDS       0x00000100
#define CPUSTAT_SM         0x00000080
#define CPUSTAT_G          0x00000008
#define CPUSTAT_J          0x00000002
#define CPUSTAT_P          0x00000001
struct kvm_s390_sie_block  __attribute__((packed));
struct kvm_vcpu_stat ;
struct kvm_s390_io_info ;
struct kvm_s390_ext_info ;
#define PGM_OPERATION            0x01
#define PGM_PRIVILEGED_OPERATION 0x02
#define PGM_EXECUTE              0x03
#define PGM_PROTECTION           0x04
#define PGM_ADDRESSING           0x05
#define PGM_SPECIFICATION        0x06
#define PGM_DATA                 0x07
struct kvm_s390_pgm_info ;
struct kvm_s390_prefix_info ;
struct kvm_s390_interrupt_info ;
#define ACTION_STORE_ON_STOP		(1<<0)
#define ACTION_STOP_ON_STOP		(1<<1)
#define ACTION_RELOADVCPU_ON_STOP	(1<<2)
struct kvm_s390_local_interrupt ;
struct kvm_s390_float_interrupt ;
struct kvm_vcpu_arch ;
struct kvm_vm_stat ;
struct kvm_arch;
extern int sie64a(struct kvm_s390_sie_block *, unsigned long *);
