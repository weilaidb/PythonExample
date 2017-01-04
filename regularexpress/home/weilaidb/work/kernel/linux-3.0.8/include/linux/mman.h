#define _LINUX_MMAN_H
#define MREMAP_MAYMOVE	1
#define MREMAP_FIXED	2
#define OVERCOMMIT_GUESS		0
#define OVERCOMMIT_ALWAYS		1
#define OVERCOMMIT_NEVER		2
extern int sysctl_overcommit_memory;
extern int sysctl_overcommit_ratio;
extern struct percpu_counter vm_committed_as;
static inline void vm_acct_memory(long pages)
static inline void vm_unacct_memory(long pages)
#define arch_calc_vm_prot_bits(prot) 0
#define arch_vm_get_page_prot(vm_flags) __pgprot(0)
static inline int arch_validate_prot(unsigned long prot)
#define arch_validate_prot arch_validate_prot
#define _calc_vm_trans(x, bit1, bit2) \
((bit1) <= (bit2) ? ((x) & (bit1)) * ((bit2) / (bit1)) \
: ((x) & (bit1)) / ((bit1) / (bit2)))
static inline unsigned long
calc_vm_prot_bits(unsigned long prot)
static inline unsigned long
calc_vm_flag_bits(unsigned long flags)
