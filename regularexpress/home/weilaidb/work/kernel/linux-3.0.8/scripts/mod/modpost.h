#if KERNEL_ELFCLASS == ELFCLASS32
#define Elf_Ehdr    Elf32_Ehdr
#define Elf_Shdr    Elf32_Shdr
#define Elf_Sym     Elf32_Sym
#define Elf_Addr    Elf32_Addr
#define Elf_Sword   Elf64_Sword
#define Elf_Section Elf32_Half
#define ELF_ST_BIND ELF32_ST_BIND
#define ELF_ST_TYPE ELF32_ST_TYPE
#define Elf_Rel     Elf32_Rel
#define Elf_Rela    Elf32_Rela
#define ELF_R_SYM   ELF32_R_SYM
#define ELF_R_TYPE  ELF32_R_TYPE
#define Elf_Ehdr    Elf64_Ehdr
#define Elf_Shdr    Elf64_Shdr
#define Elf_Sym     Elf64_Sym
#define Elf_Addr    Elf64_Addr
#define Elf_Sword   Elf64_Sxword
#define Elf_Section Elf64_Half
#define ELF_ST_BIND ELF64_ST_BIND
#define ELF_ST_TYPE ELF64_ST_TYPE
#define Elf_Rel     Elf64_Rel
#define Elf_Rela    Elf64_Rela
#define ELF_R_SYM   ELF64_R_SYM
#define ELF_R_TYPE  ELF64_R_TYPE
typedef struct
_Elf64_Mips_R_Info;
typedef union
_Elf64_Mips_R_Info_union;
#define ELF64_MIPS_R_SYM(i) \
((__extension__ (_Elf64_Mips_R_Info_union)(i)).r_info_fields.r_sym)
#define ELF64_MIPS_R_TYPE(i) \
((__extension__ (_Elf64_Mips_R_Info_union)(i)).r_info_fields.r_type1)
#if KERNEL_ELFDATA != HOST_ELFDATA
static inline void __endian(const void *src, void *dest, unsigned int size)
#define TO_NATIVE(x)						\
()
#define TO_NATIVE(x) (x)
#define NOFAIL(ptr)   do_nofail((ptr), #ptr)
void *do_nofail(void *ptr, const char *expr);
struct buffer ;
void __attribute__((format(printf, 2, 3)))
buf_printf(struct buffer *buf, const char *fmt, ...);
void
buf_write(struct buffer *buf, const char *s, int len);
struct module ;
struct elf_info ;
static inline int is_shndx_special(unsigned int i)
#define SPECIAL(i) ((i) - (SHN_HIRESERVE + 1))
static inline unsigned int get_secindex(const struct elf_info *info,
const Elf_Sym *sym)
extern unsigned int cross_build;
void handle_moddevtable(struct module *mod, struct elf_info *info,
Elf_Sym *sym, const char *symname);
void add_moddevtable(struct buffer *buf, struct module *mod);
void maybe_frob_rcs_version(const char *modfilename,
char *version,
void *modinfo,
unsigned long modinfo_offset);
void get_src_version(const char *modname, char sum[], unsigned sumlen);
void *grab_file(const char *filename, unsigned long *size);
char* get_next_line(unsigned long *pos, void *file, unsigned long size);
void release_file(void *file, unsigned long size);
void fatal(const char *fmt, ...);
void warn(const char *fmt, ...);
void merror(const char *fmt, ...);
