#define get_next(t, insn)	\
()
#define peek_next(t, insn)	\
()
#define peek_nbyte_next(t, insn, n)	\
()
void insn_init(struct insn *insn, const void *kaddr, int x86_64)
void insn_get_prefixes(struct insn *insn)
void insn_get_opcode(struct insn *insn)
void insn_get_modrm(struct insn *insn)
int insn_rip_relative(struct insn *insn)
void insn_get_sib(struct insn *insn)
void insn_get_displacement(struct insn *insn)
static void __get_moffset(struct insn *insn)
static void __get_immv32(struct insn *insn)
static void __get_immv(struct insn *insn)
static void __get_immptr(struct insn *insn)
void insn_get_immediate(struct insn *insn)
void insn_get_length(struct insn *insn)
