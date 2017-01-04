static unsigned char prefix_codes[] = ;
static unsigned int reg_rop[] = ;
static unsigned int reg_wop[] = ;
static unsigned int imm_wop[] = ;
static unsigned int rw8[] = ;
static unsigned int rw32[] = ;
static unsigned int mw8[] = ;
static unsigned int mw16[] = ;
static unsigned int mw32[] = ;
static unsigned int mw64[] = ;
static unsigned char prefix_codes[] = ;
static unsigned int reg_rop[] = ;
static unsigned int reg_wop[] = ;
static unsigned int imm_wop[] = ;
static unsigned int rw8[] = ;
static unsigned int rw32[] = ;
static unsigned int mw8[] = ;
static unsigned int mw16[] = ;
static unsigned int mw32[] = ;
static unsigned int mw64[] = ;
struct prefix_bits ;
static int skip_prefix(unsigned char *addr, struct prefix_bits *prf)
static int get_opcode(unsigned char *addr, unsigned int *opcode)
#define CHECK_OP_TYPE(opcode, array, type) \
for (i = 0; i < ARRAY_SIZE(array); i++)
enum reason_type get_ins_type(unsigned long ins_addr)
#undef CHECK_OP_TYPE
static unsigned int get_ins_reg_width(unsigned long ins_addr)
unsigned int get_ins_mem_width(unsigned long ins_addr)
enum ;
static unsigned char *get_reg_w8(int no, int rex, struct pt_regs *regs)
static unsigned long *get_reg_w32(int no, struct pt_regs *regs)
unsigned long get_ins_reg_val(unsigned long ins_addr, struct pt_regs *regs)
unsigned long get_ins_imm_val(unsigned long ins_addr)
