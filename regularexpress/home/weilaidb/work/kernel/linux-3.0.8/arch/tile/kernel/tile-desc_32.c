#define BFD_RELOC(x) -1
#define TREG_LR 55
#define TREG_SN 56
#define TREG_ZERO 63
const struct tile_opcode tile_opcodes[395] =
;
#define BITFIELD(start, size) ((start) | (((1 << (size)) - 1) << 6))
#define CHILD(array_index) (TILE_OPC_NONE + (array_index))
static const unsigned short decode_X0_fsm[1153] =
;
static const unsigned short decode_X1_fsm[1540] =
;
static const unsigned short decode_Y0_fsm[168] =
;
static const unsigned short decode_Y1_fsm[140] =
;
static const unsigned short decode_Y2_fsm[24] =
;
#undef BITFIELD
#undef CHILD
const unsigned short * const
tile_bundle_decoder_fsms[TILE_NUM_PIPELINE_ENCODINGS] =
;
const struct tile_operand tile_operands[43] =
;
const struct tile_opcode *
find_opcode(tile_bundle_bits bits, tile_pipeline pipe)
int
parse_insn_tile(tile_bundle_bits bits,
unsigned int pc,
struct tile_decoded_instruction
decoded[TILE_MAX_INSTRUCTIONS_PER_BUNDLE])
