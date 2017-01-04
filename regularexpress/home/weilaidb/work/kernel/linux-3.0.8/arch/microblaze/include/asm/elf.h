#define _ASM_MICROBLAZE_ELF_H
#define EM_XILINX_MICROBLAZE	0xbaab
#define ELF_ARCH		EM_XILINX_MICROBLAZE
#define elf_check_arch(x)	((x)->e_machine == EM_XILINX_MICROBLAZE)
#define ELF_CLASS	ELFCLASS32
#define ELF_GREG_T
typedef unsigned long elf_greg_t;
#define ELF_NGREG (sizeof(struct pt_regs) / sizeof(elf_greg_t))
#define ELF_GREGSET_T
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
#define ELF_FPREGSET_T
#define ELF_NFPREG	33
typedef unsigned long elf_fpreg_t;
typedef elf_fpreg_t elf_fpregset_t[ELF_NFPREG];
#define ELF_ET_DYN_BASE         (0x08000000)
#define ELF_DATA	ELFDATA2LSB
#define ELF_DATA	ELFDATA2MSB
#define ELF_EXEC_PAGESIZE	PAGE_SIZE
#define ELF_CORE_COPY_REGS(_dest, _regs)			\
memcpy((char *) &_dest, (char *) _regs,		\
sizeof(struct pt_regs));
#define ELF_HWCAP	(0)
#define ELF_PLATFORM  (NULL)
#define ELF_PLAT_INIT(_r, _f)				\
do  while (0)
#define SET_PERSONALITY(ex) set_personality(PER_LINUX_32BIT)
