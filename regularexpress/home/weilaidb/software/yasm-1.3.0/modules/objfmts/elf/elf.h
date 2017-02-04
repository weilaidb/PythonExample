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
ELF_ST_VISIBILITY            ((v) & ELF_VISIBILITY_MASK)
ELF32_ST_INFO       (((bind) << 4) + ((type) & 0xf))
ELF32_R_INFO               (((s)<<8)+(unsigned char)(t))
ELF32_ST_OTHER             ELF_ST_VISIBILITY(vis)
ELF64_ST_INFO       (((bind) << 4) + ((type) & 0xf))
ELF64_R_INFO               (((s)<<32) + ((t) & 0xffffffffL))
ELF64_ST_OTHER             ELF_ST_VISIBILITY(vis)
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
*elf_set_arch;
*elf_get_special_sym;
elf_is_wrt_sym_relative;
elf_is_wrt_pos_adjusted;
*elf_reloc_entry_create;
elf_reloc_entry_destroy;
*elf_strtab_entry_create;
elf_strtab_entry_set_str;
*elf_strtab_create;
*elf_strtab_append_str;
elf_strtab_destroy;
elf_strtab_output_to_file;
*elf_symtab_entry_create;
*elf_symtab_create;
elf_symtab_append_entry;
elf_symtab_insert_local_sym;
elf_symtab_destroy;
elf_symtab_assign_indices;
elf_symtab_write_to_file;
elf_symtab_set_nonzero;
elf_sym_set_visibility;
elf_sym_set_type;
elf_sym_set_size;
elf_sym_in_table;
*elf_secthead_create;
elf_secthead_destroy;
elf_secthead_write_to_file;
elf_secthead_append_reloc;
elf_secthead_get_type;
elf_secthead_set_typeflags;
elf_secthead_is_empty;
*elf_secthead_get_sym;
elf_secthead_get_align;
elf_secthead_set_align;
elf_secthead_get_index;
elf_secthead_set_info;
elf_secthead_set_index;
elf_secthead_set_link;
elf_secthead_set_rel_index;
*elf_secthead_set_rel_name;
elf_secthead_set_entsize;
*elf_secthead_set_sym;
elf_secthead_add_size;
*elf_secthead_name_reloc_section;
elf_handle_reloc_addend;
elf_secthead_write_rel_to_file;
elf_secthead_write_relocs_to_file;
elf_secthead_set_file_offset;
elf_proghead_get_size;
elf_proghead_write_to_file;
