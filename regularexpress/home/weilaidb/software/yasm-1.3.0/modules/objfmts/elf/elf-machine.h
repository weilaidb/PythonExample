#define ELF_MACHINE_H_INCLUDED
#define YASM_WRITE_32I_L(p, i) do  while (0)
#define YASM_WRITE_64I_L(p, i) do  while (0)
#define YASM_WRITE_64C_L(p, hi, lo) do  while (0)
#define YASM_WRITE_64Z_L(p, i)          YASM_WRITE_64C_L(p, 0, i)
typedef int(*func_accepts_reloc)(size_t val, yasm_symrec *wrt);
typedef void(*func_write_symtab_entry)(unsigned char *bufp,
elf_symtab_entry *entry,
yasm_intnum *value_intn,
yasm_intnum *size_intn);
typedef void(*func_write_secthead)(unsigned char *bufp, elf_secthead *shead);
typedef void(*func_write_secthead_rel)(unsigned char *bufp,
elf_secthead *shead,
elf_section_index symtab_idx,
elf_section_index sindex);
typedef void(*func_handle_reloc_addend)(yasm_intnum *intn,
elf_reloc_entry *reloc,
unsigned long offset);
typedef unsigned int(*func_map_reloc_info_to_type)(elf_reloc_entry *reloc);
typedef void(*func_write_reloc)(unsigned char *bufp,
elf_reloc_entry *reloc,
unsigned int r_type,
unsigned int r_sym);
typedef void (*func_write_proghead)(unsigned char **bufpp,
elf_offset secthead_addr,
unsigned long secthead_count,
elf_section_index shstrtab_index);
enum ;
typedef struct  elf_machine_ssym;
struct elf_machine_handler ;
