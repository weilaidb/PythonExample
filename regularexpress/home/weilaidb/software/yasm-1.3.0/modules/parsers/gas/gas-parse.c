typedef struct dir_lookup  dir_lookup;
static void cpp_line_marker(yasm_parser_gas *parser_gas);
static void nasm_line_marker(yasm_parser_gas *parser_gas);
static yasm_bytecode *parse_instr(yasm_parser_gas *parser_gas);
static int parse_dirvals(yasm_parser_gas *parser_gas, yasm_valparamhead *vps);
static int parse_datavals(yasm_parser_gas *parser_gas, yasm_datavalhead *dvs);
static int parse_strvals(yasm_parser_gas *parser_gas, yasm_datavalhead *dvs);
static yasm_effaddr *parse_memaddr(yasm_parser_gas *parser_gas);
static yasm_insn_operand *parse_operand(yasm_parser_gas *parser_gas);
static yasm_expr *parse_expr(yasm_parser_gas *parser_gas);
static yasm_expr *parse_expr0(yasm_parser_gas *parser_gas);
static yasm_expr *parse_expr1(yasm_parser_gas *parser_gas);
static yasm_expr *parse_expr2(yasm_parser_gas *parser_gas);
static void define_label(yasm_parser_gas *parser_gas, char *name, int local);
static void define_lcomm(yasm_parser_gas *parser_gas, char *name,
yasm_expr *size, yasm_expr *align);
static yasm_section *gas_get_section
(yasm_parser_gas *parser_gas, char *name, char *flags, char *type, yasm_valparamhead *objext_valparams,
int builtin);
static void gas_switch_section
(yasm_parser_gas *parser_gas, const char *name, char *flags, char *type, yasm_valparamhead *objext_valparams, int builtin);
static yasm_bytecode *gas_parser_align
(yasm_parser_gas *parser_gas, yasm_section *sect, yasm_expr *boundval, yasm_expr *fillval, yasm_expr *maxskipval,
int power2);
static yasm_bytecode *gas_parser_dir_fill
(yasm_parser_gas *parser_gas, yasm_expr *repeat, yasm_expr *size, yasm_expr *value);
#define is_eol_tok(tok) ((tok) == '\n' || (tok) == ';' || (tok) == 0)
#define is_eol()        is_eol_tok(curtok)
#define get_next_token()    (curtok = gas_parser_lex(&curval, parser_gas))
static void
get_peek_token(yasm_parser_gas *parser_gas)
static void
destroy_curtok_(yasm_parser_gas *parser_gas)
#define destroy_curtok()    destroy_curtok_(parser_gas)
static void
demand_eol_(yasm_parser_gas *parser_gas)
#define demand_eol() demand_eol_(parser_gas)
static int
expect_(yasm_parser_gas *parser_gas, int token)
#define expect(token) expect_(parser_gas, token)
static yasm_bytecode *
parse_line(yasm_parser_gas *parser_gas)
static void
cpp_line_marker(yasm_parser_gas *parser_gas)
static void
nasm_line_marker(yasm_parser_gas *parser_gas)
static yasm_bytecode *
dir_line(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_align(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_org(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_local(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_comm(yasm_parser_gas *parser_gas, unsigned int is_lcomm)
static yasm_bytecode *
dir_ascii(yasm_parser_gas *parser_gas, unsigned int withzero)
static yasm_bytecode *
dir_data(yasm_parser_gas *parser_gas, unsigned int size)
static yasm_bytecode *
dir_leb128(yasm_parser_gas *parser_gas, unsigned int sign)
static yasm_bytecode *
dir_zero(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_skip(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_fill(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_bss_section(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_data_section(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_text_section(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_section(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_equ(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_file(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_intel_syntax(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
dir_att_syntax(yasm_parser_gas *parser_gas, unsigned int param)
static yasm_bytecode *
parse_instr(yasm_parser_gas *parser_gas)
static int
parse_dirvals(yasm_parser_gas *parser_gas, yasm_valparamhead *vps)
static int
parse_datavals(yasm_parser_gas *parser_gas, yasm_datavalhead *dvs)
static int
parse_strvals(yasm_parser_gas *parser_gas, yasm_datavalhead *dvs)
static yasm_effaddr *
parse_memaddr(yasm_parser_gas *parser_gas)
static yasm_insn_operand *
parse_operand(yasm_parser_gas *parser_gas)
static yasm_expr *
parse_expr(yasm_parser_gas *parser_gas)
static yasm_expr *
parse_expr0(yasm_parser_gas *parser_gas)
static yasm_expr *
parse_expr1(yasm_parser_gas *parser_gas)
static yasm_expr *
parse_expr2(yasm_parser_gas *parser_gas)
static void
define_label(yasm_parser_gas *parser_gas, char *name, int local)
static void
define_lcomm(yasm_parser_gas *parser_gas, char *name,
yasm_expr *size, yasm_expr *align)
static yasm_section *
gas_get_section(yasm_parser_gas *parser_gas, char *name, char *flags, char *type, yasm_valparamhead *objext_valparams,
int builtin)
static void
gas_switch_section(yasm_parser_gas *parser_gas, const char *name, char *flags, char *type, yasm_valparamhead *objext_valparams,
int builtin)
static yasm_bytecode *
gas_parser_align(yasm_parser_gas *parser_gas, yasm_section *sect,
yasm_expr *boundval, yasm_expr *fillval, yasm_expr *maxskipval, int power2)
static yasm_bytecode *
gas_parser_dir_fill(yasm_parser_gas *parser_gas, yasm_expr *repeat, yasm_expr *size, yasm_expr *value)
static dir_lookup dirs_static[] = ;
static void
no_delete(void *data)
void
gas_parser_parse(yasm_parser_gas *parser_gas)
