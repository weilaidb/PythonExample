#define ONELONG "%08lx: "
#define ONELONG "%016lx: "
#define OPERAND_GPR	0x1
#define OPERAND_FPR	0x2
#define OPERAND_AR	0x4
#define OPERAND_CR	0x8
#define OPERAND_DISP	0x10
#define OPERAND_BASE	0x20
#define OPERAND_INDEX	0x40
#define OPERAND_PCREL	0x80
#define OPERAND_SIGNED	0x100
#define OPERAND_LENGTH	0x200
enum ;
enum ;
struct operand ;
struct insn ;
static const struct operand operands[] =
;
static const unsigned char formats[][7] = ;
enum ;
static char *long_insn_name[] = ;
static struct insn opcode[] = ;
static struct insn opcode_01[] = ;
static struct insn opcode_a5[] = ;
static struct insn opcode_a7[] = ;
static struct insn opcode_b2[] = ;
static struct insn opcode_b3[] = ;
static struct insn opcode_b9[] = ;
static struct insn opcode_c0[] = ;
static struct insn opcode_c2[] = ;
static struct insn opcode_c4[] = ;
static struct insn opcode_c6[] = ;
static struct insn opcode_c8[] = ;
static struct insn opcode_cc[] = ;
static struct insn opcode_e3[] = ;
static struct insn opcode_e5[] = ;
static struct insn opcode_eb[] = ;
static struct insn opcode_ec[] = ;
static struct insn opcode_ed[] = ;
static unsigned int extract_operand(unsigned char *code,
const struct operand *operand)
static inline int insn_length(unsigned char code)
static struct insn *find_insn(unsigned char *code)
static int print_insn(char *buffer, unsigned char *code, unsigned long addr)
void show_code(struct pt_regs *regs)
