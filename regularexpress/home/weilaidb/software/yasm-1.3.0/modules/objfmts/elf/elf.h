#define ELF_H_INCLUDED
typedef struct elf_reloc_entry elf_reloc_entry;
typedef struct elf_reloc_head elf_reloc_head;
typedef struct elf_secthead elf_secthead;
typedef struct elf_strtab_entry elf_strtab_entry;
typedef struct elf_strtab_head elf_strtab_head;
typedef struct elf_symtab_entry elf_symtab_entry;
typedef struct elf_symtab_head elf_symtab_head;
typedef struct elf_machine_handler elf_machine_handler;
typedef unsigned long   elf_address;
typedef unsigned long   elf_offset;
typedef unsigned long   elf_size;
typedef unsigned long   elf_section_info;
typedef enum  elf_file_type;
typedef enum  elf_machine;
typedef enum  elf_magic;
typedef enum  elf_version;
typedef enum  elf_identification_index;
typedef enum  elf_osabi_index;
typedef enum  elf_class;
typedef enum  elf_data_encoding;
typedef enum  elf_section_type;
typedef enum  elf_section_flags;
typedef enum  elf_section_index;
typedef enum  elf_symbol_binding;
typedef enum  elf_symbol_type;
typedef enum  elf_symbol_index;
typedef enum  elf_symbol_vis;
#define ELF_VISIBILITY_MASK             0x03
#define ELF_ST_VISIBILITY(v)            ((v) & ELF_VISIBILITY_MASK)
#define ELF32_ST_INFO(bind, type)       (((bind) << 4) + ((type) & 0xf))
#define ELF32_R_INFO(s,t)               (((s)<<8)+(unsigned char)(t))
#define ELF32_ST_OTHER(vis)             ELF_ST_VISIBILITY(vis)
#define ELF64_ST_INFO(bind, type)       (((bind) << 4) + ((type) & 0xf))
#define ELF64_R_INFO(s,t)               (((s)<<32) + ((t) & 0xffffffffL))
#define ELF64_ST_OTHER(vis)             ELF_ST_VISIBILITY(vis)
#define EHDR32_SIZE 52
#define EHDR64_SIZE 64
#define EHDR_MAXSIZE 64
#define SHDR32_SIZE 40
#define SHDR64_SIZE 64
#define SHDR_MAXSIZE 64
#define SYMTAB32_SIZE 16
#define SYMTAB64_SIZE 24
#define SYMTAB_MAXSIZE 24
#define SYMTAB32_ALIGN 4
#define SYMTAB64_ALIGN 8
#define RELOC32_SIZE 8
#define RELOC32A_SIZE 12
#define RELOC64_SIZE 16
#define RELOC64A_SIZE 24
#define RELOC_MAXSIZE 24
#define RELOC32_ALIGN 4
#define RELOC64_ALIGN 8
typedef enum  elf_386_relocation_type;
typedef enum  elf_x86_64_relocation_type;
struct elf_secthead ;
struct elf_reloc_entry ;
STAILQ_HEAD(elf_strtab_head, elf_strtab_entry);
struct elf_strtab_entry ;
STAILQ_HEAD(elf_symtab_head, elf_symtab_entry);
struct elf_symtab_entry ;
extern const yasm_assoc_data_callback elf_section_data;
extern const yasm_assoc_data_callback elf_symrec_data;
extern const yasm_assoc_data_callback elf_ssym_symrec_data;
const elf_machine_handler *elf_set_arch(struct yasm_arch *arch,
yasm_symtab *symtab,
int bits_pref);
yasm_symrec *elf_get_special_sym(const char *name, const char *parser);
int elf_is_wrt_sym_relative(yasm_symrec *wrt);
int elf_is_wrt_pos_adjusted(yasm_symrec *wrt);
elf_reloc_entry *elf_reloc_entry_create(yasm_symrec *sym, yasm_symrec *wrt,
yasm_intnum *addr,
int rel,
size_t valsize,
int is_GOT_sym);
void elf_reloc_entry_destroy(void *entry);
elf_strtab_entry *elf_strtab_entry_create(const char *str);
void elf_strtab_entry_set_str(elf_strtab_entry *entry, const char *str);
elf_strtab_head *elf_strtab_create(void);
elf_strtab_entry *elf_strtab_append_str(elf_strtab_head *head, const char *str);
void elf_strtab_destroy(elf_strtab_head *head);
unsigned long elf_strtab_output_to_file(FILE *f, elf_strtab_head *head);
elf_symtab_entry *elf_symtab_entry_create(elf_strtab_entry *name,
struct yasm_symrec *sym);
elf_symtab_head *elf_symtab_create(void);
void elf_symtab_append_entry(elf_symtab_head *symtab, elf_symtab_entry *entry);
void elf_symtab_insert_local_sym(elf_symtab_head *symtab,
elf_symtab_entry *entry);
void elf_symtab_destroy(elf_symtab_head *head);
unsigned long elf_symtab_assign_indices(elf_symtab_head *symtab);
unsigned long elf_symtab_write_to_file(FILE *f, elf_symtab_head *symtab,
yasm_errwarns *errwarns);
void elf_symtab_set_nonzero(elf_symtab_entry    *entry,
struct yasm_section *sect,
elf_section_index    sectidx,
elf_symbol_binding   bind,
elf_symbol_type      type,
struct yasm_expr    *size,
elf_address         *value);
void elf_sym_set_visibility(elf_symtab_entry    *entry,
elf_symbol_vis       vis);
void elf_sym_set_type(elf_symtab_entry *entry, elf_symbol_type type);
void elf_sym_set_size(elf_symtab_entry *entry, struct yasm_expr *size);
int elf_sym_in_table(elf_symtab_entry *entry);
elf_secthead *elf_secthead_create(elf_strtab_entry      *name,
elf_section_type      type,
elf_section_flags     flags,
elf_address           offset,
elf_size              size);
void elf_secthead_destroy(elf_secthead *esd);
unsigned long elf_secthead_write_to_file(FILE *f, elf_secthead *esd,
elf_section_index sindex);
void elf_secthead_append_reloc(yasm_section *sect, elf_secthead *shead,
elf_reloc_entry *reloc);
elf_section_type elf_secthead_get_type(elf_secthead *shead);
void elf_secthead_set_typeflags(elf_secthead *shead, elf_section_type type,
elf_section_flags flags);
int elf_secthead_is_empty(elf_secthead *shead);
struct yasm_symrec *elf_secthead_get_sym(elf_secthead *shead);
unsigned long elf_secthead_get_align(const elf_secthead *shead);
unsigned long elf_secthead_set_align(elf_secthead *shead, unsigned long align);
elf_section_index elf_secthead_get_index(elf_secthead *shead);
elf_section_info elf_secthead_set_info(elf_secthead *shead,
elf_section_info info);
elf_section_index elf_secthead_set_index(elf_secthead *shead,
elf_section_index sectidx);
elf_section_index elf_secthead_set_link(elf_secthead *shead,
elf_section_index link);
elf_section_index elf_secthead_set_rel_index(elf_secthead *shead,
elf_section_index sectidx);
elf_strtab_entry *elf_secthead_set_rel_name(elf_secthead *shead,
elf_strtab_entry *entry);
elf_size elf_secthead_set_entsize(elf_secthead *shead, elf_size size);
struct yasm_symrec *elf_secthead_set_sym(elf_secthead *shead,
struct yasm_symrec *sym);
void elf_secthead_add_size(elf_secthead *shead, yasm_intnum *size);
char *elf_secthead_name_reloc_section(const char *basesect);
void elf_handle_reloc_addend(yasm_intnum *intn,
elf_reloc_entry *reloc,
unsigned long offset);
unsigned long elf_secthead_write_rel_to_file(FILE *f, elf_section_index symtab,
yasm_section *sect,
elf_secthead *esd,
elf_section_index sindex);
unsigned long elf_secthead_write_relocs_to_file(FILE *f, yasm_section *sect,
elf_secthead *shead,
yasm_errwarns *errwarns);
long elf_secthead_set_file_offset(elf_secthead *shead, long pos);
unsigned long
elf_proghead_get_size(void);
unsigned long
elf_proghead_write_to_file(FILE *f,
elf_offset secthead_addr,
unsigned long secthead_count,
elf_section_index shstrtab_index);
