typedef struct dir_lookup  dir_lookup;
cpp_line_marker;
nasm_line_marker;
*parse_instr;
parse_dirvals;
parse_datavals;
parse_strvals;
*parse_memaddr;
*parse_operand;
*parse_expr;
*parse_expr0;
*parse_expr1;
*parse_expr2;
define_label;
define_lcomm;
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
is_eol_tok ((tok) == '\n' || (tok) == ';' || (tok) == 0)
is_eol        is_eol_tok(curtok)
get_next_token    (curtok = gas_parser_lex(&curval, parser_gas))
get_peek_token
destroy_curtok_
destroy_curtok    destroy_curtok_(parser_gas)
demand_eol_
demand_eol demand_eol_(parser_gas)
expect_
expect expect_(parser_gas, token)
parse_line
cpp_line_marker
nasm_line_marker
dir_line
dir_align
dir_org
dir_local
dir_comm
dir_ascii
dir_data
dir_leb128
dir_zero
dir_skip
dir_fill
dir_bss_section
dir_data_section
dir_text_section
dir_section
dir_equ
dir_file
dir_intel_syntax
dir_att_syntax
parse_instr
parse_dirvals
parse_datavals
parse_strvals
parse_memaddr
parse_operand
parse_expr
parse_expr0
parse_expr1
parse_expr2
define_label
define_lcomm
gas_get_section
gas_switch_section
gas_parser_align
gas_parser_dir_fill
static dir_lookup dirs_static[] = ;
no_delete
gas_parser_parse
