#define _LINUX_ELF_FDPIC_H
#define PT_GNU_STACK    (PT_LOOS + 0x474e551)
struct elf32_fdpic_loadseg ;
struct elf32_fdpic_loadmap ;
#define ELF32_FDPIC_LOADMAP_VERSION	0x0000
struct elf_fdpic_params ;
extern void elf_fdpic_arch_lay_out_mm(struct elf_fdpic_params *exec_params,
struct elf_fdpic_params *interp_params,
unsigned long *start_stack,
unsigned long *start_brk);
