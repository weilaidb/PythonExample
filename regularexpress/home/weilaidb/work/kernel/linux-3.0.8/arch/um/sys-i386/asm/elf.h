#define __UM_ELF_I386_H
#define R_386_NONE	0
#define R_386_32	1
#define R_386_PC32	2
#define R_386_GOT32	3
#define R_386_PLT32	4
#define R_386_COPY	5
#define R_386_GLOB_DAT	6
#define R_386_JMP_SLOT	7
#define R_386_RELATIVE	8
#define R_386_GOTOFF	9
#define R_386_GOTPC	10
#define R_386_NUM	11
typedef unsigned long elf_greg_t;
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof(elf_greg_t))
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
typedef struct user_i387_struct elf_fpregset_t;
#define elf_check_arch(x) \
(((x)->e_machine == EM_386) || ((x)->e_machine == EM_486))
#define ELF_CLASS	ELFCLASS32
#define ELF_DATA        ELFDATA2LSB
#define ELF_ARCH        EM_386
#define ELF_PLAT_INIT(regs, load_addr) do  while (0)
#define ELF_EXEC_PAGESIZE 4096
#define ELF_ET_DYN_BASE (2 * TASK_SIZE / 3)
#define ELF_CORE_COPY_REGS(pr_reg, regs) do  while (0);
#define task_pt_regs(t) (&(t)->thread.regs)
struct task_struct;
extern int elf_core_copy_fpregs(struct task_struct *t, elf_fpregset_t *fpu);
#define ELF_CORE_COPY_FPREGS(t, fpu) elf_core_copy_fpregs(t, fpu)
extern long elf_aux_hwcap;
#define ELF_HWCAP (elf_aux_hwcap)
extern char * elf_aux_platform;
#define ELF_PLATFORM (elf_aux_platform)
#define SET_PERSONALITY(ex) do  while (0)
extern unsigned long vsyscall_ehdr;
extern unsigned long vsyscall_end;
extern unsigned long __kernel_vsyscall;
#define VSYSCALL_BASE vsyscall_ehdr
#define VSYSCALL_END vsyscall_end
#define FIXADDR_USER_START      VSYSCALL_BASE
#define FIXADDR_USER_END        VSYSCALL_END
#define AT_SYSINFO		32
#define AT_SYSINFO_EHDR		33
#define ARCH_DLINFO						\
do  while (0)
