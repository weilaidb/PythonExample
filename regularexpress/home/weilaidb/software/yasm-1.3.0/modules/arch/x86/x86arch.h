#define YASM_X86ARCH_H
#define CPU_Any     0
#define CPU_086     CPU_Any
#define CPU_186     1
#define CPU_286     2
#define CPU_386     3
#define CPU_486     4
#define CPU_586     5
#define CPU_686     6
#define CPU_P3      7
#define CPU_P4      8
#define CPU_IA64    9
#define CPU_K6      10
#define CPU_Athlon  11
#define CPU_Hammer  12
#define CPU_FPU     13
#define CPU_MMX     14
#define CPU_SSE     15
#define CPU_SSE2    16
#define CPU_SSE3    17
#define CPU_3DNow   18
#define CPU_Cyrix   19
#define CPU_AMD     20
#define CPU_SMM     21
#define CPU_Prot    22
#define CPU_Undoc   23
#define CPU_Obs     24
#define CPU_Priv    25
#define CPU_SVM     26
#define CPU_PadLock 27
#define CPU_EM64T   28
#define CPU_SSSE3   29
#define CPU_SSE41   30
#define CPU_SSE42   31
#define CPU_SSE4a   32
#define CPU_XSAVE   33
#define CPU_AVX     34
#define CPU_FMA     35
#define CPU_AES     36
#define CPU_CLMUL   37
#define CPU_MOVBE   38
#define CPU_XOP     39
#define CPU_FMA4    40
#define CPU_F16C    41
#define CPU_FSGSBASE 42
#define CPU_RDRAND  43
#define CPU_XSAVEOPT 44
#define CPU_EPTVPID 45
#define CPU_SMX     46
#define CPU_AVX2    47
#define CPU_BMI1    48
#define CPU_BMI2    49
#define CPU_INVPCID 50
#define CPU_LZCNT   51
#define CPU_TBM     52
#define CPU_TSX     53
#define CPU_SHA     54
#define CPU_SMAP    55
#define CPU_RDSEED  56
#define CPU_ADX     57
#define CPU_PRFCHW  58
enum x86_parser_type ;
#define PARSER(arch) (((arch)->parser == X86_PARSER_GAS && (arch)->gas_intel_mode) ? X86_PARSER_NASM : (arch)->parser)
typedef struct yasm_arch_x86  yasm_arch_x86;
typedef enum  x86_expritem_reg_size;
typedef enum  x86_parse_insn_prefix;
typedef enum  x86_parse_targetmod;
typedef enum  x86_jmp_opcode_sel;
typedef enum  x86_rex_bit_pos;
int yasm_x86__set_rex_from_reg(unsigned char *rex, unsigned char *low3,
uintptr_t reg, unsigned int bits,
x86_rex_bit_pos rexbit);
typedef struct x86_effaddr  x86_effaddr;
void yasm_x86__ea_init(x86_effaddr *x86_ea, unsigned int spare,
yasm_bytecode *precbc);
void yasm_x86__ea_set_disponly(x86_effaddr *x86_ea);
x86_effaddr *yasm_x86__ea_create_reg(x86_effaddr *x86_ea, unsigned long reg,
unsigned char *rex, unsigned int bits);
x86_effaddr *yasm_x86__ea_create_imm
(x86_effaddr *x86_ea, yasm_expr *imm, unsigned int im_len);
yasm_effaddr *yasm_x86__ea_create_expr(yasm_arch *arch, yasm_expr *e);
void yasm_x86__ea_destroy(yasm_effaddr *ea);
void yasm_x86__ea_print(const yasm_effaddr *ea, FILE *f, int indent_level);
void yasm_x86__bc_insn_opersize_override(yasm_bytecode *bc,
unsigned int opersize);
void yasm_x86__bc_insn_addrsize_override(yasm_bytecode *bc,
unsigned int addrsize);
void yasm_x86__bc_insn_set_lockrep_prefix(yasm_bytecode *bc,
unsigned int prefix);
typedef struct x86_common  x86_common;
typedef struct x86_opcode  x86_opcode;
typedef struct x86_insn  x86_insn;
typedef struct x86_jmp  x86_jmp;
typedef struct x86_jmpfar  x86_jmpfar;
void yasm_x86__bc_transform_insn(yasm_bytecode *bc, x86_insn *insn);
void yasm_x86__bc_transform_jmp(yasm_bytecode *bc, x86_jmp *jmp);
void yasm_x86__bc_transform_jmpfar(yasm_bytecode *bc, x86_jmpfar *jmpfar);
void yasm_x86__bc_apply_prefixes
(x86_common *common, unsigned char *rex, unsigned int def_opersize_64,
unsigned int num_prefixes, uintptr_t *prefixes);
int yasm_x86__expr_checkea
(x86_effaddr *x86_ea, unsigned char *addrsize, unsigned int bits,
int address16_op, unsigned char *rex, yasm_bytecode *bc);
void yasm_x86__parse_cpu(yasm_arch_x86 *arch_x86, const char *cpuid,
size_t cpuid_len);
yasm_arch_insnprefix yasm_x86__parse_check_insnprefix
(yasm_arch *arch, const char *id, size_t id_len, unsigned long line, yasm_bytecode **bc, uintptr_t *prefix);
yasm_arch_regtmod yasm_x86__parse_check_regtmod
(yasm_arch *arch, const char *id, size_t id_len, uintptr_t *data);
int yasm_x86__floatnum_tobytes
(yasm_arch *arch, const yasm_floatnum *flt, unsigned char *buf,
size_t destsize, size_t valsize, size_t shift, int warn);
int yasm_x86__intnum_tobytes
(yasm_arch *arch, const yasm_intnum *intn, unsigned char *buf,
size_t destsize, size_t valsize, int shift, const yasm_bytecode *bc,
int warn);
unsigned int yasm_x86__get_reg_size(uintptr_t reg); yasm_bytecode *yasm_x86__create_empty_insn(yasm_arch *arch,
unsigned long line);
