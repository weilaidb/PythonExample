#line 1
#define MOD_OpHAdd  (1UL<<0)
#define MOD_OpLAdd  (1UL<<1)
#define OPT_Imm         0x0
#define OPT_Reg         0x1
#define OPT_MASK        0x1
#define OPA_None        (0<<1)
#define OPA_DR          (1<<1)
#define OPA_SR          (2<<1)
#define OPA_Imm         (3<<1)
#define OPA_MASK        (3<<1)
#define OPI_None        (LC3B_IMM_NONE<<3)
#define OPI_4           (LC3B_IMM_4<<3)
#define OPI_5           (LC3B_IMM_5<<3)
#define OPI_6W          (LC3B_IMM_6_WORD<<3)
#define OPI_6B          (LC3B_IMM_6_BYTE<<3)
#define OPI_8           (LC3B_IMM_8<<3)
#define OPI_9           (LC3B_IMM_9<<3)
#define OPI_9PC         (LC3B_IMM_9_PC<<3)
#define OPI_MASK        (7<<3)
typedef struct lc3b_insn_info  lc3b_insn_info;
typedef struct lc3b_id_insn  lc3b_id_insn;
lc3b_id_insn_destroy;
lc3b_id_insn_print;
lc3b_id_insn_finalize;
static const yasm_bytecode_callback lc3b_id_insn_callback = ;
static const lc3b_insn_info empty_insn[] = ;
static const lc3b_insn_info addand_insn[] = ;
static const lc3b_insn_info br_insn[] = ;
static const lc3b_insn_info jmp_insn[] = ;
static const lc3b_insn_info lea_insn[] = ;
static const lc3b_insn_info ldst_insn[] = ;
static const lc3b_insn_info ldstb_insn[] = ;
static const lc3b_insn_info not_insn[] = ;
static const lc3b_insn_info nooperand_insn[] = ;
static const lc3b_insn_info shift_insn[] = ;
static const lc3b_insn_info trap_insn[] = ;
lc3b_id_insn_finalize
#define YYCTYPE         unsigned char
#define YYCURSOR        id
#define YYLIMIT         id
#define YYMARKER        marker
YYFILL       (void)(n)
yasm_lc3b__parse_check_regtmod
RET_INSN \
while
yasm_lc3b__parse_check_insnprefix
lc3b_id_insn_destroy
lc3b_id_insn_print
yasm_lc3b__create_empty_insn
