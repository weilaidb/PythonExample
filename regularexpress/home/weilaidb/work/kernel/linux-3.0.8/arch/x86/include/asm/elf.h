#define _ASM_X86_ELF_H
typedef unsigned long elf_greg_t;
#define ELF_NGREG (sizeof(struct user_regs_struct) / sizeof(elf_greg_t))
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
typedef struct user_i387_struct elf_fpregset_t;
typedef struct user_fxsr_struct elf_fpxregset_t;
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
#define ELF_CLASS	ELFCLASS32
#define ELF_DATA	ELFDATA2LSB
#define ELF_ARCH	EM_386
#define R_X86_64_NONE		0
#define R_X86_64_64		1
#define R_X86_64_PC32		2
#define R_X86_64_GOT32		3
#define R_X86_64_PLT32		4
#define R_X86_64_COPY		5
#define R_X86_64_GLOB_DAT	6
#define R_X86_64_JUMP_SLOT	7
#define R_X86_64_RELATIVE	8
#define R_X86_64_GOTPCREL	9
#define R_X86_64_32		10
#define R_X86_64_32S		11
#define R_X86_64_16		12
#define R_X86_64_PC16		13
#define R_X86_64_8		14
#define R_X86_64_PC8		15
#define R_X86_64_NUM		16
#define ELF_CLASS	ELFCLASS64
#define ELF_DATA	ELFDATA2LSB
#define ELF_ARCH	EM_X86_64
extern unsigned int vdso_enabled;
#define elf_check_arch_ia32(x) \
(((x)->e_machine == EM_386) || ((x)->e_machine == EM_486))
#define elf_check_arch(x)	elf_check_arch_ia32(x)
#define ELF_PLAT_INIT(_r, load_addr)		\
do  while (0)
#define ELF_CORE_COPY_REGS_COMMON(pr_reg, regs)	\
do  while (0);
#define ELF_CORE_COPY_REGS(pr_reg, regs)	\
do  while (0);
#define ELF_CORE_COPY_KERNEL_REGS(pr_reg, regs)	\
do  while (0);
#define ELF_PLATFORM	(utsname()->machine)
#define set_personality_64bit()	do  while (0)
#define elf_check_arch(x)			\
((x)->e_machine == EM_X86_64)
#define compat_elf_check_arch(x)	elf_check_arch_ia32(x)
static inline void elf_common_init(struct thread_struct *t,
struct pt_regs *regs, const u16 ds)
#define ELF_PLAT_INIT(_r, load_addr)			\
elf_common_init(&current->thread, _r, 0)
#define	COMPAT_ELF_PLAT_INIT(regs, load_addr)		\
elf_common_init(&current->thread, regs, __USER_DS)
void start_thread_ia32(struct pt_regs *regs, u32 new_ip, u32 new_sp);
#define compat_start_thread start_thread_ia32
void set_personality_ia32(void);
#define COMPAT_SET_PERSONALITY(ex) set_personality_ia32()
#define COMPAT_ELF_PLATFORM			("i686")
#define ELF_CORE_COPY_REGS(pr_reg, regs)			\
do  while (0);
#define ELF_PLATFORM       ("x86_64")
extern void set_personality_64bit(void);
extern unsigned int sysctl_vsyscall32;
extern int force_personality32;
#define CORE_DUMP_USE_REGSET
#define ELF_EXEC_PAGESIZE	4096
#define ELF_ET_DYN_BASE		(TASK_SIZE / 3 * 2)
#define ELF_HWCAP		(boot_cpu_data.x86_capability[0])
#define SET_PERSONALITY(ex) set_personality_64bit()
#define elf_read_implies_exec(ex, executable_stack)	\
(executable_stack != EXSTACK_DISABLE_X)
struct task_struct;
#define	ARCH_DLINFO_IA32(vdso_enabled)					\
do  while (0)
#define STACK_RND_MASK (0x7ff)
#define VDSO_HIGH_BASE		(__fix_to_virt(FIX_VDSO))
#define ARCH_DLINFO		ARCH_DLINFO_IA32(vdso_enabled)
#define VDSO_HIGH_BASE		0xffffe000U
#define STACK_RND_MASK (test_thread_flag(TIF_IA32) ? 0x7ff : 0x3fffff)
#define ARCH_DLINFO							\
do  while (0)
#define AT_SYSINFO		32
#define COMPAT_ARCH_DLINFO	ARCH_DLINFO_IA32(sysctl_vsyscall32)
#define COMPAT_ELF_ET_DYN_BASE	(TASK_UNMAPPED_BASE + 0x1000000)
#define VDSO_CURRENT_BASE	((unsigned long)current->mm->context.vdso)
#define VDSO_ENTRY							\
((unsigned long)VDSO32_SYMBOL(VDSO_CURRENT_BASE, vsyscall))
struct linux_binprm;
#define ARCH_HAS_SETUP_ADDITIONAL_PAGES 1
extern int arch_setup_additional_pages(struct linux_binprm *bprm,
int uses_interp);
extern int syscall32_setup_pages(struct linux_binprm *, int exstack);
#define compat_arch_setup_additional_pages	syscall32_setup_pages
extern unsigned long arch_randomize_brk(struct mm_struct *mm);
#define arch_randomize_brk arch_randomize_brk
