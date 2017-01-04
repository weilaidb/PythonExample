#define BFD_RELOC(x) -1
#define TREG_LR 55
#define TREG_SN 56
#define TREG_ZERO 63
const struct tilegx_opcode tilegx_opcodes[334] =
;
#define BITFIELD(start, size) ((start) | (((1 << (size)) - 1) << 6))
#define CHILD(array_index) (TILEGX_OPC_NONE + (array_index))
static const unsigned short decode_X0_fsm[936] =
;
static const unsigned short decode_X1_fsm[1206] =
;
static const unsigned short decode_Y0_fsm[178] =
;
static const unsigned short decode_Y1_fsm[167] =
;
static const unsigned short decode_Y2_fsm[118] =
;
#undef BITFIELD
#undef CHILD
const unsigned short * const
tilegx_bundle_decoder_fsms[TILEGX_NUM_PIPELINE_ENCODINGS] =
;
const struct tilegx_operand tilegx_operands[35] =
;
static const struct tilegx_opcode *
find_opcode(tilegx_bundle_bits bits, const unsigned short *table)
int
parse_insn_tilegx(tilegx_bundle_bits bits,
unsigned long long pc,
struct tilegx_decoded_instruction
decoded[TILEGX_MAX_INSTRUCTIONS_PER_BUNDLE])
