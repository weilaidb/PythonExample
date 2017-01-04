#define _XTENSA_ELF_H
#define EM_XTENSA	94
#define EM_XTENSA_OLD	0xABC7
#define R_XTENSA_NONE           0
#define R_XTENSA_32             1
#define R_XTENSA_RTLD           2
#define R_XTENSA_GLOB_DAT       3
#define R_XTENSA_JMP_SLOT       4
#define R_XTENSA_RELATIVE       5
#define R_XTENSA_PLT            6
#define R_XTENSA_OP0            8
#define R_XTENSA_OP1            9
#define R_XTENSA_OP2            10
#define R_XTENSA_ASM_EXPAND	11
#define R_XTENSA_ASM_SIMPLIFY	12
#define R_XTENSA_GNU_VTINHERIT	15
#define R_XTENSA_GNU_VTENTRY	16
#define R_XTENSA_DIFF8		17
#define R_XTENSA_DIFF16		18
#define R_XTENSA_DIFF32		19
#define R_XTENSA_SLOT0_OP	20
#define R_XTENSA_SLOT1_OP	21
#define R_XTENSA_SLOT2_OP	22
#define R_XTENSA_SLOT3_OP	23
#define R_XTENSA_SLOT4_OP	24
#define R_XTENSA_SLOT5_OP	25
#define R_XTENSA_SLOT6_OP	26
#define R_XTENSA_SLOT7_OP	27
#define R_XTENSA_SLOT8_OP	28
#define R_XTENSA_SLOT9_OP	29
#define R_XTENSA_SLOT10_OP	30
#define R_XTENSA_SLOT11_OP	31
#define R_XTENSA_SLOT12_OP	32
#define R_XTENSA_SLOT13_OP	33
#define R_XTENSA_SLOT14_OP	34
#define R_XTENSA_SLOT0_ALT	35
#define R_XTENSA_SLOT1_ALT	36
#define R_XTENSA_SLOT2_ALT	37
#define R_XTENSA_SLOT3_ALT	38
#define R_XTENSA_SLOT4_ALT	39
#define R_XTENSA_SLOT5_ALT	40
#define R_XTENSA_SLOT6_ALT	41
#define R_XTENSA_SLOT7_ALT	42
#define R_XTENSA_SLOT8_ALT	43
#define R_XTENSA_SLOT9_ALT	44
#define R_XTENSA_SLOT10_ALT	45
#define R_XTENSA_SLOT11_ALT	46
#define R_XTENSA_SLOT12_ALT	47
#define R_XTENSA_SLOT13_ALT	48
#define R_XTENSA_SLOT14_ALT	49
typedef unsigned long elf_greg_t;
typedef struct  xtensa_gregset_t;
#define ELF_NGREG	(sizeof(xtensa_gregset_t) / sizeof(elf_greg_t))
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
#define ELF_NFPREG	18
typedef unsigned int elf_fpreg_t;
typedef elf_fpreg_t elf_fpregset_t[ELF_NFPREG];
#define ELF_CORE_COPY_REGS(_eregs, _pregs) 				\
xtensa_elf_core_copy_regs ((xtensa_gregset_t*)&(_eregs), _pregs);
extern void xtensa_elf_core_copy_regs (xtensa_gregset_t *, struct pt_regs *);
#define elf_check_arch(x) ( ( (x)->e_machine == EM_XTENSA )  || \
( (x)->e_machine == EM_XTENSA_OLD ) )
# define ELF_DATA	ELFDATA2LSB
#elif defined(__XTENSA_EB__)
# define ELF_DATA	ELFDATA2MSB
# error processor byte order undefined!
#define ELF_CLASS	ELFCLASS32
#define ELF_ARCH	EM_XTENSA
#define ELF_EXEC_PAGESIZE	PAGE_SIZE
#define ELF_ET_DYN_BASE         (2 * TASK_SIZE / 3)
#define ELF_HWCAP	(0)
#define ELF_PLATFORM  (NULL)
#define ELF_PLAT_INIT(_r, load_addr) \
do  while (0)
typedef struct  elf_xtregs_t;
#define SET_PERSONALITY(ex) set_personality(PER_LINUX_32BIT)
struct task_struct;
extern void do_copy_regs (xtensa_gregset_t*, struct pt_regs*,
struct task_struct*);
extern void do_restore_regs (xtensa_gregset_t*, struct pt_regs*,
struct task_struct*);
extern void do_save_fpregs (elf_fpregset_t*, struct pt_regs*,
struct task_struct*);
extern int do_restore_fpregs (elf_fpregset_t*, struct pt_regs*,
struct task_struct*);
