#define tile_bundle_bits tilegx_bundle_bits
#define TILE_MAX_INSTRUCTIONS_PER_BUNDLE TILEGX_MAX_INSTRUCTIONS_PER_BUNDLE
#define TILE_BUNDLE_ALIGNMENT_IN_BYTES TILEGX_BUNDLE_ALIGNMENT_IN_BYTES
#define tile_decoded_instruction tilegx_decoded_instruction
#define tile_mnemonic tilegx_mnemonic
#define parse_insn_tile parse_insn_tilegx
#define TILE_OPC_IRET TILEGX_OPC_IRET
#define TILE_OPC_ADDI TILEGX_OPC_ADDI
#define TILE_OPC_ADDLI TILEGX_OPC_ADDLI
#define TILE_OPC_INFO TILEGX_OPC_INFO
#define TILE_OPC_INFOL TILEGX_OPC_INFOL
#define TILE_OPC_JRP TILEGX_OPC_JRP
#define TILE_OPC_MOVE TILEGX_OPC_MOVE
#define OPCODE_STORE TILEGX_OPC_ST
typedef long long bt_int_reg_t;
#define OPCODE_STORE TILE_OPC_SW
typedef int bt_int_reg_t;
struct BacktraceBundle ;
static const struct tile_decoded_instruction *find_matching_insn(
const struct BacktraceBundle *bundle,
tile_mnemonic mnemonic,
const int *operand_values,
int num_operands_to_match)
static inline bool bt_has_iret(const struct BacktraceBundle *bundle)
static bool bt_has_addi_sp(const struct BacktraceBundle *bundle, int *adjust)
static int bt_get_info_ops(const struct BacktraceBundle *bundle,
int operands[MAX_INFO_OPS_PER_BUNDLE])
static bool bt_has_jrp(const struct BacktraceBundle *bundle, int *target_reg)
static bool bt_modifies_reg(const struct BacktraceBundle *bundle, int reg)
static inline bool bt_modifies_sp(const struct BacktraceBundle *bundle)
static inline bool bt_modifies_lr(const struct BacktraceBundle *bundle)
static inline bool bt_has_move_r52_sp(const struct BacktraceBundle *bundle)
static inline bool bt_has_sw_sp_lr(const struct BacktraceBundle *bundle)
static inline void bt_update_moveli(const struct BacktraceBundle *bundle,
int moveli_args[])
static bool bt_has_add_sp(const struct BacktraceBundle *bundle, int *adjust,
int moveli_args[])
static void find_caller_pc_and_caller_sp(CallerLocation *location,
const unsigned long start_pc,
BacktraceMemoryReader read_memory_func,
void *read_memory_func_extra)
void backtrace_init(BacktraceIterator *state,
BacktraceMemoryReader read_memory_func,
void *read_memory_func_extra,
unsigned long pc, unsigned long lr,
unsigned long sp, unsigned long r52)
static bool valid_addr_reg(bt_int_reg_t reg)
bool backtrace_next(BacktraceIterator *state)
