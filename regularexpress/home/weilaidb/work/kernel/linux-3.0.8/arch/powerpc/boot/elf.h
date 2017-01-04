#define _PPC_BOOT_ELF_H_
typedef unsigned int Elf32_Addr;
typedef unsigned short Elf32_Half;
typedef unsigned int Elf32_Off;
typedef signed int Elf32_Sword;
typedef unsigned int Elf32_Word;
typedef unsigned long long Elf64_Addr;
typedef unsigned short Elf64_Half;
typedef signed short Elf64_SHalf;
typedef unsigned long long Elf64_Off;
typedef signed int Elf64_Sword;
typedef unsigned int Elf64_Word;
typedef unsigned long long Elf64_Xword;
typedef signed long long Elf64_Sxword;
#define PT_NULL    0
#define PT_LOAD    1
#define PT_DYNAMIC 2
#define PT_INTERP  3
#define PT_NOTE    4
#define PT_SHLIB   5
#define PT_PHDR    6
#define PT_TLS     7
#define PT_LOOS    0x60000000
#define PT_HIOS    0x6fffffff
#define PT_LOPROC  0x70000000
#define PT_HIPROC  0x7fffffff
#define PT_GNU_EH_FRAME		0x6474e550
#define PT_GNU_STACK	(PT_LOOS + 0x474e551)
#define ET_NONE   0
#define ET_REL    1
#define ET_EXEC   2
#define ET_DYN    3
#define ET_CORE   4
#define ET_LOPROC 0xff00
#define ET_HIPROC 0xffff
#define EM_NONE  0
#define EM_PPC	       20
#define EM_PPC64       21
#define EI_NIDENT	16
typedef struct elf32_hdr  Elf32_Ehdr;
typedef struct elf64_hdr  Elf64_Ehdr;
#define PF_R		0x4
#define PF_W		0x2
#define PF_X		0x1
typedef struct elf32_phdr  Elf32_Phdr;
typedef struct elf64_phdr  Elf64_Phdr;
#define	EI_MAG0		0
#define	EI_MAG1		1
#define	EI_MAG2		2
#define	EI_MAG3		3
#define	EI_CLASS	4
#define	EI_DATA		5
#define	EI_VERSION	6
#define	EI_OSABI	7
#define	EI_PAD		8
#define	ELFMAG0		0x7f
#define	ELFMAG1		'E'
#define	ELFMAG2		'L'
#define	ELFMAG3		'F'
#define	ELFMAG		"\177ELF"
#define	SELFMAG		4
#define	ELFCLASSNONE	0
#define	ELFCLASS32	1
#define	ELFCLASS64	2
#define	ELFCLASSNUM	3
#define ELFDATANONE	0
#define ELFDATA2LSB	1
#define ELFDATA2MSB	2
#define EV_NONE		0
#define EV_CURRENT	1
#define EV_NUM		2
#define ELFOSABI_NONE	0
#define ELFOSABI_LINUX	3
struct elf_info ;
int parse_elf64(void *hdr, struct elf_info *info);
int parse_elf32(void *hdr, struct elf_info *info);
