#define ELF_ARCH		EM_MIPS
#define ELF_CLASS		ELFCLASS32
#define ELF_DATA		ELFDATA2MSB;
#define ELF_DATA		ELFDATA2LSB;
#define ELF_NGREG	45
#define ELF_NFPREG	33
typedef unsigned long elf_greg_t;
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
typedef double elf_fpreg_t;
typedef elf_fpreg_t elf_fpregset_t[ELF_NFPREG];
#define elf_check_arch(hdr)						\
()
#define TASK32_SIZE		0x7fff8000UL
#undef ELF_ET_DYN_BASE
#define ELF_ET_DYN_BASE         (TASK32_SIZE / 3 * 2)
#define elf_prstatus elf_prstatus32
struct elf_prstatus32
;
#define elf_prpsinfo elf_prpsinfo32
struct elf_prpsinfo32
;
#define elf_caddr_t	u32
#define init_elf_binfmt init_elfn32_binfmt
#define jiffies_to_timeval jiffies_to_compat_timeval
static __inline__ void
jiffies_to_compat_timeval(unsigned long jiffies, struct compat_timeval *value)
#define ELF_CORE_EFLAGS EF_MIPS_ABI2
MODULE_DESCRIPTION("Binary format loader for compatibility with n32 Linux/MIPS binaries");
MODULE_AUTHOR("Ralf Baechle (ralf@linux-mips.org)");
#undef MODULE_DESCRIPTION
#undef MODULE_AUTHOR
#undef TASK_SIZE
#define TASK_SIZE TASK_SIZE32
