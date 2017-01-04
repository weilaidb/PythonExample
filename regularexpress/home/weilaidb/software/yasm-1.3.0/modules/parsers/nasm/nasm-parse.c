typedef enum  expr_type;
static yasm_bytecode *parse_line(yasm_parser_nasm *parser_nasm);
static int parse_directive_valparams(yasm_parser_nasm *parser_nasm, yasm_valparamhead *vps);
static yasm_bytecode *parse_times(yasm_parser_nasm *parser_nasm);
static yasm_bytecode *parse_exp(yasm_parser_nasm *parser_nasm);
static yasm_bytecode *parse_instr(yasm_parser_nasm *parser_nasm);
static yasm_insn_operand *parse_operand(yasm_parser_nasm *parser_nasm);
static yasm_insn_operand *parse_memaddr(yasm_parser_nasm *parser_nasm);
static yasm_expr *parse_expr(yasm_parser_nasm *parser_nasm, expr_type type);
static yasm_expr *parse_bexpr(yasm_parser_nasm *parser_nasm, expr_type type);
static yasm_expr *parse_expr0(yasm_parser_nasm *parser_nasm, expr_type type);
static yasm_expr *parse_expr1(yasm_parser_nasm *parser_nasm, expr_type type);
static yasm_expr *parse_expr2(yasm_parser_nasm *parser_nasm, expr_type type);
static yasm_expr *parse_expr3(yasm_parser_nasm *parser_nasm, expr_type type);
static yasm_expr *parse_expr4(yasm_parser_nasm *parser_nasm, expr_type type);
static yasm_expr *parse_expr5(yasm_parser_nasm *parser_nasm, expr_type type);
static yasm_expr *parse_expr6(yasm_parser_nasm *parser_nasm, expr_type type);
static void nasm_parser_directive
(yasm_parser_nasm *parser_nasm, const char *name, yasm_valparamhead *valparams, yasm_valparamhead *objext_valparams);
static void set_nonlocal_label(yasm_parser_nasm *parser_nasm, const char *name);
static void define_label(yasm_parser_nasm *parser_nasm, char *name,
unsigned int size);
static void yasm_ea_set_implicit_size_segment(yasm_parser_nasm *parser_nasm,
yasm_effaddr *ea, yasm_expr *e)
#define is_eol_tok(tok) ((tok) == 0)
#define is_eol()        is_eol_tok(curtok)
#define get_next_token()    (curtok = nasm_parser_lex(&curval, parser_nasm))
static void
get_peek_token(yasm_parser_nasm *parser_nasm)
static void
destroy_curtok_(yasm_parser_nasm *parser_nasm)
#define destroy_curtok()    destroy_curtok_(parser_nasm)
static void
demand_eol_(yasm_parser_nasm *parser_nasm)
#define demand_eol() demand_eol_(parser_nasm)
static const char *
describe_token(int token)
static int
expect_(yasm_parser_nasm *parser_nasm, int token)
#define expect(token) expect_(parser_nasm, token)
void
nasm_parser_parse(yasm_parser_nasm *parser_nasm)
static yasm_bytecode *
parse_line(yasm_parser_nasm *parser_nasm)
static int
parse_directive_valparams(yasm_parser_nasm *parser_nasm, yasm_valparamhead *vps)
static yasm_bytecode *
parse_times(yasm_parser_nasm *parser_nasm)
static yasm_bytecode *
parse_exp(yasm_parser_nasm *parser_nasm)
static yasm_bytecode *
parse_instr(yasm_parser_nasm *parser_nasm)
static yasm_insn_operand *
parse_operand(yasm_parser_nasm *parser_nasm)
static yasm_insn_operand *
parse_memaddr(yasm_parser_nasm *parser_nasm)
#define parse_expr_common(leftfunc, tok, rightfunc, op) \
do  while(0)
static yasm_expr *
parse_expr(yasm_parser_nasm *parser_nasm, expr_type type)
static yasm_expr *
parse_bexpr(yasm_parser_nasm *parser_nasm, expr_type type)
static yasm_expr *
parse_expr0(yasm_parser_nasm *parser_nasm, expr_type type)
static yasm_expr *
parse_expr1(yasm_parser_nasm *parser_nasm, expr_type type)
static yasm_expr *
parse_expr2(yasm_parser_nasm *parser_nasm, expr_type type)
static yasm_expr *
parse_expr3(yasm_parser_nasm *parser_nasm, expr_type type)
static yasm_expr *
parse_expr4(yasm_parser_nasm *parser_nasm, expr_type type)
static yasm_expr *
parse_expr5(yasm_parser_nasm *parser_nasm, expr_type type)
static yasm_expr *
parse_expr6(yasm_parser_nasm *parser_nasm, expr_type type)
static void
set_nonlocal_label(yasm_parser_nasm *parser_nasm, const char *name)
static void
define_label(yasm_parser_nasm *parser_nasm, char *name, unsigned int size)
static void
dir_align(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
nasm_parser_directive(yasm_parser_nasm *parser_nasm, const char *name,
yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams)
yasm_bytecode *
gas_intel_syntax_parse_instr(yasm_parser_nasm *parser_nasm, unsigned char *instr)
