*gas_intel_syntax_parse_instr;
SET_FIELDS \
(to)->object = (from)->object; \
(to)->locallabel_base = (from)->locallabel_base; \
(to)->locallabel_base_len = (from)->locallabel_base_len; \
(to)->preproc = (from)->preproc; \
(to)->errwarns = (from)->errwarns; \
(to)->linemap = (from)->linemap; \
(to)->prev_bc = (from)->prev_bc;
*parse_instr_intel
