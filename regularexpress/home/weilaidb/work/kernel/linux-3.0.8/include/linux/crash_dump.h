#define LINUX_CRASH_DUMP_H
#define ELFCORE_ADDR_MAX	(-1ULL)
#define ELFCORE_ADDR_ERR	(-2ULL)
extern unsigned long long elfcorehdr_addr;
extern ssize_t copy_oldmem_page(unsigned long, char *, size_t,
unsigned long, int);
#define vmcore_elf_check_arch_cross(x) 0
#define vmcore_elf64_check_arch(x) (elf_check_arch(x) || vmcore_elf_check_arch_cross(x))
static inline int is_kdump_kernel(void)
static inline int is_vmcore_usable(void)
static inline void vmcore_unusable(void)
#define HAVE_OLDMEM_PFN_IS_RAM 1
extern int register_oldmem_pfn_is_ram(int (*fn)(unsigned long pfn));
extern void unregister_oldmem_pfn_is_ram(void);
static inline int is_kdump_kernel(void)
extern unsigned long saved_max_pfn;
