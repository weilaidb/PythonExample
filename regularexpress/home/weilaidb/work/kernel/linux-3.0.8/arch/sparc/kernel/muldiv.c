static inline int has_imm13(int insn)
static inline int is_foocc(int insn)
static inline int sign_extend_imm13(int imm)
static inline void advance(struct pt_regs *regs)
static inline void maybe_flush_windows(unsigned int rs1, unsigned int rs2,
unsigned int rd)
#define fetch_reg(reg, regs) ()
static inline int
store_reg(unsigned int result, unsigned int reg, struct pt_regs *regs)
int do_user_muldiv(struct pt_regs *regs, unsigned long pc)
