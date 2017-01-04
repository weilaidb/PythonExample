#define _ASM_POWERPC_MMAN_H
#define PROT_SAO	0x10
#define MAP_RENAME      MAP_ANONYMOUS
#define MAP_NORESERVE   0x40
#define MAP_LOCKED	0x80
#define MAP_GROWSDOWN	0x0100
#define MAP_DENYWRITE	0x0800
#define MAP_EXECUTABLE	0x1000
#define MCL_CURRENT     0x2000
#define MCL_FUTURE      0x4000
#define MAP_POPULATE	0x8000
#define MAP_NONBLOCK	0x10000
#define MAP_STACK	0x20000
#define MAP_HUGETLB	0x40000
static inline unsigned long arch_calc_vm_prot_bits(unsigned long prot)
#define arch_calc_vm_prot_bits(prot) arch_calc_vm_prot_bits(prot)
static inline pgprot_t arch_vm_get_page_prot(unsigned long vm_flags)
#define arch_vm_get_page_prot(vm_flags) arch_vm_get_page_prot(vm_flags)
static inline int arch_validate_prot(unsigned long prot)
#define arch_validate_prot(prot) arch_validate_prot(prot)
