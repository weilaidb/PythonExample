#define __POWERPC_KVM_HOST_H__
#define KVM_MAX_VCPUS 1
#define KVM_MEMORY_SLOTS 32
#define KVM_PRIVATE_MEM_SLOTS 4
#define KVM_COALESCED_MMIO_PAGE_OFFSET 1
#define KVM_HPAGE_GFN_SHIFT(x)	0
#define KVM_NR_PAGE_SIZES	1
#define KVM_PAGES_PER_HPAGE(x)	(1UL<<31)
#define HPTEG_CACHE_NUM			(1 << 15)
#define HPTEG_HASH_BITS_PTE		13
#define HPTEG_HASH_BITS_PTE_LONG	12
#define HPTEG_HASH_BITS_VPTE		13
#define HPTEG_HASH_BITS_VPTE_LONG	5
#define HPTEG_HASH_NUM_PTE		(1 << HPTEG_HASH_BITS_PTE)
#define HPTEG_HASH_NUM_PTE_LONG		(1 << HPTEG_HASH_BITS_PTE_LONG)
#define HPTEG_HASH_NUM_VPTE		(1 << HPTEG_HASH_BITS_VPTE)
#define HPTEG_HASH_NUM_VPTE_LONG	(1 << HPTEG_HASH_BITS_VPTE_LONG)
#define KVM_PAM			0x0fffffffffffffffULL
struct kvm;
struct kvm_run;
struct kvm_vcpu;
struct kvm_vm_stat ;
struct kvm_vcpu_stat ;
enum kvm_exit_types ;
struct kvmppc_exit_timing ;
struct kvm_arch ;
struct kvmppc_pte ;
struct kvmppc_mmu ;
struct hpte_cache ;
struct kvm_vcpu_arch ;
