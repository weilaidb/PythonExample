#define __ASM_AVR32_ELF_H
#define R_AVR32_NONE		0
#define R_AVR32_32		1
#define R_AVR32_16		2
#define R_AVR32_8		3
#define R_AVR32_32_PCREL	4
#define R_AVR32_16_PCREL	5
#define R_AVR32_8_PCREL		6
#define R_AVR32_DIFF32		7
#define R_AVR32_DIFF16		8
#define R_AVR32_DIFF8		9
#define R_AVR32_GOT32		10
#define R_AVR32_GOT16		11
#define R_AVR32_GOT8		12
#define R_AVR32_21S		13
#define R_AVR32_16U		14
#define R_AVR32_16S		15
#define R_AVR32_8S		16
#define R_AVR32_8S_EXT		17
#define R_AVR32_22H_PCREL	18
#define R_AVR32_18W_PCREL	19
#define R_AVR32_16B_PCREL	20
#define R_AVR32_16N_PCREL	21
#define R_AVR32_14UW_PCREL	22
#define R_AVR32_11H_PCREL	23
#define R_AVR32_10UW_PCREL	24
#define R_AVR32_9H_PCREL	25
#define R_AVR32_9UW_PCREL	26
#define R_AVR32_HI16		27
#define R_AVR32_LO16		28
#define R_AVR32_GOTPC		29
#define R_AVR32_GOTCALL		30
#define R_AVR32_LDA_GOT		31
#define R_AVR32_GOT21S		32
#define R_AVR32_GOT18SW		33
#define R_AVR32_GOT16S		34
#define R_AVR32_GOT7UW		35
#define R_AVR32_32_CPENT	36
#define R_AVR32_CPCALL		37
#define R_AVR32_16_CP		38
#define R_AVR32_9W_CP		39
#define R_AVR32_RELATIVE	40
#define R_AVR32_GLOB_DAT	41
#define R_AVR32_JMP_SLOT	42
#define R_AVR32_ALIGN		43
typedef unsigned long elf_greg_t;
#define ELF_NGREG (sizeof (struct pt_regs) / sizeof (elf_greg_t))
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
typedef struct user_fpu_struct elf_fpregset_t;
#define elf_check_arch(x) ( (x)->e_machine == EM_AVR32 )
#define ELF_CLASS	ELFCLASS32
#define ELF_DATA	ELFDATA2LSB
#define ELF_DATA	ELFDATA2MSB
#define ELF_ARCH	EM_AVR32
#define ELF_EXEC_PAGESIZE	4096
#define ELF_ET_DYN_BASE         (2 * TASK_SIZE / 3)
#define ELF_HWCAP	(0)
#define ELF_PLATFORM  (NULL)
#define SET_PERSONALITY(ex) set_personality(PER_LINUX_32BIT)