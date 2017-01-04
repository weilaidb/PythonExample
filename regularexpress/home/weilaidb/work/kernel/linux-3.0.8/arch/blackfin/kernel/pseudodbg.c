const char * const greg_names[] = ;
static const char *get_allreg_name(int grp, int reg)
static bool fix_up_reg(struct pt_regs *fp, long *value, int grp, int reg)
#define PseudoDbg_Assert_opcode         0xf0000000
#define PseudoDbg_Assert_expected_bits  0
#define PseudoDbg_Assert_expected_mask  0xffff
#define PseudoDbg_Assert_regtest_bits   16
#define PseudoDbg_Assert_regtest_mask   0x7
#define PseudoDbg_Assert_grp_bits       19
#define PseudoDbg_Assert_grp_mask       0x7
#define PseudoDbg_Assert_dbgop_bits     22
#define PseudoDbg_Assert_dbgop_mask     0x3
#define PseudoDbg_Assert_dontcare_bits  24
#define PseudoDbg_Assert_dontcare_mask  0x7
#define PseudoDbg_Assert_code_bits      27
#define PseudoDbg_Assert_code_mask      0x1f
bool execute_pseudodbg_assert(struct pt_regs *fp, unsigned int opcode)
#define PseudoDbg_opcode        0xf8000000
#define PseudoDbg_reg_bits      0
#define PseudoDbg_reg_mask      0x7
#define PseudoDbg_grp_bits      3
#define PseudoDbg_grp_mask      0x7
#define PseudoDbg_fn_bits       6
#define PseudoDbg_fn_mask       0x3
#define PseudoDbg_code_bits     8
#define PseudoDbg_code_mask     0xff
bool execute_pseudodbg(struct pt_regs *fp, unsigned int opcode)
