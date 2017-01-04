#define opcode_tile_h
typedef unsigned long long tile_bundle_bits;
enum
;
typedef enum
tile_mnemonic;
#define TILE_BPT_BUNDLE 0x400b3cae70166000ULL
#define TILE_ELF_MACHINE_CODE EM_TILEPRO
#define TILE_ELF_NAME "elf32-tilepro"
static __inline unsigned int
get_BrOff_SN(tile_bundle_bits num)
static __inline unsigned int
get_BrOff_X1(tile_bundle_bits n)
static __inline unsigned int
get_BrType_X1(tile_bundle_bits n)
static __inline unsigned int
get_Dest_Imm8_X1(tile_bundle_bits n)
static __inline unsigned int
get_Dest_SN(tile_bundle_bits num)
static __inline unsigned int
get_Dest_X0(tile_bundle_bits num)
static __inline unsigned int
get_Dest_X1(tile_bundle_bits n)
static __inline unsigned int
get_Dest_Y0(tile_bundle_bits num)
static __inline unsigned int
get_Dest_Y1(tile_bundle_bits n)
static __inline unsigned int
get_Imm16_X0(tile_bundle_bits num)
static __inline unsigned int
get_Imm16_X1(tile_bundle_bits n)
static __inline unsigned int
get_Imm8_SN(tile_bundle_bits num)
static __inline unsigned int
get_Imm8_X0(tile_bundle_bits num)
static __inline unsigned int
get_Imm8_X1(tile_bundle_bits n)
static __inline unsigned int
get_Imm8_Y0(tile_bundle_bits num)
static __inline unsigned int
get_Imm8_Y1(tile_bundle_bits n)
static __inline unsigned int
get_ImmOpcodeExtension_X0(tile_bundle_bits num)
static __inline unsigned int
get_ImmOpcodeExtension_X1(tile_bundle_bits n)
static __inline unsigned int
get_ImmRROpcodeExtension_SN(tile_bundle_bits num)
static __inline unsigned int
get_JOffLong_X1(tile_bundle_bits n)
static __inline unsigned int
get_JOff_X1(tile_bundle_bits n)
static __inline unsigned int
get_MF_Imm15_X1(tile_bundle_bits n)
static __inline unsigned int
get_MMEnd_X0(tile_bundle_bits num)
static __inline unsigned int
get_MMEnd_X1(tile_bundle_bits n)
static __inline unsigned int
get_MMStart_X0(tile_bundle_bits num)
static __inline unsigned int
get_MMStart_X1(tile_bundle_bits n)
static __inline unsigned int
get_MT_Imm15_X1(tile_bundle_bits n)
static __inline unsigned int
get_Mode(tile_bundle_bits n)
static __inline unsigned int
get_NoRegOpcodeExtension_SN(tile_bundle_bits num)
static __inline unsigned int
get_Opcode_SN(tile_bundle_bits num)
static __inline unsigned int
get_Opcode_X0(tile_bundle_bits num)
static __inline unsigned int
get_Opcode_X1(tile_bundle_bits n)
static __inline unsigned int
get_Opcode_Y0(tile_bundle_bits num)
static __inline unsigned int
get_Opcode_Y1(tile_bundle_bits n)
static __inline unsigned int
get_Opcode_Y2(tile_bundle_bits n)
static __inline unsigned int
get_RROpcodeExtension_SN(tile_bundle_bits num)
static __inline unsigned int
get_RRROpcodeExtension_X0(tile_bundle_bits num)
static __inline unsigned int
get_RRROpcodeExtension_X1(tile_bundle_bits n)
static __inline unsigned int
get_RRROpcodeExtension_Y0(tile_bundle_bits num)
static __inline unsigned int
get_RRROpcodeExtension_Y1(tile_bundle_bits n)
static __inline unsigned int
get_RouteOpcodeExtension_SN(tile_bundle_bits num)
static __inline unsigned int
get_S_X0(tile_bundle_bits num)
static __inline unsigned int
get_S_X1(tile_bundle_bits n)
static __inline unsigned int
get_ShAmt_X0(tile_bundle_bits num)
static __inline unsigned int
get_ShAmt_X1(tile_bundle_bits n)
static __inline unsigned int
get_ShAmt_Y0(tile_bundle_bits num)
static __inline unsigned int
get_ShAmt_Y1(tile_bundle_bits n)
static __inline unsigned int
get_SrcA_X0(tile_bundle_bits num)
static __inline unsigned int
get_SrcA_X1(tile_bundle_bits n)
static __inline unsigned int
get_SrcA_Y0(tile_bundle_bits num)
static __inline unsigned int
get_SrcA_Y1(tile_bundle_bits n)
static __inline unsigned int
get_SrcA_Y2(tile_bundle_bits n)
static __inline unsigned int
get_SrcBDest_Y2(tile_bundle_bits num)
static __inline unsigned int
get_SrcB_X0(tile_bundle_bits num)
static __inline unsigned int
get_SrcB_X1(tile_bundle_bits n)
static __inline unsigned int
get_SrcB_Y0(tile_bundle_bits num)
static __inline unsigned int
get_SrcB_Y1(tile_bundle_bits n)
static __inline unsigned int
get_Src_SN(tile_bundle_bits num)
static __inline unsigned int
get_UnOpcodeExtension_X0(tile_bundle_bits num)
static __inline unsigned int
get_UnOpcodeExtension_X1(tile_bundle_bits n)
static __inline unsigned int
get_UnOpcodeExtension_Y0(tile_bundle_bits num)
static __inline unsigned int
get_UnOpcodeExtension_Y1(tile_bundle_bits n)
static __inline unsigned int
get_UnShOpcodeExtension_X0(tile_bundle_bits num)
static __inline unsigned int
get_UnShOpcodeExtension_X1(tile_bundle_bits n)
static __inline unsigned int
get_UnShOpcodeExtension_Y0(tile_bundle_bits num)
static __inline unsigned int
get_UnShOpcodeExtension_Y1(tile_bundle_bits n)
static __inline int
sign_extend(int n, int num_bits)
static __inline tile_bundle_bits
create_BrOff_SN(int num)
static __inline tile_bundle_bits
create_BrOff_X1(int num)
static __inline tile_bundle_bits
create_BrType_X1(int num)
static __inline tile_bundle_bits
create_Dest_Imm8_X1(int num)
static __inline tile_bundle_bits
create_Dest_SN(int num)
static __inline tile_bundle_bits
create_Dest_X0(int num)
static __inline tile_bundle_bits
create_Dest_X1(int num)
static __inline tile_bundle_bits
create_Dest_Y0(int num)
static __inline tile_bundle_bits
create_Dest_Y1(int num)
static __inline tile_bundle_bits
create_Imm16_X0(int num)
static __inline tile_bundle_bits
create_Imm16_X1(int num)
static __inline tile_bundle_bits
create_Imm8_SN(int num)
static __inline tile_bundle_bits
create_Imm8_X0(int num)
static __inline tile_bundle_bits
create_Imm8_X1(int num)
static __inline tile_bundle_bits
create_Imm8_Y0(int num)
static __inline tile_bundle_bits
create_Imm8_Y1(int num)
static __inline tile_bundle_bits
create_ImmOpcodeExtension_X0(int num)
static __inline tile_bundle_bits
create_ImmOpcodeExtension_X1(int num)
static __inline tile_bundle_bits
create_ImmRROpcodeExtension_SN(int num)
static __inline tile_bundle_bits
create_JOffLong_X1(int num)
static __inline tile_bundle_bits
create_JOff_X1(int num)
static __inline tile_bundle_bits
create_MF_Imm15_X1(int num)
static __inline tile_bundle_bits
create_MMEnd_X0(int num)
static __inline tile_bundle_bits
create_MMEnd_X1(int num)
static __inline tile_bundle_bits
create_MMStart_X0(int num)
static __inline tile_bundle_bits
create_MMStart_X1(int num)
static __inline tile_bundle_bits
create_MT_Imm15_X1(int num)
static __inline tile_bundle_bits
create_Mode(int num)
static __inline tile_bundle_bits
create_NoRegOpcodeExtension_SN(int num)
static __inline tile_bundle_bits
create_Opcode_SN(int num)
static __inline tile_bundle_bits
create_Opcode_X0(int num)
static __inline tile_bundle_bits
create_Opcode_X1(int num)
static __inline tile_bundle_bits
create_Opcode_Y0(int num)
static __inline tile_bundle_bits
create_Opcode_Y1(int num)
static __inline tile_bundle_bits
create_Opcode_Y2(int num)
static __inline tile_bundle_bits
create_RROpcodeExtension_SN(int num)
static __inline tile_bundle_bits
create_RRROpcodeExtension_X0(int num)
static __inline tile_bundle_bits
create_RRROpcodeExtension_X1(int num)
static __inline tile_bundle_bits
create_RRROpcodeExtension_Y0(int num)
static __inline tile_bundle_bits
create_RRROpcodeExtension_Y1(int num)
static __inline tile_bundle_bits
create_RouteOpcodeExtension_SN(int num)
static __inline tile_bundle_bits
create_S_X0(int num)
static __inline tile_bundle_bits
create_S_X1(int num)
static __inline tile_bundle_bits
create_ShAmt_X0(int num)
static __inline tile_bundle_bits
create_ShAmt_X1(int num)
static __inline tile_bundle_bits
create_ShAmt_Y0(int num)
static __inline tile_bundle_bits
create_ShAmt_Y1(int num)
static __inline tile_bundle_bits
create_SrcA_X0(int num)
static __inline tile_bundle_bits
create_SrcA_X1(int num)
static __inline tile_bundle_bits
create_SrcA_Y0(int num)
static __inline tile_bundle_bits
create_SrcA_Y1(int num)
static __inline tile_bundle_bits
create_SrcA_Y2(int num)
static __inline tile_bundle_bits
create_SrcBDest_Y2(int num)
static __inline tile_bundle_bits
create_SrcB_X0(int num)
static __inline tile_bundle_bits
create_SrcB_X1(int num)
static __inline tile_bundle_bits
create_SrcB_Y0(int num)
static __inline tile_bundle_bits
create_SrcB_Y1(int num)
static __inline tile_bundle_bits
create_Src_SN(int num)
static __inline tile_bundle_bits
create_UnOpcodeExtension_X0(int num)
static __inline tile_bundle_bits
create_UnOpcodeExtension_X1(int num)
static __inline tile_bundle_bits
create_UnOpcodeExtension_Y0(int num)
static __inline tile_bundle_bits
create_UnOpcodeExtension_Y1(int num)
static __inline tile_bundle_bits
create_UnShOpcodeExtension_X0(int num)
static __inline tile_bundle_bits
create_UnShOpcodeExtension_X1(int num)
static __inline tile_bundle_bits
create_UnShOpcodeExtension_Y0(int num)
static __inline tile_bundle_bits
create_UnShOpcodeExtension_Y1(int num)
typedef enum
tile_pipeline;
#define tile_is_x_pipeline(p) ((int)(p) <= (int)TILE_PIPELINE_X1)
typedef enum
tile_operand_type;
#define TILE_BUNDLE_Y_ENCODING_MASK ((tile_bundle_bits)1 << 63)
enum
;
struct tile_operand
;
extern const struct tile_operand tile_operands[];
extern const unsigned short * const
tile_bundle_decoder_fsms[TILE_NUM_PIPELINE_ENCODINGS];
struct tile_opcode
;
extern const struct tile_opcode tile_opcodes[];
struct tile_decoded_instruction
;
extern int parse_insn_tile(tile_bundle_bits bits,
unsigned int pc,
struct tile_decoded_instruction
decoded[TILE_MAX_INSTRUCTIONS_PER_BUNDLE]);
extern const struct tile_opcode *
find_opcode(tile_bundle_bits bits, tile_pipeline pipe);
