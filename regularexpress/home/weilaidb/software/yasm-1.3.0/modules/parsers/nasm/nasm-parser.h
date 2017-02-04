#define YASM_NASM_PARSER_H
#define YYCTYPE         unsigned char
#define MAX_SAVED_LINE_LEN  80
enum tokentype ;
enum nasm_parser_state ;
#define YYSTYPE nasm_yystype
#define p_object        (parser_nasm->object)
#define p_symtab        (parser_nasm->object->symtab)
#define cursect         (parser_nasm->object->cur_section)
#define curtok          (parser_nasm->token)
#define curval          (parser_nasm->tokval)
#define INTNUM_val              (curval.intn)
#define FLTNUM_val              (curval.flt)
#define DIRECTIVE_NAME_val      (curval.str_val)
#define FILENAME_val            (curval.str_val)
#define STRING_val              (curval.str)
#define SIZE_OVERRIDE_val       (curval.int_info)
#define DECLARE_DATA_val        (curval.int_info)
#define RESERVE_SPACE_val       (curval.int_info)
#define INSN_val                (curval.bc)
#define PREFIX_val              (curval.arch_data)
#define REG_val                 (curval.arch_data)
#define REGGROUP_val            (curval.arch_data)
#define SEGREG_val              (curval.arch_data)
#define TARGETMOD_val           (curval.arch_data)
#define ID_val                  (curval.str_val)
#define cur_line        (yasm_linemap_get_current(parser_nasm->linemap))
p_expr_new_tree  yasm_expr_create_tree(l,o,r,cur_line)
p_expr_new_branch  yasm_expr_create_branch(o,r,cur_line)
p_expr_new_ident     yasm_expr_create_ident(r,cur_line)
nasm_parser_parse;
nasm_parser_cleanup;
nasm_parser_lex;
