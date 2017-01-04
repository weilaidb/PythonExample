#define _ASM_TILE_ELF_H
typedef unsigned long elf_greg_t;
#define ELF_NGREG (sizeof(struct pt_regs) / sizeof(elf_greg_t))
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
#define EM_TILE64  187
#define EM_TILEPRO 188
#define EM_TILEGX  191
#define ELF_NFPREG	0
typedef double elf_fpreg_t;
typedef elf_fpreg_t elf_fpregset_t[ELF_NFPREG];
#define ELF_CLASS	ELFCLASS64
#define ELF_CLASS	ELFCLASS32
#define ELF_DATA	ELFDATA2LSB
enum ;
#define ELF_ARCH ELF_ARCH
#define elf_check_arch(x)  \
((x)->e_ident[EI_CLASS] == ELF_CLASS && \
(x)->e_machine == CHIP_ELF_TYPE())
#define R_TILE_32                 1
#define R_TILE_JOFFLONG_X1       15
#define R_TILE_IMM16_X0_LO       25
#define R_TILE_IMM16_X1_LO       26
#define R_TILE_IMM16_X0_HA       29
#define R_TILE_IMM16_X1_HA       30
#define R_TILEGX_64                       1
#define R_TILEGX_JUMPOFF_X1              21
#define R_TILEGX_IMM16_X0_HW0            36
#define R_TILEGX_IMM16_X1_HW0            37
#define R_TILEGX_IMM16_X0_HW1            38
#define R_TILEGX_IMM16_X1_HW1            39
#define R_TILEGX_IMM16_X0_HW2_LAST       48
#define R_TILEGX_IMM16_X1_HW2_LAST       49
#define ELF_EXEC_PAGESIZE	PAGE_SIZE
#define ELF_ET_DYN_BASE         (TASK_SIZE / 3 * 2)
#define ELF_CORE_COPY_REGS(_dest, _regs)			\
memcpy((char *) &_dest, (char *) _regs,			\
sizeof(struct pt_regs));
#define ELF_CORE_COPY_FPREGS(t, fpu) 0
#define ELF_HWCAP	(0)
#define ELF_PLATFORM  (NULL)
extern void elf_plat_init(struct pt_regs *regs, unsigned long load_addr);
#define ELF_PLAT_INIT(_r, load_addr) elf_plat_init(_r, load_addr)
extern int dump_task_regs(struct task_struct *, elf_gregset_t *);
#define ELF_CORE_COPY_TASK_REGS(tsk, elf_regs) dump_task_regs(tsk, elf_regs)
#define SET_PERSONALITY(ex) do  while (0)
#define ARCH_HAS_SETUP_ADDITIONAL_PAGES
struct linux_binprm;
extern int arch_setup_additional_pages(struct linux_binprm *bprm,
int executable_stack);
#define COMPAT_ELF_PLATFORM "tilegx-m32"
#define compat_elf_check_arch(x)  \
((x)->e_ident[EI_CLASS] == ELFCLASS32 && \
(x)->e_machine == CHIP_ELF_TYPE())
#define compat_start_thread(regs, ip, usp) do  while (0)
#undef SET_PERSONALITY
#define SET_PERSONALITY(ex) \
do  while (0)
#define COMPAT_SET_PERSONALITY(ex) \
do  while (0)
#define COMPAT_ELF_ET_DYN_BASE (0xffffffff / 3 * 2)
