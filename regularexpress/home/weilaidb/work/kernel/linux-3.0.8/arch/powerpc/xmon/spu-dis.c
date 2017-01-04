extern const struct spu_opcode spu_opcodes[];
extern const int spu_num_opcodes;
#define SPU_DISASM_TBL_SIZE (1 << 11)
static const struct spu_opcode *spu_disassemble_table[SPU_DISASM_TBL_SIZE];
static void
init_spu_disassemble (void)
static const struct spu_opcode *
get_index_for_opcode (unsigned int insn)
int
print_insn_spu (unsigned long insn, unsigned long memaddr)
