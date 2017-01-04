#define opcode_tile_h
typedef unsigned long long tilegx_bundle_bits;
enum
;
typedef enum
tilegx_mnemonic;
#define TILEGX_BPT_BUNDLE 0x286a44ae51485000ULL
#define TILE_ELF_MACHINE_CODE EM_TILE64
#define TILE_ELF_NAME "elf32-tile64"
static __inline unsigned int
get_BFEnd_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_BFOpcodeExtension_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_BFStart_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_BrOff_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_BrType_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_Dest_Imm8_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_Dest_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_Dest_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_Dest_Y0(tilegx_bundle_bits num)
static __inline unsigned int
get_Dest_Y1(tilegx_bundle_bits n)
static __inline unsigned int
get_Imm16_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_Imm16_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_Imm8OpcodeExtension_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_Imm8OpcodeExtension_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_Imm8_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_Imm8_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_Imm8_Y0(tilegx_bundle_bits num)
static __inline unsigned int
get_Imm8_Y1(tilegx_bundle_bits n)
static __inline unsigned int
get_JumpOff_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_JumpOpcodeExtension_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_MF_Imm14_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_MT_Imm14_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_Mode(tilegx_bundle_bits n)
static __inline unsigned int
get_Opcode_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_Opcode_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_Opcode_Y0(tilegx_bundle_bits num)
static __inline unsigned int
get_Opcode_Y1(tilegx_bundle_bits n)
static __inline unsigned int
get_Opcode_Y2(tilegx_bundle_bits n)
static __inline unsigned int
get_RRROpcodeExtension_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_RRROpcodeExtension_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_RRROpcodeExtension_Y0(tilegx_bundle_bits num)
static __inline unsigned int
get_RRROpcodeExtension_Y1(tilegx_bundle_bits n)
static __inline unsigned int
get_ShAmt_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_ShAmt_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_ShAmt_Y0(tilegx_bundle_bits num)
static __inline unsigned int
get_ShAmt_Y1(tilegx_bundle_bits n)
static __inline unsigned int
get_ShiftOpcodeExtension_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_ShiftOpcodeExtension_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_ShiftOpcodeExtension_Y0(tilegx_bundle_bits num)
static __inline unsigned int
get_ShiftOpcodeExtension_Y1(tilegx_bundle_bits n)
static __inline unsigned int
get_SrcA_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_SrcA_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_SrcA_Y0(tilegx_bundle_bits num)
static __inline unsigned int
get_SrcA_Y1(tilegx_bundle_bits n)
static __inline unsigned int
get_SrcA_Y2(tilegx_bundle_bits num)
static __inline unsigned int
get_SrcBDest_Y2(tilegx_bundle_bits n)
static __inline unsigned int
get_SrcB_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_SrcB_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_SrcB_Y0(tilegx_bundle_bits num)
static __inline unsigned int
get_SrcB_Y1(tilegx_bundle_bits n)
static __inline unsigned int
get_UnaryOpcodeExtension_X0(tilegx_bundle_bits num)
static __inline unsigned int
get_UnaryOpcodeExtension_X1(tilegx_bundle_bits n)
static __inline unsigned int
get_UnaryOpcodeExtension_Y0(tilegx_bundle_bits num)
static __inline unsigned int
get_UnaryOpcodeExtension_Y1(tilegx_bundle_bits n)
static __inline int
sign_extend(int n, int num_bits)
static __inline tilegx_bundle_bits
create_BFEnd_X0(int num)
static __inline tilegx_bundle_bits
create_BFOpcodeExtension_X0(int num)
static __inline tilegx_bundle_bits
create_BFStart_X0(int num)
static __inline tilegx_bundle_bits
create_BrOff_X1(int num)
static __inline tilegx_bundle_bits
create_BrType_X1(int num)
static __inline tilegx_bundle_bits
create_Dest_Imm8_X1(int num)
static __inline tilegx_bundle_bits
create_Dest_X0(int num)
static __inline tilegx_bundle_bits
create_Dest_X1(int num)
static __inline tilegx_bundle_bits
create_Dest_Y0(int num)
static __inline tilegx_bundle_bits
create_Dest_Y1(int num)
static __inline tilegx_bundle_bits
create_Imm16_X0(int num)
static __inline tilegx_bundle_bits
create_Imm16_X1(int num)
static __inline tilegx_bundle_bits
create_Imm8OpcodeExtension_X0(int num)
static __inline tilegx_bundle_bits
create_Imm8OpcodeExtension_X1(int num)
static __inline tilegx_bundle_bits
create_Imm8_X0(int num)
static __inline tilegx_bundle_bits
create_Imm8_X1(int num)
static __inline tilegx_bundle_bits
create_Imm8_Y0(int num)
static __inline tilegx_bundle_bits
create_Imm8_Y1(int num)
static __inline tilegx_bundle_bits
create_JumpOff_X1(int num)
static __inline tilegx_bundle_bits
create_JumpOpcodeExtension_X1(int num)
static __inline tilegx_bundle_bits
create_MF_Imm14_X1(int num)
static __inline tilegx_bundle_bits
create_MT_Imm14_X1(int num)
static __inline tilegx_bundle_bits
create_Mode(int num)
static __inline tilegx_bundle_bits
create_Opcode_X0(int num)
static __inline tilegx_bundle_bits
create_Opcode_X1(int num)
static __inline tilegx_bundle_bits
create_Opcode_Y0(int num)
static __inline tilegx_bundle_bits
create_Opcode_Y1(int num)
static __inline tilegx_bundle_bits
create_Opcode_Y2(int num)
static __inline tilegx_bundle_bits
create_RRROpcodeExtension_X0(int num)
static __inline tilegx_bundle_bits
create_RRROpcodeExtension_X1(int num)
static __inline tilegx_bundle_bits
create_RRROpcodeExtension_Y0(int num)
static __inline tilegx_bundle_bits
create_RRROpcodeExtension_Y1(int num)
static __inline tilegx_bundle_bits
create_ShAmt_X0(int num)
static __inline tilegx_bundle_bits
create_ShAmt_X1(int num)
static __inline tilegx_bundle_bits
create_ShAmt_Y0(int num)
static __inline tilegx_bundle_bits
create_ShAmt_Y1(int num)
static __inline tilegx_bundle_bits
create_ShiftOpcodeExtension_X0(int num)
static __inline tilegx_bundle_bits
create_ShiftOpcodeExtension_X1(int num)
static __inline tilegx_bundle_bits
create_ShiftOpcodeExtension_Y0(int num)
static __inline tilegx_bundle_bits
create_ShiftOpcodeExtension_Y1(int num)
static __inline tilegx_bundle_bits
create_SrcA_X0(int num)
static __inline tilegx_bundle_bits
create_SrcA_X1(int num)
static __inline tilegx_bundle_bits
create_SrcA_Y0(int num)
static __inline tilegx_bundle_bits
create_SrcA_Y1(int num)
static __inline tilegx_bundle_bits
create_SrcA_Y2(int num)
static __inline tilegx_bundle_bits
create_SrcBDest_Y2(int num)
static __inline tilegx_bundle_bits
create_SrcB_X0(int num)
static __inline tilegx_bundle_bits
create_SrcB_X1(int num)
static __inline tilegx_bundle_bits
create_SrcB_Y0(int num)
static __inline tilegx_bundle_bits
create_SrcB_Y1(int num)
static __inline tilegx_bundle_bits
create_UnaryOpcodeExtension_X0(int num)
static __inline tilegx_bundle_bits
create_UnaryOpcodeExtension_X1(int num)
static __inline tilegx_bundle_bits
create_UnaryOpcodeExtension_Y0(int num)
static __inline tilegx_bundle_bits
create_UnaryOpcodeExtension_Y1(int num)
typedef enum
tilegx_pipeline;
#define tilegx_is_x_pipeline(p) ((int)(p) <= (int)TILEGX_PIPELINE_X1)
typedef enum
tilegx_operand_type;
#define TILEGX_BUNDLE_MODE_MASK ((tilegx_bundle_bits)3 << 62)
enum
;
struct tilegx_operand
;
extern const struct tilegx_operand tilegx_operands[];
extern const unsigned short * const
tilegx_bundle_decoder_fsms[TILEGX_NUM_PIPELINE_ENCODINGS];
struct tilegx_opcode
;
extern const struct tilegx_opcode tilegx_opcodes[];
struct tilegx_decoded_instruction
;
extern int parse_insn_tilegx(tilegx_bundle_bits bits,
unsigned long long pc,
struct tilegx_decoded_instruction
decoded[TILEGX_MAX_INSTRUCTIONS_PER_BUNDLE]);
