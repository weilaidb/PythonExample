#define ELF_MACHINE_H_INCLUDED
YASM_WRITE_32I_L do  while (0)
YASM_WRITE_64I_L do  while (0)
YASM_WRITE_64C_L do  while (0)
YASM_WRITE_64Z_L          YASM_WRITE_64C_L(p, 0, i)
int(size_t val, yasm_symrec *wrt);
void(unsigned char *bufp,
elf_symtab_entry *entry,
yasm_intnum *value_intn,
yasm_intnum *size_intn);
void(unsigned char *bufp, elf_secthead *shead);
void(unsigned char *bufp,
elf_secthead *shead,
elf_section_index symtab_idx,
elf_section_index sindex);
void(yasm_intnum *intn,
elf_reloc_entry *reloc,
unsigned long offset);
int(elf_reloc_entry *reloc);
void(unsigned char *bufp,
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
