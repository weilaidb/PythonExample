#define _ASM_ELF_H
#define R_MN10300_NONE		0
#define R_MN10300_32		1
#define R_MN10300_16		2
#define R_MN10300_8		3
#define R_MN10300_PCREL32	4
#define R_MN10300_PCREL16	5
#define R_MN10300_PCREL8	6
#define R_MN10300_24		9
#define R_MN10300_RELATIVE	23
#define R_MN10300_SYM_DIFF	33
#define R_MN10300_ALIGN 	34
#define HWCAP_MN10300_ATOMIC_OP_UNIT	1
typedef unsigned long elf_greg_t;
#define ELF_NGREG ((sizeof(struct pt_regs) / sizeof(elf_greg_t)) - 1)
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
#define ELF_NFPREG 32
typedef float elf_fpreg_t;
typedef struct  elf_fpregset_t;
#define elf_check_arch(x) \
(((x)->e_machine == EM_CYGNUS_MN10300) ||	\
((x)->e_machine == EM_MN10300))
#define ELF_CLASS	ELFCLASS32
#define ELF_DATA	ELFDATA2LSB
#define ELF_ARCH	EM_MN10300
#define ELF_PLAT_INIT(_r, load_addr)					\
do  while (0)
#define CORE_DUMP_USE_REGSET
#define ELF_EXEC_PAGESIZE	4096
#define ELF_ET_DYN_BASE         0x04000000
#define ELF_CORE_COPY_REGS(pr_reg, regs)	\
do  while (0);
#define ELF_HWCAP	(HWCAP_MN10300_ATOMIC_OP_UNIT)
#define ELF_HWCAP	(0)
#define ELF_PLATFORM  (NULL)
#define SET_PERSONALITY(ex) set_personality(PER_LINUX)
