#undef append_func
#undef is_fake_mcount
#undef fn_is_fake_mcount
#undef MIPS_is_fake_mcount
#undef mcount_adjust
#undef sift_rel_mcount
#undef nop_mcount
#undef find_secsym_ndx
#undef __has_rel_mcount
#undef has_rel_mcount
#undef tot_relsize
#undef get_mcountsym
#undef get_sym_str_and_relp
#undef do_func
#undef Elf_Addr
#undef Elf_Ehdr
#undef Elf_Shdr
#undef Elf_Rel
#undef Elf_Rela
#undef Elf_Sym
#undef ELF_R_SYM
#undef Elf_r_sym
#undef ELF_R_INFO
#undef Elf_r_info
#undef ELF_ST_BIND
#undef ELF_ST_TYPE
#undef fn_ELF_R_SYM
#undef fn_ELF_R_INFO
#undef uint_t
#undef _w
#undef _align
#undef _size
# define append_func		append64
# define sift_rel_mcount	sift64_rel_mcount
# define nop_mcount		nop_mcount_64
# define find_secsym_ndx	find64_secsym_ndx
# define __has_rel_mcount	__has64_rel_mcount
# define has_rel_mcount		has64_rel_mcount
# define tot_relsize		tot64_relsize
# define get_sym_str_and_relp	get_sym_str_and_relp_64
# define do_func		do64
# define get_mcountsym		get_mcountsym_64
# define is_fake_mcount		is_fake_mcount64
# define fn_is_fake_mcount	fn_is_fake_mcount64
# define MIPS_is_fake_mcount	MIPS64_is_fake_mcount
# define mcount_adjust		mcount_adjust_64
# define Elf_Addr		Elf64_Addr
# define Elf_Ehdr		Elf64_Ehdr
# define Elf_Shdr		Elf64_Shdr
# define Elf_Rel		Elf64_Rel
# define Elf_Rela		Elf64_Rela
# define Elf_Sym		Elf64_Sym
# define ELF_R_SYM		ELF64_R_SYM
# define Elf_r_sym		Elf64_r_sym
# define ELF_R_INFO		ELF64_R_INFO
# define Elf_r_info		Elf64_r_info
# define ELF_ST_BIND		ELF64_ST_BIND
# define ELF_ST_TYPE		ELF64_ST_TYPE
# define fn_ELF_R_SYM		fn_ELF64_R_SYM
# define fn_ELF_R_INFO		fn_ELF64_R_INFO
# define uint_t			uint64_t
# define _w			w8
# define _align			7u
# define _size			8
# define append_func		append32
# define sift_rel_mcount	sift32_rel_mcount
# define nop_mcount		nop_mcount_32
# define find_secsym_ndx	find32_secsym_ndx
# define __has_rel_mcount	__has32_rel_mcount
# define has_rel_mcount		has32_rel_mcount
# define tot_relsize		tot32_relsize
# define get_sym_str_and_relp	get_sym_str_and_relp_32
# define do_func		do32
# define get_mcountsym		get_mcountsym_32
# define is_fake_mcount		is_fake_mcount32
# define fn_is_fake_mcount	fn_is_fake_mcount32
# define MIPS_is_fake_mcount	MIPS32_is_fake_mcount
# define mcount_adjust		mcount_adjust_32
# define Elf_Addr		Elf32_Addr
# define Elf_Ehdr		Elf32_Ehdr
# define Elf_Shdr		Elf32_Shdr
# define Elf_Rel		Elf32_Rel
# define Elf_Rela		Elf32_Rela
# define Elf_Sym		Elf32_Sym
# define ELF_R_SYM		ELF32_R_SYM
# define Elf_r_sym		Elf32_r_sym
# define ELF_R_INFO		ELF32_R_INFO
# define Elf_r_info		Elf32_r_info
# define ELF_ST_BIND		ELF32_ST_BIND
# define ELF_ST_TYPE		ELF32_ST_TYPE
# define fn_ELF_R_SYM		fn_ELF32_R_SYM
# define fn_ELF_R_INFO		fn_ELF32_R_INFO
# define uint_t			uint32_t
# define _w			w
# define _align			3u
# define _size			4
static int fn_is_fake_mcount(Elf_Rel const *rp)
static int (*is_fake_mcount)(Elf_Rel const *rp) = fn_is_fake_mcount;
static uint_t fn_ELF_R_SYM(Elf_Rel const *rp)
static uint_t (*Elf_r_sym)(Elf_Rel const *rp) = fn_ELF_R_SYM;
static void fn_ELF_R_INFO(Elf_Rel *const rp, unsigned sym, unsigned type)
static void (*Elf_r_info)(Elf_Rel *const rp, unsigned sym, unsigned type) = fn_ELF_R_INFO;
static int mcount_adjust = 0;
#define MIPS_FAKEMCOUNT_OFFSET	4
static int MIPS_is_fake_mcount(Elf_Rel const *rp)
static void append_func(Elf_Ehdr *const ehdr,
Elf_Shdr *const shstr,
uint_t const *const mloc0,
uint_t const *const mlocp,
Elf_Rel const *const mrel0,
Elf_Rel const *const mrelp,
unsigned int const rel_entsize,
unsigned int const symsec_sh_link)
static unsigned get_mcountsym(Elf_Sym const *const sym0,
Elf_Rel const *relp,
char const *const str0)
static void get_sym_str_and_relp(Elf_Shdr const *const relhdr,
Elf_Ehdr const *const ehdr,
Elf_Sym const **sym0,
char const **str0,
Elf_Rel const **relp)
static uint_t *sift_rel_mcount(uint_t *mlocp,
unsigned const offbase,
Elf_Rel **const mrelpp,
Elf_Shdr const *const relhdr,
Elf_Ehdr const *const ehdr,
unsigned const recsym,
uint_t const recval,
unsigned const reltype)
static void nop_mcount(Elf_Shdr const *const relhdr,
Elf_Ehdr const *const ehdr,
const char *const txtname)
static unsigned find_secsym_ndx(unsigned const txtndx,
char const *const txtname,
uint_t *const recvalp,
Elf_Shdr const *const symhdr,
Elf_Ehdr const *const ehdr)
static char const *
__has_rel_mcount(Elf_Shdr const *const relhdr,
Elf_Shdr const *const shdr0,
char const *const shstrtab,
char const *const fname)
static char const *has_rel_mcount(Elf_Shdr const *const relhdr,
Elf_Shdr const *const shdr0,
char const *const shstrtab,
char const *const fname)
static unsigned tot_relsize(Elf_Shdr const *const shdr0,
unsigned nhdr,
const char *const shstrtab,
const char *const fname)
static void
do_func(Elf_Ehdr *const ehdr, char const *const fname, unsigned const reltype)
