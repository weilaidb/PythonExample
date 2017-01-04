extern yasm_bytecode *gas_intel_syntax_parse_instr(yasm_parser_nasm *parser_nasm, unsigned char *instr);
#define SET_FIELDS(to, from) \
(to)->object = (from)->object; \
(to)->locallabel_base = (from)->locallabel_base; \
(to)->locallabel_base_len = (from)->locallabel_base_len; \
(to)->preproc = (from)->preproc; \
(to)->errwarns = (from)->errwarns; \
(to)->linemap = (from)->linemap; \
(to)->prev_bc = (from)->prev_bc;
yasm_bytecode *parse_instr_intel(yasm_parser_gas *parser_gas)
