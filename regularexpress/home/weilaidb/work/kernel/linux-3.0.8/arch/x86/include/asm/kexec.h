#define _ASM_X86_KEXEC_H
# define PA_CONTROL_PAGE	0
# define VA_CONTROL_PAGE	1
# define PA_PGD			2
# define PA_SWAP_PAGE		3
# define PAGES_NR		4
# define PA_CONTROL_PAGE	0
# define VA_CONTROL_PAGE	1
# define PA_TABLE_PAGE		2
# define PA_SWAP_PAGE		3
# define PAGES_NR		4
# define KEXEC_CONTROL_CODE_MAX_SIZE	2048
# define KEXEC_SOURCE_MEMORY_LIMIT (-1UL)
# define KEXEC_DESTINATION_MEMORY_LIMIT (-1UL)
# define KEXEC_CONTROL_MEMORY_LIMIT TASK_SIZE
# define KEXEC_CONTROL_PAGE_SIZE	4096
# define KEXEC_ARCH KEXEC_ARCH_386
# define vmcore_elf_check_arch_cross(x) ((x)->e_machine == EM_X86_64)
# define KEXEC_SOURCE_MEMORY_LIMIT      (0xFFFFFFFFFFUL)
# define KEXEC_DESTINATION_MEMORY_LIMIT (0xFFFFFFFFFFUL)
# define KEXEC_CONTROL_MEMORY_LIMIT     (0xFFFFFFFFFFUL)
# define KEXEC_CONTROL_PAGE_SIZE  (4096UL + 4096UL)
# define KEXEC_ARCH KEXEC_ARCH_X86_64
static inline void crash_fixup_ss_esp(struct pt_regs *newregs,
struct pt_regs *oldregs)
static inline void crash_setup_regs(struct pt_regs *newregs,
struct pt_regs *oldregs)
asmlinkage unsigned long
relocate_kernel(unsigned long indirection_page,
unsigned long control_page,
unsigned long start_address,
unsigned int has_pae,
unsigned int preserve_context);
unsigned long
relocate_kernel(unsigned long indirection_page,
unsigned long page_list,
unsigned long start_address,
unsigned int preserve_context);
#define ARCH_HAS_KIMAGE_ARCH
struct kimage_arch ;
struct kimage_arch ;
